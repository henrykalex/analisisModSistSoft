//
//  main.cpp
//  FactoryMethodProduct
//
//  Created by Henry on 18/01/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include <iostream>
#include "Product.hpp"

int main(int argc, const char * argv[]) {
    Product* miProducto1 = Product::factoryMethod<Prod1>();
    
    Product* miProducto2 = Product::factoryMethod<Prod2>();
    
    Product* miProducto11 = Product::factoryMethod<Prod1>();
    
    Product* miProducto21 = Product::factoryMethod<Prod2>();
    
    Product* miProducto12 = Product::factoryMethod<Prod1>();
    
    Product* miProducto22 = Product::factoryMethod<Prod2>();
    std::cout<< miProducto1<<"\n";
    std::cout<< miProducto2<<"\n";
    std::cout<< miProducto11<<"\n";
    std::cout<< miProducto21<<"\n";
    std::cout<< miProducto12<<"\n";
    std::cout<< miProducto22<<"\n";
    
    miProducto1->operacion1();
    
    Prod1 miprodUnohack;
    miprodUnohack.operacion2();
    //Product* prod11 = Product::factoryMethod<Prod1>();
    return 0;
}
