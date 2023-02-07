/*
 C++ program to check a number whether it is prime or not.
*/

#include<iostream>
using namespace std;
int main(){

    int num, i;
    bool is_prime = true;

    cout<<"Enter a number :";
    cin>>num;
    // 0 and 1 are not prime numbers
    if (num == 0 || num == 1) {
        is_prime = false;
    }else{
         for(i=2;i<=num/2;i++){
            if(num%2==0){
                is_prime = false;
                break;
            }
        }
    }

    if (is_prime)
        cout << num << " is a prime number";
    else
        cout << num << " is not a prime number";
    return 0;
}
