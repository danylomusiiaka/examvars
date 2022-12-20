//from 10 system to n-system 
#include <iostream> 
#include <string> 
using namespace std; 
 string n_system(int number, int digit) {
    string digits = "0123456789ABCDEF"; 
    string result = "";
    while (number>0)
    {
        result += digits[ number%digit ];
        number /= digit;
    }
    return result;
    
 }
int main() 
{ 
   int n;
   int d;
   cout << "Enter n: "; cin >> n;
   cout << "Enter d: "; cin >> d;
   string result = n_system(n,d);
    cout << "Result: " << result << endl;
   return 0;
}