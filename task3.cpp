# include <iostream>
using namespace std;

string zodiac(int date , string month);
main()
{
    int date ;
    string month;
    string output;
    cout<< "Enter day :";
    cin >> date;
    cout<< "Enter month :";
    cin >> month;
    output = zodiac(date , month);
    cout<< "People born on this date have zodiac "<< output;
}
string zodiac(int date , string month)
{
    string sign;
    if(( date>= 21 && date<= 30 && month == "March") || (date >= 1 && date <= 19 && month == "April"))     {  
        sign = "Aries"; 
     }
     if  ((date >=20 && date <= 30 && month == "April") || (date >= 1 && date <= 20 && month == "May" ))
     {
        sign = "Taurus";
     }
      if  ((date >= 21 && date <= 30 && month == "May") || (date >= 1 && date <= 20 && month == "June" ))
     {
        sign = "Gemini";
     }
      if   ((date >= 21 && date <= 30 && month == "June") || (date >= 1 && date <= 22 && month == "July" ))
     {
        sign = "Cancer";
     }
      if   ((date >= 23 && date <= 30 && month == "July") || (date >= 1 && date <= 22 && month == "August" ))
     {
        sign = "Leo";
     }
      if   ((date >= 23 && date <= 30 && month == "August") || (date >= 1 && date <= 22 && month == "September" ))
     {
        sign = "Virgo";
     }
      if   ((date >= 23 && date <= 30 && month == "September") || (date >= 1 && date <= 22 && month == "October" ))
     {
        
        sign = "Libra";
     }
      if   ((date >= 23 && date <= 30 && month == "October") || (date >= 1 && date <= 21 && month == "November" ))
     {
       
        sign = "Scorpio";
     }
     if   ((date >= 22 && date <= 30 && month == "November") || (date >= 1 && date <= 21 && month == "December" ))

     {
        sign = "Sagittarius";
     }

       if   ((date >= 22 && date <= 30 && month == "December") || (date >= 1 && date <= 19 && month == "January" ))
     
     {
        sign = "Capricon";
     }

    if   ((date >= 20 && date <= 30 && month == "January") || (date >= 1 && date <= 18 && month == "february" ))
     {
        sign = "Aquarius";
     }

    if   ((date >= 19 && date <= 28 && month == "february") || (date >= 1 && date <= 20 && month == "March" ))
     {
        sign = "Pisces";
     }
     
     
     return sign;
}




   