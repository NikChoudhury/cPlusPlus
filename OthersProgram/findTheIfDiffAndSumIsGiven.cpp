/*
Write a C++ program to find the two numbers
when their sum and  difference is given.
*/
#include <iostream>

using namespace std;

void findNumbers(int sum, int diff) {
    int a = (sum + diff) / 2;
    int b = (sum - diff) / 2;
    cout << "The numbers are " << a << " and " << b << endl;
}

int main() {
    int sum, diff;
    cout << "Enter the sum of the two numbers: ";
    cin >> sum;
    cout << "Enter the difference of the two numbers: ";
    cin >> diff;
    findNumbers(sum, diff);
    return 0;
}
