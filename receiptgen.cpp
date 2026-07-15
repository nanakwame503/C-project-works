#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string customer_name;
    string item_name1, item_name2, item_name3;
    int itemQuantity1, itemQuantity2, itemQuantity3;
    double itemPrice1, itemPrice2, itemPrice3;
    bool discountApplied = false;
    const double tax = 0.15;
    const double discount_rate = 0.1;
   
        cout << "+++++++++++++++++++++++++++" << endl;
        cout << "  KODAG ENT SHOP RECEIPT   " << endl;
        cout << "+++++++++++++++++++++++++++" << endl;

        cout << "\nEnter customer name: ";
            getline(cin, customer_name);
        cout << "Name of first item: ";
            getline(cin, item_name1);
        cout << "Price of first item: ";
            cin >> itemPrice1;
        cout << "Quantity of first item: ";
            cin >> itemQuantity1;

        cout << "\nSecond Item Name: ";
            cin >> item_name2;
        cout << "Item Price: ";
            cin >> itemPrice2;
        cout << "Item Quantity: ";
            cin >> itemQuantity2;

        cout << "\nThird Item Name: ";
            cin >> item_name3;
        cout << "Item Price: ";
            cin >> itemPrice3;
        cout << " Item Quantity: ";
            cin >> itemQuantity3;
    
    double subtotal1 = itemPrice1 * itemQuantity1;
    double subtotal2 = itemPrice2 * itemQuantity2;
    double subtotal3 = itemPrice3 * itemQuantity3;
    double totalCost = subtotal1 + subtotal2 + subtotal3; 
    double discount = 0;
    if (totalCost > 500)
    {
      discountApplied = true;
      discount = totalCost * discount_rate;
    }
    double newprice1 = totalCost - discount;
    double taxIncluded = tax * newprice1;
    double newprice2 = taxIncluded + newprice1;

cout << "\n";
        cout << "+++++++++++++++++++++++++++" << endl;
        cout << "  KODAG ENT SHOP RECEIPT   " << endl;
        cout << "+++++++++++++++++++++++++++" << endl;

        cout << "Customer Name: " << customer_name << endl;
        cout << "\nFirst item Name: " << item_name1 << endl;
        cout << "Price: " << itemPrice1 << endl;
        cout << "Quantity: " << itemQuantity1 << endl;
        cout << "Total cost of " << item_name1 << ": " << subtotal1 << endl;

        cout << "\nSecond item Name: " << item_name2 << endl;
        cout << "Price: " << itemPrice2 << endl;
        cout << "Quantity: " << itemQuantity2 << endl;
        cout << "Total cost of " << item_name2 << ": " << subtotal2 << endl;

        cout << "\nThird item Name: " << item_name3 << endl;
        cout << "Price: " << itemPrice3 << endl;
        cout << "Quantity: " << itemQuantity3 << endl;
        cout << "Total cost of " << item_name3 << ": " << subtotal3 << endl;

        cout << "\n--------------------------------------------------" << endl;

        cout << "Cost of all items: " << totalCost << endl;
            if (discountApplied)
                cout << "Discount: " << discount << "(10% discount applied)" << endl;
            else
                cout << "Discount: (No discount)" << endl;
        cout << "Discounted Cost: " << newprice1 << endl;
        cout << "Tax: " << taxIncluded << endl;
        
        cout << "\nTotal Cost: " << newprice2 << endl;

        cout << "\n Hit the enter key to continue";
            cin.ignore();
            cin.get();

}