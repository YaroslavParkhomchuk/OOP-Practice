#pragma once
#include <iostream>
#include <string>
#include <locale>
using namespace std;

class Travel
{
public:
    Travel() {};

    Travel(const char valTour[], double valCost, int valDateOfDay, int valDateOfMonth, int valDateOfYear, 
        double valDateOfTime, int valNumOfPeople, const char valFood[])
    {
        setTour(valTour);
        cost = valCost;
        dateOfDay = valDateOfDay;
        dateOfMonth = valDateOfMonth;
        dateOfYear = valDateOfYear;
        dateOfTime = valDateOfTime;
        numOfPeople = valNumOfPeople;
        setFood(valFood);
    };

    char getTour() const;
    double getCost() const;
    int getDateOfDay() const;
    int getDateOfMonth() const;
    int getDateOfYear() const;
    double getDateOfTime() const;
    int getNumOfPeople() const;
    char getFood() const;
    
    void setTour(const char valTour[]);
    void setCost(double valCost);
    void setDateOfDay(int valDateOfDay);
    void setDateOfMonth(int valDateOfMonth);
    void setDateOfYear(int valDateOfYear);
    void setDateOfTime(double valDateOfTime);
    void setNumOfPeople(int valNumOfPeople);
    void setFood(const char valFood[]);

    void print(); 

    ~Travel() {}

private:
    char tour[100];
    double cost;
    int dateOfDay;
    int dateOfMonth;
    int dateOfYear;
    double dateOfTime;
    int numOfPeople;
    char food[100];
};