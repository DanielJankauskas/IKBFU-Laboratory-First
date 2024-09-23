#include <iostream>
using namespace std; 

int main()
{
    setlocale(LC_CTYPE, "Rus");
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int i;
    cout << "Enter the bit number (from 0 to 31): ";
    cin >> i;

    cout << "Before changing: " << number << endl;

    int mask = ~(1 << i); 
    int result = number & mask; 

    cout << "After changing: " << result << endl;
}
