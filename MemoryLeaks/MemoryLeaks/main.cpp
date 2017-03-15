//
//  main.cpp
//  MemoryLeaks
//
//  Created by Henry on 22/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include <iostream>
#include "copyConstructorDoubleFree.cpp"

int main(int argc, const char * argv[]) {
    Child a;
    Child b = a;
    
    *(a.p) = 5;
    
    cout << *(b.p);
}
