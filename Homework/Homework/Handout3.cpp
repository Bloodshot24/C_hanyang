//
//  Handout3.cpp
//  Homework
//
//  Created by Bastien Genova on 05/10/2026.
//

#include "Handout3.hpp"
#include <iostream>
#include <cctype>

void count_chars(char text[]){
    int compte[26] = {0};
    
    for(char i = 0;text[i]!='\0';i++){
        compte[tolower(text[i])-'a']++;
    }
    for(int j=0;j<26;j++){
        std::cout << (char)('a' + j) << " : " << (char)('A' + j) << " " << compte[j] << std::endl;
    }
}

void count_chars_final(char text[]){
    int compte[26] = {0};
    
    for(char i = 0;text[i]!='\0';i++){
        compte[tolower(text[i])-'a']++;
    }
    
    int max = -1;
    for(int a = 0;a<26 ;a++){
        if(compte[a]>max){
            max = compte[a];
        }
    }
    for(int j=max;j>0;j--){
        for(int c = 0;c<26;c++){
            if(compte[c]-j>=0){
                std::cout << "*\t";
            }
            else std::cout << " \t";
        }
        std::cout << std::endl;
    }
    for(int i =0;i<26 ; i++){
        std::cout << (char)('a'+i) << (char)('A'+i) << "\t";
    }
    std::cout << std::endl;
}


void H3_Exercise1(char text[]){
    count_chars(text);
}

void H3_Exercise2(char text[]){
    count_chars_final(text);
}
