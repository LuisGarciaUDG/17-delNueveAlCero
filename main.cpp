/* programa_17 Imprimir los numeros del 9 al 0
estructura: ciclica
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 24 de febrero del 2015
*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x;
    x=9;
    cout<<"\n Programa que imprime los numeros del 9 al 0";
    cout<<"\n\n Estrucutra de control while\n\n";
    while (x>=0)
        {
        cout<<"\n "<<x;
        x=x-1;
        }
        cout<<"\n\n Presione enter para salir...\n\n";
        system ("pause");

    return 0;
}
