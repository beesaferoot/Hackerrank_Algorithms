#include <iostream>
using namespace std;

int main()
{
    int T, counter = 1;
    int digit;

    cin >> T;
    while( counter <= T){
        cin >> digit;

        int length = 0;
        for( int i = 5; i <=  digit; i *= 5){
            if ( (digit / i) < 1 ) break;
            length += digit / i;
        }   
        cout << length << endl;

        counter++;
    }


    
}