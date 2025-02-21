#include <stdio.h>
#include <math.h>
#define g 9.8
#define PI 3.1415926

float distancia(float v, float a)
{
    return (v * v * sin(2 * a)) / g;
}

float altura(float v, float a)
{
    return (v * v * sin(a) * sin(a)) / (2 * g);
}

float converte(float a)
{
    return a * PI / 180;
}

int main()
{

    float v, a, t, h, d;

    printf("Insere a velocidade inicial.\n");
    scanf("%f", &v);
    printf("Insere o angulo de lançamento em grau.\n");
    scanf("%f", &a);
    printf("Insere a atura do teto.\n");
    scanf("%f", &t);

    a = converte(a);

    d = distancia(v, a);
    h = altura(v, a);

    // a altura do projetil é maior ou igual que a altura do teto
    if (h >= t)
    {
        printf("O cesto deveria estar %.2f metros e o projetil bate no teto.\n", d);
        return 0;
    }
    else
    {
        printf("O cesto deveria estar %.2f metros e o projetil não bete no teto.\n", d);
    }

    return 0;
}