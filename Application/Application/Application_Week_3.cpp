//
//  Application_Week_3.cpp
//  Application
//
//  Created by Bastien Genova on 05/10/2026.
//

#include "Application_Week_3.hpp"
#include <iostream>
#include <list>

void Max_Subarray_value(){
    int n,sum,num,max_sum = 0;
    std::vector<int> numbers;
    std::cout<<"Enter the length of the list\n";
    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cout<<"Enter the "<<n << " elements\n";
        std::cin >> num;
        numbers.push_back(num);
    }
    for(int i=0;i<n;i++){
        sum=0;
        for(int j = 0;j<i;j++){
            for (int c =j; c<n; c++) {
                sum+=numbers.at(j);
            }
            
        }
        if(sum>max_sum) max_sum = sum;
    }
    
}
