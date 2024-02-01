#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool num_primo(int n);

int main()
{
    unsigned int N1, N2;
    string c;

    do
    {
        cout << "Ingrese el primer número: ";
        cin >> N1;
        cout << "Ingrese el segundo número: ";
        cin >> N2;

        if (!(N1 < N2))
        {
            int temp = N1;
            N1 = N2;
            N2 = temp;
        }

        for (int i = N1; i <= N2 - 2; i++)
        {
            if (num_primo(i) && num_primo(i + 2))
            {
                cout << i << " y " << i + 2 << endl;
            }
        }

        cout << "\nDesea continuar? (Si; No)" << endl;
        cin >> c;
        transform(c.begin(), c.end(), c.begin(), ::toupper);

    } while (c == "SI" && c != "NO");

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