#include <iostream>
using namespace std;

bool num_primo(int n);

int main()
{
    unsigned int N1, N2;
    int c;

    do
    {
        cout << "Ingrese el primer número: ";
        cin >> N1;
        cout << "Ingrese el segundo número: ";
        cin >> N2;

        for (int i = N1; i <= N2 - 2; i++)
        {
            if (num_primo(i) && num_primo(i + 2))
            {
                cout << i << " y " << i + 2 << endl;
            }
        }

        cout << "\nDesea continuar? (1: Sí; 0: No)" << endl;
        cin >> c;
    } while (c);

    return 0;
}

bool num_primo(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}