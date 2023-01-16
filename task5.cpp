#include <iostream>
using namespace std;
float price(string fruit, string day, float quantity);
main()
{
    float quantity;
    string fruit, day;
    float totalPrice;
    cout << "Enter name of fruit: ";
    cin >> fruit;
    cout << "Enter the day :";
    cin >> day;
    cout << "Enter quantity :";
    cin >> quantity;
    totalPrice = price(fruit, day, quantity);
    cout << "Total price is :" << totalPrice;
}
float price(string fruit, string day, float quantity)
{
    float totalPrice;
    if  ((day == "monday") || (day == "tuesday") || (day == "wednesday") || (day == "thursday") || (day == "friday"))
    
    {
        if(fruit == "banana")
     {
        totalPrice = quantity * 2.50;
     }
    if (fruit == "apple" )
    {
        totalPrice = quantity * 1.20;
    }
    if (fruit == "orange")
    {
        totalPrice = quantity * 0.85;
    }
    if (fruit == "grapefruit" )
    {
        totalPrice = quantity * 1.45;
    }
    if (fruit == "kiwi")

    {
        totalPrice = quantity * 2.70;
    }
    if (fruit == "pineapple" )
    {
        totalPrice = quantity * 5.50;
    }
    if (fruit == "grapes")
    {
        totalPrice = quantity * 3.85;
    }
    }
    if  ((day == "sunday") || (day == "saturday"))
    {
        if (fruit == "banana")
{
        totalPrice = quantity * 2.70;
    }
    if (fruit == "apple")
    {
        totalPrice = quantity * 1.25;
    }
    if (fruit == "orange")
    {
        totalPrice = quantity * 0.90;
    }
    if (fruit == "grapefruit")
    {
        totalPrice = quantity * 1.60;
    }
    if (fruit == "kiwi")
    {
        totalPrice = quantity * 3.00;
    }
    if (fruit == "pineapple" )
    {
        totalPrice = quantity * 5.60;
    }
    if (fruit == "grapes")
    {
        totalPrice = quantity * 4.20;
    }
    }
    return totalPrice;
}
