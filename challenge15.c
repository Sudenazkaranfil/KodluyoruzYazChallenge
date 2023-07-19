#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//🙌🏼 Easy: Kullanıcının doğum tarihini alarak kaç yaşında olduğunu bulan bir algoritma
int main() {
    int simdikiYil, simdikiAy, simdikiGun;
    printf("Bugunun gun ay yil tarihini bosluk birakarak giriniz: \n");
    scanf("%d %d %d",&simdikiGun,&simdikiAy,&simdikiYil);

    int dogumYili, dogumAy, dogumGun;
    printf("Dogum yilini giriniz: ");
    scanf("%d", &dogumYili);
    printf("Dogum ayini giriniz: ");
    scanf("%d", &dogumAy);
    printf("Dogum gununu giriniz: ");
    scanf("%d", &dogumGun);

    int yas = simdikiYil - dogumYili;
    if (simdikiAy < dogumAy || (simdikiAy == dogumAy && simdikiGun < dogumGun)) {
        yas--;
    }

    printf("Yasiniz: %d\n", yas);

    return 0;
}



//🌟Medium: Kullanıcıdan bir metin alınır. Bu metnin içindeki en çok tekrar eden harfi bulmalı ve kaç kere tekrar ettiğini göstermeli.
int main()
{
    //Kullanıcıdan metin alma işlemi
    char metin[100], harfSayisi[26]={0};
    printf("Metninizi giriniz: ");
    fgets(metin, sizeof(metin), stdin);
    su
    //Metni tarama asamasi
    int i;
    while(metin[i]!='\0')
    {
        for(i=0; i<strlen(metin); i++)
        {
            char karakter = metin[i];
            if(karakter>='a' && karakter<='z')
                harfSayisi[karakter - 'a']++;
            else if(karakter>='A' && karakter<='Z')
                harfSayisi[karakter - 'A']++;
        }
    }
    //en çok tekrar eden harfi bulma
    char enCokTekrarEdenHarf;
    int enCokTekrarEdenSayi = 0;

    int j;
    for(j=0; j<26; j++)
    {
        if(harfSayisi[j] > enCokTekrarEdenSayi)
        {
            enCokTekrarEdenSayi = harfSayisi[j];
            enCokTekrarEdenHarf = 'a' + j;
        }
    }

    //yazdirma islemi
    printf("En cok tekrar eden harf: %c\n", enCokTekrarEdenHarf);
    printf("Tekrar sayisi: %d", enCokTekrarEdenSayi);
    return 0;
}



/*💪🏻Hard: Bir tam sayı dizisi oluşturun. Kullanıcıdan alınan hedef sayı doğrultusunda sayı dizisinin içinden sayılar seçip toplayarak
hedef sayıya ulaşmasını sağlamalısın. Farklı farklı kombinasyonlar ile hedef sayıya ulaşın. */

#define BOYUT 100 //dizi  boyutu
void kombinasyon(int dizi1[], int hedefSayisi, int toplam, int indeks, int dizi2[], int dizi2Indeksi, int* sayac)
{
    if(*sayac>=10) //Kombinasyon sayısını 10 ile sınırlama
    {
        return;
    }
    if(hedefSayisi == toplam) //hedef sayısına ulaşınca yazdırma işlemine geçer
    {
        printf("Gecerli Kombinasyonlar ");
        for(int i=0; i<dizi2Indeksi; i++) {
            printf("%d ",dizi2[i]);
            if (i != dizi2Indeksi - 1) {
                printf("+ ");
            }
        }
        printf("\n");
        (*sayac)++;
        return;
    }
    if(toplam > hedefSayisi || indeks >= BOYUT)
    {
        return;
    }

    dizi2[dizi2Indeksi] = dizi1[indeks];
    kombinasyon(dizi1,hedefSayisi,toplam + dizi1[indeks], indeks, dizi2, dizi2Indeksi + 1, sayac);

    kombinasyon(dizi1, hedefSayisi, toplam, indeks +1, dizi2, dizi2Indeksi, sayac);
}

void altKume(int dizi1[], int hedefSayisi, int boyut) //Kombinasyonları bulup yazdırmaya yardımcı olan fonksiyon
{
    int dizi2[BOYUT];
    int sayac = 0;
    kombinasyon(dizi1, hedefSayisi, 0, 0, dizi2, 0, &sayac);
}

int main()
{
    srand(time(NULL));
    int dizi1[BOYUT];
    for(int i=0; i<BOYUT; i++)
    {
        dizi1[i]= i+1;
    }

    int hedefSayi, sayac=0;
    printf("Hedef sayiyi giriniz: ");
    scanf("%d", &hedefSayi);

    int dizi2[BOYUT];
    for(int i=0; i<BOYUT; i++) //Kombinasyonları rastgele sayılarla oluşturmayı sağlar
    {
        int rastgeleIndeks = rand()%BOYUT;
        dizi2[i] = dizi1[rastgeleIndeks];
    }
    altKume(dizi2, hedefSayi, BOYUT);

    return 0;
}
