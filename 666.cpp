#include <iostream>  
int main() {
    setlocale(0, "");
    using namespace std;
    int ost, x;
    double n1, n2, s, m, y, d;
    char z;
    cout << "Введите знак:" << endl;
    cin >> z;
    cout << "Введите первое число:" << endl;
    cin >> n1;
    cout << "Введите второе число:" << endl;
    cin >> n2;
    if (z == '+') {
        s = n1 + n2;
        cout << "Результат: " << n1 << "+" << n2 << "=" << s;
    }
    else if (z == '-') {
        m = n1 - n2;
        cout << "Результат: " << n1 << "-" << n2 << "=" << m;
    }
    else if (z == '*') {
        y = n1 * n2;
        cout << "Результат: " << n1 << "*" << n2 << "=" << y;
    }
    else if (n1 == 0 or n2 == 0) {
        cout << "На 0 делить нельзя!";
    }
    else if (z == '/') {
        d = n1 / n2;
        cout << "Результат: " << n1 << "/" << n2 << "=" << d;
    }
    else if (z == '%') {
        x = n1 / n2;            
        ost = n1 - x * n2;
        cout << "Результат: " << n1 << "%" << n2 << "=" << ost;
    }
}
