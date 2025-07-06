#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "Classifica��o de Triangulos \n\n";

    int lado_a, lado_b, lado_c;

    cout << "Digite lado A: ";
    cin >> lado_a;

    cout << "Digite lado B: ";
    cin >> lado_b;

    cout << "Digite lado C :";
    cin >> lado_c;

    if (!(lado_a + lado_b > lado_c && lado_a + lado_c > lado_b && lado_b + lado_c > lado_a))
    {
        cout << "Tri�ngulo n�o Existe";
        return 0;
    }

    if (lado_a == lado_b && lado_b == lado_c)
    {
        cout << "Tri�ngulo � Equil�tero\n";
    }
    else if (lado_a == lado_b || lado_a == lado_c || lado_b == lado_c)
    {
        cout << "Tri�ngulo �  Is�sceles\n";
    }
    else
    {
        cout << "Tri�ngulo �   Escaleno\n";
    }

    cout << "Fim do Programa";

    return 0;
}