#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double carga_elementar = 1.6 * pow(10, -19);
    const double constante_k = 9 * pow(10, 9);

    int escolha, numero_eletros;
    double carga_total, distancia, carga1, carga2;
    double campo, tempo, corrente, resistencia;
    double res1, res2, res3, res4, res5;
    double cap1, cap2, cap3, cap4, cap5;

    cout << "MENU DE CALCULOS:\n";
    cout << "1 - Calculo de carga total\n";
    cout << "2 - Calculo do campo gerado\n";
    cout << "3 - Força gerada por campo\n";
    cout << "4 - Força entre duas cargas\n";
    cout << "5 - Calculo de potencial\n";
    cout << "6 - Calculo da corrente\n";
    cout << "7 - Calculo da tensão\n";
    cout << "8 - Condutancia\n";
    cout << "9 - Resistencia total (serie)\n";
    cout << "10 - Resistencia total (paralelo)\n";
    cout << "11 - Capacitancia total (serie)\n";
    cout << "12 - Capacitancia total (paralelo)\n";
    cout << "13 - Encerrar\n";

    cout << "Escolha uma opcao: ";
    cin >> escolha;

    if (escolha == 1)
    {
        cout << "Quantidade de eletrons: ";
        cin >> numero_eletros;
        carga_total = numero_eletros * carga_elementar;
        cout << "Carga total: " << carga_total << " C";
    }
    else if (escolha == 2)
    {
        cout << "Digite a carga (C): ";
        cin >> carga_total;
        cout << "Distancia ao ponto (m): ";
        cin >> distancia;
        campo = (constante_k * carga_total) / pow(distancia, 2);
        cout << "Campo gerado: " << campo << " N/C";
    }
    else if (escolha == 3)
    {
        cout << "Digite a carga (C): ";
        cin >> carga_total;
        cout << "Campo aplicado (N/C): ";
        cin >> campo;
        cout << "Forca eletrica: " << fabs(carga_total * campo) << " N";
    }
    else if (escolha == 4)
    {
        cout << "Carga A (C): ";
        cin >> carga1;
        cout << "Carga B (C): ";
        cin >> carga2;
        cout << "Distancia entre elas (m): ";
        cin >> distancia;
        cout << "Forca entre cargas: " << fabs(constante_k * carga1 * carga2) / pow(distancia, 2) << " N";
    }
    else if (escolha == 5)
    {
        cout << "Carga (C): ";
        cin >> carga_total;
        cout << "Distancia (m): ";
        cin >> distancia;
        cout << "Potencial: " << (constante_k * carga_total) / distancia << " V";
    }
    else if (escolha == 6)
    {
        cout << "Carga inicial (C): ";
        cin >> carga1;
        cout << "Carga final (C): ";
        cin >> carga2;
        cout << "Intervalo de tempo (s): ";
        cin >> tempo;
        cout << "Corrente eletrica: " << fabs(carga2 - carga1) / tempo << " A";
    }
    else if (escolha == 7)
    {
        cout << "Corrente (A): ";
        cin >> corrente;
        cout << "Resistencia (Ohm): ";
        cin >> resistencia;
        cout << "Tensao: " << corrente * resistencia << " V";
    }
    else if (escolha == 8)
    {
        cout << "Resistencia (Ohm): ";
        cin >> resistencia;
        cout << "Condutancia: " << (1.0 / resistencia) << " S";
    }
    else if (escolha == 9)
    {
        cout << "Digite 5 resistores: ";
        cin >> res1 >> res2 >> res3 >> res4 >> res5;
        cout << "Resistencia total (serie): " << res1 + res2 + res3 + res4 + res5 << " Ohm";
    }
    else if (escolha == 10)
    {
        cout << "Digite 5 resistores: ";
        cin >> res1 >> res2 >> res3 >> res4 >> res5;
        cout << "Resistencia total (paralelo): " << (1.0 / ((1.0 / res1) + (1.0 / res2) + (1.0 / res3) + (1.0 / res4) + (1.0 / res5))) << " Ohm";
    }
    else if (escolha == 11)
    {
        cout << "Digite 5 capacitores: ";
        cin >> cap1 >> cap2 >> cap3 >> cap4 >> cap5;
        cout << "Capacitancia total (serie): " << (1.0 / ((1.0 / cap1) + (1.0 / cap2) + (1.0 / cap3) + (1.0 / cap4) + (1.0 / cap5))) << " F";
    }
    else if (escolha == 12)
    {
        cout << "Digite 5 capacitores: ";
        cin >> cap1 >> cap2 >> cap3 >> cap4 >> cap5;
        cout << "Capacitancia total (paralelo): " << cap1 + cap2 + cap3 + cap4 + cap5 << " F";
    }
    else if (escolha == 13)
    {
        cout << "Encerrando...";
        return 0;
    }
    else
    {
        cout << "Opção invalida.";
    }

    cout << "\nFim do calculo.";
    return 0;
}
