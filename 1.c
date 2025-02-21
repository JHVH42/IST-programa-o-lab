#include <stdio.h>

int main()
{

    int temp, s, m, h;
    temp = s = m = h = 0;

    printf("Insere o tempo em segundos:\n");
    scanf("%d", &temp);

    s = temp % 60;
    m = (temp / 60) % 60;
    h = temp / (60 * 60);

    printf("O tempo correspondente é %d horas, %d minutos e %d segundos.\n", h, m, s);

    return 0;
}