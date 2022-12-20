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
    cout << "Main d: ";
    for (size_t i = 0; i < n; i++)
    {
        cout << pArray[i][i] << " ";
    }
    cout << endl;
    int min = pArray[0][0];
    int indexmini = 0;
    int indexminj = 0;
    for (size_t i = 0; i < n; i++)
    {
        if(pArray[i][i]<min){
            min = pArray[i][i];
            indexminj = i;
            indexmini = i;
        }
            
    }

        
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = 0; j < n-1; j++)
        {
            if(pArray[i][j]<min){
            min = pArray[i][j];
            indexminj = j;
            indexmini = i;
        }
        }
        
    } 
    cout << "Min: " << min << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
           pArray[indexmini][indexminj] = 0;
           cout << pArray[i][j] << " ";
        }
        cout << endl;
    }
         

}
