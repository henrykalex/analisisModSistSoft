//
//  Product.hpp
//  FactoryMethod
//
//  Created by Henry on 18/01/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#ifndef Product_hpp
#define Product_hpp

#include <stdio.h>
#include <iostream>

class Product{
public:
    virtual void operacion1() = 0;
    virtual void operacion2() = 0;
    
    template<class T>
    static Product * factoryMethod(){
        T* t = new T;
        t->operacion1();
        t->operacion2();
        return t;
    }
    
};

class Prod1 : public Product{
public:
    void operacion1(){
        std::cout << "Estoy en operacion 1 Prod 1\n";
    }
    void operacion2(){
        std::cout << "Estoy en operacion 2 Prod 1\n";
    }
};

class Prod2 : public Product{
public:
    void operacion1(){
        std::cout << "Estoy en operacion 1 Prod 2\n";
    }
    void operacion2(){
        std::cout << "Estoy en operacion 2 Prod 2\n";
    }
};
#endif /* Product_hpp */
