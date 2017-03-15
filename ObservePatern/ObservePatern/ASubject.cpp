//
//  ASubject.cpp
//  ObservePatern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#include "ASubject.hpp"
#include <algorithm>

using namespace std;

void ASubject::Attach(Shop *shop)
{
    list.push_back(shop);
}
void ASubject::Detach(Shop *shop)
{
    list.erase(std::remove(list.begin(), list.end(), shop), list.end());
}

void ASubject::Notify(float price)
{
    for(vector<Shop*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
    {
        if(*iter != 0)
        {
            (*iter)->Update(price);
        }
    }
}
