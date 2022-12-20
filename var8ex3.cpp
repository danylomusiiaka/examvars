#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    cout << "Enter string: ";
    getline(cin, s);
    int slength = s.length();
    int pos1;
    int pos = 0;
    int _slivf = 0;
    int _slivj = 0;
    do {
        pos1 = s.find(" ", pos);
        if (pos1 == -1) {
            pos1 = s.find(".", pos);
        }
        if (s[pos1 - 1] == 'f') {
            s.erase(pos, pos1 - pos);
            pos1 = pos - 1;
            slength = s.length();
            _slivf += 1;
            pos = pos1 + 1;
        }
        if (s[pos1 - 1] == 'j') {
            s.erase(pos, pos1 - pos);
            pos1 = pos - 1;
            slength = s.length();
            _slivj += 1;
        }
        pos = pos1 + 1;
    } while (pos != s.find(".", pos));

    cout << "Result is: " << s << endl;
    cout << "word with f:" << _slivf << endl;
    cout << "word with j:" << _slivj << endl;
    return 0;
}