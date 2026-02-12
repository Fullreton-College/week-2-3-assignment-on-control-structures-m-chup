#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double quantity, finalprice;

    cout << "The retail price for the package is $199." << endl;
    cout << "Enter the number of packages ordered." << endl;
    cin >> quantity;
    cout << fixed << setprecision(2);

    if (quantity < 10)
    {
        cout << "The discount on that number of packages is 0%." << endl;
        finalprice = 199;
    }
    if ((quantity >= 10) && (quantity <= 19))
    {
        cout << "The discount on that number of packages is 20%." << endl;
        finalprice = 199 - (199 * 0.2);
    }
    if ((quantity >= 20) && (quantity <= 40))
    {
        cout << "The discount on that number of packages is 30%." << endl;
        finalprice = 199 - (199 * 0.3);
    }
    if ((quantity >= 50) && (quantity <= 99))
    {
        cout << "The discount on that number of packages is 40%." << endl;
        finalprice = 199 - (199 * 0.4);
    }
    if (quantity >= 100)
    {
        cout << "The discount on that number of packages is 50%." << endl;
        finalprice = 199 - (199 * 0.5);
    }

    cout << "The total price of the purchase is $" << finalprice << "." << endl;

    return 0;
}
