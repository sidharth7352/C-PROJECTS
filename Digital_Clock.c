/* C Program to design a digital clock with current time*/

#include<stdio.h>
#include<time.h>

void main()
{
    time_t s, val=1;
    struct tm* current_time;

    //time in seconds
    s= time(NULL);

    //to get correct time 
    current_time=localtime(&s);

    //print time in minutes,hours and seconds

    printf("%02d : %2d : %2d",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
}

