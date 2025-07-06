#include <iostream>
#include <locale>
#include <cmath>
#include <string>

using namespace std;

void formula_serie(string nome, string unidade)
{
    double soma = 0;
    double valor;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o " << i + 1 << " valor: ";
        cin >> valor;
        soma += valor;
        cout << "Soma parcial " << soma << endl;
    }

    cout << "Valor total " << nome << " equivalente: " << soma << " " << unidade;
}

void formula_paralelo(string nome, string unidade)
{
    double soma = 0;
    double valor;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o " << i + 1 << " valor: ";
        cin >> valor;
        soma += (1.0 / valor);
        cout << "Soma parcial " << soma << endl;
    }

    cout << "Valor total " << nome << " equivalente: " << (1.0 / soma) << " " << unidade;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double base_10_elevado_19 = pow(10, 19);
    double base_10_elevado_9 = pow(10, 9);

    const double carga = 1.6 * base_10_elevado_19;
    const double k_meio = 9 * base_10_elevado_9;

    int valor_digitado;
    int numero_de_eletros;

    double valor_carga_eletrica;
    double distancia;
    double valor_campo_eletrico;
    double carga_A, carga_B;
    double delta_T;
    double corrente_eletrica, resistencia_eletrica;

    double resistencia, capacitancia;

    cout << "Sumario: \n"
         << "1- Carga Eletrica.\n"
         << "2- Campo Eletrica.\n"
         << "3- Forca Eletrica.\n"
         << "4- Forca de Atracao ou Repulsao.\n"
         << "5- Potencial Eletrico.\n"
         << "6- Correente Eletrica.\n"
         << "7- Tensão Eletrica.\n"
         << "8- Condutancia Eletrica.\n"
         << "9- Resistencia equivalente de 5 resistores em serie: \n"
         << "10- Resistencia equivalente de 5 resistores em paralela: \n"
         << "11- Capacitancia equivalente de 5 capacitores em serie: \n"
         << "12- Capacitancia equivalente de 5 capacitores em paralela: \n"
         << "0- Encerrar programa.\n\n";

    cout << "Digite um numero referente ao calculo desejado:";
    cin >> valor_digitado;

    if (valor_digitado == 0)
    {
        cout << "Programa encerrado";
        return 0;
    }

    switch (valor_digitado)
    {
    case 1:
        cout << "Digite um número de eletros:";
        cin >> numero_de_eletros;
        valor_carga_eletrica = carga * numero_de_eletros;
        cout << "Valor da Carga Eletrica: " << valor_carga_eletrica << "C";
        break;
    case 2:
        cout << "Digite o valor da Carga Eletrica:";
        cin >> valor_carga_eletrica;
        cout << "Digite a distancia em metros, OBS:Maior que zero:";
        cin >> distancia;
        valor_campo_eletrico = (k_meio * valor_carga_eletrica) / pow(distancia, 2);
        cout << "Intensidade do Campo Eletrico: " << valor_campo_eletrico << "N/C";
        break;
    case 3:
        cout << "Digite o valor da Carga Eletrica:";
        cin >> valor_carga_eletrica;
        cout << "Digite o valor do campo Eletrico:";
        cin >> valor_campo_eletrico;
        cout << "Forca Eletrica: " << fabs(valor_carga_eletrica) * valor_campo_eletrico << "N";
        break;
    case 4:
        cout << "Digite o valor da Carga A:";
        cin >> carga_A;
        cout << "Digite o valor da Carga B:";
        cin >> carga_B;
        cout << "Digite a distancia em metros, OBS:Maior que zero:";
        cin >> distancia;
        cout << "Forca de Repulsao ou Atracaoo: " << fabs(k_meio * carga_A * carga_B) / pow(distancia, 2) << "N";
        break;
    case 5:
        cout << "Digite o valor da Carga Eletrica:";
        cin >> valor_carga_eletrica;
        cout << "Digite a distancia em metros, OBS:Maior que zero:";
        cin >> distancia;
        cout << "Potencial Eletrico: " << fabs(valor_carga_eletrica * k_meio) / distancia << "V";
        break;
    case 6:
        cout << "Digite o valor da Carga A:";
        cin >> carga_A;
        cout << "Digite o valor da Carga B:";
        cin >> carga_B;
        cout << "Digite o valor da Variacao de Tempo em segundos(s), OBS:Maior que zero:";
        cin >> delta_T;
        cout << "Corrente Eletrica: " << fabs(carga_B - carga_A) / delta_T << "A";
        break;
    case 7:
        cout << "Digite o valor da Corrrente Eletrica (A):";
        cin >> corrente_eletrica;
        cout << "Digite o valor do Resistência Eletrica (ohms): ";
        cin >> resistencia_eletrica;
        cout << "Tensao Eletrica: " << corrente_eletrica * resistencia_eletrica << "V";
        break;
    case 8:
        cout << "Digite o valor do Resistencia Eletrica (ohms): ";
        cin >> resistencia_eletrica;
        cout << "Condutancia Eletrica: " << (1 / resistencia_eletrica) << "S";
        break;

    default:
        cout << "\n\n";
        break;
    }

    if (valor_digitado == 9)
    {
        formula_serie("Resitencia serie", "ohms");
    }
    else if (valor_digitado == 10)
    {
        formula_paralelo("Resitencia paralela", "ohms");
    }
    else if (valor_digitado == 11)
    {
        formula_paralelo("Capacitancia serie", "F");
    }
    else if (valor_digitado == 12)
    {
        formula_serie("Capacitancia paralela", "F");
    }
    else if (valor_digitado < 0 || valor_digitado > 12)
    {
        cout << "Opcao invalida";
    }

    cout << "\nFim programa";
    return 0;
}