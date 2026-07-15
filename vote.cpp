#include <iostream>
using namespace std;

int main(void)
{
   char citizen;
   char age;

   cout << "Are you a ghanaian?(Y/N) " << endl;
   cin >> citizen;

   citizen = toupper(citizen);
   

   switch (citizen)
   {
   case 'Y':
      cout << "good!" << endl;
      cout << "\nAre you 18 years old or above?(Y/N) " << endl;
      cin >> age;
      age = toupper(age);
   switch (age)
   {
   case 'Y':
      cout << "\nYou are allowed to vote." << endl;
      break;
   case 'N':
      cout << "\nYou are not allowed to vote." << endl;
      break;   
   
   default: cout << "error in age!" << endl;
      break;
   }
   break;

   
   case 'N':
      cout << "\nyoure not allowed to vote." << endl;
      break;
   default: cout << "error!" ;
      break;
   }

   cout << "\nhit the enter to continue";
   cin.ignore();
   cin.get();
}