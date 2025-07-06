#include <iostream>

using namespace std;

int main()
{
    double nota1, nota2, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2;

    cout << "Media final: " << media << endl;

    if (media >= 7.0)
    {
        cout << "Aluno aprovado!" << endl;
    }
    else if (media >= 5.0)
    {
        cout << "Aluno em recuperacao." << endl;
    }
    else
    {
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}
