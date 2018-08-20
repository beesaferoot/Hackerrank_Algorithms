#include<iostream>


std::string dayOfProgrammer(int year) {

    // check for julian year
    int ddFed;
    if(year < 1918){
        if(year % 4 == 0)
            ddFed = 29;
        else
            ddFed = 28;
    }else if ( year == 1918 )
        ddFed = 15;
    else{
        if(year % 400 == 0)
            ddFed = 29;
        else if ( year % 4 == 0 && year % 100 != 0)
            ddFed = 29;
        else
            ddFed = 28;
    }
    
    int dd = 256 - 31 - ddFed - 31 - 30 - 31 - 30 - 31 - 31;
    
    std::string Date = std::to_string(dd) + "." + "09" + "." + std::to_string(year);
    return Date;
}

