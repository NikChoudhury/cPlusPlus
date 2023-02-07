/*
Program to find number of vowels in a given line of text
*/
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    char word[80];
    int vow_ctr = 0;
    //Read the word
    cout<<"Enter the word :"<<endl;
    gets(word);

    for(int i=0; word[i]!='\0'; ++i){

        switch(word[i]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': ++vow_ctr;
        }
    }
    cout<<"The total number of vowel in the given line is : "<<vow_ctr<<endl;
    return 0;
}



