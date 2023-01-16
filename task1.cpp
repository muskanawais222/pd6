# include <iostream>
using namespace std;
main()
{
 string temperature , humidity , activity;
 cout<< "Enter temperature : ";
 cin>> temperature;
 cout<< "Enter humidity: ";
 cin>> humidity;
 if (temperature == "warm")
  {
    if (humidity == "dry")
    {
        activity = " play tennis";
        cout << activity;
    }
  }
 if ( temperature == "warm" && humidity == "humid")
    {
     activity = "Swim";
     cout << activity;
    }
  
  if (temperature == "cold")
  {
    if (humidity == "dry")
    {
    activity = "play basketball ";
    cout << activity;
  }
  else if (humidity == "humid")
  {
  activity = "watch tv";
  cout<< activity;
  }
  }

}
