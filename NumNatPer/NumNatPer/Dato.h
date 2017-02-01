//
//  Dato.h
//  NumNatPer
//
//  Created by Henry on 01/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#ifndef Dato_h
#define Dato_h

class Dato{
private:
    int dato;
public:
    /*bool isNNP(int n){
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
     }*/
    
    int & operator = (int data){
        //if(isNNP(data)){
            dato = data;
        //}
        return dato;
    }
    
    operator int(){
        return dato;
    }
    
    friend std::ostream & operator << (std::ostream & stream, const Dato & data){
        stream << "i(" << data.dato  << ")";
        return stream;
    }
};

#endif /* Dato_h */
