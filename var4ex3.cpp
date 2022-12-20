#include <iostream>
using namespace std;
int main() {
    int n; 
    cout << "Enter n: ";
    cin >> n;
     
    int** pArray; 
    pArray = new int*[n]; 
 
    for (int i = 0; i < n; i++) 
    { 
        pArray[i] = new int[n]; 
    } 
    
    cout << "Enter elements of matrix:" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> pArray[i][j];
        }
        
    }
    
    int max = pArray[0][0];
    int min = pArray[0][0];
    int minindex = 0;
    int maxindex = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (pArray[i][j]>max)
            {
                max = pArray[i][j];
                maxindex = j;
            }
            if (pArray[i][j]<min)
            {
                min = pArray[i][j];
                minindex = j;
            }
            
        }
        
    }
    
    cout << "Max: " << max << " " << "Min: " << min << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            swap(pArray[i][maxindex], pArray[i][minindex]);
        }
        
    }
    
    cout << "Swaped matrix:" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << pArray[i][j] << " ";
        }
        cout << endl;
    }
    
}