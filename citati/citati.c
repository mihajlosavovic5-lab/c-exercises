#include<stdio.h>
int main() {
    int x;
    printf("ml' nob:\n");
    if (scanf("%d",&x) != 1)
    {
        printf("Neh mi'\n");
    }
    else if (x < 0 || x > 8) {
        printf("Qih mi' %d\n", x);
    }
    else if(getchar() != '\n')
    {
        printf("bIjatlh 'e' yImev\n");
    }
    else {
        switch (x) {
        case 0:
            printf("Qapla'\n");
            printf("noH QapmeH wo' Qaw'lu'chugh yay chavbe'lu' 'ej wo' choqmeH may' DoHlu'chugh lujbe'lu'.\n");
            break;
        case 1:
            printf("Qapla'\n");
            printf("bortaS bIr jablu'DI' reH QaQqu' nay'.\n");
            break;
        case 2:
            printf("Qapla'\n");
            printf("Qu' buSHa'chugh SuvwI', batlhHa' vangchugh, qoj matlhHa'chugh, pagh ghaH SuvwI''e'.\n");
            break;
        case 3:
            printf("Qapla'\n");
            printf("bISeH'eghlaH'be'chugh latlh Dara'laH'be'.\n");
            break;
        case 4:
            printf("Qapla'\n");
            printf("qaStaHvIS wa' ram loS SaD Hugh SIjlaH qetbogh loD.\n");
            break;
        case 5:
            printf("Qapla'\n");
            printf("Suvlu'taHvIS yapbe' HoS neH.\n");
            break;
        case 6:
            printf("Qapla'\n");
            printf("Ha'DIbaH DaSop 'e' DaHechbe'chugh yIHoHQo'.\n");
            break;
        case 7:
            printf("Qapla'\n");
            printf("Heghlu'meH QaQ jajvam.\n");
            break;
        case 8:
            printf("Qapla'\n");
            printf("leghlaHchu'be'chugh mIn lo'laHbe' taj jej.\n");
            break;
        }
    }
    return 0;
}