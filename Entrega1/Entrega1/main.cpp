//
//  main.cpp
//  Entrega1
//
//  Created by Henry on 31/01/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include <iostream>
#include "PrototypeTemplates.cpp"

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    
    /*Villano v;
    Princesa p;
    Principe pri;
    
    Personaje* pe = v.clonar();
    pe->correr();*/
    
    Principe* principe1 = Personaje::factoryMethod<Principe>();
    principe1->correr();
    Princesa* princesa1 = Personaje::factoryMethod<Princesa>();
    princesa1->correr();
    return 0;
}
