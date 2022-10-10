#include <iostream.h>
#include <conio.h>
#include <math.h>

int main(){
	int n;
   int x,y,z;
   float p,l,t,r,s, kali;
   float tambah, kurang, bagi;
   float Voltab, Volker;
   float Luastab, Luasker, sisimiring;
   float phi = 22/7;
   int mod;
   n=1;
	float celr, celf;

   cout<<"Latihan Bab 1\n";
   //NO.1
   cout<<"No. "<<n++<<"\n";
   cout<<"Hello\nSelamat Belajar C++\n\n";

   //NO. 2
   cout<<"No. "<<n++<<"\n";
   cout<<"Selamat Datang !!\nKelas Praktikum Algoritma dan Pemrograman\nMari Belajar bersama program c++\n\n";


   cout<<"Latihan Bab 2\n";
   n = 1;
   //NO.1
   cout<<"No. "<<n++<<"\n";
   cout<<"Masukkan Panjang Balok: ";cin>>p;
   cout<<"Masukkan Lebar Balok: ";cin>>l;
   cout<<"Masukkan Tinggi Balok: ";cin>>t;

   cout<<"Deskripsi Ukuran Balok:\n";
   cout<<"Panjang = "<<p<<"\n";
   cout<<"Lebar = "<<l<<"\n";
   cout<<"Tinggi = "<<t<<"\n\n";

   //NO. 2
   cout<<"No. "<<n++<<"\n";
   char hrf1, hrf2, hrf3;
   hrf1 = 'A';
   hrf2 = 'B';
   hrf3 = 'C';
   cout<<hrf1<<hrf2<<hrf3<<"\n\n";

   //NO. 3
   cout<<"No. "<<n++<<"\n";
   x = 5;
   y = 8;
   p = 12.5;
   l = 8.7;
   t = 6.321;
   cout<<x<<" "<<y<<" "<<p<<" "<<l<<" "<<t<<" "<<"\n\n";

   //NO. 4
   cout<<"No. "<<n++<<"\n";
   p = 10;
   l = 1.5;
   t = 8;
   kali = p*l*t;
   cout<<"Hasil Kali 10 x 1,5 x 8 ="<<kali<<"\n\n";

   //NO. 5
   cout<<"No. "<<n++<<"\n";
   cout<<"Masukkan bilangan 1: ";cin>>x;
   cout<<"Masukkan bilangan 2: ";cin>>y;
   tambah = x + y;
   kurang = x - y;
   kali = x * y;
   bagi = x / y;
   mod = x % y;
   cout<<x<<" + "<<y<<" = "<<tambah<<"\n";
   cout<<x<<" - "<<y<<" = "<<kurang<<"\n";
   cout<<x<<" x "<<y<<" = "<<kali<<"\n";
   cout<<x<<" / "<<y<<" = "<<bagi<<"\n";
   cout<<x<<" % "<<y<<" = "<<mod<<"\n\n";

   //NO. 6
   cout<<"No. "<<n++<<"\n";
   cout<<"Luas tabung\n";
   cout<<"Masukkan jari2 : ";cin>>r;
   cout<<"Masukkan tinggi : ";cin>>t;
   Luastab = 2*(phi*r*r) + t*(2*phi*r);
   s = (r*r)+(t*t);
   Luasker = phi*r*(r+sqrt(s));
   cout<<"Luas Tabung ="<<Luastab<<"\n";
   cout<<"Luas Kerucut ="<<Luasker<<"\n\n";

   //NO. 7
   cout<<"No. "<<n++<<"\n";
   cout<<"Volume tabung\n";
   cout<<"Masukkan jari2 : ";cin>>r;
   cout<<"Masukkan tinggi : ";cin>>t;
   Voltab = phi*r*r*t;
   Volker = phi*r*r*t/3;
   cout<<"Volume Tabung ="<<Voltab<<"\n";
   cout<<"Volume Kerucut ="<<Volker<<"\n\n";

   //NO. 8
   cout<<"No. "<<n++<<"\n";
   cout<<"Perbandingan nilai Luas tabung & Luas Kerucut\n";
   if(Luastab > Luasker){
   	cout<<"Nilai Terbesar: Luas Tabung = "<<Luastab<<"\n";
      cout<<"Nilai Terkecil: Luas Kerucut = "<<Luasker;
   }
   else if(Luastab < Luasker){
   	cout<<"Nilai Terbesar: Luas Kerucut = "<<Luasker<<"\n";
      cout<<"Nilai Terkecil: Luas Tabung = "<<Luastab;
   }
   else{
   	cout<<"Luas Tabung = Luas Kerucut";
   }
   cout<<"\n\n";

   //NO. 9
   cout<<"No. "<<n++<<"\n";
   cout<<"Perbandingan nilai Volume tabung & Volume Kerucut\n";
   if(Luastab > Luasker){
   	cout<<"Nilai Terbesar: Volume Tabung = "<<Voltab<<"\n";
      cout<<"Nilai Terkecil: Volume Kerucut = "<<Volker;
   }
   else if(Luastab < Luasker){
   	cout<<"Nilai Terbesar: Volume Kerucut = "<<Volker<<"\n";
      cout<<"Nilai Terkecil: Volume Tabung = "<<Voltab;
   }
   else{
   	cout<<"Volume Tabung = Volume Kerucut";
   }
   cout<<"\n\n";

   //NO. 10
   cout<<"No. "<<n++<<"\n";
   cout<<"Sisi Miring Segitiga Siku2\n";
   cout<<"Masukkan alas : ";cin>>p;
   cout<<"Masukkan tinggi : ";cin>>t;
   s = (p*p) + (t*t);
   sisimiring = sqrt(s);
   cout<<"Sisi Miring Segitiga Siku2 = "<<sisimiring<<"\n\n";

   //NO. 11
   cout<<"No. "<<n++<<"\n";
   cout<<"Rumus suhu ke celcius\n";
   cout<<"Masukkan fahrenheit : ";cin>>p;
   cout<<"Masukkan reamur : ";cin>>t;
   celr = 5*t/4;
   celf = (p - 32)*5/9;
   cout<<"reamur ke celcius = "<<celr<<"\n";
   cout<<"fahrenheit ke celcius = "<<celf<<"\n\n";

   //NO. 12
   cout<<"No. "<<n++<<"\n";
   int jam, mnt, dtk;
   cout<<"Masukkan jam : ";cin>>jam;
   cout<<"Masukkan menit : ";cin>>mnt;
   cout<<"Masukkan detik : ";cin>>dtk;

   dtk = dtk + mnt*60 + jam*3600;
   cout<<"Total detik = "<<dtk<<"\n\n";

   //NO. 13
   cout<<"No. "<<n++<<"\n";
   cout<<"Masukkan bilangan 1 : ";cin>>x;
   cout<<"Masukkan bilangan 2 : ";cin>>y;
   cout<<"Masukkan bilangan 3 : ";cin>>z;

   if(x>y){
   	// x>y>z
   	if(y>z){
      	cout<<"Nilai Terbesar: "<<x<<"\n";
      	cout<<"Nilai Terkecil: "<<z;
      }

      if(y<z){
      	// x>z>y
      	if(x>z){
         	cout<<"Nilai Terbesar: "<<x<<"\n";
      		cout<<"Nilai Terkecil: "<<y;
         }
         // z>x>y
         if(x<z){
         	cout<<"Nilai Terbesar: "<<z<<"\n";
      		cout<<"Nilai Terkecil: "<<y;
         }
      }
   }

   if(y>x){
   	//y>x>z
   	if(x>z){
      	cout<<"Nilai Terbesar: "<<y<<"\n";
      	cout<<"Nilai Terkecil: "<<z;
      }

      if(x<z){
      	// y>z>x
      	if(y>z){
         	cout<<"Nilai Terbesar: "<<y<<"\n";
      		cout<<"Nilai Terkecil: "<<x;
         }
         // z>y>x
         if(y<z){
         	cout<<"Nilai Terbesar: "<<z<<"\n";
      		cout<<"Nilai Terkecil: "<<x;
         }
      }
   }
   cout<<"\n\n";

   //NO. 14
   cout<<"No. "<<n++<<"\n";

   cout<<"---------------------\n";
   cout<<"Nama		: \n";
   cout<<"Nim		: \n";
   cout<<"alamat	: \n";
   cout<<"Semester: \n";
   cout<<"IPK		: \n";

   //NO. 15
   cout<<"No. "<<n++<<"\n";
   cout<<"Program Studi\nMatematika\n\n";
   cout<<"Departemen\nMatematika\n\n";
   cout<<"Fakultas\nSains dan Teknologi\n\n";

getch();
}