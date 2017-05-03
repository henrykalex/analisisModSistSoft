//
//  Planet.hpp
//  EvaluacionFinal
//
//  Created by Enrique Mondragon on 03/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Planet_hpp
#define Planet_hpp

#include <iostream>
class Spacecraft;
class Asteroid;
class Planet{
protected:
    std::string name = "";
public:
    Planet(){
        std::cout << "Planet constructor" << "\n";
        name = "Planet";
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

#endif /* Planet_hpp */
