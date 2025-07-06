#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    const double carga_elementar = 1.6 * pow(10, 19);
    const double constante_k = 9 * pow(10, 9);

    int escolha, quantidade;

    double q_total;
    double distancia, q1, q2;
    double campo;
    double tempo;
    double corrente, resistencia;

    double r1, r2, r3, r4, r5;
    double c1, c2, c3, c4, c5;

    cout << "Selecione uma operacao:\n"
         << "1 - Calcular carga total\n"
         << "2 - Intensidade do campo eletrico\n"
         << "3 - Força eletrica\n"
         << "4 - Força entre duas cargas\n"
         << "5 - Potencial eletrico\n"
         << "6 - Corrente eletrica\n"
         << "7 - Tensão eletrica\n"
         << "8 - Condutancia\n"
         << "9 - Resistencia equivalente (serie)\n"
         << "10 - Resistencia equivalente (paralelo)\n"
         << "11 - Capacitancia equivalente (serie)\n"
         << "12 - Capacitancia equivalente (paralelo)\n"
         << "13 - Encerrar\n";

    cout << "Digite o número da opcao desejada: ";
    cin >> escolha;

    if (escolha == 1)
    {
        cout << "Informe a quantidade de cargas elementares: ";
        cin >> quantidade;
        q_total = carga_elementar * quantidade;
        cout << "Carga total: " << q_total << " C";
    }
    else if (escolha == 2)
    {
        cout << "Informe o valor da carga (C): ";
        cin >> q_total;
        cout << "Informe a distância (m): ";
        cin >> distancia;
        campo = (constante_k * q_total) / pow(distancia, 2);
        cout << "Campo eletrico: " << campo << " N/C";
    }
    else if (escolha == 3)
    {
        cout << "Informe a carga (C): ";
        cin >> q_total;
        cout << "Informe o campo (N/C): ";
        cin >> campo;
        cout << "Forca eletrica: " << fabs(q_total) * campo << " N";
    }
    else if (escolha == 4)
    {
        cout << "Carga 1 (C): ";
        cin >> q1;
        cout << "Carga 2 (C): ";
        cin >> q2;
        cout << "Distancia entre as cargas (m): ";
        cin >> distancia;
        cout << "Forca entre cargas: " << fabs(constante_k * q1 * q2) / pow(distancia, 2) << " N";
    }
    else if (escolha == 5)
    {
        cout << "Carga (C): ";
        cin >> q_total;
        cout << "Distancia (m): ";
        cin >> distancia;
        cout << "Potencial eletrico: " << fabs(q_total * constante_k) / distancia << " V";
    }
    else if (escolha == 6)
    {
        cout << "Carga inicial (C): ";
        cin >> q1;
        cout << "Carga final (C): ";
        cin >> q2;
        cout << "Tempo (s): ";
        cin >> tempo;
        cout << "Corrente: " << fabs(q2 - q1) / tempo << " A";
    }
    else if (escolha == 7)
    {
        cout << "Corrente (A): ";
        cin >> corrente;
        cout << "Resistencia (Ω): ";
        cin >> resistencia;
        cout << "Tensao: " << corrente * resistencia << " V";
    }
    else if (escolha == 8)
    {
        cout << "Resistência (Ω): ";
        cin >> resistencia;
        cout << "Condutancia: " << (1 / resistencia) << " S";
    }
    else if (escolha == 9)
    {
        cout << "Informe os 5 resistores (Ω): ";
        cin >> r1 >> r2 >> r3 >> r4 >> r5;
        cout << "Resistência série: " << r1 + r2 + r3 + r4 + r5 << " Ω";
    }
    else if (escolha == 10)
    {
        cout << "Informe os 5 resistores (Ω): ";
        cin >> r1 >> r2 >> r3 >> r4 >> r5;
        cout << "Resistência paralela: " << (1.0 / ((1.0 / r1) + (1.0 / r2) + (1.0 / r3) + (1.0 / r4) + (1.0 / r5))) << " Ω";
    }
    else if (escolha == 11)
    {
        cout << "Informe os 5 capacitores (F): ";
        cin >> c1 >> c2 >> c3 >> c4 >> c5;
        cout << "Capacitância série: " << (1.0 / ((1.0 / c1) + (1.0 / c2) + (1.0 / c3) + (1.0 / c4) + (1.0 / c5))) << " F";
    }
    else if (escolha == 12)
    {
        cout << "Informe os 5 capacitores (F): ";
        cin >> c1 >> c2 >> c3 >> c4 >> c5;
        cout << "Capacitancia paralela: " << c1 + c2 + c3 + c4 + c5 << " F";
    }
    else if (escolha == 13)
    {
        cout << "Encerrando o programa...";
        return 0;
    }
    else
    {
        cout << "Opcao invalida!";
    }

    cout << "\nFim da execucao.";
    return 0;
}
