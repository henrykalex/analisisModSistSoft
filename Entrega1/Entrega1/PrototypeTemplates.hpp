#include <iostream>
using namespace std;

class Personaje
{
protected:
    Personaje(){std::cout<<"Constructor SC\n";}
    template<class stT>
    static stT* scInstance;
public:
    virtual void correr() = 0;
    virtual Personaje* clonar() = 0;
    
    
    template<class stT>
    static stT* Instance(){
        if (!Personaje::scInstance<stT>){
            stT inst;
            Personaje::scInstance<stT> = &inst;
        }
        return Personaje::scInstance<stT>;
    }
    template<class T>
    static T * factoryMethod(){
        T* t = Personaje::Instance<T>();
        return t;
    }
    
};

template<class stT>
stT* Personaje::scInstance = NULL;

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
/*
int main()
{
    Villano v;
    Princesa p;
    Principe pri;
    
    Personaje* pe = v.clonar();
    pe->correr();
    
    return 1;
}*/
