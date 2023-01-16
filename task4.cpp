# include <iostream>
 using namespace std;
float totalCharges(char service , int minutes ,char time );
main()
{
    char service;
    
    int minutes;
    float charges;
    char time;
    float result;
    cout<< "Enter which type of customer you are (Residental or Premium) select (r/p) : ";
    cin >> service;
    cout<< "(Press 'D' for day time or press 'N' for night time ) call :";
    cin>> time;
    cout<< "Enter number of mins you used the service :";
    cin >> minutes;
    result = totalCharges(service , minutes, time);
    cout <<  "charges are " << result << "$";
}
float totalCharges(char service , int minutes ,char time )
{ 
    float totalmin;
    float charges;
    if (service == 'r')
    {
        if (minutes > 50)
        {
            totalmin = minutes -50;
            charges = totalmin * 0.20;
            charges = charges + 10.0;
        }
        else 
            charges = 10;
    }
   if (service == 'p')
   {
        if (time == 'D')
        {
            if (minutes >= 75)
            {
                totalmin = minutes - 75;
                charges = totalmin * 0.10;
                charges = charges + 25;
            }
            else
                charges = 25 ;
        }
        else if (time == 'N' )
        {
            if (minutes >= 100 )
            {
                totalmin = minutes - 100;
                charges = totalmin * 0.05;
                charges = charges + 25;
            }
            else
            {
                charges = 25;
            }
        }
   }

return charges;


}

