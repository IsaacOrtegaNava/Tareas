#include <stdio.h>
#include <stdlib.h>

void main()
{
float A;
float voltaje,corriente,resistencia,Resistorl;

int ;


    printf("seleccione el numero de lo que quiere calcular para cada resistencia:\n \n1.- R1= Voltaje\n \n2.- R1= Corriente\n \n3.- R2= Voltaje\n \n4.- R2= Corriente\n \n5.- R3= Voltaje\n \n6.- R3= Corriente\n");
    printf("-\n");
    scanf("%f",&A);

    if (A==1)
    {
    printf("Ingresa el valor de la corriente\n");
    scanf("%f",&corriente);
    printf("Ahora ingresa el valor de la resistencia\n");
    scanf("%f",&resistencia);

    Resistorl= corriente * resistencia;
    printf("El valor del voltaje que circula por R1 es igual a: %2.f\a\n",Resistorl);
    }

    if (A==2)
    {
    printf("Ingresa el valor del voltaje\n");
    scanf("%f",&voltaje);
    printf("Ahora ingresa el valor de la resistencia\n");
    scanf("%f",&resistencia);

    Resistorl= voltaje / resistencia;
    printf("El valor de la corriente que circula por R1 es igual a: %2.f\a\n",Resistorl);
    }

    if (A==3)
    {
    printf("Ingresa el valor de la corriente\n");
    scanf("%f",&corriente);
    printf("Ahora ingresa el valor de la resistencia\n");
    scanf("%f",&resistencia);

    Resistorl= corriente * resistencia;
    printf("El valor del voltaje que circula por R2 es igual a: %2.f\a\n",Resistorl);
    }

    if (A==4)
    {
    printf("Ingresa el valor del voltaje\n");
    scanf("%f",&voltaje);
    printf("Ahora ingresa el valor de la resistencia\n");
    scanf("%f",&resistencia);

    Resistorl= voltaje / resistencia;
    printf("El valor de la corriente que circula por R2 es igual a: %2.f\a\n",Resistorl);
    }

    if (A==5)
    {
    printf("Ingresa el valor de la corriente\n");
    scanf("%f",&corriente);
    printf("Ahora ingresa el valor de la resistencia\n");
    scanf("%f",&resistencia);

    Resistorl= corriente * resistencia;
    printf("El valor del voltaje que circula por R3 es igual a: %2.f\a\n",Resistorl);
    }

    if (A==6)
    {
    printf("Ingresa el valor del voltaje\n");
    scanf("%f",&voltaje);
    printf("Ahora ingresa el valor de la resistencia\n");
    scanf("%f",&resistencia);

    Resistorl= voltaje / resistencia;
    printf("El valor de la corriente que circula por R3 es igual a: %2.f\a\n",Resistorl);
    }
    return 0;
    }

