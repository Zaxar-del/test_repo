#include <iostream>
#include "sum.h"
#include "dif.h"
#include "prod.h"
#include <cmath>
using namespace std;

int main()
{
    int a = 5, b = 2;
    cout << "Hello World!!!!\n";
    cout << a << "+" << b << "=" << sum(a, b) << endl;
    cout << a << "-" << b << "=" << dif(a, b) << endl;
    cout << a << "^" << b << "=" << pow(a, b) << endl;
}