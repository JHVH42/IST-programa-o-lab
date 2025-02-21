#include <stdio.h>

int main() {

    int s, m, h, temp, s1, m1, h1, temp1, s2, m2, h2, temp2;

    printf("Insere o primeiro tempo sucessivamente pela ordem de horas, minutos e segundos:\n");
    printf("Horas:\n");
    scanf("%d", &h1);

    while (h1 < 0 || h1 > 23) {
        printf("Horas inválidas!\n");
        printf("Por favor insere o valor correto:\n");
        printf("Horas:\n");
        scanf("%d", &h1);   
    }

    printf("Minutos:n\n");
    scanf("%d", &m1);

    while (m1 < 0 || m1 > 59) {
        printf("Minutos inválidos\n");
        printf("Por favor insere o valor correto:\n");
        printf("Minutos:\n");
        scanf("%d", &m1);
    }

    printf("Segundos:\n");
    scanf("%d", &s1);

    while (s1 < 0 || s1 > 59) {
        printf("Segundos inválidos\n");
        printf("Por favor insere o valor correto:\n");
        printf("Segundos:\n");
        scanf("%d", &s1);
    }

    printf("Insere o segundo tempo sucessivamente pela ordem de horas, minutos e segundos:\n");
    printf("Horas:\n");
    scanf("%d", &h2);

    while (h2 < 0 || h2 > 23) {
        printf("Horas inválidas!\n");
        printf("Por favor insere o valor correto:\n");
        printf("Horas:\n");
        scanf("%d", &h2);
    }

    printf("Minutos:n\n");
    scanf("%d", &m2);

    while (m2 < 0 || m2 > 59) {
        printf("Minutos inválidos\n");
        printf("Por favor insere o valor correto:\n");
        printf("Minutos:\n");
        scanf("%d", &m2);
    }

    printf("Segundos:\n");
    scanf("%d", &s2);

    while (s2 < 0 || s2 > 59) {
        printf("Segundos inválidos\n");
        printf("Por favor insere o valor correto:\n");
        printf("Segundos:\n");
        scanf("%d", &s2);
    }

    temp1 = h1 * (60 * 60) + m1 * 60 + s1;
    temp2 = h2 * (60 * 60) + m2 * 60 + s2;

    if (temp1 > temp2) {
        temp = temp1 - temp2;
        s = temp % 60;
        m = (temp / 60) % 60;
        h = temp / (60 * 60);
        printf("A diferença de tempo é %d horas, %d minutos e %d segundos.\n", h, m, s);
    } else {
        temp = temp2 - temp1;
        s = temp % 60;
        m = (temp / 60) % 60;
        h = temp / (60 * 60);
        printf("A diferença de tempo é %d horas, %d minutos e %d segundos.\n", h, m, s);
    }

    return 0;
}