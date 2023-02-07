/*
    C++ program to add two matrices.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){

    int first[10][10],second[10][10],sum[10][10];
    int i,j,m,n,p,q;

    //Inputs rows and columns of matrices first[m][n] and second[p][q]
    cout<<"Enter the rows and column of the first Matrix :";
    cin>>m>>n;
    cout<<"Enter the rows and column of the second Matrix :";
    cin>>p>>q;

    if((m==p) && (n==q)){
        cout<<"Matrix Can be added\n";
    }else{
        cout<<"Matrix cannot be added\n";
        exit(0);
    }

    cout << "Enter elements of first matrix: \n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> first[i][j];
        }
    }

    cout << "Enter elements of first matrix: \n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> second[i][j];
        }
    }

    cout << "Sum of the matrices: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = first[i][j] + second[i][j];
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
