#include <iostream>
#include <string>

using namespace std;


void quizz1(){
    int price,quantity,discount;
    do{
        cout<< "How much is the price of the item ? " <<endl;
        cin>> price;
        if(!(price>=1 && price <=10000)) cout<< "Price needs to be between 1 and 10000"<<endl;
    }
    while(!(price>=1 && price <=10000));
    do{
        cout<< "How many do you need ? " <<endl;
        cin>> quantity;
        if(!(quantity>=1 && quantity <=100)) cout<< "Quantity needs to be between 1 and 100"<<endl;
    }
    while(!(quantity>=1 && quantity <=100));
    do{
        cout<< "How much is discount ont this item ? " <<endl;
        cin>> discount;
        if(!(discount>=0 && discount <=price*quantity)) cout<<"Quantity needs to be between 0 and "<<price*quantity<<endl;
    }
    while(!(discount>=0 && discount <=price*quantity));
    double final_price = price *quantity - discount;
    cout<< "The final price is " << final_price <<endl;
}

void quizz2(){
    
}

int main(){
    quizz1();
    return 0;
}
