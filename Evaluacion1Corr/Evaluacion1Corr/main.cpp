//
//  main.cpp
//  Evaluacion1Corr
//
//  Created by Henry on 13/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include <iostream>
#include "Videojuego.hpp"
#include "Almacen.hpp"

void menu(){
    char res, tempC = ' ';
    int numero, tempI = 0;
    
    std::string tipo, nombre, rating, subtipo, tempS = "";
    float costo = 0.0f;
    
    Almacen * alma = nullptr;
    
    
    while(res != 's'){
        std::cout << "\n----------------------------------\n";
        std::cout << "\n== Almacen de Videojuegos ==\n";
        std::cout << "\tc. Crea y establece tamaño del almacen\n";
        std::cout << "\ta. Agregar videojuego\n";
        std::cout << "\te. Eliminar videojuego\n";
        std::cout << "\td. Deshacer eliminar videojuego\n";
        std::cout << "\to. Ordenar inventario\n";
        std::cout << "\tb. Buscar info de videojuego\n";
        std::cout << "\tn. Numero de videojuegos\n";
        std::cout << "\ti. Imprimir inventario\n";
        std::cout << "\ts. Salir\n";
        std::cout << "Enter your selection: ";
        std::cin >> res;
        system("clear");
        std::cout << "\n----------------------------------\n";
        switch (res)
        {
            case 'c':
                std::cout << "\tTamaño: ";
                std::cin >> tempI;
                alma = Almacen::getInstance(tempI);
                break;
            case 'a':
                if(!alma){
                    std::cout << "\t\nERROR! No hay inventario\n";
                    break;
                }
                std::cout << "\tNumero de serie: ";
                std::cin >> numero;
                std::cout << "\tNombre: ";
                std::cin >> nombre;
                std::cout << "\tTipo(Estrategia, Aventura, Aprendizaje): ";
                std::cin >> tipo;
                std::cout << "\tSubtipo: ";
                std::cin >> subtipo;
                std::cout << "\tRating: ";
                std::cin >> rating;
                std::cout << "\tCosto: ";
                std::cin >> costo;
                std::cout << "\n----------------------------------\n";
                alma->agregaVideojuego(tipo, nombre, numero, rating, costo, subtipo);
                break;
            case 'e':
                if(!alma){
                    std::cout << "\t\nERROR! No hay inventario\n";
                    break;
                }
                tempC = 'a';
                while (tempC != 'X') {
                    std::cout << "\n\t(n) Nombre\n\t(s) Numero de serie\nEliminar por: ";
                    std::cin >> tempC;
                    if(tempC == 'n'){
                        std::cout << "\nNombre: ";
                        std::cin >> tempS;
                        alma->eliminaVideojuego(tempS);
                        tempC = 'X';
                    }else{
                        if(tempC == 's'){
                            std::cout << "\nNumero: ";
                            std::cin >> tempI;
                            alma->eliminaVideojuego(tempI);
                            tempC = 'X';
                        }else{
                            std::cout << "\nSelecciona otra ves la opcion\n";
                        }
                    }
                }
                break;
            case 'd':
                if(!alma){
                    std::cout << "\t\nERROR! No hay inventario\n";
                    break;
                }
                std::cout << "\nDeshaciendo!\n";
                alma->desHacer();
                break;
            case 'o':
                if(!alma){
                    std::cout << "\t\nERROR! No hay inventario\n";
                    break;
                }
                tempC = 'a';
                while (tempC != 'X') {
                    std::cout << "\n\t(a) Ascendente\n\t(d) Descendente\nOrdenar: ";
                    std::cin >> tempC;
                    if(tempC == 'a'){
                        alma->ordenaAsc();
                        tempC = 'X';
                    }else{
                        if(tempC == 'd'){
                            alma->ordenaDesc();
                            tempC = 'X';
                        }else{
                            std::cout << "\nSelecciona otra ves la opcion\n";
                        }
                    }
                }
                break;
            case 'b':
                if(!alma){
                    std::cout << "\t\nERROR! No hay inventario\n";
                    break;
                }
                tempC = 'a';
                while (tempC != 'X') {
                    std::cout << "\n\t(n) Nombre\n\t(s)Numero de serie\nBuscar por: ";
                    std::cin >> tempC;
                    if(tempC == 'n'){
                        std::cout << "\nNombre: ";
                        std::cin >> tempS;
                        alma->buscarVideojuego(tempS);
                        tempC = 'X';
                    }else{
                        if(tempC == 's'){
                            std::cout << "\nNumero: ";
                            std::cin >> tempI;
                            alma->buscarVideojuego(tempI);
                            tempC = 'X';
                        }else{
                            std::cout << "\nSelecciona otra ves la opcion\n";
                        }
                    }
                }
                break;
            case 'n':
                if(!alma){
                    std::cout << "\t\nERROR! No hay inventario\n";
                    break;
                }
                std::cout << "\nTotal de videojuegos en el inventario: "<<alma->totalVideojuegos()<<"\n";
                break;
            case 'i':
                if(!alma){
                    std::cout << "\t\nERROR! No hay inventario\n";
                    break;
                }
                alma->imprimeTodo();
                break;
            case 's':
                std::cout << "Adios\n";
                break;
            default:
                std::cout << "Opcion invalida ...\n";
                break;
        }
        
    }
}

int main(int argc, const char * argv[]) {
    menu();
    return 0;
    //Videojuego* vid1 = Videojuego::factoryMethod<Estrategia>("Lucha","lol",56,"M",55.99);
    //Videojuego* vidC = vid1->clonar();
    //vidC->concepcion();
    //std::cout<<vid1->getNumSerie()<<"\n";
    //std::cout<<vidC->getNumSerie()<<"\n"<<"\n";
    
    Almacen * alma = Almacen::getInstance(2);
    //alma->setTamMax(2);
    alma->ordenaDesc();
    alma->buscarVideojuego("No se");
    alma->agregaVideojuego("Aventuras", "No se", 765, "E", 57.99f , "Plataforma");
    alma->agregaVideojuego("Estrategia", "Dos", 784, "M", 83.66f, "Plataforma");
    alma->agregaVideojuego("Aprendizaje", "Tres", 782, "M", 85.66f, "Plataforma");
    alma->agregaVideojuego("Aventuras", "Cuatro", 780, "M", 81.66f, "Plataforma");
    alma->imprimeTodo();
    
    if(alma->buscarVideojuego("No se")){
        std::cout << "Positivo\n";
    }
    
    if(alma->buscarVideojuego(784)){
        std::cout << "Positivo\n";
    }
    
    std::cout << alma->totalVideojuegos()<<"\n";
    
    alma->eliminaVideojuego("No se");
    
    alma->imprimeTodo();
    
    alma->imprimeHist();
    
    alma->eliminaVideojuego("Dos");
    alma->eliminaVideojuego("Tres");
    
    alma->imprimeTodo();
    
    alma->imprimeHist();
    alma->eliminaVideojuego("Cuatro");
    alma->imprimeTodo();
    
    alma->imprimeHist();
    
    alma->desHacer();
    
    alma->imprimeTodo();
    
    alma->imprimeHist();
    alma->desHacer();
    alma->desHacer();
    alma->desHacer();
    alma->imprimeTodo();
    alma->ordenaAsc();
    alma->ordenaDesc();
    
    
    return 0;
}
