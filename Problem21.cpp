#include <iostream>
#include <string>
using namespace std;
int main() {
    int month;
    cout<<"Enter the month (1-12)"<<endl;
    cin>>month;
    switch (month) {
        case 1:
            cout<<"In January there is:\n "<<endl;
            cout<<"- New Year's day, 1 January "<<endl;
            break;
        case 2:
            cout<<"In February there is no fixed holidays:"<<endl;
            break;
        case 3:
            cout<<"In March there is:\n "<<endl;
            cout<<" - International Women's day, 8 March"<<endl;
            break;
        case 4:
            cout<<"In April there is no fixed holidays: "<<endl;
            break;
        case 5:
            cout<<"In May there is:\n "<<endl;
            cout<<" - Memorial day day, 9 May"<<endl;
            break;
        case 6:
            cout<<"In June there is no fixed holidays: "<<endl;
            break;
        case 7:
            cout<<"In July there is no fixed holidays: "<<endl;
            break;
        case 8:
            cout<<"In August there is no fixed holidays: "<<endl;
            break;
        case 9:
            cout<<"In September there is:\n "<<endl;
            cout<<" - Indepandence day, 1 September "<<endl;
            break;
        case 10:
            cout<<"In October there is no fixed holidays: "<<endl;
            break;
        case 11:
            cout<<"In November there is no fixed holidays: "<<endl;
            break;
        case 12:
            cout<<"In December there is:\n "<<endl;
            cout<<" - Constitution day, 8 December "<<endl;
        default:
            cout<<"Invalid month number"<<endl;
    }
    return 0;
}
