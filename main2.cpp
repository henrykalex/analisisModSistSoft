//
//  main.cpp
//  FactoryMethod
//
//  Created by Henry on 18/01/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include <iostream>
#include "FactoryMethod.hpp"

int main(int argc, const char * argv[]) {

    std::cout << "Hello, World!\n";
    
    //el creador no está encapsulado
    FactoryMethod* cliente = new ConcreteFactoryOO();
    
    //la creación del producto sí está encapsulado
    Product* miProducto = cliente->createProduct(1);
    
    return 0;
}
