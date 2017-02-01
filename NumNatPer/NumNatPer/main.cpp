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
    ArregloNPN array(5);
    array[1] = 5;
    std::cout<< array[1];
    return 0;
}
