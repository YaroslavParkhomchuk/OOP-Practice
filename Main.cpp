#include <iostream>
#include <string>
#include "Travel.h"
using namespace std;

int main()
{
    Travel London = { "London", 2634, 13, 5, 2022, 17.45, 3, "Three meals a day" };
    London.print();

    Travel Paris = { "Paris", 883, 21, 7, 2022, 13.00, 2, "Three meals a day" };
    Paris.print();

    Travel Berlin = { "Berlin", 573, 19, 3, 2022, 6.10, 1, "Not included" };
    Berlin.print();

    Travel Vienna = { "Vienna", 4000, 9, 15, 2022, 18.34, 4, "Lunch"};
    Vienna.print();

    return 0;
}

