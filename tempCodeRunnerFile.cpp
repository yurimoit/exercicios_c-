#include <iostream>
#include <locale>

int main()
{

    std::cout << "Programa para classificacao de Triangulos \n\n";

    int LADO_A, LADO_B, LADO_C;

    std::cout << "Digite lado A: ";
    std::cin >> LADO_A;

    std::cout << "Digite lado B: ";
    std::cin >> LADO_B;

    std::cout << "Digite lado C :";
    std::cin >> LADO_C;

    if ((LADO_A + LADO_B > LADO_C || LADO_A + LADO_C > LADO_B || LADO_B + LADO_C > LADO_A))
    {
        if (LADO_A == LADO_B && LADO_B == LADO_C)
        {
            std::cout << "Triângulo e Equilatero\n";
        }
        else if (LADO_A == LADO_B || LADO_A == LADO_C || LADO_B == LADO_C)
        {
            std::cout << "Triangulo e Isosceles\n";
        }
        else
        {
            std::cout << "Triangulo e  Escaleno\n";
        }
    }
    else
    {
        std::cout << "Triangulo nao Existe";
    }

    return 0;
}