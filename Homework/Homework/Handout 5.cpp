//
//  Handout 5.cpp
//  Homework
//
//  Created by Bastien Genova on 21/11/2026.
//

#include "Handout 5.hpp"
#include "iostream"

int Object::object_counter = 0;
int application2(){
    Object o1, o2;
    Character c1('A'), c2('B');
    Digit d1('5'), d2('6');
    Letter l1('x'), l2('y');
    Vowel v1('a'),v2('e');
    Consonant cons1('b'),cons2('d');
    std::cout << Object::get_object_counter();
    return 0;
}
