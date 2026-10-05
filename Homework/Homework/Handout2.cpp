//
//  Handout2.cpp
//  Homework
//
//  Created by Bastien Genova on 05/10/2026.
//

#include "Handout2.hpp"
#include <iostream>

double factorial(int n){
    int res = 1;
    for (int i=1; i<=n; i++) {
        res *= i;
    }
    return res;
}

void binomial_coefficient(int n,int r){
    double binomial = factorial(n)/(factorial(n-r)*factorial(r));
    std::cout << "C(" << n <<"," << r<< "):= " << binomial << std::endl;
}

void H2_Exercise1(){
    int n,r;
    std::cout<< "Enter 2 numbers : ";
    std::cin>> n;
    std::cin >> r;
    binomial_coefficient(n, r);
}

void permutNumbers(std::vector<int> tab ,int index){
    if (index == tab.size()) {
        std::string permut = "";
        for(int i=0;i<tab.size();i++){
            permut += std::to_string(tab[i]) + " ";
        }
        std::cout << permut << std::endl;
        return;
    }
    for (int i = index; i<tab.size(); i++) {
        int temp = tab[i];
        tab[i] = tab[index];
        tab[index] = temp;
        permutNumbers(tab, index+1);
        temp = tab[i];
        tab[i] = tab[index];
        tab[index] = temp;
    }
}
int sum_down(int x)
{
    if (x >= 0)
    {
        x = x - 1;
        int y = x + sum_down(x);
        return y + sum_down(x);
    }
    else
    {
        return 1;
    }
}
int sum_down_iterative(int x){
    int res =1;
    int n=0;
    while (n<=x) {
        res = (n-1) +2*res;
        n++;
      
        
    }
    return res;
}


void H2_Exercise2(int n){
    std::vector <int> tab;
    for(int i=1;i<=n;i++){
        tab.push_back(i);
    }
    permutNumbers(tab,0);
}
