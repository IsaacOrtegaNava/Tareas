#include <stdio.h>
#include <stdlib.h>

void main()
{
float a,A,Azul,Blanco,Verde;
float voltaje1,corriente1,Resistorl;
float VFA,IFA,VFB,IFB,VFV,IFV;
float R2,R3,R4;

Azul = 2;
Blanco = 3;
Verde = 4;
VFA= 3;
IFA= 0.02;
VFB= 2.8;
IFB= 0.02;
VFV= 1.8;
IFV= 0.015;


int ;

    printf("     *Si quieres calcular el valor de R para cualquier valor de fuente DC ingresa 1\n \n     *Si quieres saber la resistencia de los leds Azul brilante, Blanco y Verde std ingresa 2\n");
    scanf("%f",&a);


    if (a==1)
    {
    printf("Ingresa el valor del voltaje\n");
    scanf("%f",&voltaje1);
    printf("Ahora ingresa el valor de la corriente\n");
    scanf("%f",&corriente1);

    Resistorl= voltaje1 / corriente1;
    printf("El valor de la resistencia es igual a: %2.f\a\n",Resistorl);
    }
    else
    {
    printf("Para calcular la R de los leds escriba el numero del inciso quiere ver:\n1(A)Azul brillante\n2(B)Blanco\n3(C)Verde_std\n");
    scanf("%f",&A);

    if (A==1)
    {
    R2= VFA / IFA;
    printf("El valor de la resistencia del led azul es igual a: %2.f\a\n",R2);
    }
    if (A==2)
    {
    R3= VFB / IFB;
    printf("El valor de la resistencia del led Blanco es igual a: %2.f\a\n",R3);
    }
    if (A==3)
    {
    R4= VFV / IFV;
    printf("El valor de la resistencia del led Verde es igual a: %2.f\a\n",R4);
    }
    return 0;
    }
}
