//
//  Application_Week_4.cpp
//  Application
//
//  Created by Bastien Genova on 13/10/2026.
//

#include "Application_Week_4.hpp"
#include <iostream>

void Modular_Power() {
    long long a, b, m;

    do {
        std::cin >> a >> b >> m;
    } while (!(a >= 0 && a <= 1e9 &&
               b >= 0 && b <= 1e9 &&
               m >= 2 && m <= 1e9));

    long long result = 1;
    a %= m;

    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % m;
        }

        a = (a * a) % m;
        b /= 2;
    }

    std::cout << result << std::endl;
}
