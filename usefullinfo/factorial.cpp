//factorial 
#include <iostream> 
using namespace std; 
 
int factorial(int n)  
{ 
 cout << "\nHi factorial. I want to find " << n << "!\n"; 
 if (n == 1)  
 { 
  return 1; 
 } 
 int result = n * factorial(n - 1); 
 cout << "Hi factorial. I want to find " << n << "!. Now i have that " << n << "! = " << result << endl; 
 return result; 
} 
 
int main() 
{ 
 while (true) 
 { 
  int n; 
  cin >> n; 
  cout << n << "!=" << factorial(n) << endl; 
 } 
}