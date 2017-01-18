//
//  SingletonClock.cpp
//  singletonEx
//
//  Created by Henry on 11/01/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include "SingletonClock.h"

SingletonClock* SingletonClock::scInstance = NULL;

SingletonClock* SingletonClock::Instance()
{
    /*if (!scInstance){
        scInstance = new SingletonClock;
    }
    return scInstance;*/
    
    static SingletonClock instance;
    return &instance;
}


std::string SingletonClock::getTime(){
    time_t systime;
    struct tm * lTime;
    char timeS[80];
    time (&systime);
    lTime = localtime(&systime);
    strftime(timeS,80,"%I:%M:%S %p",lTime);
    std::string str(timeS);
    
    return str;
}
