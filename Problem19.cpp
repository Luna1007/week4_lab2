#include <iostream>
using namespace std;
int main() {
    int weight;
    cout<<"Enter weight of the package: ";
    cin>>weight;
    if (weight>0 and weight <= 1) {
        cout<<"3500"<<endl;
    } else if (weight > 1 and weight <= 3) {
        cout<<"5500"<<endl;
    }else if (weight > 3 and weight <= 10) {
        cout<<"8500"<<endl;
    } else if(weight>10 and weight <= 20 ) {
        cout<<"10500"<<endl;
    }else {
        cout<<"Invalid input"<<endl;
    }
    return 0;
}