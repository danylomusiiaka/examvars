#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class War
{
private:
  string name;
  int age;
  bool isWar;
public:
  War();
  War(string name, int age, bool isWar);
  War(const War& x);
  void input();
  void output();
  bool isWarComplicated();


  string GetName()
  {
    return name;
  }

  int GetAge()
  {
    return age;
  }

  bool GetisWar()
  {
    return isWar;
  }


};
War::War() {
    name = "none";
    age = 0;
    isWar = false;
}
War::War(string name, int age, bool isWar) {
    this->name = name;
    this->age = age;
    this->isWar = isWar;
}
War::War(const War& x) {
    this->name = x.name;
    this->age = x.age;
    this->isWar = x.isWar;
}
void War::input() {
    cout << "Input info about employee: " << endl;
    cin >> name >> age;
}
void War::output() {
    cout << name << endl;
}
bool War::isWarComplicated() {
    if(age>=18 && age<65) {
        return true;
    }
    return false;

}

int main() {
    int n; cout << "Enter n: "; cin >> n;
    War* list;
    list = new War[n];
    for (int i = 0; i < n; i++){
    list[i].input();
    }
    int maxAge = list[0].GetAge();
    string oldest = list[0].GetName();
    cout << "isWarComplicated:" << endl;
    for (int i = 0; i < n; i++){
        if(list[i].isWarComplicated())
        {
            list[i].output();
            
            if(list[i].GetAge() > maxAge) {
                maxAge = list[i].GetAge();
                oldest = list[i].GetName();
            }

        }
        
    }
    cout << "oldest: " << oldest << endl;
    
    return 0;

}