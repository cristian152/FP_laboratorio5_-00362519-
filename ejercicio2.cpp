#include <iostream>

using namespace std;

int main()
{
    int num=1;
    int anterior=0;
    int aux;
    for( int i=0; i<6; i++){
    printf ("%d,", num);
    aux=num;
    num= num + anterior;
    anterior= aux;
    }
    printf ("\n\n\n");
    system ("pause");
    
    return 0;
}
