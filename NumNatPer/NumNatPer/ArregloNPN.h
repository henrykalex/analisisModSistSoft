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

class ArregloNPN;
class Proxy{
    ArregloNPN &arr;
    int idx;
public:
    Proxy(ArregloNPN& arr, int idx) : arr(arr), idx(idx){}
    Proxy& operator = (int value);
    friend std::ostream & operator << (std::ostream & stream, const Proxy && p);
    bool isNNP(int n){
        int sum = 1;
        if(n < 6){
            return false;
        }
        for (int i = 2; i <= n/2;i++){
            if(n % i == 0){
                sum += i;
            }
        }
        return sum == n;
    }
    
};

class ArregloNPN{
private:
    Dato * arreglo;
    int size;
public:
    friend class Proxy;
    ArregloNPN(int n):size(n){
        arreglo = new Dato[size+1];
        std::cout<<"Contruyendo\n";
    }
    
    /*Dato & operator [] (int x) {
        if(x< 0 || x >= size){
            std::cout<< "Error\n";
            return arreglo[size];
        }else{
            return arreglo[x];
        }
    }*/
    
    Proxy operator [] (int x) {
        if(x< 0 || x >= size){
            std::cout << "Error: No hay índices negativos" << std::endl;
            return Proxy(*this, size);
        }else{
            return Proxy(*this, x);
        }
    }
    
    friend std::ostream & operator << (std::ostream & stream, const Proxy && p);
};

Proxy & Proxy::operator = (int value)
{
    if(isNNP(value)) //natural perfecto
    {
        arr.arreglo[idx] = value;
    }
    else
    {
        std::cout << "Eror no es natural perfecto" << std::endl;
    }
    return *this;
}

std::ostream & operator << (std::ostream & stream, const Proxy && p){
    if(p.idx>= 0 && p.idx < p.arr.size){
        stream << p.arr.arreglo[p.idx];
    }
    return stream;
}




#endif /* ArregloNPN_h */
