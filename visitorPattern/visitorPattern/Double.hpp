//
//  Double.hpp
//  visitorPattern
//
//  Created by Enrique Mondragon on 22/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Double_hpp
#define Double_hpp

#include <stdio.h>
#include "Number.hpp"
#include "Visitor.hpp"

class Double : public Number{
public:
    Double(){
        quienSoy = "Double";
    }
    static int countDouble;
    void accept(Visitor *);
};

#endif /* Double_hpp */
