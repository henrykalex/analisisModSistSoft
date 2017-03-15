//
//  Shop.cpp
//  ObservePatern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//
/*ConcreteObserver: This is the class which needs to keep itself updated with the change. This class just needs to implement the Observer and register itself with the ConcreteSubject and it is all set to receive the updates. We have Shop class in our application serving the same purpose.*/

#include "Shop.hpp"

Shop::Shop(std::string name)
{
    this->name = name;
}

void Shop::Update(float price)
{
    this->price = price;
    
    //Lets print on console just to test the working
    std::cout << "Price at "<< name << " is now "<< price << "\n";
}
