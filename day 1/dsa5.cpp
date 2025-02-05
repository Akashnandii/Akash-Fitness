#include<bits/stdc++.h>
using namespace std;
/*
function are st of code with performs something for you
Function are used to modularise code
Function are used to increse readability
Functions are used to use same code multiple times
void -> which doesn't returns anything
retrun 
perameterised
non perameterised
*/
/*void printname() {
    cout << "Akash";
}  
//for void 
int main() {
    printname();
    return 0;
}*/

void printname(string name) {
    cout << "Akash"  " " << name << endl;
}  
// for perameterised and non perameterised
int main() {
    string name;
    cin >> name;
    printname(name);
    return 0;
}