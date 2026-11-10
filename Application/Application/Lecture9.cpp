//
//  Lecture9.cpp
//  Application
//
//  Created by Bastien Genova on 03/11/2026.
//

#include "Lecture9.hpp"
#include <iostream>

Circle::Circle(){
    radius = 0;
}

Circle::Circle(double r ){
     radius = r;
}

double Circle::area(){
     return radius*radius*3.14;
}
