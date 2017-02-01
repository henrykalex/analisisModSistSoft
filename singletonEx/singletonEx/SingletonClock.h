//
//  SingletonClock.h
//  singletonEx
//
//  Created by Henry on 11/01/17.
//  Copyright © 2017 Henryk. All rights reserved.
//
#include <iostream>
#include <ctime>
#ifndef SingletonClock_h
#define SingletonClock_h

class SingletonClock{
private:
    SingletonClock(){scInstance = this;std::cout<<"Constructor SC\n";}
    static SingletonClock* scInstance;
public:
    static SingletonClock* Instance();
    std::string getTime();
};

#endif /* SingletonClock_h */
