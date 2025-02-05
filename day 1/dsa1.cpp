#include<iostream>
using namespace std;
// write a program that takes an input of age
// and prints if you are audult or not
int main () {
    int age;
    cin >> age;
    if(age >= 18) {
        cout << "You are an Adult";
    }
    // using if else statement
    else {
        cout << "You are not an Adult";
    }
    return 0;
}