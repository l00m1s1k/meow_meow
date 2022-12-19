#include <iostream>
using namespace std;

void addarrays(double *a, double* b, double* c, int size)
{
    for (int i = 0; i < size; i++)
    {
        c[i] = a[i] + b[i];
    }
}
int main()
{
    const int size = 5;
    double a[size]{3,9,8,5,14};
    double b[size]{8,9,13,72,2};
    double c[size];
    addarrays(a, b, c, size);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " + " << b[i] << " = " << c[i] << endl;
    }
}
