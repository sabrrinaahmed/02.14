#include "message.h"
#include <iostream>
using namespace std;

int main(){
    string dummy = "";
    int code = 0;

    cout << "(sabs) Hi Shawty, I love you. Enter your code number: ";
    cin >> code;
    getline(cin, dummy);

    cout << "(computer) Your code number is: " << code << endl;

    // switch(code){
    //     case 280466: 
    // }
}