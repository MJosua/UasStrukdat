/* Simple Queue Program in C++*/
/* Data Structure C++ Programs,C++ Array Examples */

#include <iostream> // library input output stream
#include <stdlib.h> // library untuk melakukan perbandingan == 
#include <windows.h> // library untuk mengatur layar, cls
#include "conio.h" // library untuk memanggil getsch
#include <fstream> // library untuk menggunakan text
#include <ctime> // library untuk fungsi waktu

#define MAX_SIZE 100

using namespace std;

int main() {
    int item, choice, i;
    int arr_queue[MAX_SIZE];
	int arr_queue2[MAX_SIZE];
    int rear = 0;
    int front = 0;
    int exit = 1;
	int rearnama = 0;
    int frontnama = 0;
	int jam;
	int harga;
	time_t now = time(0);
	int nomorpc = 10;
	string pembeli = "Tono";
    tm *ltm = localtime(&now);
	string username = "Yosua";
	

    cout << "\nSimple Queue Example - Array";
    do {
        cout << "\n\n Queue Main Menu";

        cout << "\n1.Insert \n2.Remove \n3.Display \nOthers to exit";
        cout << "\nEnter Your Choice : ";
        cin>>choice;
        switch (choice) {
            case 1:
                if (rear == MAX_SIZE)
                    cout << "\n## Queue Reached Max!!";
                else {
								system("cls"); 
				cout << "\t\tStaff Aktif : " << username;
				cout << "\t  ADMIN Warnet JOFIRAIDE  "<< endl; 
				cout << "\t\t===============================================\n"; 
				cout << "\t\t\t\t Tarif warnet : " <<endl;
				cout << "\t\t===============================================\n"; 
				cout << "\t\t\t\t 1  jam RP. 3000 " << endl;
				cout << "\t\t\t\t 2  jam RP. 5000 " << endl;
				cout << "\t\t\t\t 5  jam RP.10000 " << endl;
				cout << "\t\t\t\t 10 jam RP.18000 " << endl;
				cout << "\t\t\t\t BEBAS: RP. 3000 / jam " << endl;
				cout << "\t\t===============================================\n\n"; 
				cout << "Input Nomor PC : ";
					cin>>item;
				cout << "Input nama pelanggan ( masukkan ' - ' bila tidak ada ) : "<<endl;
				cout << " Nama Pembeli : ";
					cin>>pembeli;
					harga = 3000;
					jam = 1;
                cout << "\n## Tiket telah dibuat \n ID Pesanan : " << rear + 1 << " , Nomor PC  : " << item << ", nama pelanggan :" << pembeli<<endl;
				cout << " harga " << harga ;
				cout << " Selama " << jam<<" jam" ;
                arr_queue[rear++] = item;
				arr_queue2[rearnama++] = harga;
                }
                break;
            case 2:
                if (front == rear)
                    cout << "\n## Queue is Empty!";
                else {
                    cout << "\n## ID Tiket : " << front << " , Remove PC  :" << arr_queue[front];
                    front++;
                }
                break;
            case 3:
                cout << "\n## Jumlah Penjualan : " << (rear - front)<<endl;
                for (i = front; i < rear; i++){
                    cout << "\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
					cout << " \n\t\t ## ID Tiket : " << i ;
					cout << " \t\tHarga RP." << arr_queue2[i] << endl;
					cout << "\t\t===============================================\n\n"; 
					cout << " \t\t Paket " << jam << " jam , PC  : " << arr_queue[i];
					cout << " \tAtas Nama : " << pembeli << endl<< endl;
					cout << " \t\t\t  Dimulai dari Jam : " <<  ltm->tm_hour << ":" <<  ltm->tm_min << ":" <<  ltm->tm_sec << endl;
					cout << " \t\t\t  Hingga nanti jam : " << 1 + ltm->tm_hour << ":" <<  ltm->tm_min << ":" <<  ltm->tm_sec << endl <<endl;
					cout << " \t\t\t\t\tKasir Pengurus :" << username<<endl;
					cout << "\t\t===============================================\n\n"; 
					
				}
                break;
            default:
                exit = 0;
                break;
        }
    } while (exit);

    return 0;
}