#include <iostream>
using namespace std;

int main()
{
    double lado, area;

    cout << "Calcular area do quadrado:\n\n";

    cout << "Digite o valor do lado: ";
    cin >> lado;

    if (lado > 0)
    {
        area = lado * lado;
        cout << "Area: " << area << " m2" << endl;
    }
    else
    {
        cout << "Valor para lado e invalido: " << lado << endl;
    }

    cout << "Fim programa.";

    return 0;
}