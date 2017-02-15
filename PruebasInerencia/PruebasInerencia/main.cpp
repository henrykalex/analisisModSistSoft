//
//  main.cpp
//  PruebasInerencia
//
//  Created by Henry on 13/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Papa.h"
#include "Hijo.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    Papa nP1(5);
    std::cout <<nP1.muestraNum()<<"\n";
    
    Hijo nH1(6.6f);
    std::cout <<nH1.muestraNum()<<"\n";
    std::cout <<nH1.muestraTam()<<"\n";
    
    std::vector<Papa*> vec;
    
    Papa::facM();
    
    vec.push_back(&nH1);
    std::cout << vec[0]->muestraNum()<<"\n";
    
    return 0;
}
