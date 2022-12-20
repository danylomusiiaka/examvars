#include <iostream>    
#include<cmath>   
using namespace std;

int main()
{
    int n;
    int m;
    int  k;
    cout << "Enter n:";
    cin >> n;
    m = n;
    int** pArray;
    pArray = new int* [n];
    for (int i = 0; i < n; i++)
    {
        pArray[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> pArray[i][j];
        }
    }
    cout << "\nResult: ";
    
    for (int j = 0; j < n; j++)
    {
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            int a = pArray[0][j] - 1;
            if (pArray[i][j] > a)
            {
                k = k + 1;
                a = pArray[i][j];
            }
            else
                a = pArray[i][j];
        }
        if (k == n)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
}

