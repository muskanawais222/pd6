# include <iostream>
using namespace std;
main()
{
    string name;
    int marks1 , marks2 , marks3, marks4 , marks5;
    float obtainMarks;
    float totalMarks = 500;
    float percentage;
    string grade;
    cout<< "Enter name of student :";
    cin >> name;
    cout<< "Enter marks of English :";
    cin >> marks1;
    cout<< "Enter marks of Math :";
    cin >> marks2;
    cout<< "Enter marks of Chemistry :";
    cin >> marks3;
    cout<< "Enter marks of Social Science :";
    cin >> marks4;
    cout<< "Enter marks of Biology :";
    cin >> marks5;
    obtainMarks = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = (obtainMarks * 100 ) / totalMarks;
    if (percentage > 90 && percentage <= 100)
    {
        grade = "A+";
        cout << "grade is "<< grade; 
    }
        else if (percentage > 80 && percentage <= 90)
    {
        grade = "A";
        cout << "grade is "<< grade; 
    }
     else if (percentage > 70 && percentage <= 80)
    {
        grade = "B+";
        cout << "grade is "<< grade; 
    }
     else if (percentage > 60 && percentage <= 70)
    {
        grade = "B";
        cout << "grade is "<< grade; 
    }
     else if (percentage > 50 && percentage <= 60)
    {
        grade = "C";
        cout << "grade is "<< grade; 
    }
    cout<< "obtained marks are " << obtainMarks << endl;
    cout<< "Percentage is " << percentage<< endl;
    cout<<" grade is " << grade;

}   
 