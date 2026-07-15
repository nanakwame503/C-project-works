#include <iostream>
#include <string>
#include <limits>
#include <cctype>
using namespace std;

            float fetchGP(string grade)
            {
                if (grade == "A") return 4.00;
                if (grade == "A-") return 3.75;
                if (grade == "B+") return 3.50;
                if (grade == "B") return 3.25;
                if (grade == "B-") return 3.00;
                if (grade == "C+") return 2.75;
                if (grade == "C") return 2.50;
                if (grade == "C-") return 2.00;
                if (grade == "D") return 1.50;
                if (grade == "F") return 0.00;        
                
                return 0;
 }

 float fetchGP2(string grade2)
 {
    if (grade2 == "A") return 4.00;
    if (grade2 == "B+") return 3.50;
    if (grade2 == "B") return 3.00;
    if (grade2 == "C+") return 2.50;
    if (grade2 == "C") return 2.00;
    if (grade2 == "D+") return 1.50;
    if (grade2 == "D") return 1.00;
    if (grade2 == "E") return 0.50;
    if (grade2 == "F") return 0.00;

    return 0;
 }


int main(void)
{
    string fullName, courseList;
    int userUni;
    
    cout << "Enter your full name:" << endl;
    getline(cin, fullName);
        for (auto& n : fullName) n = toupper(n);

    cout << "\n1. Ghana Communication Technology University." << endl;
    cout << "2. University of Ghana." << endl;
    
   
    do
    {
     cout << "\nChoose from the list your University (1 or 2):" << endl;
      cin >> userUni;

        if (cin.fail())// incase the user chooses to input anything apart from the required input which is an integer
        {
            cin.clear(); //this clears the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nIncorrect choice, please click 1 or 2 to choose your university" << endl;
        }
        
        else if (userUni < 1 || userUni > 2)
        {
            cout << "Incorrect choice, please click 1 or 2 to choose your university" << endl;
        }
        
    } while (userUni < 1 || userUni > 2);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string programme;
    cout << "\nEnter your programme: " << endl;
    getline(cin, programme);
    for (auto& p : programme) p = toupper(p);
    

    string courseName, grade, grade2;
    int numCourse, creditHours, totalCH = 0;
    float totalGP = 0;

    switch (userUni)
    {
    case 1:

        do
        {
        cout << "\nEnter the number of courses you study: " << endl;
        cin >> numCourse;  
        
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Incorrect number of courses. Try Again! " << endl;
        }
        else if (numCourse <= 0 )
        {
            cout << "\nIncorrect number of course. Try Again! " << endl;
        }
        
        } while (numCourse <= 0 );
         cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 1; i <= numCourse; i++)
        {
            cout << " \nCOURSE " << i << endl;

            cout << "\nEnter your course name: " << endl;
            getline(cin, courseName);
                for (auto& c : courseName) c = toupper(c);

            cout  << "\nEnter your credit hours: " << endl;
            cin >> creditHours;

            cout << "\nEnter your Grade" << endl;
            cin >> grade;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                for (auto& g : grade) g = toupper(g);

            float gradePoint = fetchGP(grade);

            totalGP = totalGP + (creditHours * gradePoint);
            totalCH = totalCH + creditHours; 

            courseList += "COURSE NAME: " + courseName + 
                          " | CREDIT HOURS: " + to_string(creditHours) + 
                          " | GRADE: " + grade + "\n";

           
        }

        cout << "\n----STUDENT PROFILE-----" << endl;
        cout << "NAME: " << fullName << endl;
        cout << "UNIVERSITY: GHANA COMMUNICATION TECHNOLOGY UNIVERSITY" << endl;
        cout << "PROGRAMME OF STUDY: " << programme << endl;
        cout << "\n ----CGPA CALCULATOR----" << endl;
        cout << courseList;
        cout << "\nCGPA: " << (totalGP/totalCH) << endl;
        
        if ((totalGP/totalCH) >= 3.60 )
        {
            cout << "\nDEGREE CLASS: FIRST CLASS HONOURS" << endl;
        }
        else if ((totalGP/totalCH) >= 3.00 )
        {
            cout << "\nDEGREE CLASS: SECOND CLASS UPPER HONOURS" << endl;
        }
        else if ((totalGP/totalCH) >= 2.50)
        {
            cout << "\nDEGREE CLASS: SECOND CLASS LOWER HONOURS" << endl;
        }
        else if ((totalGP/totalCH) >= 2.00)
        {
            cout << "\nDEGREE CLASS: THIRD CLASS HONOURS" << endl;
        }
        else if ((totalGP/totalCH) >= 1.50)
        {
            cout << "\nDEGREE CLASS: PASS" << endl;
        }
        else if ((totalGP/totalCH) < 1.50)
        {
            cout << "\nDEGREE CLASS: FAIL" << endl;
        }
        


        break;

    case 2:
        do
        {
        cout << "\nEnter the number of courses you study: " << endl;
        cin >> numCourse;  
        
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Incorrect number of courses. Try Again! " << endl;
        }
        else if (numCourse <= 0 )
        {
            cout << "\nIncorrect number of course. Try Again! " << endl;
        }
        
        } while (numCourse <= 0 );
         
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 1; i <= numCourse; i++)
        {
            cout << " \nCOURSE " << i << endl;

            cout << "\nEnter your course name: " << endl;
            getline(cin, courseName);
                for (auto& c : courseName) c = toupper(c);

            do{
            cout  << "\nEnter your credit hours: " << endl;
            cin >> creditHours;

                if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Incorrect credit hours. Try Again! " << endl;
        }
        else if (creditHours <= 0 )
        {
            cout << "\nIncorrect credit hours. Try Again! " << endl;
        }
        
        } while (creditHours <= 0 );


            cout << "\nEnter your Grade" << endl;
            cin >> grade2;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                for (auto& g : grade2) g = toupper(g);

            float gradePoint = fetchGP2(grade2);

            totalGP = totalGP + (creditHours * gradePoint);
            totalCH = totalCH + creditHours; 

            courseList += "COURSE NAME: " + courseName + 
                          " | CREDIT HOURS: " + to_string(creditHours) + 
                          " | GRADE: " + grade2 + "\n";

           
        }

        cout << "\n----STUDENT PROFILE-----" << endl;
        cout << "NAME: " << fullName << endl;
        cout << "UNIVERSITY: UNIVERSITY OF GHANA" << endl;
        cout << "PROGRAMME OF STUDY: " << programme << endl;
        cout << "\n ----CGPA CALCULATOR----" << endl;
        cout << courseList;
        cout << "\nCGPA: " << (totalGP/totalCH) << endl;

        if ((totalGP/totalCH) >= 3.60)
        {
            cout << "\nDEGREE CLASS: FIRST CLASS HONOURS" << endl;
        }
        else if((totalGP/totalCH) >= 3.00)
        {
            cout << "\nDEGREE CLASS: SECOND CLASS, UPPER DIVISION" << endl;
        }
        else if ((totalGP/totalCH) >= 2.00)
        {
            cout << "\nDEGREE CLASS: SECOND CLASS, LOWER DIVISION" << endl;
        }
        else if ((totalGP/totalCH) >= 1.50)
        {
            cout << "\nDEGREE CLASS: THIRD CLASS HONOURS" << endl;
        }
        else if ((totalGP/totalCH) >= 1.00)
        {
            cout << "\nDEGREE CLASS: PASS " << endl;
        }
        else if ((totalGP/totalCH) < 1.00)
        {
         cout << "\nDEGREE CLASS: FAIL " << endl;
        }
        
    break;
    
    default:
        cout << "Error!" << endl;
    break;    
    }
    cout << "\nHit the enter key to continue ";
    cin.ignore();
    cin.get();
}