#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float B, H, retPol, retCen, retJar;
    printf("Calculo do perimetro de um retangulo\n");
    printf("Valor da base em centimetros:");
    scanf("%f",&B);
    printf("Valor  da altura em centimetros");
    scanf("%f",&H);

    retCen = 2 * B + 2 * H
    retPol = retCen * 0.393701
    retJar = retCen * 0,0109361
    if (B > 0 && H > 0){
        printf("O valor do perimetro em centimetros e %.2f\n", retCen);
        printf("O valor do perimetro em polegadas e %.2f\n",retPol);
        printf("O valor de perimetro em jardas e %.2f\n",retJar);
    } else{
    printf("Valor invalido");
    }
    return 0;
}
