//
//  main.cpp
//  NumNatPer
//
//  Created by Henry on 01/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include <iostream>
#include "ArregloNPN.h"

int main(int argc, const char * argv[]) {
    /*ArregloNPN array(5);
    array[1] = 6;
    std::cout<< array[1];
    array[1] = 5;
    std::cout<< array[1];
    array[2] = 5;
    std::cout<< array[5];

    std::cout<< array[0];
    
    array[3] = array[4] = array[1];
    
    std::cout<< "\nesto es serie de 6\n";
    std::cout<< array[1];
    std::cout<< array[3];
    std::cout<< array[4];
    
    int b = array[3] = array[4] = array[1];
    std::cout<< "esto es igual a int\n";
    std::cout<< b<<"\n";*/
    
    ArregloNPN arr(5);
    arr[0]=1;
    arr[5]= 2;
    arr[-1] = -1;
    arr[1] = 6;
    std::cout << arr[1];
    
    
    return 0;
}
