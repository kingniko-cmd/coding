#include <iostream>
#include <math.h>
using namespace std;

int main() {
   double usd;
   int nilaitukar = 17845;

   cout << "INPUT USD = ";
   cin >> usd;
    double idr = usd * nilaitukar;
   cout << usd << "USD = " << idr << "IDR";
}