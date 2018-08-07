#include<iostream>



int main()
{
 
    for( int x = 0; x < 10; x++){

        for( int i = 10; i > x; i--)
            printf(" ");
        for(int j = 1; j <= x+1; j++)
            printf("#");
        printf("\n");
    }
}