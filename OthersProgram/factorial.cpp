#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i,num;
    unsigned long long int fact=1;
    cout<<"\nEnter an interger :";
    cin>>num;
    i=num;
    while(num){
        fact *= num;            //fact = fact*num;
        --num;
    }
    cout<<"The factorial of "<< i
        <<" is "<<fact<<"\n";
    getch();
    return 0;
}
