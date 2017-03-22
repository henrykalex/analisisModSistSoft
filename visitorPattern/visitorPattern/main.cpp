//
//  main.cpp
//  visitorPattern
//
//  Created by Enrique Mondragon on 22/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#include <iostream>
#include "Number.hpp"
#include "Visitor.hpp"
#include "AddVisitor.hpp"
#include "CountVisitor.hpp"
#include "PresentVisitor.hpp"
#include "Integer.hpp"
#include "Double.hpp"

int main(int argc, const char * argv[]) {
    
    AddVisitor a;
    CountVisitor c;
    PresentVisitor* p = PresentVisitor::getInstance();
    
    Number* n[] ={new Integer, new Double};
    
    for(int i=0; i< 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            n[j]->accept(&a);
        }
    }
    n[0]->accept(p);
    n[0]->accept(&c);
    std::cout << std::endl;
    n[1]->accept(p);
    n[1]->accept(&c);
    
    std::cout << std::endl;
    return 0;
}
