//
//  main.cpp
//  IteratorPattern
//
//  Created by Henry on 22/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include <iostream>
#include <iterator>     // std::next
#include <list>         // std::list
#include <algorithm>    // std::for_each
#include "Aggregate.h"

int main(int argc, const char * argv[]) {
    Aggregate<int> a(5);
    for(int i=0; i<5; i++)
        a.add(i+1);
    
    Iterator<int>* it = a.createIterator();
    
    std::cout << it->first() << std::endl;
    

    
        std::list<int> mylist;
        for (int i=0; i<10; i++) mylist.push_back (i*10);
        
        std::cout << "mylist:";
        std::cout <<
        std::for_each (mylist.begin(),
                       std::next(mylist.begin(),5),
                       [](int x) {std::cout << ' ' << x;} );
        
        std::cout << '\n';
        
        return 0;
}
