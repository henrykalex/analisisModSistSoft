//
//  ProtoTemplate.h
//  Prototype
//
//  Created by Henry on 25/01/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#ifndef ProtoTemplate_h
#define ProtoTemplate_h

#include <iostream>
using namespace std;

class Personaje
{
public:
    virtual void correr() = 0;
    virtual Personaje* clonar() = 0;
};

template <class SubClase>
class ClonPersonaje : public Personaje
{
public:
    virtual Personaje* clonar()
    {
        return new SubClase(dynamic_cast<SubClase&>(*this));
    }
};

class Principe : public ClonPersonaje<Principe>
{
public:
    void seleccionarArma();
    void atacar();
    void correr()
    {
        cout << "El principe corre rápido" << endl;
    }
};

class Princesa : public ClonPersonaje<Princesa>
{
public:
    void gritar();
    void correr()
    {
        cout << "La princesa corre medio lento" << endl;
    }
};

class Villano : public ClonPersonaje<Villano>
{
public:
    void atacar();
    void atraparPricnesa();
    void correr()
    {
        cout << "El villano no necesita correr" << endl;
    }
};

class VillanoVolador : public ClonPersonaje<VillanoVolador>
{
public:
    void correr()
    {
        cout << "También puede volar" << endl;
    }
};


#endif /* ProtoTemplate_h */
