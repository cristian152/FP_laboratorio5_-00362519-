#include <iostream>

using namespace std;

int main()
{
    int fac=0;
printf("Ingresa el numero que desea factorial:");
scanf("%d",&fac);
int temp=fac-1;
int r=fac;
while (temp>=1)
{
r=r * temp;
temp--;
}

printf("El factorial de %d es: %d ", fac,r);
system ("pause");

    return 0;
}
