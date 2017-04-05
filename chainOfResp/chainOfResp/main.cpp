//
//  main.cpp
//  chainOfResp
//
//  Created by Enrique Mondragon on 05/04/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

/*#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

class Base
{
    Base *next; // 1. "next" pointer in the base class
public:
    Base()
    {
        next = 0;
    }
    void setNext(Base *n)
    {
        next = n;
    }
    void add(Base *n)
    {
        if (next)
            next->add(n);
        else
            next = n;
    }
    // 2. The "chain" method in the base class always delegates to the next obj
    virtual void handle(int i)
    {
        next->handle(i);
    }
};

class Handler1: public Base
{
public:
    /*virtualvoid handle(int i)
    {
        if (rand() % 3)
        {
            // 3. Don't handle requests 3 times out of 4
            cout << "H1 passed " << i << "  ";
            Base::handle(i); // 3. Delegate to the base class
        }
        else
            cout << "H1 handled " << i << "  ";
    }
};

class Handler2: public Base
{
public:
    /*virtualvoid handle(int i)
    {
        if (rand() % 3)
        {
            cout << "H2 passed " << i << "  ";
            Base::handle(i);
        }
        else
            cout << "H2 handled " << i << "  ";
    }
};

class Handler3: public Base
{
public:
    /*virtualvoid handle(int i)
    {
        if (rand() % 3)
        {
            cout << "H3 passed " << i << "  ";
            Base::handle(i);
        }
        else
            cout << "H3 handled " << i << "  ";
    }
};

int main()
{
    srand(time(0));
    Handler1 root;
    Handler2 two;
    Handler3 thr;
    root.add(&two);
    root.add(&thr);
    thr.setNext(&root);
    for (int i = 1; i < 10; i++)
    {
        root.handle(i);
        cout << '\n';
    }
}*/
#include "DNS.hpp"
#include "DNStypeA.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
int main(int argc, const char * argv[]){
    DNS * main = new DNS("0");
    DNStypeA * serv1 =new DNStypeA("1");
    DNStypeA * serv2 =new DNStypeA("2");
    DNStypeA * serv3 =new DNStypeA("3");
    DNStypeA * serv4 =new DNStypeA("4");
    DNStypeA * serv5 =new DNStypeA("5");
    
    main->add(serv1);
    serv1->add(serv2);
    serv2->add(serv3);
    serv3->add(serv4);
    serv4->add(serv5);
    
    main->addIpAddres("google.com", "10.55");
    main->addIpAddres("facebook.com", "10.54");
    main->addIpAddres("twitter.com", "10.53");
    
    serv1->addIpAddres("linkedin.com", "23.64");
    serv1->addIpAddres("empleos.com", "23.63");
    
    serv2->addIpAddres("itesm.mx", "11.42");
    serv2->addIpAddres("unam.mx", "11.41");
    serv2->addIpAddres("ipn.mx", "11.40");
    
    serv3->addIpAddres("mazda.com", "56.78");
    serv3->addIpAddres("toyota.com", "56.77");
    serv3->addIpAddres("vw.com", "56.76");
    
    serv4->addIpAddres("apple.com", "56.78");
    serv4->addIpAddres("linux.com", "56.77");
    serv4->addIpAddres("microft.com", "56.76");
    
    serv5->addIpAddres("paco.com", "56.78");
    serv5->addIpAddres("enrique.com", "56.77");
    serv5->addIpAddres("alberto.com", "56.76");

    main->printAllIpAddress();
    serv1->printAllIpAddress();
    serv2->printAllIpAddress();
    serv3->printAllIpAddress();
    
    std::cout << "\nComenzando a buscar \n";
    std::string * temp = main->handleRequest("linkedin.com");
    std::string temp1 = *temp;
    std::cout <<"Res: "<< temp1;
    
    std::cout << "\nComenzando a buscar \n";
    temp = main->handleRequest("enrique.com");
    temp1 = *temp;
    std::cout <<"Res: "<< temp1;
    std::cout <<""<< temp1;
    return 0;
}
