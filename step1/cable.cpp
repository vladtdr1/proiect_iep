#include <string>
#include "ValueAndUnitPair.cpp"
#include <stdlib.h>
#include <time.h>

class Cable{
    private:
    std::string type;
    std::string description;
    ValueAndUnitPair *length;
    ValueAndUnitPair *price;
    bool isLocked;

    public:
    Cable(const std::string& type, const std::string& description, 
    ValueAndUnitPair* length, ValueAndUnitPair* price) //constuctor that uses member initialization list(initialization not assignment)
    :type(type),
    description(description),
    length(length),
    price(price)
    {}

    Cable(const Cable& _cable){ //copy constructor
        this->type = _cable.type;
        this->description = _cable.description;
        this->length = _cable.length;
        this->price = _cable.price;
    }

    //FOR STEP 1 only
        Cable& operator=(const Cable& _cable) = delete;

    //FOR STEPS 2,3
    // Cable& operator=(const Cable& _cable){
    //     //ITEM 10
    //     if(this == &_cable)//assignment to self was attempted
    //     {
    //         std::cout<<"But... I am already me!?! 🥴😵🥴"<<std::endl;
	// 	    return *this;
    //     }
    //     this->type = _cable.type;
    //     this->description = _cable.description;
    //     this->length = _cable.length;
    //     this->price = _cable.price;
    //     //ITEM 11
    //     return *this;
    // }

    ~Cable(){
        std::cout<<"Cable  done borked 😑"<<std::endl;
    }
    
    std::string getType(){
        std::cout << "You called getType() on a cable and your eyes tell you it's a "<<type<<" cable."<<std::endl;
        return this->type;
    }
    
    std::string getDescription(){
        std::cout << "You called getDescription() on a cable and your third eye (you read the tag) tells you it's a "<<description<<" cable."<<std::endl;
        return this->description;
    }
    
    ValueAndUnitPair* getPrice(){
        std::cout << "Even though value can be intrinsec and depends on supply and demand, the price of the cable you called getPrice() on is "<<price->getValue()<<price->getUnit()<<"."<<std::endl;
        return this->price;
    }
    
    ValueAndUnitPair* getLength(){
        srand(time(NULL));
        std::cout << "By moving your foot over the cable you approximated that the cable is aproximately " 
            << rand()%7 + 3 << " feet long(whatever that means). After your terrible approximation you decided to further inspect it "  
            << "with a tape measurer and it was "
            << length->getValue()<<" "<<length->getUnit()<<" long."<<std::endl;
        return this->length;
    }
    
    void setPrice(ValueAndUnitPair* price){
        this->price = price;
    }


    void setIsLocked(bool is_locked){
      this->isLocked = is_locked;
    }

    void askResource(){
        if(this->isLocked){
            std::cout<<"Resource is locked!"<<std::endl;
        }else{
            std::cout<<"Resource can be used :)"<<std::endl;
        }
    }

};