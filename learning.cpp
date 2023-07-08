"""
Learing

Learning Source: https://www.youtube.com/watch?v=ZzaPdXTrSb8&ab_channel=ProgrammingwithMosh

Twitter @i_amgoke: https://twitter.com/i_amgoke

Github: https://www.github.com/Gokegold

Function: C++ lessonings

Location: Nigeria

Date Created: JULY 7, 2023

last modification:: [JULY 7, 2023]...

"""

#include <iostream>

using namespace std;

int main() {
  int a = 1;
  int b = 2;
  int c = a;
  a = b;
  b = c;
  cout << a;
  cout << b;
  return 0;
}

int main() {
  double e = 2;
  int a = 1;
  int b = a++; // a will be 1 and the value of b will e incremented by 1
  int c = ++a; // first a = 1+a and c= 1+a

  cout << a;
  cout << '\n';
  cout << b;
  cout << '\n';
  cout << c;

  return 0;
}

int main() {
  double x = 10;
  double y = 5;
  int numerator = x + 10;
  int denominator = 3 * y;
  double z = (x +10) / (3 * y);
  double w = numerator / denominator;

  cout << w <<endl
       << z;
  return 0;
}

int main() {
  double sales = 95000;
  cout << "sales: $" << sales << endl;

  const double stateTaxRate = .04;
  double stateTax = sales * stateTaxRate;
  cout << "StateTax $:" << stateTax << endl;

  const double  countyTaxRate = .02;
  double countyTax = sales * countyTaxRate;
  cout << "County Tax: $" << countyTax << endl;

  double totalTax = stateTax + countyTax;
  cout << "Total TaX $:" << totalTax;

  return 0;
}
