#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PlanA = 39.99, PlanB = 59.99, PlanC = 79.99;
    const double extraGB = 8, dataA = 2, dataB = 8;
    string customerName;
    char planPurchased;
    double GBused, totalA, totalB, totalC, savingsB, savingsC;
    cout << fixed << setprecision(2);

    cout << "Enter customer name: ";
    cin >> customerName;
    cout << "Enter which plan was purchased - A, B, or C: ";
    cin >> planPurchased;
    cout << "Enter the amount of GB used: ";
    cin >> GBused;

    if (GBused <= 2)
    {
        totalA = PlanA;
    }
    else if (GBused > 2)
    {
        totalA = PlanA + (8 * (GBused - dataA));
    }
    if (GBused <= 8)
    {
        totalB = PlanB;
    }
    else if (GBused > 8)
    {
        totalB = PlanB + (8 * (GBused - dataB));
    }
    totalC = PlanC;
    savingsB = totalA - totalB;
    savingsC = totalA - totalC;

    switch (planPurchased)
    {
        case 'A':
            cout << "The bill for " << customerName << " with Plan " << planPurchased << " is $" << totalA << "." << endl;
            if (totalA > totalB)
                cout << "With Plan B, the savings are $" << savingsB << "." << endl;
            if (totalA > totalC)
                cout << "With Plan C, the savings are $" << savingsC << "." << endl;
            break;
        case 'B':
            cout << "The bill for " << customerName << " with Plan " << planPurchased << " is $" << totalB << "." << endl;
            if (totalB > totalC)
                cout << "With Plan C, the savings are $" << savingsC << "." << endl;
            break;
        case 'C':
            cout << "The bill for " << customerName << " with Plan " << planPurchased << " is $" << totalC << "." << endl;
            break;
        default:
            cout << "Error: Invalid plan entered." << endl;
            cout << "Please run the program again." << endl;
    }
    
    return 0;
}
