//
//  Aggregate.h
//  iteratorPattern
//
//  Created by Henry on 22/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#ifndef Aggregate_h
#define Aggregate_h

#include "Iterator.h"

template<class T>
class Aggregate{
protected:
    T * list;
    int size;
    int numElems;
    
public:
    friend Iterator<T>;
    Aggregate(int size = 10):size(size){numElems = 0; list = new T[size];}
    void add(T value);
    Iterator<T>* createIterator();
};

template <class T>
void Aggregate<T>::add(T value)
{
    if(numElems<size)
    {
        list[numElems++] = value;
    }
}

template<class T>
Iterator<T>* Aggregate<T>::createIterator()
{
    return new Iterator<T>(*this);
}


#endif /* Aggregate_h */
