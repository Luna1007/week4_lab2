#include <iostream>
using namespace std;
int main() {
    int number;
    cin>>number;
    int sign;
    if(number>0) {
        sign = 1;
    } else if (number<0) {
        sign = -1;
    } else {
        sign = 0;
    }
    switch (sign) {
        case 1:
            cout<<"Positive"<<endl;
            break;
        case -1:
            cout<<"Negative"<<endl;
            break;
        default:
            cout<<"Zero"<<endl;
    }
    return 0;
}