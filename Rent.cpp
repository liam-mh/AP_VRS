#define SPACE cout << "" << endl;
#include "Rent.h"

#include <iomanip>
#include <iostream>
using namespace std;

// Customer
Rent::Customer::Customer()
{}

Rent::Customer::Customer(string name, string address, string number)
    : name(name), address(address), number(number)
{}

Rent::Customer::~Customer()
{}

void Rent::Customer::displayCustomer()
{
    cout << "-- Customer Details --" << endl;
    /*cout << left << setw(20) << "Name: "         << left << setw(20) << getName() << endl;
    cout << left << setw(20) << "Address: "      << left << setw(20) << getAddress() << endl;
    cout << left << setw(20) << "Number: "       << left << setw(20) << getNumber() << endl;*/
    cout << left << setw(20) << "Name: "         << left << setw(20) << name << endl;
    cout << left << setw(20) << "Address: "      << left << setw(20) << address << endl;
    cout << left << setw(20) << "Number: "       << left << setw(20) << number << endl;
}

// Rent
Rent::Rent(string registration, int rentNum, int daysRented, double periodCost, string startDate, string endDate, string name, string address, string number)
    : registration(registration), rentNum(rentNum), daysRented(daysRented), periodCost(periodCost), startDate(startDate), endDate(endDate)
{
    customer = new Customer(name, address, number);
}

Rent::~Rent()
{}


void Rent::displayRent(int totalRents)
{
    cout << left << setw(20) << "Rental number: " << getRentNum() << " of " << totalRents << endl;
    cout << left << setw(20) << "Date from: "     << getStartDate() << endl;
    cout << left << setw(20) << "Date to: "       << getEndDate() << endl;
    cout << left << setw(20) << "Rental days: "   << getDaysRented() << endl;
    cout << left << setw(20) << "Total cost: "    << "\x9C" << getPeriodCost() << endl;
    customer->displayCustomer();
}