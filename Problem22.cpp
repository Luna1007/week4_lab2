#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int randonum;
    cout<<"Enter a number: ";
    cin>>randonum;
    if (randonum%2==0) {
        cout<<"The number is even"<<endl;
    }
    else {
        cout<<"The number is odd"<<endl;
    }
    return 0;

}