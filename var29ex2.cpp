#include <iostream> 
using namespace std;

int main()
{
	int n, m;

	cout << "Enter n:";
	cin >> n;
    cout << "Enter m:";
	cin >> m;



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
    int* vectorB;
    vectorB = new int[n];
    for (int i = 0; i < n; i++) {   
        int max = pArray[i][0];
		for (int j = 0; j < n; j++)
		{
			if(pArray[i][j]>max){
                max = pArray[i][j];
            }
		}
        vectorB[i] = max;
	}
    int maxvector = vectorB[0];
    int index; 
    cout << "vectorB: ";
    for (size_t i = 0; i < n; i++)
    {
        cout << vectorB[i] << " ";
        if(maxvector<vectorB[i]) {
            maxvector = vectorB[i];
            index = i;
        }
    }
    cout << "\nIndex of max in vector b: " << index << endl;
    

}