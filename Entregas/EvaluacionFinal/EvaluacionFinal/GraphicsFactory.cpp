//
//  GraphicsFactory.cpp
//  EvaluacionFinal
//
//  Created by Enrique Mondragon on 03/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#include "GraphicsFactory.hpp"

GraphicsFactory* GraphicsFactory::stInstance = NULL;

GraphicsFactory* GraphicsFactory::Instance()
{
    if (!stInstance)
        GraphicsFactory();
    return stInstance;
}
