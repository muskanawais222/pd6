#include <iostream>
using namespace std;
string findPoint(int height, int xCoord, int yCoord);
main()
{
    int height, xCoord, yCoord;
    string output;
    cout << "Enter height : ";
    cin >> height;
    cout << "Enter X coordinate : ";
    cin >> xCoord;
    cout << "Enter Y coordinate : ";
    cin >> yCoord;
    output = findPoint(height, xCoord, yCoord);
    cout << output;
}
string findPoint(int height, int xCoord, int yCoord)
{
    int base, altitude;
    string result;
    base = height * 3;
    altitude = height * 4;
    if ((yCoord > 0 && yCoord < altitude) && (xCoord > height && xCoord < height * 2))
    {
        result = "Inside";
    }
  else  if ((xCoord > 0 && xCoord < base) && (yCoord > 0 && yCoord < height))
    {
        result = "Inside";
    }
   else if ((xCoord == 0 || xCoord == base) && (yCoord >= 0 && yCoord <= height))
    {
        result = "Border";
    }
   else if (yCoord == 0 && (xCoord >= 0 && xCoord <= base))
    {
        result = "Border";
    }
   else if (yCoord == height && (xCoord >= 0 && xCoord <= height) || (xCoord >= height * 2 && xCoord <= base))
    {
        result = "Border";
    }
   else if ((xCoord == height || xCoord == height * 2) && (yCoord >= height || yCoord <= height * 2))
    {
        result = "Border";
    }
   else if (yCoord == altitude && (xCoord >= height && xCoord <= height * 2))
    {
        result = "Border";
    }
    else
    {
        result = "Outside";
    }

    return result;
}
