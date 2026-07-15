#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main(void)
{
    string uniName[2] = {"Ghana Communication Technology University", "University of Ghana"}, fullName;
    int userChoice;
    float gctuGrade[10] = {0, 1.50, 2.00, 2.50, 2.75, 3.00, 3.25, 3.50, 3.75, 4.00},
     legonGrade[9] = {0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0}; 


    cout << "Enter your full name: " << endl;
    getline(cin, fullName);

    do
    {
    cout << "\n1. " << uniName[0] << endl;
    cout << "2. " << uniName[1] << endl;
    cout << "\nChoose your university from the options above (1 or 2) " << endl;
    cin >> userChoice;

    if (cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nIncorrect choice, try again!" << endl;
    }
    else if(userChoice < 1 || userChoice > 2 )   
    {
        cout << "\nIncorrect choice, try again!" << endl;
    } 
    } while (userChoice < 1 || userChoice > 2);
    
    int courseNum, totalCH, scores;
    string courseName;
    float totalGP;

    switch (userChoice)
    {
    case 1:
        do
    {
    cout << "\nEnter the number of courses you study: " << endl;
        cin >> courseNum;
    
    if (cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nIncorrect choice, try again!" << endl;
    }
    else if(courseNum <= 0 )   
    {
        cout << "\nIncorrect choice, try again!" << endl;
    } 
    } while (courseNum <= 0 );
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 1; i <= courseNum; i++)
        {
            cout << "\nCOURSE " << i << endl;

            cout << "\nCourse Name: " << endl;
            getline(cin, courseName);

            cout << "\nEnter your score (0-100): "<< endl;
            cin >> scores;

            if (scores >= 80) return 4.00;
            else if (scores >= 75) return 3.75;
            else if (scores >= 70) return 3.50;
            else if (scores >= 65) return 3.25;
            else if (scores >= 60) return 3.00;
            else if (scores >= 55) return 2.75;
            else if (scores >= 50) return 2.50;
            else if (scores >= 45) return 2.00;
            else if (scores >= 40) return 1.50;
            else return 0.00 ;

        }
        
        break;
    
    default:
        break;
    }
    
    
}