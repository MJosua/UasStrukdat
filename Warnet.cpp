#include <iostream> // library input output stream
#include <stdlib.h> // library untuk melakukan perbandingan == 
#include <windows.h> // library untuk mengatur layar, cls
#include "conio.h" // library untuk memanggil getsch
#include <fstream> // library untuk menggunakan text
#include <ctime> // library untuk fungsi waktu
#define max 4
#define MAX_SIZE 100

using namespace std; // std agar tidak perlu menggunakan std disetiap fungsi;

   void kerja(); // deklrasai fungsi kerja
   void pilih(); // deklrasai fungsi pilih
   void sejam(); // deklrasai fungsi sejam
   void duajam(); // deklrasai fungsi duajam
   void limajam(); // deklrasai fungsi limajam
   void paketsepuluh(); // deklrasai fungsi paketsepuluh
   void tampil(); // deklrasai fungsi tampil
   void absensi(); // deklrasai fungsi absensi
   void hapus(); // deklrasai fungsi hapus
   void bersih(); // deklrasai fungsi bersih
   void awal(); // deklrasai fungsi awal
   void graf(); // deklrasai fungsi graf
   
   int pil, pilihan, data; // deklrasai variabel Pil bertip integer
   int item, choice;
   int i;
   int arr_queue[MAX_SIZE];
   int arr_harga[MAX_SIZE];
   int arr_paket[MAX_SIZE];
   int rear = 0;
   int rear1 = 0;
   int rear2 = 0;
   int front = 0;
   int jam;
   int harga;
   time_t now = time(0);
   tm *ltm = localtime(&now);
   int nomorpc;
   string pembeli;
   string username; // deklrasai variabel username bertipe string
	
int main() {
  
   int i;  
   string pass_input, user_input;  
   char ch;
   int jam;
   int harga;
   
   system("cls");
   cout << "\n\n";
   cout << "\t\t==========================================\n";    
   cout << "\t\tProgram Billing Warnet JOFIRAI | STRUKDAT \n";    
   cout << "\t\t==========================================\n";  
   cout << "\t\tUntuk keamanan silahkan login user billing\n";  
   cout << "\t\t==========================================\n\n";
   string user1 ="yosua";    // deklarasi user1 beserta isinya
   string password1 = "12345";   
   string user2 ="raihan";    // deklarasi user2 beserta isinya
   string password2 = "12345";  
   string user3 ="alfin";    // deklarasi user3 beserta isinya
   string password3 = "12345";  
   string user4="ade";// deklrasi user4 beserta isinya   
   string password4 ="12345";
   string login = "block";    
   i = 1;    
   system("Color 70");
  do {        
       cout << "\t\tUsername = "; cin>>user_input;        
       cout << "\t\tPassword : ";
            while(ch != 13) // melakukan looping while sampai tombol 13 ( enter ) ditekan
    {
        ch = getch(); // getch dalam artian membaca penekanan
        if(ch == '0')
         {
            switch(getch())
              {
              default:
                  break;            
            };
        }
     else if(ch == '\b')   //melakukan pembacaan bila /b ( backspace ) ditekan
        {
        if(pass_input.size() != 0)  //bila backspace ditekan, kurangi satu data dari karakter pass_input
           {
           cout << "\b \b"; //backspace
           pass_input.erase(pass_input.size() - 1, 1); //proses pengahapusan
           }
        continue;
        }
     else if(ch <= '9' && ch >= '0' || ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') //proses perbandingan input dari karakter
        {
        pass_input += ch; 
        cout << "*"; //input dari password akan di sensor dengan *
        }
     else
        continue;
     }
	 

        if (user_input == user1 && pass_input == password1) {    
	   	   system("cls");   
		   cout << " \n\n"; 
           cout << "\t\t\t\t ================\n";            
           cout << "\t\t\t\t| Login Berhasil |" << endl;  
		   cout << "\t\t\t\t ================\n";         
           cout << " \n\n";                    
		   cout << "\t\t ===============================================\n"; 
		   cout << "\t\t|  Selamat datang Staff Yosua, selamat bekerja! |" << endl;            
           cout << "\t\t| ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ |" << endl;            
           cout << "\t\t ===============================================\n\n";  
		   username = "yosua";
           i = 4;
           login = "berhasil";        
		   getch();
		   kerja(); // memanggil funsi kerja
		   } 
		   
		else if (user_input == user2 && pass_input == password2) {    
	   	   system("cls");        
		   cout << "\t\t\t\t ================\n";            
           cout << "\t\t\t\t| Login Berhasil |" << endl;  
		   cout << "\t\t\t\t ================\n";         
           cout << " \n\n";          
		   cout << " \n";            
		   cout << "\t\t ===============================================\n"; 
           cout << "\t\t|  Selamat datang Staff Raihan, selamat bekerja!|" << endl;            
           cout << "\t\t| ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ |" << endl;            
           cout << "\t\t ===============================================\n\n";  
		   username = "Raihan";
           i = 4;
           login = "berhasil";        
		   getch();
		   kerja();	 // memanggil funsi kerja
		   } 
		
		else if (user_input == user3 && pass_input == password3) {    
	   	   system("cls");        
		   cout << "\t\t\t\t ================\n";            
           cout << "\t\t\t\t| Login Berhasil |" << endl;  
		   cout << "\t\t\t\t ================\n";         
           cout << " \n\n";          
		   cout << " \n";            
		   cout << "\t\t ===============================================\n"; 
           cout << "\t\t| Selamat datang Staff Alfian, selamat bekerja !|" << endl;            
           cout << "\t\t| ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ |" << endl;            
           cout << "\t\t ===============================================\n\n";  
		   username="alfian";
           i = 4;
           login = "berhasil";    
		   getch();
		   kerja(); // memanggil funsi kerja
		   } 	
		
        else if (user_input == user4 && pass_input == password4) {    
	   	   system("cls");        
		   cout << "\t\t\t\t ================\n";            
           cout << "\t\t\t\t| Login Berhasil |" << endl;  
		   cout << "\t\t\t\t ================\n";         
           cout << " \n\n";          
		   cout << " \n";            
		   cout << "\t\t ===============================================\n"; 
           cout << "\t\t| Selamat datang Staff Ade, selamat bekerja !|" << endl;            
           cout << "\t\t| ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ |" << endl;            
           cout << "\t\t ===============================================\n\n";  
		   username="Ade";
           i = 4;
           login = "berhasil";    
		   getch();
		   kerja(); // memanggil funsi kerja
		   } 	

       else { 
		   cout << endl;
           cout << "\t\t\t=============================\n";            
           cout << "\t\t\tUsername / Password Salah! ("<<i<<"x)\n";
		   cout << "\t\t\t=============================\n\n";
           i = i +1; // fungsi untuk menhiung jumlah gagal password
		   ch = 0; // mereset input dari ch
		   pass_input = ""; // mereset input dari password
       }   
    } while (i <= 3);
	
    if(login != "berhasil"){
		system("cls");
		
       cout<<"\n\n\n\t\tAnda telah 3x salah login.\n\n";       
       cout<<"Silahkan hubungi bagian service untuk informasi lebih lanjut. \n\t\t Terima Kasih..\n\n";      
	}   
   return 0;


}

void kerja(){ // fungsi kerja
do{
  system("cls"); 
  cout << "\n\n";
  cout << "\t\tStaff Aktif : " << username;
  cout << "\t  ADMIN Warnet JOFIRAI  "<< endl; 
  cout << "\t\t===============================================\n"; 
  cout << "\t\t\t\t Tarif warnet : " <<endl;
  cout << "\t\t===============================================\n"; 
  cout << "\t\t\t\t 1  jam RP. 3000 " << endl;
  cout << "\t\t\t\t 2  jam RP. 5000 " << endl;
  cout << "\t\t\t\t 5  jam RP.10000 " << endl;
  cout << "\t\t\t\t 10 jam RP.18000 " << endl;
  cout << "\t\t\t\t BEBAS: RP. 3000 / jam " << endl;
  cout << "\t\t===============================================\n\n"; 
  cout << "\t\tINPUT PERINTAH :" << endl << endl;
  cout << "\t\t1. Pemesanan 1  jam" << endl;
  cout << "\t\t2. Pemesanan 2  Jam" << endl;
  cout << "\t\t3. Pemesanan 5  Jam" << endl;
  cout << "\t\t4. Pemesanan 10 Jam" << endl;
  cout << "\t\t5. Tampil Log Pesanan" << endl;
  cout << "\t\t6. Menu Absensi" << endl;
  cout << "\t\t7. Cek Jaringan" << endl;
  cout << "\t\t0. Selesai" << endl << endl;
  cout << "Perintah : ";
  cin>>pil;
  pilih();
 }while (pil!=0);  // bila pilihan = 6, kembali / keluar
 return;
}

void pilih(){
 if(pil==1){ 
  sejam(); // bila pilihan = 1, panggil perintah sejam
 }
 else if(pil==2){
  duajam(); // bila pilihan = 2, panggil perinrah duajam
 }
 else if(pil==3){
  limajam(); // bila pilihan = 3, panggil perintah limajam
 }
 else if(pil==4){
  paketsepuluh(); // bila pilihan = 4, panggil perintah paketsepuluh
 }
 else if(pil==5){
  tampil();  // bila pilihan = 5, panggil perintah tampil
 }
 else if(pil==6){
  absensi();  // bila pilihan = 6, panggil perintah menu
 } 
 else if(pil==7){
  graf();  // bila pilihan = 6, panggil perintah menu
 } 
}

void sejam(){ 
					harga = 3000;
					jam = 1;
	
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
					
                cout << "\n## Tiket telah dibuat \n ID Pesanan : " << rear + 1 << " , Nomor PC  : " << item << ", nama pelanggan :" << pembeli<<endl;
				cout << " harga " << harga ;
				cout << " Selama " << jam<<" jam" ;
				
                arr_queue[rear++] = item;
				arr_harga[rear1++] = harga;
				arr_paket[rear2++] = jam;
                }
	getch();
}

void duajam(){

						harga = 5000;
					jam = 2;
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

                cout << "\n## Tiket telah dibuat \n ID Pesanan : " << rear + 1 << " , Nomor PC  : " << item << ", nama pelanggan :" << pembeli<<endl;
				cout << " harga " << harga ;
				cout << " Selama " << jam<<" jam" ;
				
                 arr_queue[rear++] = item;
				arr_harga[rear1++] = harga;
				arr_paket[rear2++] = jam;
                }
	getch();
}

void limajam(){
					harga = 10000;
					jam = 5;
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

                cout << "\n## Tiket telah dibuat \n ID Pesanan : " << rear + 1 << " , Nomor PC  : " << item << ", nama pelanggan :" << pembeli<<endl;
				cout << " harga " << harga ;
				cout << " Selama " << jam<<" jam" ;
				
                 arr_queue[rear++] = item;
				arr_harga[rear1++] = harga;
				arr_paket[rear2++] = jam;
                }
	getch();
}

void paketsepuluh(){
					harga = 18000;
					jam = 10;
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
					
                cout << "\n## Tiket telah dibuat \n ID Pesanan : " << rear + 1 << " , Nomor PC  : " << item << ", nama pelanggan :" << pembeli<<endl;
				cout << " harga " << harga ;
				cout << " Selama " << jam<<" jam" ;
				
                 arr_queue[rear++] = item;
				arr_harga[rear1++] = harga;
				arr_paket[rear2++] = jam;
                }
	getch();
}

void tampil(){
	tm *ltm = localtime(&now);
	  cout << "\n## Jumlah Penjualan : " << (rear - front)<<endl;
                for (i = front; i < rear; i++){
                    cout << "\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
					cout << " \n\t\t ## ID Tiket : " << i ;
					cout << " \t\tHarga RP." << arr_harga[i] << endl;
					cout << "\t\t===============================================\n\n"; 
					cout << " \t\t Paket " << arr_paket[i] << " jam , PC  : " << arr_queue[i];
					cout << " \tAtas Nama : " << pembeli << endl<< endl;
					cout << " \t\t\t  Dimulai dari Jam : " <<  ltm->tm_hour << ":" <<  ltm->tm_min << ":" <<  ltm->tm_sec << endl;
					cout << " \t\t\t  Hingga nanti jam : " <<  arr_paket[i]  + ltm->tm_hour << ":" <<  ltm->tm_min << ":" <<  ltm->tm_sec << endl <<endl;
					cout << " \t\t\t\t\tKasir Pengurus :" << username<<endl;
					cout << "\t\t===============================================\n\n"; 
					
				}
getch();
}


struct Absensi //struktur Absensi
{
    int atas;
    int data[max];
	string username;
	
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
			system("cls");
			cout << " \n\n";          
			cout << " \n";  
			cout << "\t\t ==============----------------------------------------------------==\n";            
			cout << "\t\t Admin dengan Kode 00" << T.data[T.atas] << " Telah melakukan absensi"<<endl;
			cout << "\t\t ==============----------------------------------------------------==\n";         
		
            
        }
        else if (penuh() == 0) //pemilihan jika data masih penuh
        {
            T.atas++;
            T.data[T.atas] = data;
            cout << "Admin dengan kode 00" << T.data[T.atas] << " Telah melakukan absensi Terimakasih Admin\n";
        }
    }
    else
    {
		
        cout << "data admin yang kamu masukkan salah\n";
        cout << endl;
    }
}

void hapusabsensi() //hapus untuk menghapus data paling atas
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

void tampilabsensi() //parameter menampilkan isi data
{
    if (kosong() == 0) //pemilihan menampilkan isi data
    {
        for (int i = T.atas; i >= 0; i--)
        {	 
		
            cout << "\nAbsen urutan ke " << i + 1 << " : 00" << T.data[i] <<endl;
        }
    }
    else //jika salah maka menampilkan Absensi kosong
		
        cout << "Absen masih kosong silahkan melakukan absensi";
}

void bersihabsensi() //parameter memebersihkan semua data
{
    T.atas = -1;
    cout << "Semua absen pada hari ini telah dihapus\n";
}


	
    

void absensi(){
	awal();
    do //perulangan do - while
    {	system("cls");
        cout << "\t\t  ==============================================================\n";
        cout << "\t\t||      Absensi untuk 1 hari masukkan kode tiap-tiap admin      ||\n";
        cout << "\t\t||-------------------------- 1. yosua  -------------------------||\n";
        cout << "\t\t||-------------------------- 2. raihan -------------------------||\n";
        cout << "\t\t||-------------------------- 3. Alfin --------------------------||\n";
        cout << "\t\t||-------------------------- 4. Ade    -------------------------||\n";
        cout << "\t\t  ==============================================================\n";
        cout << "\t\t===================================================================\n";

        cout << "\t\t   HI ADMIN, Silahkan melakukan absensi ya. Selamat bekerja!!\n";
        cout << "\n\t\t1. absen\n";
        cout << "\t\t2. Hapus absen\n ";
        cout << "\t\t3. Tampil admin yang telah absen\n ";
		cout << "\t\t4. Bersihkan absen\n ";
        cout << "\t\t5. Keluar\n ";
		cout << " Perintah : ";
		cin >> pilihan;
        cout << "\n";

        switch (pilihan) //pemilihan perintah
        {
        case 1:
            cout << "\t\t Untuk melakukan absensi Masukkan kode admin yang tertera diatas "<<endl;
            cout << " Kode anda : " ;
			cin >> data;
            input(data);
            break;

        case 2:
            hapusabsensi();
            break;

        case 3:
            tampilabsensi();
            break;

        case 4:
            bersihabsensi();
            break;

        case 5:
            cout << "Terimakasih Telah Melakukan absensi Semoga harimu menyenangkan!! \ntekan enter untuk keluar";
        }
        getch();
    } while (pilihan != 5);

}

void graf(){
	int simpul,garis=0;
char A[20];
 
cout<<"banyak PC yang terhubung = ";
cin>>simpul;
cout<<endl;
 
for (int i=0; i<simpul; i++){
cout<<"Nomor PC ke "<<i+1;
cout<<" = ";
cin>>A[i];
}
 
cout<<"\nJumlah Koneksi = ";
for (int i=0; i<simpul; i++){
for (int j=i+1; j<simpul; j++){
cout<<" ";
cout<<A[i]<<"-"<<A[j];
}
}
getch();
}
	
