#include <stdio.h>
#include <math.h>
#include <conio.h>
#include "day_1.h"

#define PI 3.14


//1
char upper_to_lower(char alpha)   // Function to convert alphabets from uppercase to lower case
{
    if((alpha >= 65)&&(alpha <= 90))
    {   alpha+=32;                 //Adds 32 to ascii value to convert to lower case
        return alpha;
    }
    else
        return 0;
}


//2
float circle_area(float r)      //Function to find area of circle
{
    float area;
    area = PI*r*r;
    return area;

}


//3
float simple_interest(float p, float t, float r)   //Function to find simple interest

{
    float si;
    si=(p*t*r)/100;
    return si;
}
float compound_interest(float p, float t, float r) //function to find compound interest
{
    float ci;
    ci=p*(pow((1+r/100),t));
    return ci;
}



//4
float temp_convert_f_to_c(float f)   //Function to convert temperature from fahrenheit to celsius
{
    float c;
    c=((f-32)*5/9);
    return c;
}
float temp_convert_c_to_f(float c)   //Function to convert temperature from celsius to fahrenheit
{
    float f;
    f=((c*(9/5))+32);
    return f;
}


//5
int even_or_odd(int x)             //Function to check even or odd
{
    if(x % 2 == 0)
        return 1;     //returns 1 if even
    else
        return -1;    //returns -1 if odd
}


//6
int leap_year_or_not(int year)   //Function to check leap year or not
{
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))   //For century years it should be divisible by 400
        return 1;
    else
        return 2;
}



//7
int power_by_left_shift(int N)  //Function to check 2^N using left shift
{
    int ls,pow;
    for(ls=0;ls<=N;ls++)
    pow = (1<<N);
    return pow;

}
