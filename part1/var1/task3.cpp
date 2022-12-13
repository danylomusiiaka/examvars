//part2 var1 task3 
#include <iostream> 
#include <functional> 
#include <cmath>
using namespace std; 
 
double F1(double n) 
{ 
 return sin(n) + 1; 
} 
 
double F2(double n) 
{ 
 return n * n; 
} 
 
double F3(double n) 
{ 
 return cos(n)*cos(n) - 0.5; 
} 
 
double Summa(double* pArray, int size, function<double(double)> func) 
{ 
 auto result = 0; 
 for (size_t i = 0; i < size; i++) 
 { 
  result = result + func(pArray[i]); 
 } 
 return result; 
} 
 
void EnterArray(double* pArray, int size) 
{ 
 for (size_t i = 0; i < size; i++) 
 { 
  cin >> pArray[i]; 
 } 
} 
 
int main() 
{ 
 int n = 2; 
 double* a = new double[n]; 
 double* b = new double[n]; 
 double* c = new double[n]; 
 EnterArray(a, n); 
 EnterArray(b, n); 
 EnterArray(c, n); 
 
 auto s = Summa(b, n, F2); 
 
 if (sqrt(s) > 1) 
 { 
  cout << Summa(a, n, F1); 
 } 
 else { 
  cout << Summa(c, n, F3); 
 }  
}