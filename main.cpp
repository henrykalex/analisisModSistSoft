//
//  main.cpp
//  singletonEx
//
//  Created by Henry on 11/01/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include <iostream>
#include "SingletonClock.h"
int main(int argc, const char * argv[]) {
    SingletonClock * sC1 = SingletonClock::Instance();
    SingletonClock * sC2= SingletonClock::Instance();
    std::cout<<"Direccion de instancia1: "<<sC1<<std::endl;
    std::cout<<"Direccion de instancia2: "<<sC2<<std::endl;
    std::cout<<sC1->getTime()<<std::endl;
    std::cout<<sC2->getTime()<<std::endl;
}


