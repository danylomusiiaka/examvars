//Знайти максимальне з чисел, які зустрічаються в матриці більше одного разу.

#include <iostream>
using namespace std;
int main() {
    int n; 
    int m; 
    cout << "Enter n:"; 
    cin >> n; 
    cout << "Enter m:"; 
    cin >> m; 
 
    int** pArray; 
    pArray = new int*[n]; 
 
    for (int i = 0; i < n; i++) 
    { 
        pArray[i] = new int[m]; 
    } 
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin >> pArray[i][j];
        }
     }   
    int max = pArray[0][0]; 
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            for (size_t i1 = 0; i1 < n; i1++)
            {
                for (size_t j1 = 0; j1 < m; j1++)
                {
                    
                    if (pArray[i][j] == pArray[i1][j1]){
                        if((i==i1) && (j==j1)) {
                        continue;
                    }
                        if(pArray[i][j]>max){
                            max = pArray[i][j];
                        }
                    
                    }
                }
                
            }

            
        
            
           
        }  
    }
    cout << max;
}
// [0][1] == [0][0]