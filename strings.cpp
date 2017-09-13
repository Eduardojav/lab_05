#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int contro=0;
int main()
{char TEXTO[50];//cree 3 variables tipo char uno donde pongo los numeros para ver si son o no otro donde pongo mi texto y un char que diera un espacio para las mayusculas
   char esp=' ';
   char numeros[]={'0','1','2','3','4','5','6','7','8','9'};
   int contro=0;// 1 variable tipo 1 como booleano
   cout<<"Escribe un letra o frase:"<<endl;//le pido al usuario una frase
   cin>>TEXTO;
    for(int i = 0; TEXTO[i]; i++){//usando el for pasamos por todo el char viendo si son numeros y comparandolos con la numeros[] para ver si alguno consigue concordar
        for(int j = 0; numeros[j]; j++){
        if(TEXTO[i]==numeros[j]){// si un elemento de las cadena numeros concuerda mi contador de 0 pasa a 1 lo
            contro=1;}}
    if(TEXTO[i]==toupper(TEXTO[i])){// aqui veo si son mayusculas y si lo es directamente imprimo un espacio antes de que imprima la misma mayuscula
           cout << esp;}
    if (contro == 0) {cout << TEXTO[i];}// al final con mi "booleano" si es igual a 0 significa que no es un nuemero por lo tanto lo puedo imprimir caso contrario no lo imprimo
        contro = 0;
}}
