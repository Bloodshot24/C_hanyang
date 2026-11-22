//
//  Handout 5.hpp
//  Homework
//
//  Created by Bastien Genova on 21/11/2026.
//

#ifndef Handout_5_hpp
#define Handout_5_hpp

#include <stdio.h>
class Object {
    private:
        static int object_counter;
    public :
    Object() { object_counter++;
    }
     static int get_object_counter() { return object_counter; }
};
class Character : public Object {
    protected :
        char ch;
    public :
        char get_ch() const { return ch; }
        void set_ch(char c) { ch = c; }
        Character(char c = '\0') : ch(c) {}
        Character operator+( Character other) {
            return Character((ch + other.ch) % 128);
        }
};

class Digit : public Character{
    public :
    Digit(char c = '0') : Character(c) {}
    Digit operator+(Digit other)  {
        int val1 = ch - '0';
        int val2 = other.ch - '0';
        int result = (val1 + val2) % 10;
        return Digit('0' + result);
    }
};
class Letter : public Character {
    public :
    Letter(char c = '0') : Character(c){}
};
class Vowel : public Letter{
    public :
    Vowel(char c = '0'): Letter(c){}
};
class Consonant : public Letter{
    public :
    Consonant(char c = '0'): Letter(c){}
};

int application2();
#endif /* Handout_5_hpp */
