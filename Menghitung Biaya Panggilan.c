#include<stdio.h>
#include<stdlib.h>

int main()
{
     int jamA, menitA, jamB, menitB, detikA, detikB, detik, waktuA, waktuB, biaya, menu;
     char ulang;
     printf("========================================================\n");
     printf("\tWAKTU PANGGILAN AWAL \n");
     printf("Masukan waktu memulai panggilan(jam)\t: ",jamA);
     scanf("%i",&jamA);
     printf("Masukan waktu memulai panggilan(menit)\t: ",menitA);
     scanf("%i",&menitA);
     printf("Masukan waktu memulai panggilan(detik)\t: ",detikA);
     scanf("%i",&detikA);
     printf("\n");

     printf("========================================================\n");
     printf("\tWAKTU PANGGILAN AKHIR \n");
     printf("Masukan waktu mengakhiri panggilan(jam)\t\t: ",jamB);
     scanf("%i",&jamB);
     printf("Masukan waktu mengakhiri panggilan(menit)\t: ",menitB);
     scanf("%i",&menitB);
     printf("Masukan waktu mengakhiri panggilan(detik)\t: ",detikB);
     scanf("%i",&detikB);
     printf("========================================================\n");

     do
     {
     printf("Pilih provider \n");
     printf("1. Telkomsel \n");
     printf("2. Indosat \n");
     printf("3. Tri \n");
     printf("\n");
     printf("========================================================\n");
     printf("Provider yang dipilih :");
     scanf("%i", &menu);


     switch (menu){
     case 1:
        waktuA= (jamA*3600)+(menitA*60)+ detikA;
        waktuB= (jamB*3600)+(menitB*60)+ detikB;
        detik = waktuB-waktuA;
        biaya = (detik/30)*700;
        printf("\n");
        printf("Lama waktu bicara anda adalah %d jam %d menit %d detik \n",(jamB-jamA),(menitB-menitA),(detikB-detikA));
        printf("jadi biaya yang harus dikeluarkan adalah :Rp %i,00 \n",biaya);
        printf("========================================================\n");
        break;
     case 2:
        waktuA= (jamA*3600)+(menitA*60)+ detikA;
        waktuB= (jamB*3600)+(menitB*60)+ detikB;
        detik = waktuB-waktuA;
        biaya = (detik/30)*600;
        printf("\n");
        printf("Lama waktu bicara anda adalah %d jam %d menit %d detik \n",(jamB-jamA),(menitB-menitA),(detikB-detikA));
        printf("jadi biaya yang harus dikeluarkan adalah : Rp %i,00  \n",biaya);
        printf("========================================================\n");
        break;
     case 3:
        waktuA= (jamA*3600)+(menitA*60)+ detikA;
        waktuB= (jamB*3600)+(menitB*60)+ detikB;
        detik = waktuB-waktuA;
        biaya = (detik/30)*500;
        printf("\n");
        printf("Lama waktu bicara anda adalah %d jam %d menit %d detik \n",(jamB-jamA),(menitB-menitA),(detikB-detikA));
        printf("jadi biaya yang harus dikeluarkan adalah :Rp %i,00  \n",biaya);
        printf("========================================================\n");
        break;

     default:
     printf("\nAnda salh memilih menu");
     }
     printf("\n");
     printf("Ingin memilih provider lain (y/t)? ");
     scanf(" %c", &ulang);
     printf("\n");

    }

    while (ulang!='t');

    printf("Terima Kasih\t");
    printf("========================================================\n");

    return 0;

}
