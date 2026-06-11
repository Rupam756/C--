#include<iostream>

using namespace std;

int main(){

    float a ,b,sum ,avg;

    cout << "Enter 1st number :  ";
    cin >> a;
    cout << "Enter 2nd number : ";
    cin >> b;

    sum = a+b;
    avg = sum/2;

    cout << "Sum = " << sum<<"\n";
    cout << "avg = " << avg;

    return 0;
}