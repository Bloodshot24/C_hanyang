//
//  main.cpp
//  exercise3
//
//  Created by Bastien Genova on 23/09/2026.
//

#include <iostream>

void quizz1(){
    int a,b,m;
    std::cout << "a=";
    do{
        std::cin >> a;
    }
    while(!(a>=0 && a<=pow(10, 9)));
    std::cout<< "b=";
    do{
        std::cin >> b;
    }
    while(!(b>=0 && b<=pow(10, 9)));
    std::cout << "m= ";
    do{
        std::cin >> m;
    }
    while(!(m>=2 && m<=pow(10, 9)));
    
    int res = 1;
    for (int i=0; i<b; i++) {
        res*=(res*a) % m;
    }
    std::cout << res;
    
}

int main() {
    // insert code here...
    quizz1();
    return 0;
}
