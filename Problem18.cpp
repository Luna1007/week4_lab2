#include <iostream>
using namespace std;
int main() {
    char lang;
    cout<<"Enter your language : u-uzbek, r-russian, g-german, e-english"<<endl;
    cin>>lang;
    switch(lang) {
        case 'u':
            cout<<"Assalomu alaykum!"<<endl;
            break;
        case 'r':
            cout<<"Privet!"<<endl;
            break;
        case 'g':
            cout<<"Halo!"<<endl;
            break;
        case 'e':
            cout<<"Hello!"<<endl;
            break;
        default:
            cout<<"I don't know that language!"<<endl;


    }
    return 0;
}