#include <iostream>
using namespace std;

class Prostokat {
private:
  float a, b;

public:
  Prostokat(float a, float b) { this->a = a, this->b = b; }
  Prostokat() {
    a = 0;
    b = 0;
  }
  float Pole() { return a * b; }
  float Obwod() { return 2 * (a + b); }
  void setA(float a) { this->a = a; }
  void setB(float b) { this->b = b; }
};

int main() {
  Prostokat obiekt1(4, 5);
  cout << "Pole pierwszego obiektu: " << obiekt1.Pole() << endl;
  cout << "Obwod pierwszego obiektu: " << obiekt1.Obwod() << endl;

  float a, b;
  Prostokat obiekt2(a, b);
  cout << "Podaj a i b: " << endl;
  cin >> a >> b;
  cout << "Pole drugiego obiektu: " << obiekt2.Pole() << endl;
  cout << "Obwod drugiego obiektu: " << obiekt2.Obwod() << endl;

  obiekt2.setA(10);
  obiekt2.setB(20);
  cout << "Pole drugiego obiektu po zmianie: " << obiekt2.Pole() << endl;
  cout << "Obwod drugiego obiektu po zmianie: " << obiekt2.Obwod() << endl;

  return 0;
}