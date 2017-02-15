//
//  Papa.h
//  PruebasInerencia
//
//  Created by Henry on 13/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#ifndef Papa_h
#define Papa_h

class Papa{
private:
    int num;
public:
    Papa(int n):num(n){}
    static void facM(){};
    int muestraNum(){return num;}
};

#endif /* Papa_h */
