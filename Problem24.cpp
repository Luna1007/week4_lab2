#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int generateNumber = rand() % 90 + 10;
    int userPrediction;
    cout<<"Predict the two digit number(10-99)"<<endl;
    cin>>userPrediction;
}