#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main() {
    srand(time(0));
    int cardNumber = rand() % 13 + 1;
    int suitNumber = rand() % 4 + 1;
    string rank, suit;
    switch (cardNumber) {
        case 1: rank="Ace"; break;
        case 2: rank="2"; break;
        case 3: rank="3"; break;
        case 4: rank="4"; break;
        case 5: rank="5"; break;
        case 6: rank="6"; break;
        case 7: rank="7"; break;
        case 8: rank="8"; break;
        case 9: rank="9"; break;
        case 10: rank="10"; break;
        case 11: rank="Jack"; break;
        case 12: rank="Queen"; break;
        case 13: rank="King"; break;
    }
    switch (suitNumber) {
        case 1: suit = "clubs"; break;
        case 2: suit = "diamonds"; break;
        case 3: suit = "hearts"; break;
        case 4: suit = "spades"; break;
    }
    cout<<"You picked "<<rank<<" of "<<suit<<endl;
    return 0;

}