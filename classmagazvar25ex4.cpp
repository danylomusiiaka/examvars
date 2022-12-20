#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


class Product
{
private:
  string name;
  int grivna;
  int coin;
public:
  Product();
  Product(string name, int grivna, int coin);
  Product(const Product& x);
  void input();
  void output();

  string GetName()
  {
    return name;
  }

  int GetGrivna()
  {
    return grivna;
  }

  int GetCoin()
  {
    return coin;
  }

    friend ostream& operator <<(ostream& out, Product& product)
  {
    out << "Name: " << product.name << endl;
    out << "Grivna: " << product.grivna << endl;
    out << "Coin: " << product.coin << endl;
    return out;
  }

};
Product::Product() {
    name = "none";
    grivna = 0;
    coin = 0;
}
Product::Product(string name, int grivna, int coin) {
    this->name = name;
    this->grivna = grivna;
    this->coin = coin;
}
Product::Product(const Product& x) {
    this->name = x.name;
    this->grivna = x.grivna;
    this->coin = x.coin;
}
void Product::input() {
    cout << "Input info about product: " << endl;
    cin >> name >> grivna >> coin;
}
void Product::output() {
    cout << name << endl;
}


bool Compare(Product c1 , Product c2)
{

  return c1.GetName() < c2.GetName();
    
}



int main()
{
  Product* list;
  int n; cout << "Enter n: "; cin >> n;
  list = new Product[n];
for (size_t i = 0; i < n; i++)
{
    list[i].input();
}
sort(list, list + n, Compare);
cout << "List after sort by name: " << endl;
for (int i = 0; i < n; i++)
  {
    list[i].output();
  }
    


  int maxPrice = list[0].GetGrivna();
  Product highprice;
  for (int i = 0; i < n; i++)
  {
    if (list[i].GetGrivna() > maxPrice)
    {
      maxPrice = list[i].GetGrivna();
      highprice = list[i];
    }
  }

  cout << "The most expensive product: " << endl;
  cout << highprice;

  cout << endl;

   

  
  


  system("pause");
  return 0;
}