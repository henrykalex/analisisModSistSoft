//
//  main.cpp
//  EvaluacionFinal
//
//  Created by Enrique Mondragon on 03/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#include <iostream>
#include "GraphicsFactory.hpp"
#include "Spacecraft.hpp"
#include "Asteroid.hpp"
#include "Planet.hpp"
#include "Graphic.hpp"

#include <vector>

int main(int argc, const char * argv[]) {
    
    GraphicsFactory * LaFactoria = GraphicsFactory::Instance();
    Planet * planetD = LaFactoria->Produce<DesertPlanet>();
    Planet * planetE = LaFactoria->Produce<EarthAnalog>();
    
    Spacecraft * shipE = LaFactoria->Produce<PlanetExplorationShip>();
    Spacecraft * shipC = LaFactoria->Produce<ColonizationShip>();
    Spacecraft * shipO = LaFactoria->Produce<PlanetObservationShip>();
    
    Asteroid * asteS = LaFactoria->Produce<StonyMeteorite>();
    Asteroid * asteI = LaFactoria->Produce<IronMeteorite>();
    
    planetD->acept(planetE);
    planetD->acept(shipE);
    planetD->acept(shipC);
    planetD->acept(shipO);
    planetD->acept(asteS);
    planetD->acept(asteI);
    
    planetE->acept(planetD);
    planetE->acept(shipE);
    planetE->acept(shipC);
    planetE->acept(shipO);
    planetE->acept(asteS);
    planetE->acept(asteI);
    
    shipE->acept(planetD);
    shipE->acept(planetE);
    shipE->acept(shipC);
    shipE->acept(shipO);
    shipE->acept(asteS);
    shipE->acept(asteI);
    
    shipC->acept(planetD);
    shipC->acept(planetE);
    shipC->acept(shipE);
    shipC->acept(shipO);
    shipC->acept(asteS);
    shipC->acept(asteI);
    
    shipO->acept(planetD);
    shipO->acept(planetE);
    shipO->acept(shipE);
    shipO->acept(shipC);
    shipO->acept(asteS);
    shipO->acept(asteI);
    
    asteS->acept(planetD);
    asteS->acept(planetE);
    asteS->acept(shipE);
    asteS->acept(shipC);
    asteS->acept(shipO);
    asteS->acept(asteI);
    
    asteI->acept(planetD);
    asteI->acept(planetE);
    asteI->acept(shipE);
    asteI->acept(shipC);
    asteI->acept(shipO);
    asteI->acept(asteS);
    
    return 0;
}
