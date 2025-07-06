#include <iostream>
#include <locale>

int main()
{

    std::cout << "Exercicico de classificacao de Triangulos" << std::endl;

    int A;
    int B;
    int C;

    std::cout << "Digite lado A: ";
    std::cin >> A;

    std::cout << "Digite lado B: ";
    std::cin >> B;

    std::cout << "Digite lado C :";
    std::cin >> C;

    if (A + B > C || A + C > B || B + C > A)
    {
        if (A == B && B == C)
        {
            std::cout << "Triangulo e Equilatero\n"
                      << std::endl;
        }
        else if (A == B || A == C || B == C)
        {
            std::cout << "Triangulo e Isosceles\n"
                      << std::endl;
        }
        else
        {
            std::cout << "Triangulo e  Escaleno\n"
                      << std::endl;
        }
    }
    else
    {
        std::cout << "Triangulo nao Existe" << std::endl;
    }

    return 0;
}