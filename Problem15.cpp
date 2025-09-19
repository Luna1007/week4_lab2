#include <iostream>
using namespace std;
int main() {
    int today, daysElapsed;
    cout<<"Enter today's day: ";
    cin>>today;
    cout<<"Enter the number of the days elapsed since today: ";
    cin>>daysElapsed;
    int futureDay=(today+daysElapsed)%7;
    string dayNames[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    string todayName=dayNames[today];
    string fututeName=dayNames[futureDay];
    cout<<" Today is "<<todayName<<" and the futere day is "<<fututeName<<endl;

return 0;

}