#include <iostream>
using namespace std;

int main(void)
{
    int input1, input2, input3, input4;
       
       cout << "Input any four numbers? " << endl;
        cin >> input1 >> input2 >> input3 >> input4; 
    
    if (input1 == input2 && input2 == input3 && input3 == input4)
    {
        cout << "the numbers are equal" << endl;
    }
else{
    int max_num = input1;
    int min_num = input1;

    

   if (input2 > max_num) max_num = input2;
   if (input3 > max_num) max_num = input3;
   if (input4 > max_num) max_num = input4;

   if (input2 < min_num) min_num = input2;
   if (input3 < min_num) min_num = input3;
   if (input4 < min_num) min_num = input4;
   

   cout << "the maximum number is, " <<max_num << endl;
   cout << "the minimum number is, "<<min_num << endl;
}   

   cout << "\nHit the enter key to continue";
   cin.ignore();
   cin.get();
}