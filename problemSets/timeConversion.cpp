#include<iostream>
#include<string>
using namespace std;

int main()
{

    string s{"06:40:03AM"};
    int hour, min, sec;

    hour = stoi(s.substr(0, 2));
    min = stoi(s.substr(3, 2));
    sec = stoi(s.substr(6, 2));
    string pm = s.substr(8, 2);

    if ( hour == 12 && pm == "AM")
        hour = 0;
    else if ( hour == 12 && pm == "PM")
        hour;
    else if (pm == "AM")
        hour;
    else
        hour = hour + 12;
    
    string hourString = to_string(hour);
    string minString = to_string(min);
    string secString = to_string(sec);
    if (hour < 10)
        hourString = "0" + hourString;
    if (min < 10)
        minString = "0" + minString;
    if(sec < 10)
        secString = "0" + secString;
    string retString = hourString + ":" + minString + ":" + secString;
    cout << retString << endl;

    
}