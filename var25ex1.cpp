/*Задано ціле додатне число n. Визначити різницю між сумою і добутком цифр,
з яких складається запис заданого число*/

#include <iostream>
using namespace std;
int main () {
    int a = 0;
    while (a = 1) {
    int n; 
    cout << "Enter >0 number: ";
    cin >> n;
    if (n<=0) {
        cout << "Invalid number" << endl;
        return 0;
    }
    int firstNum = n/10;
    int secondNum = n%10;
    int result = (firstNum + secondNum) - (firstNum * secondNum);
    cout << "result: " << result << endl;
    }
}