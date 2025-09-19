#include <iostream>
using namespace std;
int main() {
    int weight;
    cout<<"Enter weight of the package: ";
    cin>>weight;
    if(weight <= 0) {
        cout<<"Invalid input"<<endl;
    } else if(weight > 20) {
        cout<<"Weight is too big"<<endl;
    }else{
        int category;
        if(weight <= 1) category=1;
        else if(weight <=3) category=2;
        else if(weight <=10) category=3;
        else category=4;
        switch (category) {
            case 1:
                cout<<"3500"<<endl;
                break;
            case 2:
                cout<<"5500"<<endl;
                break;
            case 3:
                cout<<"8500"<<endl;
                break;
            case 4:
                cout<<"9500"<<endl;
                break;

        }

    }
    return 0;
}