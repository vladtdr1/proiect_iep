#include <iostream>
#include <string>
#include "cable.cpp"
#include <stdlib.h>
#include <time.h>

class CableBunch: public Cable{
    private:
    int cableAmount;

    public:
    CableBunch(const std::string type, const std::string description, 
    ValueAndUnitPair* length, ValueAndUnitPair* price, int cableAmount) //constuctor that uses member initialization list(initialization not assignment)
    //ITEM 12 also call Cable constructor
    :Cable(type,description,length,price),
    cableAmount(cableAmount)
    {}

    CableBunch(const CableBunch& _cables) //copy constructor
    //ITEM 12 also call Cable copy constructor
    :Cable(_cables),
    cableAmount(_cables.cableAmount)
    { 
        std::cout<<" A bundle of "<<cableAmount<<" cables was copied"<<std::endl;
    }

    //FOR STEP 1
    CableBunch& operator=(const CableBunch& _cables) = delete;


//  FOR STEP 2,3
    // CableBunch& operator=(const CableBunch& _cables){ //copy assignment operator
    //     //ITEM 10
    //     if(this == &_cables)//assignment to self was attempted
    //     {
    //         std::cout<<"Dormammu I've come to bargain!"<<std::endl;
	// 	    return *this;
    //     }
    //     //ITEM 12
    //     Cable::operator=(_cables);
    //     this->cableAmount = _cables.cableAmount;
    //     //ITEM 11
    //     return *this;
    // }

    int getCableAmount(){
        std::cout<<"bundle has "<<cableAmount<<" cables."<<std::endl;
        return this->cableAmount;
    }

    ~CableBunch(){
        std::cout<<"Cables done borked 😑😑😑"<<std::endl;
    }

};