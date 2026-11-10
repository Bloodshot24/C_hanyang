//
//  Sandbox.cpp
//  Application
//
//  Created by Bastien Genova on 20/10/2026.
//

#include "Sandbox.hpp"
#include <iostream>
using namespace std;
int test (int a);





void TowerOfHanoi(int n, char fromRod, char toRod,
                  char auxRod){
    if (n == 0) {
        return;
    }
    TowerOfHanoi(n - 1, fromRod, auxRod, toRod);
    cout << "Disk " << n << " moved from " << fromRod
         << " to " << toRod << endl;
    TowerOfHanoi(n - 1, auxRod, toRod, fromRod);
}

void recursive_test (int n){
    if (n==0) return;
    cout <<  n;
    recursive_test(n-1);
}
int test(int a){
    if (a<=0){
        return 0;
    }
    return a+test(a-1)+test(a-2);
}
