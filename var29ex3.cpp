#include <iostream>
#include <string>
using namespace std;
int main() {
    int result = 0;
    string pArray[5];
    string words;
    cout << "Enter words:" << endl;
    for (int i = 0; i < 5; i++)
    {
        getline(cin, words);
        pArray[i] = words;
    }
    for (size_t i = 0; i < 5; i++)
    {
        cout << pArray[i].length() << " ";
    }
    for (size_t i = 0; i <= 5; i+=2)
    {
        result += pArray[i].length();
    }
    
    cout << "result: " << result << endl;

}