#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*🙌🏼 Easy: Kullanıcıdan bir sayı almanızı ve bu sayının asal olup olmadığını kullanıcıya söylemenizi istiyorum. */
int main()
{
    int sayi, i;
    int asal=1; //Başta asal sayı olarak kabul edip, bölünme durumunda altta asal değil ile değiştirmemizi sağlayacak bir değer atarız

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if(sayi < 2) //Negatif sayılar, 0,1 sayıları asal değildir
    {
        printf("%d asal bir sayi degildir.\n", sayi);
        return 0;
    }

    for(i=2; i<sayi; i++)
    {
        if(sayi%i==0)
        {
            asal=0;  //Sayıyı asal değil olarak algılar
            break;
        }
    }
    //Yazdırma işlemi
    if(asal==1)
    {
        printf("%d asal bir sayidir.\n", sayi);
    }
    else
    {
        printf("%d asal bir sayi degildir.\n", sayi);
    }
    return 0;
}

/*🌟Medium: Kullanıcıdan bir kelime almanız gerekiyor. Bu kelimenin harflerini büyük harflere dönüştüren bir program yazmanızı istiyorum.*/
int main()
{
    char kelime[20];
    printf("Bir kelime giriniz: ");
    scanf("%s", &kelime);

    for(int i=0; i<kelime[i]!='\0'; i++) //Kelimenin tüm harflerini tarama işlemi
    {
        kelime[i]=toupper(kelime[i]); //Her harfi büyük harfe dönüştürme işlemi
    }
    printf("Buyuk harflerle yazilmis hali: %s", kelime);
    return 0;
}

/*💪🏻Hard: Bir şirket, bir ürünü üretmek ve satmak için belirli bir maliyet ve satış fiyatı hesaplamaktadır. Şirketin bir ürün için birim maliyeti ve
birim satış fiyatı verildiğinde, kaç adet ürünün satılması durumunda şirketin kar edeceğini bulmanı istiyorum. */

int main()
{
    int maliyet, satisFiyati, kar;
    int satisSayisi=0;

    printf("urunun maliyetini giriniz: ");
    scanf("%d", &maliyet);
    printf("urunun satis fiyatini giriniz: ");
    scanf("%d", &satisFiyati);

    kar = satisFiyati-maliyet; //kar elde etmek için aradaki fark hesaplanır
    if(kar<=0)
    {
        printf("Maliyet satis fiyatindan esit veya fazla oldugu icin kar edilemez.");
    }
    else
    {
        satisSayisi = (maliyet/kar) + 1; //kaç tane satılırsa maliyeti karşılayıp sonrasında kar yapacağı hesaplanır.
        printf("En az %d urun satilirsa kar edilir.\n", satisSayisi);
    }
    return 0;
}
