#include <iostream>
using namespace std;
int main() {
    char light;
    cout << "Enter a character: " << endl;
    cin >> light;
    if (light == 'g') {
        cout<<" Go!"<< endl;
    }
    else if (light == 'y') {
        cout<<" Get ready!"<< endl;
    }
    else if (light == 'r') {
        cout<<" Stop!"<< endl;
    } else {
        cout<<"Invalid input"<< endl;
    }


    return 0;
}