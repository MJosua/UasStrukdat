#include <iostream>
#include <conio.h>
#define max 4
using namespace std;

struct Absensi //struktur Absensi
{
    int atas;
    int data[max];
} T;

void awal() //awal untuk menentukan nilai awal
{
    T.atas = -1;
}

int kosong() //kosong untuk melanjutkan pengisian Absensi
{
    if (T.atas == -1)
        return 1;
    else
        return 0;
}

int penuh() //penuh untuk memberhentikan Absensi
{
    if (T.atas == max - 1)
        return 1;
    else
        return 0;
}

void input(int data) //input untuk memasukan data
{
    if (data < 5 && data > 0)
    {
        if (kosong() == 1) //pemilihan jika data masih kosong
        {
            T.atas++;
            T.data[T.atas] = data;
            cout << "Admin dengan Kode " << T.data[T.atas] << " Telah melakukan absensi Terimakasih Admin\n";
        }
        else if (penuh() == 0) //pemilihan jika data masih penuh
        {
            T.atas++;
            T.data[T.atas] = data;
            cout << "Admin dengan kode " << T.data[T.atas] << " Telah melakukan absensi Terimakasih Admin\n";
        }
    }
    else
    {
        cout << "data admin yang kamu masukkan salah\n";
        cout << endl;
    }
}

void hapus() //hapus untuk menghapus data paling atas
{
    if (kosong() == 0) //mengambil data paling atas
    {
        cout << "Absen terakhir telah dihapus\n";
        T.atas--;
    }
    else //menampilkan jika data kosong
        cout << "Absend masih kosong silahkan melakukan absensi\n";
    cout << endl;
}

void tampil() //parameter menampilkan isi data
{
    if (kosong() == 0) //pemilihan menampilkan isi data
    {
        for (int i = T.atas; i >= 0; i--)
        {
            cout << "\nAbsen ke " << i + 1 << " = " << T.data[i];
        }
    }
    else //jika salah maka menampilkan Absensi kosong
        cout << "Absen masih kosong silahkan melakukan absensi";
}

void bersih() //parameter memebersihkan semua data
{
    T.atas = -1;
    cout << "Semua absen pada hari ini telah dihapus\n";
}

main(void)
{
    int pil, data;

    awal();
    do //perulangan do - while
    {
        cout << "  ==============================================================\n";
        cout << "||      Absensi untuk 1 hari masukkan kode tiap-tiap admin      ||\n";
        cout << "||-------------------------- 1. yosua  -------------------------||\n";
        cout << "||-------------------------- 2. raihan -------------------------||\n";
        cout << "||-------------------------- 3. Alfian -------------------------||\n";
        cout << "||-------------------------- 4. Ade    -------------------------||\n";
        cout << "  ==============================================================\n";
        cout << "===================================================================\n";

        cout << " HI ADMIN, Silahkan melakukan absensi ya. Semoga harimu menyenagkan Terimakasih !!\n";
        cout << "\n1. absen\n2. Hapus absen\n3. Tampil admin yang telah absen\n4. Bersihkan absen\n5. Keluar\nMasukan Perintah: ";
        cin >> pil;
        cout << "\n";

        switch (pil) //pemilihan perintah
        {
        case 1:
            cout << "Masukkan kode admin = ";
            cin >> data;
            input(data);
            break;

        case 2:
            hapus();
            break;

        case 3:
            tampil();
            break;

        case 4:
            bersih();
            break;

        case 5:
            cout << "Terimakasih Telah Melakukan absensi Semoga harimu menyenangkan!! \ntekan enter untuk keluar";
        }
        getch();
    } while (pil != 5);
}