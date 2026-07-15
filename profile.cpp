#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(void)
{
 //Declaration of the variables
    string fullName;
    int age;
    char gender;
    int studentID;
    bool fullPart;
    char fullTime;
    float grade1, grade2, grade3, grade4;
    double gpa;

    //The input of students details
    cout << "=====THE STUDENTS PROFILE======";
    cout <<"\n";

    cout << "Name: ";
    getline(cin, fullName);

    cout << "Age: ";
    cin >> age;

    cout <<"Gender (M/F): ";
    cin >> gender;
    gender = toupper(gender);

    cout <<"Index Number: ";
    cin >> studentID;

    cout <<"Are you a full time student(Y/N): ";
    cin >> fullTime;
    fullPart = (fullTime == 'Y' || fullTime == 'y');

    //=====GRADING SYSTEM OF VARIOUS STUDENTS======
    cout <<"\nGrade for the four courses(out of 100)" << endl ;

        cout << "1st course: ";
    cin >> grade1;
        cout << "2nd course: ";
    cin >> grade2;
        cout << "3rd course: ";
    cin >> grade3;
        cout << "4th course: ";
    cin >> grade4;

    auto gradeToPoints = [](float grade) -> float {
        if (grade >= 90) return 4.0f;
        else if (grade >= 80) return 3.0f;
        else if (grade >= 70) return 2.0f;
        else if (grade >= 60) return 1.0f;
        else return 0.0f;
    };

    float totalgradepoints = gradeToPoints(grade1) + gradeToPoints(grade2) + gradeToPoints(grade3)
    + gradeToPoints(grade4);

    gpa = totalgradepoints / 4.0 ; //calculating the gpa of the four courses

    cout <<"---------------------------------------" << endl;
    cout <<"        THE STUDENT PROFILE            "<< endl;
    cout <<"---------------------------------------" << endl;

    cout << "Name: "<< fullName  << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Index Number: " << studentID << endl;
    cout << "Status: " << (fullPart ? "Full Time" : "Part Time") << endl;

    cout << "\n GRADES" << endl;
    cout << "Course 1: " << grade1 << endl;
    cout << "Course 2: " << grade2 << endl;
    cout << "Course 3: " << grade3 << endl;
    cout << "Course 4: " << grade4 << endl;

    cout << "\n GPA" << endl;
    cout  << "GPA: " << gpa << endl;

    if (gpa == 4.0)
      cout << "Remark: First Class" << endl;
    else if (gpa >= 3.0)
      cout << "Remark: Second Class" << endl;
    else if (gpa >= 2.0)
       cout << "Remark: Third Class" << endl;
    else if (gpa == 1.0)
       cout << "Remark: Fourth Class" << endl;
    else
       cout << "Remark: Wasnt Available" << endl;

       cout << "\nHit the enter key to continue";
       cin.ignore();
       cin.get();
}
  