//
//  Application_Week_6.cpp
//  Files.xcfilescontainer
//
//  Created by Bastien Genova on 08/10/2026.
//

#include "Application_Week_6.hpp"
#include <iostream>

void test_pointer1(int* p){
    *p = 67;
}

void test1(){
    int a = 3;
    std::cout << a<< std::endl;
    test_pointer1(&a);
    std::cout << a << std:: endl;
    
    
}
