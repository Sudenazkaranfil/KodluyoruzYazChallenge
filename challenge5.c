#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//🙌🏼 Easy: Kullanıcıdan aldığın iki sayının toplamını ekrana yazdıran bir kod parçacığı yazar mısın?

int main()
{
    int sayi1, sayi2;
    printf("ilk sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    int toplam = sayi1 + sayi2;
    printf("\n%d + %d = %d\n", sayi1, sayi2, toplam);

    return 0;
}



// 🌟Medium:  Kullanıcıdan alınan bir metindeki kelime sayısını hesaplayan bir kod parçacığı yazar mısın?

int main()
{
    char metin[100];
    int kelimeSayisi = 0;
    bool kelime = false;

    printf("Bir metin giriniz: ");
    gets(metin);

    for(int i=0; metin[i]!='\0'; i++)
    {
        if (metin[i] == ' ' || metin[i] == '\t' || metin[i] == '\n' || metin[i] == '\r')
        {
            if(kelime)
            {
                kelime = false;
                kelimeSayisi++;
            }
        }
        else
        {
            kelime = true;
        }
    }

    if (kelime)
    {
        kelimeSayisi++;
    }

    printf("Metindeki kelime sayisi: %d", kelimeSayisi);

    return 0;
}

