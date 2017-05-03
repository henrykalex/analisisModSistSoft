//
//  Asteroid.hpp
//  EvaluacionFinal
//
//  Created by Enrique Mondragon on 03/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Asteroid_hpp
#define Asteroid_hpp

#include <iostream>
class Asteroid{
protected:
    std::string name = "";
public:
    Asteroid(){
        std::cout << "Asteroid constructor" << "\n";
        name = "Asteroid";
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


#endif /* Asteroid_hpp */
