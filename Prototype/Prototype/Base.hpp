//
//  Base.hpp
//  Prototype
//
//  Created by Henry on 18/01/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#ifndef Base_hpp
#define Base_hpp

#include <stdio.h>

#include <iostream>
using namespace std;

class SubClass;
class Base
{
public:
    int value;
    int* secondValue;
    virtual SubClass clone() = 0;
};

class SubClass : public Base
{
public:
    SubClass clone()
    {
        return *this;
    }
};

#endif /* Base_hpp */
