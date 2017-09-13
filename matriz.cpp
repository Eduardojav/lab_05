#include<iostream>
using namespace std;
int mat[3][3];//defino las variables matriz el alto de la matriz y un int que actuara como booleano
int lenmat=3;
bool r=true;
int mas(int mat[][3],int lenmat=3){// en esta funcion veo cual es el mayor numero de la matriz
    int c;//defino c como el que guardara el valor del mayor elemnto de la matriz
    c=mat[0][0];//empezando por el primer elemento como referencia paso por todos los demas  comparandolos
    for(int i=0;lenmat>i;i++){
        for(int j=0;lenmat>j;j++){
        if (c<mat[i][j]){
            c=mat[i][j];}
    }
} return c; }
int miin(int mat[][3],int lenmat=3)// lo mismo que la funcion mas pero este es para encontrar al menor
{int c;
c=mat[0][0];
    for(int i=0;lenmat>i;i++){
        for(int j=0;lenmat>j;j++){
        if (c>mat[i][j]){
            c=mat[i][j];}
    }}
    return c;}
float prom(int mat[][3]){// esta sirve para encontrar el promedio de la matriz lo cual es bastante sencillo por el tamaño predefinido que tiene
float suma=0.0;
for(int i=0;i<3;i++){// pasamos por todos los elementos y 1 por 1 los sumamos
    for(int j=0;j<3;j++){
        suma=suma+mat[i][j];// lo dividimos entre la cantidad de elementos y listo
    }
}return suma/9;}
float med(int mat[][3]){
    return (mat[1][1]+mat[1][2])/2;}// para calcular la mediana solo retornamos los valores en las posiciones medias de la matriz al ser 3x3 retornamos el cuarto y quinto elemento
int orde(int mat[][3],int lenmat=3){// esta funcion sirve para ordenar las sub cadenas de la matriz
int aux;
int c;
   for(int i=0;i<lenmat;i++){
        for (int k=0;k<lenmat-1;k++){;//usamos 4 for y aplicamos el ordenamiento por inserccion
        aux= k;
        for (int j=1;j<lenmat;j++){;
            if (mat[i][j]<mat[i][aux]){
                aux=j;}}
        if (aux != k){
            c=mat[i][k];
            mat[i][k]=mat[i][aux];
            mat[i][aux]=c;

   }
}}}
int main(){
    int a=0;
    int b=0;
    for(int i=0;lenmat>i;i++){
        for(int j=0;lenmat>j;j++){//ingresamos los datos de la matriz
            cin>>mat[i][j];}}
    for(int i=0;lenmat>i;i++){//la imprimimos
        for(int j=0;lenmat>j;j++){
            cout<<mat[i][j]<<" ";}
    cout<<" "<<endl;}
    cout<<"el minimo de la matriz desordenada es"<<miin(mat)<<endl;//mostramos los resultados de la matriz desordenada
    cout<<"el maximo de la matriz desordenada es "<<mas(mat)<<endl;
    cout<<"el promedio es "<<prom(mat)<<endl;
    cout<<"la mediana de la matriz desordenada es "<<med(mat)<<endl;
    orde(mat);
    while (r==true){// este while sirve para terminar de ordenar los elementos de la lista ya que la funcion orde no interactua con los elementos de las otras listas
        for (int i=0;i<lenmat-1;i++){
            if(mat[i][2]>mat[i+1][0]){//vemos si el ultimo de una fila es mayor que primero de otra
                int h;
                h=mat[i][2];
                mat[i][2]=mat[i+1][0];
                mat[i+1][0]=h;
            //cambiamos valores
                orde(mat);}// la volvemos a ordenar y vemos si ya no se nesecita y  mandamos r=false
            else{r=false;}}}
    for(int i=0;lenmat>i;i++){//imprimimos de nuevo y listo
        for(int j=0;lenmat>j;j++){
            cout<<mat[i][j]<<" ";}
        cout<<" "<<endl;}
    cout<<"la mediana de la matriz ordenada es "<<med(mat)<<endl;

}
