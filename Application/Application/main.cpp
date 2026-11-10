//
//  main.cpp
//  Application
//
//  Created by Bastien Genova on 05/10/2026.
//

#include <iostream>
#include "Application_Week_1.hpp"
#include "Application_Week_3.hpp"
#include "Application_Week_4.hpp"
#include "Application_Week_5.hpp"
#include "Application_Week_6.hpp"
#include "Lecture9.hpp"
#include "Sandbox.hpp"

void Week1(){
    W1_quizz1();
}
void Week4(){
    Modular_Power();
}
void Sandbox(){
//    int n = 5;
//
//        // A, B and C are names of rods
//        TowerOfHanoi(n, 'A', 'C', 'B');
//    recursive_test(5);
    std::cout<<test(5);
}

void Lecture9(){
    Circle c = Circle(3);
    std::cout << c.area() << " " << c.radius;
}

int main(int argc, const char * argv[]) {
    //Week4();
   // Sandbox();
    Lecture9();
    return EXIT_SUCCESS;
}
