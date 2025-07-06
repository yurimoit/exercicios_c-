#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double carga = 1.6 * (pow(10, 19));
    const double k = 9 * (pow(10, 9));

    int vd, n;

    double valor_carga_eletrica;
    double d, Q_A, Q_B;
    double valor_campo_eletrico;
    double delta_T;
    double corrente_eletrica, resistencia_eletrica;

    double r_1, r_2, r_3, r_4, r_5;
    double c_1, c_2, c_3, c_4, c_5;

    cout << "Opções: \n"
         << "1- Carga Eletrica.\n"
         << "2- Campo Eletrica.\n"
         << "3- Forca Eletrica.\n"
         << "4- Forca Eletrica de Atracao ou Repulsao.\n"
         << "5- Potencial Eletrico.\n"
         << "6- Correente Eletrica.\n"
         << "7- Tensão Eletrica.\n"
         << "8- Condutancia Eletrica.\n"
         << "9- Resistencia equivalente de 5 resistores em serie: \n"
         << "10- Resistencia equivalente de 5 resistores em paralela: \n"
         << "11- Capacitancia equivalente de 5 capacitores em serie: \n"
         << "12- Capacitancia equivalente de 5 capacitores em paralela: \n"
         << "13- Fechar programa.\n";

    cout << "Digite o valor desejado:";
    cin >> vd;

    if (vd == 1)
    {
        cout << "Digite um número de eletros:";
        cin >> n;
        valor_carga_eletrica = carga * n;
        cout << "Valor da Carga Eletrica: " << valor_carga_eletrica << " C";
    }
    else if (vd == 2)
    {
        cout << "Digite o valor da Carga Eletrica:";
        cin >> valor_carga_eletrica;
        cout << "Digite a distancia em metros: ";
        cin >> d;
        valor_campo_eletrico = (k * valor_carga_eletrica) / pow(d, 2);
        cout << "Intensidade do Campo Eletrico: " << valor_campo_eletrico << " N/C";
    }
    else if (vd == 3)
    {
        cout << "Digite o valor da Carga Eletrica:";
        cin >> valor_carga_eletrica;
        cout << "Digite o valor do campo Eletrico:";
        cin >> valor_campo_eletrico;
        cout << "Forca Eletrica: " << fabs(valor_carga_eletrica) * valor_campo_eletrico << " N";
    }
    else if (vd == 4)
    {
        cout << "Digite o valor da Carga A:";
        cin >> Q_A;
        cout << "Digite o valor da Carga B:";
        cin >> Q_B;
        cout << "Digite a distancia em metros: ";
        cin >> d;
        cout << "Forca de Repulsao ou Atracaoo: " << fabs(k * Q_A * Q_B) / pow(d, 2) << " N";
    }
    else if (vd == 5)
    {
        cout << "Digite o valor da Carga Eletrica: ";
        cin >> valor_carga_eletrica;
        cout << "Digite a distancia em metros: ";
        cin >> d;
        cout << "Potencial Eletrico: " << fabs(valor_carga_eletrica * k) / d << " V";
    }
    else if (vd == 6)
    {
        cout << "Digite o valor da Carga A:";
        cin >> Q_A;
        cout << "Digite o valor da Carga B:";
        cin >> Q_B;
        cout << "Digite o valor do tempo em segundos";
        cin >> delta_T;
        cout << "Corrente Eletrica: " << fabs(Q_B - Q_A) / delta_T << " A";
    }
    else if (vd == 7)
    {
        cout << "Digite o valor da corrrente:";
        cin >> corrente_eletrica;
        cout << "Digite o valor do resistencia: ";
        cin >> resistencia_eletrica;
        cout << "Tensao Eletrica: " << corrente_eletrica * resistencia_eletrica << " V";
    }
    else if (vd == 8)
    {
        cout << "Digite o valor do resistencia : ";
        cin >> resistencia_eletrica;
        cout << "Condutancia Eletrica: " << (1 / resistencia_eletrica) << " S";
    }
    else if (vd == 9)
    {
        // formula_serie("Resitencia serie", "ohms");
        cout << "Digite o valor do resistencia (r1, r2, r3, r4 e r5): ";
        cin >> r_1 >> r_2 >> r_3 >> r_4 >> r_5;
        cout << "Resistencia equilavente em serie: " << r_1 + r_2 + r_3 + r_4 + r_5 << " ohm";
    }
    else if (vd == 10)
    {
        cout << "Digite o valor do resistencia (r1, r2, r3, r4 e r5): ";
        cin >> r_1 >> r_2 >> r_3 >> r_4 >> r_5;
        cout << "Resistencia equilavente em paralela: " << (1.0 / ((1.0 / r_1) + (1.0 / r_2) + (1.0 / r_3) + (1.0 / r_4) + (1.0 / r_5))) << " ohm";
    }
    else if (vd == 11)
    {
        cout << "Digite o valor do capacitor (c1, c2, c3, c4, e c5): ";
        cin >> c_1 >> c_2 >> c_3 >> c_4 >> c_5;
        cout << "Capacitencia equilavente em serie: " << (1.0 / ((1.0 / c_1) + (1.0 / c_2) + (1.0 / c_3) + (1.0 / c_4) + (1.0 / c_5))) << " F";
    }
    else if (vd == 12)
    {
        cout << "Digite o valor do capacitor (c1, c2, c3, c4, e c5): ";
        cin >> c_1 >> c_2 >> c_3 >> c_4 >> c_5;
        cout << "Capacitencia equilavente em paralela: " << c_1 + c_2 + c_3 + c_4 + c_5 << " F";
    }
    else if (vd == 13)
    {
        cout << "Fim programa.";
        return 0;
    }
    else if (vd < 0 || vd > 12)
    {
        cout << "Opcao invalida";
    }

    cout << "\nFim programa.";

    return 0;
}