#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

void minMaxsum(vector<int>);

int main()
{

vector<int> arr = {1, 2, 3, 4, 5};
minMaxsum(arr);


}

void minMaxsum(vector<int> arr)
{

// loop through arr
int minSum = 0;
int maxSum = 0;
int prevSum = 0;

for( int i = 0; i < arr.size(); i++){

    int tempSum = 0;
    if( i == 1)
        minSum = prevSum;
    for(int j = 0; j < arr.size(); j++){
        if ( i == j)
            continue;
        else
            tempSum += arr[j];
    }

    if ( tempSum > maxSum)
        maxSum = tempSum;
    else if ( prevSum > tempSum)
        prevSum = tempSum;
    if( prevSum < minSum )
        minSum = prevSum;
    prevSum = tempSum;    
}

cout << minSum << "\n" << maxSum << endl;

}