#include <stdio.h>
#include <stdlib.h>


//🙌🏼 Easy: Bir araba saatte 60 km hızla hareket ediyor. Bu araba kaç saatte 240 km yol alır?

int main()
{
    int arabaHizi, toplamYol, sure;
    printf("Arabanin hizini giriniz(km): ");
    scanf("%d", &arabaHizi);
    printf("Hedef yol uzunlugunu giriniz(km): ");
    scanf("%d", &toplamYol);

    sure = toplamYol/arabaHizi;
    printf("Araba %d saatte %d km yol alir.", sure, toplamYol);
    return 0;
}

/*🌟Medium:  Bir çiftlikte toplamda 36 baş tavuk ve koyun bulunmaktadır. Bu hayvanlardan toplamda 100 bacak çıkmaktadır.
Çiftlikte kaçar tane tavuk ve koyun olduğunu bulan kod parçacığını yazar mısın? */

int main()
{
    int tavukSayisi, koyunSayisi;
    int toplamBacakSayisi,toplamBasSayisi;

    toplamBasSayisi = tavukSayisi + koyunSayisi;
    toplamBacakSayisi = ((tavukSayisi*2) + (koyunSayisi*4));

    printf("Toplam tavuk ve koyun bas sayisi giriniz: ");
    scanf("%d", &toplamBasSayisi);
    printf("Toplam tavuk ve koyunun bacak sayisini giriniz: ");
    scanf("%d", &toplamBacakSayisi);


    int denklem = ((toplamBacakSayisi) - (toplamBasSayisi*2));
    denklem = ((2*tavukSayisi + 4*koyunSayisi) - (2*tavukSayisi + 2*koyunSayisi));
    denklem = 2*koyunSayisi;
    koyunSayisi = ((toplamBacakSayisi) - (toplamBasSayisi*2))/2;
    tavukSayisi = toplamBasSayisi - koyunSayisi;

    printf("Ciftlikte %d tane tavuk, %d tane koyun vardir.\n", tavukSayisi, koyunSayisi);
    return 0;
}
