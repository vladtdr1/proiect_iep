#include <string>
#include <iostream>
class ValueAndUnitPair{
    private:
    float value;
    std::string unit;
    
    public:
    ValueAndUnitPair(float value, const std::string& unit) : value(value),unit(unit){}
    
    ValueAndUnitPair& operator=(const ValueAndUnitPair& _pair){ //copy assignment operator
        this->value=_pair.value;
        this->unit=_pair.unit;
    }
    
    ValueAndUnitPair(const ValueAndUnitPair& _pair){ //copy constructor
        this->value=_pair.value;
        this->unit=_pair.unit;
    }
    
    float getValue(){
        return this->value;
    }
    
    std::string getUnit(){
        return this->unit;   
    }
};