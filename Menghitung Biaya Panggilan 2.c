#include <stdio.h>

main (void)
{
    int jam1, menit1, detik1, jam2, menit2, detik2, waktu1, waktu2, total_menit, bayar;

    printf ("Tarif Telepon\n");
    printf ("+---------------------------------------------------------------+\n");
    printf ("|\t      Waktu \t\t | \tTarif per Menit \t|\n");
    printf ("+--------------------------------+------------------------------+\n");
    printf ("|     06:00:00 s/d 06:59:59\t | \t    Rp. 50\t\t|\n");
    printf ("|     07:00:00 s/d 11:59:59\t | \t    Rp. 75\t\t|\n");
    printf ("|     12:00:00 s/d 12:59:59\t | \t    Rp. 40\t\t|\n");
    printf ("|     13:00:00 s/d 17:59:59\t | \t    Rp. 75\t\t|\n");
    printf ("|     18:00:00 s/d 20:59:59\t | \t    Rp. 50\t\t|\n");
    printf ("|     21:00:00 s/d 23:59:59\t | \t    Rp. 25\t\t|\n");
    printf ("|     00:00:00 s/d 05:59:59\t | \t    Rp. 10\t\t|\n");
    printf ("+---------------------------------------------------------------+\n");
    printf ("Masukan waktu awal \t[JJ:MM:DD] = ");
    scanf ("%d:%d:%d",&jam1,&menit1,&detik1);
    printf ("Masukan waktu akhir \t[JJ:MM:DD] = ");
    scanf ("%d:%d:%d",&jam2,&menit2,&detik2);

    waktu1 = (jam1*60) + menit1 + (detik1/60);
    waktu2 = (jam2*60) + menit2 + (detik2/60);
    total_menit = waktu2 - waktu1;

    if (jam1 < 6)
    {
        bayar = total_menit * 10;
    }
    else
        if (jam1 < 7)
        {
            bayar = total_menit * 50;
        }
        else
            if (jam1 < 12)
            {
                bayar = total_menit * 75;
            }
            else
                if (jam1 < 13)
                {
                    bayar = total_menit * 40;
                }
                else
                    if (jam1 < 18)
                    {
                        bayar = total_menit * 75;
                    }
                    else
                        if (jam1 < 21)
                        {
                            bayar = total_menit * 50;
                        }
                        else
                            if (jam1 < 24)
                            {
                                bayar = total_menit * 25;
                            }

    printf ("Biaya Rp %d",bayar);
}
