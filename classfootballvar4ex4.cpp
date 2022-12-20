#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Club
{
private:
  string name;
  int age;
  string city;
public:
  Club();
  Club(string name, int age, string city);
  Club(const Club& x);
  void input();
  void output();


  string GetName()
  {
    return name;
  }

  int GetAge()
  {
    return age;
  }

  string GetCity()
  {
    return city;
  }


  friend ostream& operator <<(ostream& out, Club& club)
  {
    out << "Name: " << club.name << endl;
    out << "Age: " << club.age << endl;
    out << "City: " << club.city << endl;
    return out;
  }

};
Club::Club() {
    name = "none";
    age = 0;
    city = "none";
}
Club::Club(string name, int age, string city) {
    this->name = name;
    this->age = age;
    this->city = city;
}
Club::Club(const Club& x) {
    this->name = x.name;
    this->age = x.age;
    this->city = x.city;
}
void Club::input() {
    cout << "Input info about club: " << endl;
    cin >> name >> age >> city;
}
void Club::output() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
}


bool Compare(Club c1 , Club c2)
{

  return c1.GetName() < c2.GetName();
    
}



int main()
{
  int n; cout << "Enter n: "; cin >> n;
  Club* list;
  list = new Club[n];

for (int i = 0; i < n; i++)
  {
    list[i].input();
  }
  sort(list, list + n, Compare ); 

  cout << "List after sort by name " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << list[i] << endl;
  }
    
  cout << endl;


  int maxAge = list[0].GetAge();
  int oldest;
  string oldestName; string oldestCity;
  for (int i = 0; i < n; i++)
  {
    if (list[i].GetAge() < maxAge)
    {
      maxAge = list[i].GetAge();
      oldest = list[i].GetAge();
      oldestName = list[i].GetName();
      oldestCity = list[i].GetCity();

    }
  }
  
  cout << "The oldest club : " << endl;
  cout << oldestName << " " << oldest << " " << oldestCity << endl;

  system("pause");
  return 0;
}