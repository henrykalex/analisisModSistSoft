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
    return 0;
}
