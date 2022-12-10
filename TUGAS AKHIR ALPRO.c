//Library
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
//End Library

//Header fungsi
void panggilMenu(void);
void Penghitungan();
void struk(void);
void SetColor(unsigned short);
//End header fungsi

//Deklarasi struct
    struct macammenu
    {
        int menubaju,menucelana;
    };
    struct subtotal
    {
        int jmlbeli1,jmlbeli2,jmlbeli3,jmlbeli4,jmlbeli5,jmlbeli6,jmlbeli7,jmlbeli8,jmlbeli9,jmlbeli10;
        int totalharga, bayar, kembalian;
    };
    struct baju
    {
        int polo, shirt, cardigan, jaket, hoodie;

    };
    struct celana
    {
        int jeans, cargo, jogger, denim, kain;

    };
    struct baju menu_baju;
    struct celana menu_celana;
    struct macammenu menu;
    struct subtotal sub;
//End Deklarasi struct   

//Variabel pendukung
    char yakin;
    time_t ambil_waktu;
//End Variabel pendukung

//Fungsi main
int main()
{
    panggilMenu();
    return 0;
}
//End Fungsi main

//Fungsi menu
void panggilMenu (void){
   
    baju:
        SetColor(15); //set warna tulisan menjadi putih
 //menampilkan menu yang dapat dipilih user 
    printf ("\n\t\t  Selamat datang di WHYHEM Store.\n");
    printf ("\t\tSilakan pilih pakaian yang Anda inginkan:\n\n");
    printf("=====================================================================\n");
    printf ("|No.| Baju \t| Harga      |\t\t|No.| Celana\t | Harga     |\n");
    printf("|--------------------------------------------------------------------\n");
    printf("| 1 | Polo\t|  Rp.100000 |\t\t");
    printf("| 6.| Jeans\t | Rp.130000 | \n");
    printf("| 2 | Shirt\t|  Rp.75000  |\t\t");
    printf("| 7.| cargo\t | Rp.125000 |\n");
    printf("| 3 | Cardigan\t|  Rp.95000  |\t\t");
    printf("| 8.| Jogger\t | Rp.120000 |\n");
    printf("| 4 | Jaket\t|  Rp.275000 |\t\t");
    printf("| 9.| denim\t | Rp.300000 |\n");
    printf("| 5 | Hoodie\t|  Rp.325000 |\t\t");
    printf("| 10| Kain\t | Rp.50000  |\n");
    printf("\n====================================================================");
    printf("\n ");
    printf("\n99. Struk Pembayaran\n55. Reset pilihan\n00.  Keluar\n");
    printf("===============================================\n");
 //End menampilkan menu yang dapat dipilih user
 //perulangan untuk user memilih menu sesuai nomor menu
 for (menu.menubaju!=0;menu.menubaju!=99;){
 
 printf("\nInput pilihan yang Anda inginkan:         "); scanf("%d",&menu.menubaju); //input user dengan scanf
 //switch case pilihan yang akan ditampilkan sesuai nomor
    switch(menu.menubaju) {
    case 1:
            printf("\n [1] Pemesanan Polo\n");
            printf("jumlah pesan =\t\t\t  ");scanf("%d",&menu_baju.polo);
            printf("\n===============================================\n");
            sub.jmlbeli1=menu_baju.polo*100000;
            break;
    case 2:
            printf("\n [2]Pemesanan Shirt\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_baju.shirt);
            printf("\n===============================================\n");
            sub.jmlbeli2=menu_baju.shirt*75000;
    break;
    case 3:
            printf("\n [3] Pemesanan Cardigan\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_baju.cardigan);
            printf("\n===============================================\n");
            sub.jmlbeli3=menu_baju.cardigan*95000;
    break;
    case 4:
            printf("\n [4] Pemesanan Jaket\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_baju.jaket);
            printf("\n===============================================\n");
            sub.jmlbeli4=menu_baju.jaket*275000;
    break;
    case 5:
            printf("\n [5] Pemesanan Hoodie\n ");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_baju.hoodie);
            printf("\n===============================================\n");
            sub.jmlbeli5=menu_baju.hoodie*325000;
    break;
    case 6:
            printf("\n [6] Pemesanan Jeans\n ");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_celana.jeans);
            printf("\n===============================================\n");
            sub.jmlbeli6=menu_celana.jeans*130000;
    break;
    case 7:
            printf("\n [7] Pemesanan Cargo\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_celana.cargo);
            printf("\n===============================================\n");
            sub.jmlbeli7=menu_celana.cargo*125000;
    break;
    case 8:
            printf("\n [8] Pemesanan Jogger\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_celana.jogger);
            printf("\n===============================================\n");
            sub.jmlbeli8=menu_celana.jogger*120000;
    break;
    case 9:
            printf("\n [9] Pemesanan Denim\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_celana.denim);
            printf("\n===============================================\n");
            sub.jmlbeli9=menu_celana.denim*300000;
    break;
    case 10:
            printf("\n [10] Pemesanan Kain\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_celana.kain);
            printf("\n===============================================\n");
            sub.jmlbeli10=menu_celana.kain*50000;
    break;
    case 99:
            Penghitungan();  //memanggil fungsi penghitungan
    break;
    case 55:
            system("cls");  //cls untuk membuat layar menjadi kosong
            panggilMenu();  //me-reset pilihan user
    break;
    case 00:
            peyakinan:
            printf("Apakah anda yakin ingin keluar?\n\n[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
            printf("Input Pilihan \t\t\t\t");scanf("%s",&yakin);

            if (yakin=='Y'||yakin=='y') //user yakin untuk menutup program
            {
                system("cls");
                printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
            system("pause");
            exit(panggilMenu);
            }
            else if (yakin=='T'||yakin=='t')  //user membatalkan penutupan program
            {
                system("cls");
                panggilMenu();
            }
            else  //inputan user bukan Y atau T
            {
                printf("\nKesalahan inputan\n\n");
                system("pause");
                goto peyakinan;
            }

    break;
    default: //bila user menginputkan tidak sesuai pilihan nomor yang ada
        printf("Kesalahan inputan, menu no.%d tidak ada dalam daftar\n",menu.menubaju);
        printf("- Silakan input kembali\n");
    break;
 //End switch case pilihan yang akan ditampilkan sesuai nomor
    }
 //End perulangan untuk user memilih menu sesuai nomor menu
}
}

//mengatur warna tulisan
void SetColor(unsigned short color) {
HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsoleOutput,color);}
//End mengatur warna tulisan

//Fungsi untuk melakukan perhitungan harga dan jumlah pesanan
void Penghitungan(void)
{
            printf("\nPesanan Baju \n");
            printf("\tJumlah | Nama Baju         | Total Harga\n\t====================================\n");
            printf("\t   %d   : Polo              : Rp. %d \n",menu_baju.polo, sub.jmlbeli1);
            printf("\t   %d   : Shirt             : Rp. %d \n",menu_baju.shirt, sub.jmlbeli2);
            printf("\t   %d   : Cardigan          : Rp. %d \n",menu_baju.cardigan, sub.jmlbeli3);
            printf("\t   %d   : Jaket             : Rp. %d \n",menu_baju.jaket, sub.jmlbeli4);
            printf("\t   %d   : Hoodie            : Rp. %d \n",menu_baju.hoodie, sub.jmlbeli5);
            printf("\t------------------------------------\n\n");

            printf("Pesanan Celana \n");
            printf("\tJumlah | Nama Celana         | Total Harga\n\t====================================\n");
            printf("\t   %d   : Jeans               : Rp. %d \n",menu_celana.jeans, sub.jmlbeli6);
            printf("\t   %d   : Jeans Cargo         : Rp. %d \n",menu_celana.cargo, sub.jmlbeli7);
            printf("\t   %d   : Jogger              : Rp. %d \n",menu_celana.jogger, sub.jmlbeli8);
            printf("\t   %d   : Denim               : Rp. %d \n",menu_celana.denim, sub.jmlbeli9);
            printf("\t   %d   : Kain 	            : Rp. %d \n",menu_celana.kain, sub.jmlbeli10);
            printf("\t------------------------------------\n");
   
   //menghitung total harga
            sub.totalharga=sub.jmlbeli1+sub.jmlbeli2+sub.jmlbeli3+sub.jmlbeli4+sub.jmlbeli5+sub.jmlbeli6+sub.jmlbeli7+sub.jmlbeli8+sub.jmlbeli9+sub.jmlbeli10;
            printf("\n===============================\nTotal Harga adalah = Rp.%d,-\n===============================\n",sub.totalharga);
           
   bayar:
            printf("\nMasukkan uang bayar = ");scanf("%d",&sub.bayar);
   
            if (sub.bayar>=sub.totalharga)
            {
            sub.kembalian=sub.bayar-sub.totalharga;
            printf("\nKembalian = %d", sub.kembalian);
            }
            else
            {
                printf("Uang Anda tidak cukup! Silakan input ulang\n");

                goto bayar;
            }
           
   printf("\nTekan apa saja untuk melihat struk pembayaran\n");
            system("Pause");
            system("cls");
            struk();
}
//End Fungsi untuk melakukan perhitungan harga dan jumlah pesanan

//Fungsi untuk menampilkan struk hasil pembelian
void struk(void)
    {
        time(&ambil_waktu); //mengambil waktu saat ini
        printf("=================================================================\n");
        printf("| \t\t\tWHYHEM Store                    \t|\n");
        printf("| \t\tJl.Patimura XXII, Tabanan\t\t\t|\n| \t\t\t\tBali\t\t\t\t|\n");
        printf("| \t     Telp : (0274)520712 / 085727346495                 |\n");
        printf("|_______________________________________________________________|\n");
        printf("| Nama Pesanan  | Harga Satuan  | Jumlah  | \t    Total  \t|\n");
        printf("|===============|===============|=========|=====================|\n");
        if (sub.jmlbeli1>0)
        {
        printf("|    Polo\t|     3500\t|    %d\t  |  Rp.%d\t\t|",menu_baju.polo,sub.jmlbeli1);
        }
                if (sub.jmlbeli2>0)
        {
        printf("\n|    Shirt\t|     7500\t|    %d\t  |  Rp.%d\t\t|",menu_baju.shirt,sub.jmlbeli2);
        }
                if (sub.jmlbeli3>0)
        {
        printf("\n|    Cardigan\t|     4000\t|    %d\t  |  Rp.%d\t\t|",menu_baju.cardigan,sub.jmlbeli3);
        }
                if (sub.jmlbeli4>0)
        {
        printf("\n|    Jaket\t|     6500\t|    %d\t  |  Rp.%d\t\t|",menu_baju.jaket,sub.jmlbeli4);
        }
                if (sub.jmlbeli5>0)
        {
        printf("\n|    Hoodie\t|     4500\t|    %d\t  |  Rp.%d\t\t|",menu_baju.hoodie,sub.jmlbeli5);
        }
                if (sub.jmlbeli6>0)
        {
        printf("\n|    Jeans\t|     1500\t|    %d\t  |  Rp.%d\t\t|",menu_celana.jeans,sub.jmlbeli6);
        }
                if (sub.jmlbeli7>0)
        {
        printf("\n|    Cargo\t|     2500\t|    %d\t  |  Rp.%d\t\t|",menu_celana.cargo,sub.jmlbeli7);
        }
                if (sub.jmlbeli8>0)
        {
        printf("\n|    Jogger\t|     2000\t|    %d\t  |  Rp.%d\t\t|",menu_celana.jogger,sub.jmlbeli8);
        }
                if (sub.jmlbeli9>0)
        {
        printf("\n|    Denim\t|     5000\t|    %d\t  |  Rp.%d\t\t|",menu_celana.denim,sub.jmlbeli9);
        }
                if (sub.jmlbeli10>0)
        {
        printf("\n|    Kain\t|     3500\t|    %d\t  |  Rp.%d\t\t|",menu_celana.kain,sub.jmlbeli10);
        }
        printf("\n|_______________________________________________________________|");
        printf("\n| Total Keseluruhan = %d\t\t\t\t\t|", sub.totalharga);
        printf("\n| Uang bayar        = %d\t\t\t\t\t|", sub.bayar);
        printf("\n| Kembalian         = %d\t\t\t\t\t|", sub.kembalian);
        printf("\n|                                                               |");
        printf("\n|                                                               |");
        printf("\n| Waktu/Hari : %s|", ctime (&ambil_waktu));
        printf("| Perhatian : Barang yang dibeli tidak bisa dikembalikan!\t|");
        printf("\n|                                                               |\n");
        printf("-----------------------------------------------------------------\n");


    }
 //End Fungsi untuk menampilkan struk hasil pembelian
