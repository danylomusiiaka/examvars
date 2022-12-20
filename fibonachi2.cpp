#include <iostream>
using namespace std;


int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0, sum = 0;

 
    cout << "true Fibonachi numbers:  ";
   

    for (int i = 1; i <= 1000; i++) {
        // Prints the first two terms.
      
        if (i == 1) {
            continue;
        }
        if (i == 2) {
            continue;
        }
        nextTerm = t1 + t2;
        
        t1 = t2;
        t2 = nextTerm;
        if (nextTerm < 100)
            continue;
        if (nextTerm > 1000)
            break;
        sum += nextTerm;

        cout << nextTerm << "\t";
    }
    cout << endl;
    cout << "sum of Fibonacci numbers which is > 100 and < 100 : ";
    cout << sum;
}