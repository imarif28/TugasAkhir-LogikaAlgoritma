#include <stdio.h>
#include <conio.h>


void main()
{
int pilih;
double biaya,lama,diskon,bayar;
char ya;

do {
cout <<"\n\n";
cout <<"             DAFTAR PERHITUNGAN BIAYA TELEPON         ";
cout <<"\n                 Toto Raharjo 3105111326          \n";
cout <<"\n--------------------------------------------------\n";
cout <<"                 1. Operator Media\n";
cout <<"                 2. Operator Surya\n";
cout <<"                 3. Operator Sahabat\n";
cout <<"--------------------------------------------------\n";
cout <<"|>> Masukan pilihan Operator yang Anda gunakan : "; cin >>pilih;
cout <

switch (pilih)
{
case 1:
cout <<"\t Lama telepon [menit] : "; cin >>lama;
if (lama>=60)
  {
    biaya=60*25;
    diskon=(lama-60)*15;
    bayar=biaya+diskon;
  }
  else
  bayar=lama*25;

cout <<"\t Anda menggunakan Operator : Media\n";
cout <<"\t Biaya yang harus anda bayar : Rp "<
break;

case 2:
cout <<"\t Lama telepon [menit] : "; cin >>lama;
if (lama>=60)
  {
  biaya=60*15;
  diskon=(lama-60)*3;
  bayar=biaya+diskon;
  }
  else
  bayar=lama*15;

cout <<"\t Anda menggunakan Operator : Surya\n";
cout <<"\t Biaya yang harus anda bayar : Rp "<
break;


case 3:
cout <<"\t Lama telepon [menit] : "; cin >>lama;
if (lama >=60)
  {
  biaya=60*10;
  diskon=(lama-60)*1.5;
  bayar=biaya+diskon;
  }

  else
  bayar=lama*10;

cout <<"\t Anda menggunakan Operator : Sahabat\n";
cout <<"\t Biaya yang harus anda bayar : Rp "<
break;

default:
cout <<"TIDAK ADA OPERATOR YANG ANDA PILIH ! \n~ SYSTEM ERROR ~";
break;

}
cout<<"\n--------------------------------------------------"<
cout << "Apakah Anda ingin kembali ke MENU UTAMA ?(Y/T) : " ;
cin>>ya;
}
while (ya == 'y');

getch();
}
