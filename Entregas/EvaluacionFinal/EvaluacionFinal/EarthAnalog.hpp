//
//  EarthAnalog.hpp
//  EvaluacionFinal
//
//  Created by Enrique Mondragon on 03/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef EarthAnalog_hpp
#define EarthAnalog_hpp

#include <iostream>
class EarthAnalog : public Planet{
public:
    EarthAnalog(){
        std::cout << "EarthAnalog constructor" << "\n";
        name = "EarthAnalog";
    }
    void visit(Planet * a){
        std::cout <<"("<<name<< ")Colisionando con: "<< a->getName() << "\n";
    }
    void visit(Spacecraft * a){
        std::cout <<"("<<name<< ")Colisionando con: "<< a->getName() << "\n";
    }
    void visit(Asteroid * a){
        std::cout <<"("<<name<< ")Colisionando con: "<< a->getName() << "\n";
    }
};

#endif /* EarthAnalog_hpp */
