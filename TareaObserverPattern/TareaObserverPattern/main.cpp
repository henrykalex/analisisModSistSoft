//
//  main.cpp
//  TareaObserverPattern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#include <iostream>
#include "Presidente.hpp"
#include "Noticiero.hpp"

int main(int argc, const char * argv[]) {
    Presidente * EnriquePeña = new Presidente("Enrique Peña","Mexico");
    Presidente * DonaldTrump = new Presidente("Donald Trump","EUA");
    
    Noticiero * Reforma = new Noticiero("Reforma News");
    Noticiero * Televisa = new Noticiero("Telvisa News");
    Noticiero * NBC = new Noticiero("NBC News");
    
    EnriquePeña->Agregar(Reforma);
    EnriquePeña->Agregar(Televisa);
    EnriquePeña->Agregar(NBC);
    
    DonaldTrump->Agregar(Reforma);
    DonaldTrump->Agregar(Televisa);
    DonaldTrump->Agregar(NBC);
    
    EnriquePeña->MensajeDePrensa("Me voy a paris");
    
    DonaldTrump->MensajeDePrensa("I'm going to build the wall.");
    
    
    delete EnriquePeña;
    delete DonaldTrump;
    return 0;
}
