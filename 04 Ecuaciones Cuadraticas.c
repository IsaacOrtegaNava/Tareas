#include <stdio.h>
#include <stdlib.h>

 int main()
{

 int a,b,c;
 int B,b2;
 int ac4;
 int v;
 int dos;
 int cuatro;
 int inverso;
 int n;
 int raiz;
 int suma;
 int resta2;
 int v2;
 int x1;
 int x2;
 int chipo;

dos= 2;
cuatro = -4;
inverso= -1;

    printf("\n                        $*** SOLUCIONADOR DE ECUACIONES CUADRATICAS ***$\n");
    printf("\n  Inserta el valor de a\n");
    scanf("%i",&a);

    printf("  Inserta el valor de b\n");
    scanf("%i",&b);

    printf("  Inserta el valor de c\n");
    scanf("%i",&c);

    printf("\n                        --Se utiliza la formula de la chicharronera--\n");

    b2= b * b;
    chipo= (a*c)*cuatro+b2;
    raiz= sqrt(chipo);
    B= b * inverso;
    v2= dos * a;
    suma= B + raiz;
    x1= suma / v2;

    printf("\n  El primer resultado (x1) de la ecuacion es; %d\n\a",x1);
    resta2= B - raiz;
    x2= resta2 / v2;
    printf("\n  El segundo resutado (x2) de la ecuacion es; %d\n\a",x2);

return 0;
}
