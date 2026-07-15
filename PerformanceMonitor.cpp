#include <iostream>
#include <string>
using namespace std;

int main()
{
            //Status of machine
    string deviceName; //name of the machine

float cpuTemp;    //temperature in degree celsius

float ramUsage;  // storage in gigabytes

            //The name of the device displayed
    cout << "What device do you use: " << endl;
        getline(cin, deviceName); 

            //The temperature of device displayed
    cout << "Enter the temperature of the device: " << endl;
       cin >> cpuTemp;
        
            //The storage of the device displayed
    cout << "Enter the storage of the device: " << endl;
        cin >> ramUsage;
    cout << endl;    

            //Performance Tracking
float newTemp = 1.1 * cpuTemp;         //Increasing temperature by 10%
float newStorage = ramUsage - 2.3;    //Decreasing by 2.3GB
    
        
            //Previous Status of the Machine 
    cout << "Name of device: " << deviceName << endl;     
    cout << "CPU temperature: " << cpuTemp <<"C"<< endl;
    cout << "RAM space: " << ramUsage <<"GB\n\n";
    
            //New Values for the performance
    cout << "------------------CURRENT STATUS OF THE DEVICE----------------------" <<endl;
    cout << "Current CPU temperature: " << newTemp << "C" << endl;

    cout << "Current storage: " << newStorage <<"GB" << endl;


    return 0;
}