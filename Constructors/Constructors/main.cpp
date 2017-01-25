//
//  main.cpp
//  Constructors
//
//  Created by Henry on 25/01/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include <iostream>
#include <vector>

struct A{
    int x, y, z;
    
    
    
    A(): x(0), y(0),z(0){ //Default constructor, default init.
        std::cout << "Default constructor\n";
    }
    
    
    
    explicit A(int x ,int y = 0, int z = -1): x(x), y(y){ //Default constructor, default init.
        std::cout << "Params def constructor\n";
    }
    
    A(const A&){
        std::cout << "Copy constructor\n";
    }
    
    A(A&&)
    {
        std::cout << "Move constructor\n";
    }
    
    
};

A llamaCopyConst(A a)
{
    A temp(a);
    return temp;
}

int main(int argc, const char * argv[]) {
    std::cout<<"Pruebas1\n";
    A uno;
    A dos(5);
    A tres(5,4,3);
    
    std::cout<<"\n\nPruebas2\n";
    //A cuatro(tres);
    llamaCopyConst(tres);
    
    std::cout<<"\n\nPruebas3\n";
    //A cuatro(A(1,2,3));
    std::vector<A> myVect;
    myVect.push_back(A(1,2,3));
    A b;
    A a = std::move(b);
    return 0;
}
