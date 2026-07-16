#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int tutulan_sayi,tahmin,deneme_sayisi=0;

srand(time(NULL)); //her seferinde rastgele farklı sayı icin
tutulan_sayi=(rand() % 100)+1; //1 ile 100 arasında bi sayi üretiyoruz

printf("==SAYI TAHMİN OYUNU==\n");
printf("1 ile 100 arasinda bir sayi giriniz: ");

while(1){
    printf("tahmininiz:");
    scanf("%d",&tahmin);
    deneme_sayisi++;

    if(tahmin<tutulan_sayi){
        printf("daha büyük bir sayi giriniz\n");
    }

    else if(tahmin>tutulan_sayi){
        printf("daha kücük bir sayi giriniz\n");
    }

    else{
        printf("tebrikler dogru tahmin\n");
        printf("tuttugum sayi: %d\n",tutulan_sayi);
        printf("%d. denemede buldunuz\n",deneme_sayisi);
        break;
    }

}   

return 0;
}