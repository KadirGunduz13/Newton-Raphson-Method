#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double Func(double x) {
    return x*x*x + 2*x - 4;
}

double diffFunc(double x) {
    return 3*x*x + 2;
}

int main() {

    double hataOrani = 0.001;
    int count = 0;
    double kokAday = 0.0;

    double alt, ust;

    // Başlangıç değeri belirleme
    printf("Bir baslangic degeri giriniz: ");
    scanf("%lf", &kokAday);

    while (fabs(Func(kokAday)) > hataOrani) {
        kokAday = kokAday - (Func(kokAday) / diffFunc(kokAday));
        count++;
    }

    printf("Kok: %lf\n", kokAday);
    printf("Iterasyon sayisi: %d\n", count);

    return 0;
}
