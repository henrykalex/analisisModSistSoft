//
//  DNStypeA.hpp
//  chainOfResp
//
//  Created by Enrique Mondragon on 05/04/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef DNStypeA_hpp
#define DNStypeA_hpp

#include <iostream>
#include <string>
#include "DNS.hpp"

class DNStypeA: public DNS{
public:
    DNStypeA(){}
    DNStypeA(std::string nm){
        next = 0;
        name = nm;
    }
    std::string * handleRequest(std::string dom){
        //std::cout << "En dns: "<< name <<std::endl;
        std::map<std::string, std::string>::iterator ipAddrss;
        ipAddrss = ipList.find(dom);
        if (ipAddrss == ipList.end()){
            if(next == 0){
                //std::cout << "No esta en todo: "<<std::endl;
                std::string * response = new std::string("\nip addrs: ");
                return response;
            }else{
                //std::cout << "Aqui no: "<< name <<std::endl;
                return DNS::handleRequest(dom);
            }
        }else{
            
            //std::cout << "Aqui esta: "<< name <<ipAddrss->second<<std::endl;
            std::string * response = new std::string("\nip addrs: "+ipAddrss->second);
            return response;
        }
    }
};

#endif /* DNStypeA_hpp */
