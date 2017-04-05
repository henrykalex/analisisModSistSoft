//
//  DNS.hpp
//  chainOfResp
//
//  Created by Enrique Mondragon on 05/04/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef DNS_hpp
#define DNS_hpp

#include <iostream>
#include <string>
#include <map>
#include <utility>

class DNS{
protected:
    DNS *next;
    std::string name;
    std::map<std::string, std::string> ipList;// <Address, ip>
public:
    DNS(){};
    DNS(std::string nm){
        next = 0;
        name = nm;
    }
    void setNext(DNS *n){
        next = n;
    }
    void add(DNS *n){
        if (next){
            next->add(n);
        }else{
            next = n;
        }
    }
    
    void addIpAddres(std::string dom, std::string ip){
        std::map<std::string, std::string>::iterator ipAddrss;
        ipAddrss = ipList.find(dom);
        if (ipAddrss == ipList.end()){
            ipList[dom] = ip;
        }else{
            std::cout << "Ya existe el dominio" << std::endl;
        }
        
    }
    void printAllIpAddress(){
        std::map<std::string, std::string>::iterator ipAddrss;
        for(ipAddrss = ipList.begin();ipAddrss != ipList.end(); ipAddrss++){
            std::cout << ipAddrss->first<<" - " << ipAddrss->second << std::endl;
        }
        
    }
    virtual std::string * handleRequest(std::string dom){
        return next->handleRequest(dom);
    }
};

#endif /* DNS_hpp */
