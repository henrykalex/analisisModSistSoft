//
//  FactoryMethod.hpp
//  FactoryMethod
//
//  Created by Henry on 18/01/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#ifndef FactoryMethod_hpp
#define FactoryMethod_hpp

#include <stdio.h>
#include "Product.hpp"

class FactoryMethod{
public:
    virtual Product * factoryMethod(int) = 0;
    Product * createProduct(int type){
        Product* myProduct = factoryMethod(type);
        myProduct->operacion1();
        myProduct->operacion2();
        return myProduct;
    }
};

class ConcreteFactoryOO : public FactoryMethod{
    Product* factoryMethod(int tipo)
    {
        if(tipo==1)
            return new Producto1;
        else
            return new Producto2;
    }
};

class ConditionalFactoryMethod: public FactoryMethod{
    
};
#endif /* FactoryMethod_hpp */
