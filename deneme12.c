#include<stdio.h>
#include<string.h>

int main()
{
    char isim[50];
    char soyisim[50];
    int isim_uzunluk,soyisim_uzunluk,i;

    printf("isim giriniz: ");
    scanf("%s",isim);
   
    printf("soyisim giriniz: ");
    scanf("%s",soyisim);

    isim_uzunluk= strlen(isim);

    for(i=3 ; i<isim_uzunluk ;i++)
    {
        isim[i]='*';
    }

    soyisim_uzunluk= strlen(soyisim);

    for(i=3 ; i<soyisim_uzunluk ; i++)
    {
        soyisim[i]='*';
    }

    printf("%s %s",isim,soyisim);


}