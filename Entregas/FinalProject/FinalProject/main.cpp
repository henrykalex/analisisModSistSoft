//
//  main.cpp
//  FinalProject
//
//  Created by Enrique Mondragon on 27/04/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#include <iostream>
#include "Object.hpp"

class Child{
public:
    int * p;
    int count;
    Child(){
        std::cout << "\nConstructor!: " << count<<"\n";
        p = new int;
        count = 0;
    }
    ~Child(){
        std::cout << "\nDwestructor!: " << count<<"\n";
        count++;
        delete p;
        p = nullptr;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    /*Child a;
    Child b = a;
    std::cout << &a<<"\n";
    std::cout << &b<<"\n\n";
    std::cout << &a<<"\n";
    std::cout << &b<<"\n\n";
    *(a.p)=5;
    std::cout << *(b.p);*/
    
    Object o;
    std::cout << "N: "<<o.count<<"\n";
    Object p = o;
    std::cout << "N: "<<p.count<<"\n";
    
    Object q;
    std::cout << "N: "<<o.count<<"\n";
    Object r ;
    std::cout << "N: "<<p.count<<"\n";
    
    r = q;
    
    
    Object * s = new Object();
    std::cout << "N: "<<s->count<<"\n";
    Object * t = s->getObject();
    std::cout << "N: "<<t->count<<"\n";
    
    delete s;
    
    
    return 0;
}
