#include <iostream>
using namespace std;

int main(void)
{
int numberAge = 10, ages[numberAge], sum;
    cout << "input your ages: " << endl;
for (int i = 1; i < numberAge; i++)
{
    cin >> ages[i];
    sum += ages[i];
}
double average = sum / numberAge;
cout << "the average is " << average << endl;
cout << "the lowest age is " << min(ages);
}