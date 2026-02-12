#include <iostream>

using namespace std;

int main()
{
	int firstlength, firstwidth, secondlength, secondwidth, area1, area2;
    cout << "Enter the units of length and width of one rectangle." << endl;
    cin >> firstlength;
    cin >> firstwidth;
    cout << "Enter the length and width of another rectangle." << endl;
    cin >> secondlength;
    cin >> secondwidth;
    area1 = firstlength * firstwidth;
    area2 = secondlength * secondwidth;

    if (area1 > area2)
    {
        cout << "The area of the first rectangle is greater than the area of the second rectangle." << endl;
    }
    else if (area1 < area2)
    {
        cout << "The area of the second rectangle is greater than the area of the first rectangle." << endl;
    }
    else if (area1 = area2)
    {
        cout << "The area of the two rectangles are equal." << endl;
    }

    return 0;
}
