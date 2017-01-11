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
    if (!scInstance){
        scInstance = new SingletonClock;
    }
    return scInstance;
}


std::string SingletonClock::getTime(){
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];
    
    time (&rawtime);
    
    timeinfo = localtime(&rawtime);
    strftime(buffer,80,"%I:%M:%S %p",timeinfo);
    std::string str(buffer);
    
    return str;
}
