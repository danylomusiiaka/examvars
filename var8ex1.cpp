//task1
#include <iostream> 
using namespace std;

int factorial(int k)
{
    if (k == 1)
    {
        return 1;
    }
    int result = k * factorial(k - 1);
    return result;
}

int main()
{
    int k;
    cin >> k;
    int n;
    cin >> n;
    int result;
    result = 1;
    for (int i = 1; i < k; i++) {
        result *= (n - i);
    }

    cout << (n * result * (n - k + 1)) / factorial(k);
}
