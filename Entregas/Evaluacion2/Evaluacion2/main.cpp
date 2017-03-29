//
//  main.cpp
//  Evaluacion2
//
//  Created by Enrique Mondragon on 29/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#include <iostream>
#include "Document.hpp"
#include "DocPDF.hpp"
#include "DocPostscript.hpp"
#include "Printer.hpp"
#include "PrintLaser.hpp"
#include "PrintInyeccion.hpp"

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, World!\n";
    DocPDF* docP = Document<DocPDF>::getInstance();
    DocPostscript * docS = Document<DocPostscript>::getInstance();
    //doc->printTipo();
    PrintLaser * printerL = Printer<PrintLaser>::getInstance();
    PrintInyeccion * printerI = Printer<PrintInyeccion>::getInstance();
    //printer->printTipo();
    //doc->sendToPrinter(printer);
    //printer->printDocument(doc);
    docP->sendToPrinter(printerL);
    std::cout<<std::endl;
    std::cout<<std::endl;
    docP->sendToPrinter(printerI);
    std::cout<<std::endl;
    std::cout<<std::endl;
    docS->sendToPrinter(printerL);
    std::cout<<std::endl;
    std::cout<<std::endl;
    docS->sendToPrinter(printerI);
    std::cout<<std::endl;
    
    docS->printTipo();
    
    return 0;
}
