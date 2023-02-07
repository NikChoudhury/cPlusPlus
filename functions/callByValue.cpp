/*
    CallByValue
*/

#include<iostream>
using namespace std;

void swap(int, int);  // Function Prototype

int main(){

    int a = 10, b = 20;

    cout<<"\nBefore Swap :\n";
    cout<<"a = "<<a<<" b = "<<b;

    swap(a,b);  // Function Call

    cout<<"\nIn main function";
    cout<<"\nAfter Swap :\n";
    cout<<"a = "<<a<<" b = "<<b;
    return 0;
}

void swap(int x, int y){

    int temp = x;
    x = y;
    y = temp;

    cout<<"\nIn swap function";
    cout<<"\nAfter Swap :\n";
    cout<<"a = "<<x<<" b = "<<y;
}
