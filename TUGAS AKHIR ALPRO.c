// Library
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
// End Library

// Header fungsi
void inputdatapelanggan();
void cetakdata();
void panggilMenu(void);
void Penghitungan();
void struk(void);
void ukuran();
// End header fungsi

// Deklarasi struct eka 23 desember
struct datapelanggan
{
        char nama[30], jeniskelamin[10];
};
struct ukuran
{
        char uk1[5], uk2[5], uk3[5], uk4[5], uk5[5], uk6[5], uk7[5], uk8[5], uk9[5], uk10[5];
};
struct warna
{
        char wa1[10], wa2[10], wa3[10], wa4[10], wa5[10], wa6[10], wa7[10], wa8[10], wa9[10], wa10[10];
};
struct macammenu
{
        int menubaju, menucelana;
};
struct subtotal
{
        int jmlbeli1, jmlbeli2, jmlbeli3, jmlbeli4, jmlbeli5, jmlbeli6, jmlbeli7, jmlbeli8, jmlbeli9, jmlbeli10;
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
struct datapelanggan daftar_pelanggan;
struct baju menu_baju;
struct celana menu_celana;
struct macammenu menu;
struct subtotal sub;
struct ukuran menu_ukuran;
struct warna menu_warna;
// End Deklarasi struct

// Variabel pendukung
char yakin; // eka 23 desember
time_t ambil_waktu;
// End Variabel pendukung

// Fungsi main rimbun 24 desember
int main()
{
        inputdatapelanggan();
        system("pause");
        panggilMenu();
        return 0;
}
// End Fungsi main

void inputdatapelanggan()
{
        // input data pelanggan
        printf("\nMasukkan Nama Pelanggan: ");
        scanf("%s", &daftar_pelanggan.nama);
        printf("\nMasukkan Jenis Kelamin Pelanggan: ");
        scanf("%s", &daftar_pelanggan.jeniskelamin);
}

void cetakdata()
{
        FILE *fq; //rimbun 24 desember
        fq = fopen("daftarpelanggan.txt", "a+");
        fprintf(fq, "%s\n", daftar_pelanggan.nama);
        fprintf(fq, "%s\n", daftar_pelanggan.jeniskelamin);
        fprintf(fq, "==========================================================================\n");
        fprintf(fq, "| \t\t\tWHYHEM Store                                           |\n");
        fprintf(fq, "| \t\tJl.Patimura XXII, Tabanan \t\t\t\t             |\n| \t\t\t\tBali\t\t\t                               |\n");
        fprintf(fq, "| \t     Telp : (0274)510712 / 085727346495                            |\n");
        fprintf(fq, "|________________________________________________________________________|\n");
        fprintf(fq, "| Nama Pesanan  | ukuran |  warna  |  Harga Satuan  | Jumlah | \t Total |\n");
        fprintf(fq, "|===============|========|=========|================|========|===========|\n");
        if (sub.jmlbeli1 > 0)
        {
                fprintf(fq, "|    Polo\t|%s\t |%s\t   | Rp.100000\t    |    %d   |  Rp.%d|", menu_ukuran.uk1, menu_warna.wa1, menu_baju.polo, sub.jmlbeli1);
        }
        if (sub.jmlbeli2 > 0)
        {
                fprintf(fq, "\n|    Shirt\t|%s\t |%s\t   | Rp.75000\t    |    %d   |  Rp.%d |", menu_ukuran.uk2, menu_warna.wa2, menu_baju.shirt, sub.jmlbeli2);
        }
        if (sub.jmlbeli3 > 0)
        {
                fprintf(fq, "\n|  Cardigan\t|%s\t |%s\t   | Rp.95000\t    |    %d   |  Rp.%d |", menu_ukuran.uk3, menu_warna.wa3, menu_baju.cardigan, sub.jmlbeli3);
        }
        if (sub.jmlbeli4 > 0)
        {
                fprintf(fq, "\n|    Jaket\t|%s\t |%s\t   | Rp.275000\t    |    %d   |  Rp.%d|", menu_ukuran.uk4, menu_warna.wa4, menu_baju.jaket, sub.jmlbeli4);
        }
        if (sub.jmlbeli5 > 0)
        {
                fprintf(fq, "\n|    Hoodie\t|%s\t |%s\t   | Rp.325000\t    |    %d   |  Rp.%d|", menu_ukuran.uk5, menu_warna.wa5, menu_baju.hoodie, sub.jmlbeli5);
        }
        if (sub.jmlbeli6 > 0)
        {
                fprintf(fq, "\n|    Jeans\t|%s\t |%s\t   | Rp.130000\t    |    %d   |  Rp.%d|", menu_ukuran.uk6, menu_warna.wa6, menu_celana.jeans, sub.jmlbeli6);
        }
        if (sub.jmlbeli7 > 0)
        {
                fprintf(fq, "\n|    Cargo\t|%s\t |%s\t   | Rp.125000\t    |    %d   |  Rp.%d|", menu_ukuran.uk7, menu_warna.wa7, menu_celana.cargo, sub.jmlbeli7);
        }
        if (sub.jmlbeli8 > 0)
        {
                fprintf(fq, "\n|    Jogger\t|%s\t |%s\t   | Rp.110000\t    |    %d   |  Rp.%d|", menu_ukuran.uk8, menu_warna.wa8, menu_celana.jogger, sub.jmlbeli8);
        }
        if (sub.jmlbeli9 > 0)
        {
                fprintf(fq, "\n|    Denim\t|%s\t |%s\t   | Rp.300000\t    |    %d   |  Rp.%d|", menu_ukuran.uk9, menu_warna.wa9, menu_celana.denim, sub.jmlbeli9);
        }
        if (sub.jmlbeli10 > 0)
        {
                fprintf(fq, "\n|    Kain\t|%s\t |%s\t   | Rp.50000\t    |    %d   |  Rp.%d |", menu_ukuran.uk10, menu_warna.wa10, menu_celana.kain, sub.jmlbeli10);
        }
        fprintf(fq, "\n|________________________________________________________________________|");
        fprintf(fq, "\n| Total Keseluruhan = %d\t\t\t\t\t                   |", sub.totalharga);
        fprintf(fq, "\n| Uang bayar        = %d\t\t\t\t\t                   |", sub.bayar);
        fprintf(fq, "\n| Kembalian         = %d\t\t\t\t\t                   |", sub.kembalian);
        fprintf(fq, "\n|                                                                        |");
        fprintf(fq, "\n|                                                                        |");
        fprintf(fq, "\n  Waktu/Hari : %s", ctime(&ambil_waktu));
        fprintf(fq, "\n| Perhatian : Barang yang dibeli tidak bisa dikembalikan!\t             |\n");
        fprintf(fq, "|                                                                        |\n");
        fprintf(fq, "--------------------------------------------------------------------------\n");
        fclose(fq);
        printf("Data Berhasil Ditambahkan\n");
}

// Fungsi menu
void panggilMenu(void) //eka 23 desember
{
        // menampilkan menu yang dapat dipilih user
        printf("\n\t\t  Selamat datang di WHYHEM Store.\n");
        printf("\t\tSilakan pilih pakaian yang Anda inginkan:\n\n");
        printf("=====================================================================\n");
        printf("|No.| Baju \t| Harga      |\t\t|No.| Celana\t | Harga     |\n");
        printf("|--------------------------------------------------------------------\n");
        printf("| 1 | Polo\t|  Rp.100000 |\t\t");
        printf("| 6.| Jeans\t | Rp.130000 | \n");
        printf("| 2 | Shirt\t|  Rp.75000  |\t\t");
        printf("| 7.| cargo\t | Rp.125000 |\n");
        printf("| 3 | Cardigan\t|  Rp.95000  |\t\t");
        printf("| 8.| Jogger\t | Rp.110000 |\n");
        printf("| 4 | Jaket\t|  Rp.275000 |\t\t");
        printf("| 9.| denim\t | Rp.300000 |\n");
        printf("| 5 | Hoodie\t|  Rp.325000 |\t\t");
        printf("| 10| Kain\t | Rp.50000  |\n");
        printf("\n====================================================================");
        printf("\n ");
        printf("\n99. Struk Pembayaran\n55. Reset pilihan\n00.  Keluar\n");
        printf("===============================================\n");
        // End menampilkan menu yang dapat dipilih user

        // perulangan untuk user memilih menu sesuai nomor menu
        for (menu.menubaju != 0; menu.menubaju != 99;)
        {

                printf("\nInput pilihan yang Anda inginkan:         ");
                scanf("%d", &menu.menubaju); // input user dengan scanf
                // switch case pilihan yang akan ditampilkan sesuai nomor
                switch (menu.menubaju)
                {
                case 1:
                        printf("\n [1] Pemesanan Polo\n");
                        printf("jumlah pesan =\t\t\t  ");
                        scanf("%d", &menu_baju.polo);
                        printf("masukkan ukuran(l,m,xl,xxl) = ");
                        scanf("%s", &menu_ukuran.uk1);
                        printf("masukkan warna(merah,hijau,hitam,kuning) = ");
                        scanf("%s", &menu_warna.wa1);
                        printf("\n===============================================\n");
                        sub.jmlbeli1 = menu_baju.polo * 100000;
                        break;
                case 2:
                        printf("\n [2]Pemesanan Shirt\n");
                        printf("jumlah pesan = \t\t\t  ");
                        scanf("%d", &menu_baju.shirt);
                        printf("masukkan ukuran(l,m,xl,xxl) = ");
                        scanf("%s", &menu_ukuran.uk2);
                        printf("masukkan warna(merah,hijau,hitam,kuning) = ");
                        scanf("%s", &menu_warna.wa2);
                        printf("\n===============================================\n");
                        sub.jmlbeli2 = menu_baju.shirt * 75000;
                        break;
                case 3:
                        printf("\n [3] Pemesanan Cardigan\n");
                        printf("jumlah pesan = \t\t\t  ");
                        scanf("%d", &menu_baju.cardigan);
                        printf("masukkan ukuran(l,m,xl,xxl) = ");
                        scanf("%s", &menu_ukuran.uk3);
                        printf("masukkan warna(merah,hijau,hitam,kuning) = ");
                        scanf("%s", &menu_warna.wa3);
                        printf("\n===============================================\n");
                        sub.jmlbeli3 = menu_baju.cardigan * 95000;
                        break;
                case 4:
                        printf("\n [4] Pemesanan Jaket\n");
                        printf("jumlah pesan = \t\t\t  ");
                        scanf("%d", &menu_baju.jaket);
                        printf("masukkan ukuran(l,m,xl,xxl) = ");
                        scanf("%s", &menu_ukuran.uk4);
                        printf("masukkan warna(merah,hijau,hitam,kuning) = ");
                        scanf("%s", &menu_warna.wa4);
                        printf("\n===============================================\n");
                        sub.jmlbeli4 = menu_baju.jaket * 275000;
                        break;
                case 5:
                        printf("\n [5] Pemesanan Hoodie\n ");
                        printf("jumlah pesan = \t\t\t  ");
                        scanf("%d", &menu_baju.hoodie);
                        printf("masukkan ukuran(l,m,xl,xxl) = ");
                        scanf("%s", &menu_ukuran.uk5);
                        printf("masukkan warna(merah,hijau,hitam,kuning) = ");
                        scanf("%s", &menu_warna.wa5);
                        printf("\n===============================================\n");
                        sub.jmlbeli5 = menu_baju.hoodie * 325000;
                        break;
                case 6:
                        printf("\n [6] Pemesanan Jeans\n ");
                        printf("jumlah pesan = \t\t\t  ");
                        scanf("%d", &menu_celana.jeans);
                        printf("masukkan ukuran(l,m,xl,xxl) = ");
                        scanf("%s", &menu_ukuran.uk6);
                        printf("masukkan warna(merah,hijau,hitam,kuning) = ");
                        scanf("%s", &menu_warna.wa6);
                        printf("\n===============================================\n");
                        sub.jmlbeli6 = menu_celana.jeans * 130000;
                        break;
                case 7:
                        printf("\n [7] Pemesanan Cargo\n");
                        printf("jumlah pesan = \t\t\t  ");
                        scanf("%d", &menu_celana.cargo);
                        printf("masukkan ukuran(l,m,xl,xxl) = ");
                        scanf("%s", &menu_ukuran.uk7);
                        printf("masukkan warna(merah,hijau,hitam,kuning) = ");
                        scanf("%s", &menu_warna.wa7);
                        printf("\n===============================================\n");
                        sub.jmlbeli7 = menu_celana.cargo * 125000;
                        break;
                case 8:
                        printf("\n [8] Pemesanan Jogger\n");
                        printf("jumlah pesan = \t\t\t  ");
                        scanf("%d", &menu_celana.jogger);
                        printf("masukkan ukuran(l,m,xl,xxl) = ");
                        scanf("%s", &menu_ukuran.uk8);
                        printf("masukkan warna(merah,hijau,hitam,kuning) = ");
                        scanf("%s", &menu_warna.wa8);
                        printf("\n===============================================\n");
                        sub.jmlbeli8 = menu_celana.jogger * 110000;
                        break;
                case 9:
                        printf("\n [9] Pemesanan Denim\n");
                        printf("jumlah pesan = \t\t\t  ");
                        scanf("%d", &menu_celana.denim);
                        printf("masukkan ukuran(l,m,xl,xxl) = ");
                        scanf("%s", &menu_ukuran.uk9);
                        printf("masukkan warna(merah,hijau,hitam,kuning) = ");
                        scanf("%s", &menu_warna.wa9);
                        printf("\n===============================================\n");
                        sub.jmlbeli9 = menu_celana.denim * 300000;
                        break;
                case 10:
                        printf("\n [10] Pemesanan Kain\n");
                        printf("jumlah pesan = \t\t\t  ");
                        scanf("%d", &menu_celana.kain);
                        printf("masukkan ukuran(l,m,xl,xxl) = ");
                        scanf("%s", &menu_ukuran.uk10);
                        printf("masukkan warna(merah,hijau,hitam,kuning) = ");
                        scanf("%s", &menu_warna.wa10);
                        printf("\n===============================================\n");
                        sub.jmlbeli10 = menu_celana.kain * 50000;
                        break;
                case 99:
                        Penghitungan(); // memanggil fungsi penghitungan
                        cetakdata();
                        break;
                case 55:
                        memset(&menu_baju.polo, 0, sizeof(menu_baju.polo));
                        memset(&menu_baju.shirt, 0, sizeof(menu_baju.shirt));
                        memset(&menu_baju.cardigan, 0, sizeof(menu_baju.cardigan));
                        memset(&menu_baju.jaket, 0, sizeof(menu_baju.jaket));
                        memset(&menu_baju.hoodie, 0, sizeof(menu_baju.hoodie));
                        memset(&menu_celana.jeans, 0, sizeof(menu_celana.jeans));
                        memset(&menu_celana.cargo, 0, sizeof(menu_celana.cargo));
                        memset(&menu_celana.jogger, 0, sizeof(menu_celana.jogger));
                        memset(&menu_celana.denim, 0, sizeof(menu_celana.denim));
                        memset(&menu_celana.kain, 0, sizeof(menu_celana.kain));
                        memset(&sub.jmlbeli1, 0, sizeof(sub.jmlbeli1));
                        memset(&sub.jmlbeli2, 0, sizeof(sub.jmlbeli2));
                        memset(&sub.jmlbeli3, 0, sizeof(sub.jmlbeli3));
                        memset(&sub.jmlbeli4, 0, sizeof(sub.jmlbeli4));
                        memset(&sub.jmlbeli5, 0, sizeof(sub.jmlbeli5));
                        memset(&sub.jmlbeli6, 0, sizeof(sub.jmlbeli6));
                        memset(&sub.jmlbeli7, 0, sizeof(sub.jmlbeli7));
                        memset(&sub.jmlbeli8, 0, sizeof(sub.jmlbeli8));
                        memset(&sub.jmlbeli9, 0, sizeof(sub.jmlbeli9));
                        memset(&sub.jmlbeli10, 0, sizeof(sub.jmlbeli10));
                        system("cls"); // cls untuk membuat layar menjadi kosong
                        panggilMenu(); // me-reset pilihan user
                        break;
                case 00:
                peyakinan:
                        printf("Apakah anda yakin ingin keluar?\n\n[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
                        printf("Input Pilihan \t\t\t\t");
                        scanf("%s", &yakin);

                        if (yakin == 'Y' || yakin == 'y') // user yakin untuk menutup program
                        {
                                system("cls");
                                printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
                                system("pause");
                                exit(panggilMenu);
                        }
                        else if (yakin == 'T' || yakin == 't') // user membatalkan penutupan program
                        {
                                system("cls");
                                panggilMenu();
                        }
                        else // inputan user bukan Y atau T
                        {
                                printf("\nKesalahan inputan\n\n");
                                system("pause");
                                goto peyakinan;
                        }

                        break;
                default: // bila user menginputkan tidak sesuai pilihan nomor yang ada
                        printf("Kesalahan inputan, menu no.%d tidak ada dalam daftar\n", menu.menubaju);
                        printf("- Silakan input kembali\n");
                        break;
                        // End switch case pilihan yang akan ditampilkan sesuai nomor
                }
                // End perulangan untuk user memilih menu sesuai nomor menu
        }
}

// Fungsi untuk melakukan perhitungan harga dan jumlah pesanan
void Penghitungan(void) //eka 23 desember
{
        printf("\nPesanan Baju \n");
        printf("\tJumlah | Nama Baju         | Total Harga\n\t====================================\n");
        printf("\t   %d   : Polo              : Rp. %d \n", menu_baju.polo, sub.jmlbeli1);
        printf("\t   %d   : Shirt             : Rp. %d \n", menu_baju.shirt, sub.jmlbeli2);
        printf("\t   %d   : Cardigan          : Rp. %d \n", menu_baju.cardigan, sub.jmlbeli3);
        printf("\t   %d   : Jaket             : Rp. %d \n", menu_baju.jaket, sub.jmlbeli4);
        printf("\t   %d   : Hoodie            : Rp. %d \n", menu_baju.hoodie, sub.jmlbeli5);
        printf("\t------------------------------------\n\n");

        printf("Pesanan Celana \n");
        printf("\tJumlah | Nama Celana         | Total Harga\n\t====================================\n");
        printf("\t   %d   : Jeans               : Rp. %d \n", menu_celana.jeans, sub.jmlbeli6);
        printf("\t   %d   : Jeans Cargo         : Rp. %d \n", menu_celana.cargo, sub.jmlbeli7);
        printf("\t   %d   : Jogger              : Rp. %d \n", menu_celana.jogger, sub.jmlbeli8);
        printf("\t   %d   : Denim               : Rp. %d \n", menu_celana.denim, sub.jmlbeli9);
        printf("\t   %d   : Kain 	             : Rp. %d \n", menu_celana.kain, sub.jmlbeli10);
        printf("\t------------------------------------\n");

        // menghitung total harga
        sub.totalharga = sub.jmlbeli1 + sub.jmlbeli2 + sub.jmlbeli3 + sub.jmlbeli4 + sub.jmlbeli5 + sub.jmlbeli6 + sub.jmlbeli7 + sub.jmlbeli8 + sub.jmlbeli9 + sub.jmlbeli10;
        printf("\n===============================\nTotal Harga adalah = Rp.%d,-\n===============================\n", sub.totalharga);

bayar:
        printf("\nMasukkan uang bayar = ");
        scanf("%d", &sub.bayar);

        if (sub.bayar >= sub.totalharga)
        {
                sub.kembalian = sub.bayar - sub.totalharga;
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
// End Fungsi untuk melakukan perhitungan harga dan jumlah pesanan

// Fungsi untuk menampilkan struk hasil pembelian
void struk(void) //rimbun 24 desember
{
        time(&ambil_waktu); // mengambil waktu saat ini
        printf("==========================================================================\n");
        printf("| \t\t\tWHYHEM Store                                     |\n");
        printf("| \t\tJl.Patimura XXII, Tabanan \t\t\t\t |\n| \t\t\t\tBali\t\t\t                 |\n");
        printf("| \t     Telp : (0274)510712 / 085727346495                          |\n");
        printf("|________________________________________________________________________|\n");
        printf("| Nama Pesanan  | ukuran |  warna  |  Harga Satuan  | Jumlah | \t Total   |\n");
        printf("|===============|========|=========|================|========|===========|\n");
        if (sub.jmlbeli1 > 0)
        {
                printf("|    Polo\t|%s\t |%s\t   | Rp.100000\t    |    %d   |  Rp.%d|", menu_ukuran.uk1, menu_warna.wa1, menu_baju.polo, sub.jmlbeli1);
        }
        if (sub.jmlbeli2 > 0)
        {
                printf("\n|    Shirt\t|%s\t |%s\t   | Rp.75000\t    |    %d   |  Rp.%d |", menu_ukuran.uk2, menu_warna.wa2, menu_baju.shirt, sub.jmlbeli2);
        }
        if (sub.jmlbeli3 > 0)
        {
                printf("\n|    Cardigan\t|%s\t |%s\t   | Rp.95000\t    |    %d   |  Rp.%d |", menu_ukuran.uk3, menu_warna.wa3, menu_baju.cardigan, sub.jmlbeli3);
        }
        if (sub.jmlbeli4 > 0)
        {
                printf("\n|    Jaket\t|%s\t |%s\t   | Rp.275000\t    |    %d   |  Rp.%d|", menu_ukuran.uk4, menu_warna.wa4, menu_baju.jaket, sub.jmlbeli4);
        }
        if (sub.jmlbeli5 > 0)
        {
                printf("\n|    Hoodie\t|%s\t |%s\t   | Rp.325000\t    |    %d   |  Rp.%d|", menu_ukuran.uk5, menu_warna.wa5, menu_baju.hoodie, sub.jmlbeli5);
        }
        if (sub.jmlbeli6 > 0)
        {
                printf("\n|    Jeans\t|%s\t |%s\t   | Rp.130000\t    |    %d   |  Rp.%d|", menu_ukuran.uk6, menu_warna.wa6, menu_celana.jeans, sub.jmlbeli6);
        }
        if (sub.jmlbeli7 > 0)
        {
                printf("\n|    Cargo\t|%s\t |%s\t   | Rp.125000\t    |    %d   |  Rp.%d|", menu_ukuran.uk7, menu_warna.wa7, menu_celana.cargo, sub.jmlbeli7);
        }
        if (sub.jmlbeli8 > 0)
        {
                printf("\n|    Jogger\t|%s\t |%s\t   | Rp.110000\t    |    %d   |  Rp.%d|", menu_ukuran.uk8, menu_warna.wa8, menu_celana.jogger, sub.jmlbeli8);
        }
        if (sub.jmlbeli9 > 0)
        {
                printf("\n|    Denim\t|%s\t |%s\t   | Rp.300000\t    |    %d   |  Rp.%d|", menu_ukuran.uk9, menu_warna.wa9, menu_celana.denim, sub.jmlbeli9);
        }
        if (sub.jmlbeli10 > 0)
        {
                printf("\n|    Kain\t|%s\t |%s\t   | Rp.50000\t    |    %d   |  Rp.%d |", menu_ukuran.uk10, menu_warna.wa10, menu_celana.kain, sub.jmlbeli10);
        }
        printf("\n|________________________________________________________________________|");
        printf("\n| Total Keseluruhan = %d\t\t\t\t\t         |", sub.totalharga);
        printf("\n| Uang bayar        = %d\t\t\t\t\t         |", sub.bayar);
        printf("\n| Kembalian         = %d\t\t\t\t\t         |", sub.kembalian);
        printf("\n|                                                                        |");
        printf("\n|                                                                        |");
        printf("\n  Waktu/Hari : %s", ctime(&ambil_waktu));
        printf("\n| Perhatian : Barang yang dibeli tidak bisa dikembalikan!\t         |\n");
        printf("|                                                                        |\n");
        printf("--------------------------------------------------------------------------\n");
}
// End Fungsi untuk menampilkan struk hasil pembelian
