//
//  Utils.cpp
//  Application
//
//  Created by Bastien Genova on 05/10/2026.
//

#include "Utils.hpp"
#include <iostream>
#include <vector>
void Show_vector(std::vector<int> array){
    for(int i=0;i<array.size();i++){
        std::cout << "\t" << array[i];
    }
    std::cout << std::endl;
}
