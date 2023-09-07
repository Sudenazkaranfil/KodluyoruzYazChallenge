#include <stdio.h>
#include <stdlib.h>

//🙌🏼 Easy: Bir futbol maçında 3 puanlık atışlarda 5 kez isabet edildi, 2 puanlık atışlarda ise 10 kez isabet edildi. Toplam kaç puan elde edildi?
int main()
{
    int puan1=3, puan2=2;
    int toplamPuan, isabet1, isabet2;
    printf("%d puanlik atistaki isabet sayisini giriniz: ", puan1);
    scanf("%d", &isabet1);
    printf("%d puanlik atistaki isabet sayisini giriniz: ", puan2);
    scanf("%d", &isabet2);

    toplamPuan = (puan1*isabet1) + (puan2*isabet2);
    printf("Toplam puan: %d ", toplamPuan);
    return 0;
}

/*🌟Medium:  Bir mağazada bir kitap 80 TL, bir defter 20 TL ve bir kalem 5 TL. Bir müşteri 2 kitap, 3 defter ve 4 kalem aldı.
 Müşteri ne kadar ödeme yapmalı? */

 int main()
 {
     int kitapUcreti, defterUcreti, kalemUcreti;
     int alinanKitap, alinanDefter, alinanKalem;

     printf("1 kitabin ucretini giriniz: ");
     scanf("%d", &kitapUcreti);
     printf("1 defterin ucretini giriniz: ");
     scanf("%d", &defterUcreti);
     printf("1 kalemin ucretini giriniz: ");
     scanf("%d", &kalemUcreti);

     printf("Alinan kitap sayisini giriniz: ");
     scanf("%d", &alinanKitap);
     printf("Alinan defter sayisini giriniz: ");
     scanf("%d", &alinanDefter);
     printf("Alinan kalem sayisini giriniz: ");
     scanf("%d", &alinanKalem);

     int toplamUcret = (kitapUcreti*alinanKitap) + (defterUcreti*alinanDefter) + (kalemUcreti*alinanKalem);
     printf("Musterinin yapmasi gereken odeme = %d ", toplamUcret);
     return 0;
 }


 //💪🏻Hard: Bir sınıfta 30 öğrenci bulunmaktadır. Öğrencilerden kaç farklı şekilde 4 kişi seçilebilir?😀🗝️
 //C(n, r) = n! / (r!(n-r)!)

 unsigned long long int faktoriyel(int n)
 {
     unsigned long long int sonuc = 1;
     for(int i=1; i<=n; i++)
     {
         sonuc=sonuc*i;
     }
     return sonuc;
 }
 int main()
 {
     int ogrenciSayisi, seciliOgrenciSayisi;
     printf("Siniftaki ogrenci sayisini giriniz: ");
     scanf("%d", &ogrenciSayisi);
     printf("Secilecek ogrenci sayisini giriniz: ");
     scanf("%d", &seciliOgrenciSayisi);

    unsigned long long int kombinasyon = faktoriyel(ogrenciSayisi)/(faktoriyel(seciliOgrenciSayisi) * faktoriyel(ogrenciSayisi-seciliOgrenciSayisi));
    printf("Ogrenciler arasindan %llu farkli sekilde %d ogrenci secilebilir.\n", kombinasyon, seciliOgrenciSayisi);
     return 0;
 }
