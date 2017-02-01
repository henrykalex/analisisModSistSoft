//
//  ArregloNPN.h
//  NumNatPer
//
//  Created by Henry on 01/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#ifndef ArregloNPN_h
#define ArregloNPN_h

#include "Dato.h"

class ArregloNPN{
private:
    Dato * arreglo;
    int size;
public:
    ArregloNPN(int n){size = n;arreglo = new Dato[n];std::cout<<"Contruyendo\n";}
    
    Dato & operator [] (int x) {
        if(x>= 0 && x < size){
            return arreglo[x];
        }else{
            return arreglo[0];
        }
    }
};




#endif /* ArregloNPN_h */
