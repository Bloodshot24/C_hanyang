//
//  main.cpp
//  Homework
//
//  Created by Bastien Genova on 05/10/2026.
//

#include <iostream>
#include "Handout1.hpp"
#include "Handout2.hpp"
#include "Handout3.hpp"
#include "Utils.hpp"

void Handout1(){
    H1_Exercise_2();
    H1_Exercise_3();
    H1_Exercise_4();
}
void Handout2(int n){
    H2_Exercise1();
    H2_Exercise2(n);
}
void Handout3(char text[]){
    H3_Exercise1(text);
    H3_Exercise2(text);
}
int main(int argc, const char * argv[]) {
    Handout1();
    //Handout2(3);
    //Handout3("Today is a nice day for having a little picnic.");
}
