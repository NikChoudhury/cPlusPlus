/*
C++ program to find the factorial of an integer using function
*/
#include<iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
//Funtion Prototype

unsigned long long int factorial(int);

int main()
{
    int n,check;
    cout<<"Enter a positive Integer: ";
    //Input Validation
    check=cin>>n;
    if(check !=1){
        cout<<"Please enter a positive integer! : "
        exit(0);
    }else if(n<0){
        cout<<"\nThere is no factorial exist for the negative number\n";
        exit(0);
    }


    cout<<"Factorial of"<<n<< " is : "<< factorial(n);
    getch();
    return 0;
}

//Funtion Definition
unsigned long long int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++)
    fact = fact * i;
    return fact;
}

/*Recursive Function Definition For Factorial*/
/*
unsigned long long int factorial(int n){
    if(n<0){ //Base Case or termination case
        return 0;
    }
    else if(n==0 || n==1){ //Base Case or termination case
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
*/
