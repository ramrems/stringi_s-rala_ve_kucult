#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int karakter_bul(char string[],char harf);
int main()
{
    printf("islem yapmak istediginiz stringi ve aradiginiz karakteri giriniz:\n");
    char *metin,harff;
    metin=(char*)malloc(sizeof(char)*42);
    scanf("%s %c",metin,&harff);
    printf("girdiginiz string: %s",metin);
   karakter_bul(metin,harff);
}
int karakter_bul(char string[],char harf){
    int adet=0;
    for(int i=0;i<strlen(string);i++){
        if(string[i]==harf){
            printf("\naradiginiz harf %d.karakterde bulunmakta",i);
    adet++;
    }}
    printf("\naradiginiz harf %d kez bulunmakta",adet);
    return 0;
    }
