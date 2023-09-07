#include <stdio.h>
#include <stdlib.h>


//🙌🏼 Easy: Bir kutuda 5 kırmızı, 4 yeşil ve 3 mavi top bulunuyor. Kutudan rastgele çekilen 2 topun aynı renk olma olasılığı nedir?
int main()
{
    int kirmiziTop=5, yesilTop=4, maviTop=3;
    int cekilenTopSayisi=2;

    double kirmiziTopOlasiligi = (double)kirmiziTop/12 * ((double)kirmiziTop-1)/11;
    double yesilTopOlasiligi = (double)yesilTop/12 * ((double)yesilTop-1)/11;
    double maviTopOlasiligi = (double)maviTop/12 * ((double)maviTop-1)/11;

    double olasilik = kirmiziTopOlasiligi + yesilTopOlasiligi + maviTopOlasiligi;
    printf("Rastgele cekilen 2 topun ayni renk olma olasiligi: %.4lf\n", olasilik);

    return 0;
}


//🌟Medium: Bir öğrenci kitap okuma hedefi olarak yılda 36 kitap okumayı belirledi. Eğer her ay eşit sayıda kitap okursa kaç kitap okumuş olur?

int main()
{
    double yillikHedef;

    printf("Yillik kitap okuma hedefini giriniz: ");
    scanf("%lf", &yillikHedef);

    double aylikHedef = yillikHedef/12.0;
    printf("Aylik okumasi gereken kitap sayisi: %.2lf", aylikHedef);

    return 0;
}

/*💪🏻Hard: Bir yarış pistinde iki yarışmacı aynı anda start alıyor. İlk yarışmacı saatte 15 km hızla, ikinci yarışmacı ise saatte 20 km hızla koşuyor.
İkinci yarışmacı kaç saat sonra ilk yarışmacıyı yakalar?😀🗝 */
//pist uzunlugu bilerek verilmedi sanırım :)

int main()
{
    int yarismaci1Hizi, yarismaci2Hizi;

    printf("1. yarismacinin hizini giriniz: ");
    scanf("%d", &yarismaci1Hizi);
    printf("2. yarismacinin hizini giriniz: ");
    scanf("%d", &yarismaci2Hizi);
    printf("\n");

    if(yarismaci2Hizi>yarismaci1Hizi)
    {
        printf("0\n");
        printf("2. yarismaci 1. yarismacinin onunde oldugu icin yakalayamaz.");
    }
    else if(yarismaci1Hizi>yarismaci2Hizi)
    {
        printf("0\n");
        printf("2. yarismaci 1. yarismacidan yavas oldugu icin yakalayamaz.");
    }
    return 0;
}
