#include <iostream>
#include <string>

using namespace std;

int main()
{
        string studentName; //Variable for name of the student
        double scoreOne, scoreTwo, scoreThree; //variable for three scores of the test

    //Input to be made for the score calculation
            cout << "What is your name? ";
            getline(cin, studentName);
            cout << "Enter the three test scores: \n";
            cin >> scoreOne >> scoreTwo >> scoreThree;
            cout << endl;

    //Variable declarations for all necessary calculations
        double totalScore = scoreOne + scoreTwo + scoreThree;
        double aveScore = totalScore/3;
        double perCentage = aveScore;

            cout << "-------------STUDENT SCORE CALCULATOR-------------\n\n";
            cout << "Student Name: " << studentName << endl;
            cout << "Test scores: "<< scoreOne <<", "<<scoreTwo<<", " << scoreThree << endl;
            cout << "Total Marks: "<< totalScore <<endl;
            cout <<"Average Score: "<< aveScore <<endl;
            cout <<"Percentage: "<< perCentage <<"%" <<endl;

return 0;               

}