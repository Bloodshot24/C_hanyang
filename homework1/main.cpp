#include <iostream>

void Exercise_2(){
    int number_1;
    std::cout<< "Enter the first number\n";
    std::cin>> number_1;
    
    int number_2;
    std::cout<< "Enter the second number\n";
    std::cin>> number_2;

    int number_3;
    std::cout<< "Enter the last number\n";
    std::cin>> number_3;

    int max;
    if(!(number_1>number_2 && number_1>number_3)){
        if(number_2>number_3) max = number_2;
        else max=number_3;
    }
    else max = number_1;
    
    std::cout<< "The max of the three values is " << max << std::endl;
    std::cin.get();
    
}

void Exercise_3(){
    double sum = 0;
    int number;
    do {
        std::cout<< "Enter a number to add to the sum or 0 to end it" << std::endl;
        std::cin>>number;
        sum += number;
        std::cout<< "The sum is " << sum << std::endl;
    } while (number != 0);
}

void Exercise_4(){
    int a,b;
    int initial_a,initial_b;
    do {
        std::cout<< "Enter the first number" <<std::endl;
        std::cin>> a;
    } while (!(a>=0));
    initial_a=a;
    do {
        std::cout<< "Enter the second number" <<std::endl;
        std::cin>> b;
    } while (!(b>=0));
    initial_b=b;
    
    if(a<b) {
        int c=a;
        a=b;
        b=c;
    }
    while(a%b!=0){
        int r = a%b;
        a= b;
        b=r;
    }
    std::cout<< "The GCD of " << initial_a <<" and "<<initial_b << " is "<< b <<std::endl;
}
int main(){
//    Exercise_2();
//    Exercise_3();
    Exercise_4();
    return 0;
}
