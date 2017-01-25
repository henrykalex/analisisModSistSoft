//
//  main.cpp
//  Prototype
//
//  Created by Henry on 18/01/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include <iostream>
#include "Base.hpp"
#include "ProtoTemplate.h"

int main(int argc, const char * argv[]) {
    Base* a = new SubClass();
    a->value = 5;
    a->secondValue = new int(100);
    
    SubClass b = a->clone();
    b.value = 10;
    b.secondValue = new int(200);
    
    cout <<"a: " << *a->secondValue << endl;
    cout <<"b: " << *b.secondValue << endl;
    
    
    //Prototype template
    Villano v;
    Princesa p;
    Principe pri;
    
    Personaje* pe = v.clonar();
    pe->correr();
    
    return 1;
}
