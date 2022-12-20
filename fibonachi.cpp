#include <iostream>
using namespace std;
int FibonachiFormul(int N) {
    int sum = 0; 
    int fn1 = 1; int fn2 = 1;
    while(sum<=N) {
    sum = fn1+fn2;
    int temp1 = sum; 
    int temp2 = fn1;
    fn1 = temp1; 
    fn2 = temp2; 
    }
    return sum;
}
int main() {
    int sum = FibonachiFormul(100) + FibonachiFormul(1000);
    cout << sum << endl;

}


