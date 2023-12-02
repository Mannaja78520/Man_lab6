#include<iostream>
using namespace std;

int main(){
    int num=1, Odd=0, Even=0;

    while (true){
    cout << "Enter an integer: ";
    cin >> num;

    if (num == 0){ break; }
    
    Even = (num % 2 == 0 && num != 0) ? Even + 1 : Even;
    Odd =  (num % 2 == 1) ? Odd + 1 : Odd;
    }

    cout << "#Even numbers = "<< Even <<"\n";
    cout << "#Odd numbers = "<< Odd <<"\n";
    return 0;
}