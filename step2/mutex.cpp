#include <mutex>
#include "cable.cpp"

void lock(Cable &c){
  c.setIsLocked(true);
  std::cout<<"🔒Locking🔒cable🔒. Imagine this is happening because of another thread. Please..."<<std::endl;
}
void unlock(Cable &c){
  c.setIsLocked(false);
  std::cout<<"🔓Unocking🔓cable🔓. Imagine this is done by the same other thread. Pretty please..."<<std::endl;
}

class CableLock {
    private: 
        Cable &lockPtr;  

    public: 
    CableLock(Cable &ptr) 
    : lockPtr(ptr) //constructor sets the contained object to lock and locks the object
    { 
        lock(lockPtr); 
    } 

    ~CableLock() { //destructor unlocks the object
        unlock(lockPtr); 
    } 
};
