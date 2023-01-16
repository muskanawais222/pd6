#include <iostream>
using namespace std;

main()
{
    string month;
    int days;
    float studio;
    float apartment;
    cout << "Enter the month (May , June , July , August , september or october)";
    cin >> month;
    cout << "Enter the number of stay :";
    cin >> days;

    if (month == "May" || month == "October")
    {
        studio = 50 * days;
        apartment = 65 * days;
        if (days > 7 && days <= 14)
            studio = studio - (studio * 0.05);
        if (days > 14)
        {
            studio = studio - (studio * 0.30);
            apartment = apartment - (apartment * 0.10);
        }
    }
    if (month == "June" || month == "September")
    {
        studio = 75.20 * days;
        apartment = 68.70 * days;
        if (days > 14)
        {
            studio = studio - (studio * 20 / 100);
            apartment = apartment - (apartment * 0.10);
        }
    }
    if (month == "July" || month == "August")
    {
        studio = 76 * days;
        apartment = 77 * days;
        if (days > 14)
            apartment = apartment - (apartment * 0.10);
    }

    cout << "studio = " << studio << "$" << endl;
    cout << "Apartment = " << apartment << "$";
}