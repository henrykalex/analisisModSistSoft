//
//  IronMeteorite.hpp
//  EvaluacionFinal
//
//  Created by Enrique Mondragon on 03/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef IronMeteorite_hpp
#define IronMeteorite_hpp

#include <iostream>
class IronMeteorite : public Asteroid{
public:
    IronMeteorite(){
        std::cout << "IronMeteorite constructor" << "\n";
        name = "IronMeteorite";
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

#endif /* IronMeteorite_hpp */
