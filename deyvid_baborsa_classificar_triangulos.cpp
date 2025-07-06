#include <iostream>

int main()
{

    int A, B, C;

    std::cout << "Digite os valores referentes aos lados do triangulo (A, B e C): ";
    std::cin >> A >> B >> C;

    if ((A + B > C) && (A + C > B) && (B + C > A))
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