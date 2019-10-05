#include <iostream>

using namespace std;

int main(){
    int suma=1, resta=2, multiplicacion=3, division=4, fibonacci=5, factorial=6, salir=7, opcion;
    cout<<"ingrese que operacion desea:"<<endl;
    cout<<"suma , resta, multiplicacion, division, fibonacci, factorial, salir"<<endl;
    cin>>opcion;
    if(opcion==1)
    {
        int a, b, res;
        cout<<"ingrese numeros a: "<<endl;
        cin>>a;
        cout <<"ingrese numero b: "<<endl;
        cin>>b;
        res=a+b;
        cout<<"la suma es:"<<res<<endl;
        system("pause"); //linea para que la consola  no se cierre sola.
    }
    if(opcion==2)
    {
        int a, b, res;
        cout<<"ingrese numero a: "<<endl;
        cin>>a;
        cout<<"ingrese numero b: "<<endl;
        cin>>b;
        res=a-b;
        cout<<"la resta es: "<<res<<endl;
        system("pause");
    }
    if(opcion==3)
    {
        int a, b, res;
        cout<<"ingrese numero a: "<<endl;
        cin>>a;
        cout<<"ingrese numero b: "<<endl;
        cin>>b;
        res=a * b;
        cout<<"la multiplicacion es: "<<res<<endl;
        system("pause");
    }
    if (opcion==4)
    {
        int a, b, res;
        cout<<"ingrese numero a: "<<endl;
        cin>>a;
        cout<<"ingrese el numero a: "<<endl;
        cin>>b;
        res= a / b;
        cout<<"la division es: "<<res<<endl;
        system ("pause");
    }
    if (opcion==5)
    {
       int num=1;
       int anterior=0;
       int aux;
       for( int i=0; i<1; i++){
       printf ("%d,", num);
       aux=num;
       num= num + anterior;
       anterior= aux;
       }
       cout<<"el bonucci es:"<<aux<<endl;
       printf ("\n\n\n");
       system ("pause");
    }
    if (opcion==6)
    {
        int numero, factorial=1;
    cout <<"digite el numero que desea factorizar:";
    cin>>numero;
    for (int i=1; i<=numero; i++){
        factorial = factorial * i;
    }
    cout <<"\n el factorial de numero es: "<<factorial<<endl;
    system ("pause");
    }
    if (opcion==7)
    {
        int numero=7;
    }
    system ("pause");

    return 0;
}
