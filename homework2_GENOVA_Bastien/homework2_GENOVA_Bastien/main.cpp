//
//  main.cpp
//  homework2_GENOVA_Bastien
//
//  Created by Bastien Genova on 22/09/2026.
//

#include <iostream>
#include <vector>


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

void Exercise1(){
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

void Exercise2(int n){
    std::vector <int> tab;
    for(int i=1;i<=n;i++){
        tab.push_back(i);
    }
    permutNumbers(tab,0);
}


int main(int argc, const char * argv[]) {
    Exercise1();
    Exercise2(3);
    return 0;
}
