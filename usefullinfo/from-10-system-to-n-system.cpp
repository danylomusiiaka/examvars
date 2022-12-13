//from 10 system to n-system 
#include <iostream> 
#include <string> 
using namespace std; 
 
int main() 
{ 
    string digits = "0123456789ABCDEF"; 
    while (true) 
    { 
        long n; 
        int k;//system 
        cin >> n; 
        cin >> k; 
        string result = ""; 
        while (n >= k) 
        { 
            int d_i = n % k; 
            result = result + digits[d_i]; 
            n = (n - d_i) / k; 
        } 
        result = result + digits[n]; 
        auto size = result.length(); 
        for (size_t i = 0; i < size; i++) 
        { 
            cout << result[size - i - 1]; 
        } 
        cout << endl; 
    } 
}