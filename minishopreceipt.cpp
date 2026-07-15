#include <iostream>
using namespace std;

int main()
                {
    //The variable declaration for the input 
string itemName;      //the name of the item purchased
double itemPrice;    // the price of the item purchased
int itemQuantity;   //  the quantity of item purchased
double vatRate = 0.12 ;
    //The input of the receipt
        cout << "Enter the name of the item: " ;
            cin >> itemName;
    
        cout << "Enter price of the item: " ;
            cin >> itemPrice;

        cout << "Enter quantity of item: " ;
            cin >> itemQuantity;
        cout << endl;    

    //The varaible declaration for the calculations
double subTotal = itemPrice * itemQuantity;
double vat = vatRate * subTotal;
double finalTotal = subTotal + vat;

    //Output and calculations for the item purchased
    
        cout <<"====MINI SHOP RECEIPT====\n\n";
        cout << "Item Name: "<< itemName << endl;
        cout << "Price of Item: "<< itemPrice << endl;
        cout << "Number of purchased items: "<< itemQuantity << endl;
        cout << "Subtotal Price of Item: " << subTotal << endl;
        cout << "Value Added Tax paid: " << vat << endl;
        cout << "Total amount Paid: " << finalTotal << endl;
return 0;
                }