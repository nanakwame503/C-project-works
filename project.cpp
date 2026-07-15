#include <iostream>
#include <string> 
using namespace std;

int main (void){
    //a. 6 declarations and variables initialization
    string fullName = "Vicentia Addor";
    int studentAge = 19; 
    char studentGrade = 'A';
    bool isFulltime = true ;
    double studentFee = 1234.67;
    float studentGPA = 3.9;

    //b. three integral data types variables
    short smallNumber = 12;
    long bigNumber = 1000000;
    const int maxScore = 100;

    //c. 5 different mixed expressions calculations 
    double weightedScore = studentGPA * 25.0;
    double remainingBalance = studentFee - (maxScore * 50);
    float averageMix = (float)(smallNumber + maxScore) / 2;
    bool passedCourse = (studentGPA > 2.0);
    int totalUnits = smallNumber + (int)bigNumber % 10;

    // Total Output
    cout << "--- Variables ---" << endl;

    cout << "Name: " << fullName << endl;    
    cout << "Age: " << studentAge << endl;
    cout << "GPA: " << studentGPA << endl;
    cout << "Balance: " << studentFee << endl;
    cout << "Grade: " << studentGrade << endl;
    cout << "Is student full-time: " << boolalpha << isFulltime << endl;
    

    cout << "\n--- Integral Variables ---" << endl;
    cout << "Small: " << smallNumber << endl;
    cout << "Big: " << bigNumber << endl;
    cout << "Max Score (const): " << maxScore << endl;

    cout << "\n--- Mixed Calculations ---" << endl;
    cout << "Weighted Score: " << weightedScore << endl;
    cout << "Total Units: " << totalUnits << endl;
    cout << "Remaining Balance: " << remainingBalance << endl;
    cout << "Average Mix: " << averageMix << endl;
    cout << "Passed Course: " << passedCourse << endl;

}