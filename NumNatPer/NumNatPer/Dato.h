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
    Dato();
    bool isNNP(int n){
        for (int i = 0; i <= n/2;i++){
            if((n % i) = 0){
                
            }
        }
     }
    
    void operator = (int data){
        if(isNNP(data)){
            dato = data;
        }
    }
};

#endif /* Dato_h */
