//
//  Object.hpp
//  FinalProject
//
//  Created by Enrique Mondragon on 02/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Object_hpp
#define Object_hpp

#include <iostream>

class Object{
public:
    int * p;
    int count;
    Object(){
        count = 0;
        std::cout << "\nConstructor!: " << count<<"\n";
        p = new int;
    }
    Object(const Object & obj):p(obj.p){
        count = obj.count;
        std::cout << "\nCopy constructor!: " << count<<"\n";
        count++;
    }
    Object * getObject(){
        Object * tpm = new Object(*this);
        return tpm;
    }
    Object & operator = (const Object & obj){
        std::cout << "\nOperator = overload!: " << count<<"\n";
        if(this == &obj)
            return *this;
        count++;
        this->p = obj.p;
        return *this;
    }
    ~Object(){
        std::cout << "\nDestructor!: " << count<<"\n";
        if(count != 0)
            return;
        std::cout << "\Deleting!: " << count<<"\n";
        delete p;
        p = nullptr;
        
    }
};

#endif /* Object_hpp */
