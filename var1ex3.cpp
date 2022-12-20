#include <iostream>
#include <string>
using namespace std;
int main () {
  string *arr;
  int n; int count = 0;
  cout << "Enter number of strings: ";
  cin >> n;
  string s;
  arr = new string[n+1];
  
  for (size_t i = 0; i < n+1; i++)
    {
      getline(cin, s);
      arr[i] = s;
    }
    for (size_t i = 0; i < n+1; i++)
    {
     if (arr[i][0] == 'd' || arr[i][0] == 'b'){
       arr[i] = "";
        count++;
      }
    }
    for (size_t i = 0; i < n+1; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Strings deleted: " << count;
    
    
    

  
  

}