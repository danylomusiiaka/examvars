/*Задано дійсну квадратну матрицю. Знайти найбільший елемент 
серед мінімальних елементів тих рядків, 
в яких є від'ємний елемент на головній діагоналі.*/

#include <iostream> 
using namespace std;

int main()
{
	int n;

	cout << "Enter n:";
	cin >> n;


	int** pArray;
	pArray = new int* [n];

	for (int i = 0; i < n; i++)
	{
		pArray[i] = new int[n];
	}
  
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> pArray[i][j];
		}
	}




	//знайти один максимум
	int max = pArray[0][0];
	for (int i = 0; i < n; i++)//для кожного рядка
	{
		if (pArray[i][i] < 0) //якщо елемент на діагоналі <0 
		{
			max = pArray[i][i];
		}
	}

	if (max > 0)
		return 0;


	for (int i = 0; i < n; i++)//для кожного рядка
	{
		if (pArray[i][i] < 0) //якщо елемент на діагоналі <0 
		{
			//знайти мінімальний елемент в рядку
			int min = pArray[i][0];
			for (int j = 0; j < n; j++)//пройтися по всіх стовпчиках того рядка
			{
				if (pArray[i][j] < min)
					min = pArray[i][j];
			}

			//перевірити чи мінімальний елемент в рядку не більший за максимум
			if (min > max)
				max = min;
		}
	}

	cout << "Max = " << max << endl;
}