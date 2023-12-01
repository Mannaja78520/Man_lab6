#include<iostream>
using namespace std;

int main(){
    int num=1, Odd=0, Even=0;

    while (num != 0){
    cout << "Enter an integer: ";
    cin >> num;
    
    Odd =  (num % 2 == 1 && num != 0) ? Odd + 1 : Odd;
    Even = (num % 2 == 0) ? Even + 1 : Even;
    }

    cout << "#Even numbers = "<< Even <<"\n";
    cout << "#Odd numbers = "<< Odd <<"\n";
    return 0;
}