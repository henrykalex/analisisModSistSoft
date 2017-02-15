//
//  Hijo.h
//  PruebasInerencia
//
//  Created by Henry on 13/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#ifndef Hijo_h
#define Hijo_h
#include "Papa.h"

class Hijo: public Papa{
private:
    float tam;
public:
    Hijo(float t): Papa(t+3), tam(t){};
    float muestraTam(){return tam;}
};

#endif /* Hijo_h */
