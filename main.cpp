#include "message.h"
#include <iostream>
using namespace std;

int main(){
    Message message;
    string dummy = "";

    cout << "(sabs) Hi Shawty, I love you. Enter your code number: ";
    cin >> message.code;
    getline(cin, dummy);

    cout << "(computer) Your code number is: " << message.code << endl;

    switch(message.code){
        case 280466:
            message.m280466();
            break; 
        case 620274:
            message.m620274();
            break;
        case 251548:
            message.m251548();
            break;
        case 874529:
            message.m874529();
            break;
        case 441307:
            message.m441307();
            break;
        case 117695:
            message.m117695();
            break;
    }
}