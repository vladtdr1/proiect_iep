#include "cableBunch.cpp"
// #include "mutex.cpp"
#include <iostream>
#include <memory>

Cable* createCable(){
    return (new Cable("type","desc",nullptr,nullptr));
}


int main()
{
    //FIRST STEP

    ValueAndUnitPair length1(5.3,"inch");
    ValueAndUnitPair price1(5.3,"USD");
    
    Cable cable1("usb-usb","red",&length1,&price1);
    
    cable1.getType();
    cable1.getDescription();
    cable1.getPrice();
    cable1.getLength();
    
    Cable cable2 = cable1; //copy constructor
    
    ValueAndUnitPair length2(52.33,"feet");
    ValueAndUnitPair price2(53.23,"USD");
    Cable cable3("hdmi-aux","blue",&length2,&price2);
    //cable3 = cable2 //would result in a error because of deleted method
    
    //SECOND STEP

    // ValueAndUnitPair length3(1,"unit");
    // ValueAndUnitPair price3(1,"unit");
    // CableBunch bunch( "Thunderbolt", "marvelous" , &length3, &price3, 5);
    
    // ValueAndUnitPair length4(2,"unit");
    // ValueAndUnitPair price4(2,"unit");
    // CableBunch bunch2( "Lightning", "Ok" , &length4, &price4, 23);
    
    // CableBunch bunch3 = bunch2;
    
    // 

    // //ITEM 10 return &this -- Conga music intensifies
    // bunch = bunch2 = bunch3; //echivalent cu <<bunch2 = bunch3; bunch = bunch3;>>. Daca comportamentul nu era definit in cod, era echivalent cu <<bunch2 = bunch3; bunch = ?undefined?>>

    // //ITEM 11 self assign  -- You're just playing yourself, foo! 
    // bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch = bunch;
    
    // //ITEM 12 copy all     -- Give them a finger and they should take the whole hand 🙌
    // //even though at item 10 we used the copy assignment operator from CableBunch, it also used the copy assignment operator from Cable. Otherwise the type/desc/price/length would not be modified
    // bunch.getLength();// will print out "...2 unit..."



    // //THIRD STEP
    
    // //ITEM 13 smart pointers
    // std::unique_ptr<Cable> uniqueCable(createCable()); 
    // uniqueCable->getType();
    // std::unique_ptr<Cable> uniqueCable2 = move(uniqueCable);
    // // uniqueCable->getType(); SEG FAULT cause object was moved 
    // uniqueCable2->getType();

    // std::shared_ptr<Cable> sharedCable(createCable());
    // std::cout<<"shared cable was CREATED"<<std::endl;
    // std::cout<<sharedCable.use_count()<<std::endl;
    // std::shared_ptr<Cable> sharedCable2(sharedCable);
    // std::cout<<"shared cable was COPIED"<<std::endl;
    // std::cout<<sharedCable.use_count()<<std::endl;

    // std::shared_ptr<Cable> sharedCable3 = move(sharedCable);
    // std::cout<<"shared cable was MOVED"<<std::endl;
    // // std::cout<<sharedCable.use_count()<<std::endl; would run into seg fault
    // std::cout<<sharedCable3.use_count()<<std::endl; 

    // //ITEM 14 🔒🔓🔒🔓🔒 -- requires  " #include "cableBunch.cpp" " to be commented so that Cable class is not redefined
    // // ValueAndUnitPair length1(5.3,"inch");
    // // ValueAndUnitPair price1(5.3,"USD");
    // // Cable cableToLock("usb-usb","red",&length1,&price1);
    // // CableLock *cableLock = new CableLock(cableToLock);
    // // cableToLock.askResource();
    // // delete cableLock;
    // // cableToLock.askResource();






}