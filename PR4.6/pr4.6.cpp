#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double P, S;
    int i, k;

    // 1. while
    P = 1.0;
    i = 1;

    while (i <= 15)
    {
        S = 0.0;
        k = 1;

        while (k <= 20 - i)
        {
            S += (double)(i * k) / (i * i + k * k);
            k++;
        }

        P *= S;
        i++;
    }

    cout << setprecision(12) << "while: " << P << endl;

    // 2. do...while
    P = 1.0;
    i = 1;

    do
    {
        S = 0.0;
        k = 1;

        do
        {
            S += (double)(i * k) / (i * i + k * k);
            k++;
        } while (k <= 20 - i);

        P *= S;
        i++;
    } while (i <= 15);

    cout << "do...while: " << P << endl;

    // 3. or зі збільшенням
    P = 1.0;

    for (i = 1; i <= 15; i++)
    {
        S = 0.0;

        for (k = 1; k <= 20 - i; k++)
        {
            S += (double)(i * k) / (i * i + k * k);
        }

        P *= S;
    }

    cout << "for (i++): " << P << endl;

    // 4. for зі зменшенням
    P = 1.0;

    for (i = 15; i >= 1; i--)
    {
        S = 0.0;

        for (k = 20 - i; k >= 1; k--)
        {
            S += (double)(i * k) / (i * i + k * k);
        }

        P *= S;
    }

    cout << "for (i--): " << P << endl;

    return 0;
}
