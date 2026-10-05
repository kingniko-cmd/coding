#include <iostream>
using namespace std;

int fibonaci (int n){
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
     return fibonaci (n - 1) + fibonaci (n - 2);
}

int main() {
    int n;
    cout << "Input Number : ";
    cin >> n;

    cout << "Fibonacci Sequence : ";
    for (int i = 0; i < n; i++)
    {
       cout << fibonaci(i);
       if (i < n-1){
        cout << ",";
       }
    }
    

}