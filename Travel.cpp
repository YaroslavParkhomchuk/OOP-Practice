#include <iostream>
#include "Travel.h"
using namespace std;

char Travel::getTour() const { return tour[100]; }
double Travel::getCost() const { return cost; }
int Travel::getDateOfDay() const { return dateOfDay; }
int Travel::getDateOfMonth() const { return dateOfTime; }
int Travel::getDateOfYear() const { return dateOfYear; }
double Travel::getDateOfTime() const { return dateOfTime; }
int Travel::getNumOfPeople() const { return numOfPeople; }
char Travel::getFood() const { return food[100]; }

void Travel::setTour(const char valTour[])
{
    for (int i = 0; i < 100; i++)
    {
        if (i < strlen(valTour))
        {
            this->tour[i] = valTour[i];
        }

        else
        {
            this->tour[i] = 0;
        }
    }
}

void Travel::setCost(double valCost)
{
    cost = valCost;
}

void Travel::setDateOfDay(int valDateOfDay)
{
    dateOfDay = valDateOfDay;
}

void Travel::setDateOfMonth(int valDateOfMonth)
{
    dateOfMonth = valDateOfMonth;
}

void Travel::setDateOfYear(int valDateOfYear)
{
    dateOfYear = valDateOfYear;
}

void Travel::setDateOfTime(double valDateOfTime)
{
    dateOfTime = valDateOfTime;
}

void Travel::setNumOfPeople(int valNumOfPeople)
{
    numOfPeople = valNumOfPeople;
}

void Travel::setFood(const char valFood[])
{
    for (int i = 0; i < 100; i++) 
    {
        if (i < strlen(valFood)) 
        {
            this->food[i] = valFood[i];
        }

        else 
        {
            this->food[i] = 0;
        }
    }
}

void Travel::print()
{
    cout << "Tour: " << tour << "\tPrice: " << cost << "\tDate:" << dateOfDay << '.' << dateOfMonth << '.' << dateOfYear 
        << "\tTime: " << dateOfTime << "\tNumber of people: " << numOfPeople << "\tFood: " << food;

    cout << "\n\n";
}