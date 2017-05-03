//
//  Spacecraft.hpp
//  EvaluacionFinal
//
//  Created by Enrique Mondragon on 03/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Spacecraft_hpp
#define Spacecraft_hpp

#include <iostream>
#include "Planet.hpp"
#include "Asteroid.hpp"

class Spacecraft{
protected:
    std::string name = "";
public:
    Spacecraft(){
        std::cout << "Spacecraft constructor" << "\n";
        name = "Spacecraft";
    }
    std::string getName(){return name;}
    
    template<class T>
    void acept(T * v){
        v->visit(this);
        this->visit(v);
    }
    virtual void visit(Planet * a) = 0;
    virtual void visit(Spacecraft * a) = 0;
    virtual void visit(Asteroid * a) = 0;
};

#endif /* Spacecraft_hpp */
