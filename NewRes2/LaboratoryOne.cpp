#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Rus");
    double a; double b;
    cout << "Введите катеты: A, B" << endl;
    cin >> a;
    cin >> b;
    double c = sqrt(pow(a, 2.0) + pow(b, 2.0));
    cout << "Гипотенуза равна: " << c << endl;
    return 0; 
}
