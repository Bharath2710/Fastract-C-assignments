#include <assert.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include "day_1.h"


void test_upper_to_lower();   //Converting alphabets from upper case to lower case

void test_circle_area();   //Finding the circle area

void cal_simple_compound_interest();  //calculating simple and compound interst

void test_temp_convert();    // Conversion of temperature from fahrenheit to celsius and from celsius to fahrenheit

void is_even_or_odd();     //Checking Even or Odd

void is_leap_or_not();     //Checking for leap year or non leap year

void test_power();         //Finding the power of 2^N using left shift operator



int main()
{
    test_upper_to_lower();

    test_circle_area();

    cal_simple_compound_interest();

    test_temp_convert();

    is_even_or_odd();

    is_leap_or_not();

    test_power();

}

//1

void test_upper_to_lower()
{
    assert(upper_to_lower('B') == 'b');
    assert(upper_to_lower('H') == 'h');
    assert(upper_to_lower('y') == 0);
}

//2
void test_circle_area()
{
    float a,b;
    printf("Enter radius of Circle:");
    scanf("%f",&b);
    a = circle_area(b);
    printf("Circle area is : %f \n",a);

    assert(circle_area(b) > a);
}


//3
void cal_simple_compound_interest()
{
    float p ,t ,r , sint , cint;
    printf("Enter 'p' ,'t' ,'r' :");
    scanf("%f %f %f", &p, &t, &r);
    sint = simple_interest(p ,t ,r);
    cint = compound_interest(p ,t ,r);;
    printf("Simple interest is : %f \nCompound interest is : %f \n",sint,cint);


    assert (simple_interest(p, t, r) > sint);
    assert (compound_interest(p, t, r) > cint);
}

//4
void test_temp_convert()
{

    assert(temp_convert_c_to_f(60) < 145 );
    assert(temp_convert_f_to_c(100) > 37 );


}



//5
void is_even_or_odd()
{
    assert(even_or_odd(6) == 1);
    assert(even_or_odd(9) == -1);
}


//6
void is_leap_or_not()
{
    assert(leap_year_or_not(1998) == 2);
    assert(leap_year_or_not(1900) == 2);
    assert(leap_year_or_not(2020) == 1);
}



//7
void test_power()
{
    assert(power_by_left_shift(5) == 32);
    assert(power_by_left_shift(10) ==1024);
}
