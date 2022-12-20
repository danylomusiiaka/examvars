/*Задана дійсна квадратна матриця порядку n. Серед елементів матриці розташованих на бічній діагоналі
або нижче неї знайти мінімальний елемент і замінити його нулем. */

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
    cout << "Side d: ";
    for (size_t i = 0; i < n; i++)
    {
        cout << pArray[i][n-i-1] << " ";
    }
    cout << endl;
    int min = pArray[0][2];
    int indexmini = 0;
    int indexminj = 0;
    for (size_t i = 0; i < n; i++)
    {
        if(pArray[i][n-i-1]<=min){
            min = pArray[i][n-i-1];
            indexminj = n-i-1;
            indexmini = i;
        }
            
    }

cout << pArray[indexmini][indexminj] << endl;
    // 02 12 11 22 21 
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = n-1; j < 0; j--)
        {
            if(pArray[i][j]<min){
             cout << pArray[i][j] << endl;
            //  indexmini = i;
            //  indexminj = j;
           
         }
         }
         }
    //      cout << pArray[indexmini][indexminj] << endl; 
    // // 10 20 21
    // cout << "Min: " << min << endl;
    // for (size_t i = 0; i < n; i++)
    // {
    //     for (size_t j = 0; j < n; j++)
    //     {
    //        pArray[indexmini][indexminj] = 0;
    //        cout << pArray[i][j] << " ";
    //     }
    //     cout << endl;
    // }
         

}
