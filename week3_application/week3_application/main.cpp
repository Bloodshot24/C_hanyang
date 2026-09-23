//
//  main.cpp
//  week3_application
//
//  Created by Bastien Genova on 16/09/2026.
//

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
        sum=0
        for(int j = 0;j<i;j++){
            for (int c =j; c<n; c++) {
                sum+=numbers.at(j);
            }
            
        }
        if(sum>max_sum) max_sum = sum;
    }
    
}

int main(){
    return 0;
}
