//
//  Iterator.h
//  iteratorPattern
//
//  Created by Henry on 22/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#ifndef Iterator_h
#define Iterator_h

template<class T>
class Aggregate;

template <class T>
class Iterator {
protected:
    Aggregate<T>& container;//No queremos una copia
    int idx;
public:
    Iterator(Aggregate<T> & container):container(container),idx(0){}
    T first();
    T next();
    bool isDone();
    T currentItem();
};

template <class T>
T Iterator<T>::first(){
    if(container.numElems>0){
        idx = 0;
        return container.list[0];
    }else{
        return NULL;
    }
}

template <class T>
T Iterator<T>::next(){
    if(idx <= container.numElems){
        return container.list[++idx];
    }else{
        return container.list[idx];//O excepccion
    }
    
}

template <class T>
bool Iterator<T>::isDone(){
    return (container.numElems == idx+1);
}

template <class T>
T Iterator<T>::currentItem(){
    if(container.numElems > 0){
        return container.list[idx];
    }else{
        return NULL;
    }
}

#include "Aggregate.h"
#endif /* Iterator_h */
