#include <iostream.h>
#include <conio.h>
#include <math.h>

int main(){
int n= 1;
int menu, p, l, a, b, c, t, luas, volume;
int x, y, z, D;
float X;

	//no . 1
   cout<<"No. "<<n++<<"\n\n";
   cout<<"Menu\n";
   cout<<"-------------------\n";
   cout<<"1. Luas\n";
   cout<<"2. Volume\n";
   cout<<"Pilih salah satu: ";cin>>menu;
   if(menu == 1){
   	cout<<"-------------------\n";
      cout<<"Menu Menghitung Luas Permukaan\n";
   	cout<<"-------------------\n";
      cout<<"1. Persegi Panjang\n";
   	cout<<"2. segitiga\n";
      cout<<"3. persegi\n";
   	cout<<"Pilih salah satu: ";cin>>menu;
      if(menu == 1){
      	cout<<"-------------------\n";
      	cout<<"Menghitung Luas Segi Empat\n";
         cout<<"-------------------\n";
         cout<<"Masukkan Panjang: ";cin>>p;
         cout<<"Masukkan Lebar: ";cin>>l;
         luas = p*l;
         cout<<"Luas = "<<luas<<"\n";
      }
      else if(menu == 2){
         cout<<"-------------------\n";
      	cout<<"Menghitung Luas Segitiga\n";
         cout<<"-------------------\n";
         cout<<"Masukkan alas: ";cin>>a;
         cout<<"Masukkan tinggi: ";cin>>t;
         luas = 0.5*a*t;
         cout<<"Luas = "<<luas<<"\n";
      }
      else if(menu == 3){
      	cout<<"-------------------\n";
      	cout<<"Menghitung Persegi\n";
         cout<<"-------------------\n";
         cout<<"Masukkan panjang sisi: ";cin>>p;
         luas = p*p;
         cout<<"Luas = "<<luas<<"\n";
      }
      else{
      	cout<<"-------------------\n";
      	cout<<"Menu tidak tersedia\n";
      }
   }
   else if(menu == 2){
   	cout<<"-------------------\n";
      cout<<"Menu Menghitung Luas Permukaan\n";
   	cout<<"-------------------\n";
      cout<<"1. Balok\n";
   	cout<<"2. Prisma\n";
      cout<<"3. Kubus\n";
   	cout<<"Pilih salah satu: ";cin>>menu;
      if(menu == 1){
      	cout<<"-------------------\n";
      	cout<<"Menghitung Volume Balok\n";
         cout<<"-------------------\n";
         cout<<"Masukkan Panjang: ";cin>>p;
         cout<<"Masukkan Lebar: ";cin>>l;
         cout<<"Masukkan tinggi: ";cin>>t;
         volume = p*l*t;
         cout<<"Volume = "<<volume<<"\n";
      }
      else if(menu == 2){
      	cout<<"-------------------\n";
      	cout<<"Menghitung Volume Prisma Segitiga\n";
         cout<<"-------------------\n";
         cout<<"Masukkan Alas Segitiga: ";cin>>a;
         cout<<"Masukkan Tinggi Segitiga: ";cin>>t;
         cout<<"Masukkan Tinggi Prisma: ";cin>>l;
         volume = 0.5*a*t*l;
         cout<<"Volume = "<<volume<<"\n";
      }
      else if(menu == 3){
         cout<<"-------------------\n";
      	cout<<"Menghitung Volume Kubus\n";
         cout<<"-------------------\n";
         cout<<"Masukkan Panjang Sisi: ";cin>>p;
         volume = p*p*p;
         cout<<"Volume = "<<volume<<"\n";
      }
       else{
      	cout<<"-------------------\n";
      	cout<<"Menu tidak tersedia\n";
      }
   }
   else{
   	cout<<"-------------------\n";
   	cout<<"Menu tidak tersedia\n";
   }
   cout<<endl;

   //no . 2
   cout<<"No. "<<n++<<"\n\n";
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

   //no . 3
   cout<<"No. "<<n++<<"\n\n";
   cout<<"Menentukan Bilangan Ganjil / Genap\n";
   cout<<"Masukkan bilangan : ";cin>>x;
   if(x%2 == 0){
   	cout<<"Bilangan Genap\n";
   }
   else{
   	cout<<"Bilangan Ganjil\n";
   }
   cout<<endl;

   //no . 4
   cout<<"No. "<<n++<<"\n\n";
   cout<<"Menentukan Tahun Kabisat/ bukan\n";
   cout<<"Masukkan Tahun : ";cin>>x;
   if(x%400 == 0){
   	cout<<"Tahun Kabisat\n";
   }
   else{
   	cout<<"Bukan Tahun Kabisat\n";
   }
   cout<<endl;

   //no . 5
   cout<<"No. "<<n++<<"\n\n";
   cout<<"Menentukan Jenis Segitiga\n";
   cout<<"Masukkan Sudut A : ";cin>>x;
   cout<<"Masukkan Sudut B : ";cin>>y;
   z = 180 - (x+y);
   cout<<"Masukkan Sudut C : "<<z<<"\n";
   if(x == y && x == z && y == z){
   	cout<<"Segitiga Sama Sisi\n";
   }
   else if(x == 90 || y == 90 || z == 90){
   	cout<<"Segitiga Siku - Siku\n";
   }
   else{
   	cout<<"Segitiga Sembarang\n";
   }
   cout<<endl;

   //no . 6
   cout<<"No. "<<n++<<"\n\n";
   cout<<"Menentukan Jenis Akar Persamaan Kuadrat\n";
   cout<<"ax^2 + bx + c = 0\n";
   cout<<"-------------------\n";
   cout<<"Masukkan A : ";cin>>a;
   cout<<"Masukkan B : ";cin>>b;
   cout<<"Masukkan C : ";cin>>c;
   D = b*b - 4*a*c;
   if(D == 0){
   	cout<<"Akar sama\n";
      x = -1*b /(2*a);
      cout<<"x1 = "<<x<<"\n";
      cout<<"x2 = "<<x<<"\n";
   }
   else if(D > 0){
   	cout<<"Akar Beda\n";
      x = (-1*b + sqrt(D)) /(2*a);
      z = (-1*b - sqrt(D)) /(2*a);
      cout<<"x1 = "<<x<<"\n";
      cout<<"x2 = "<<z<<"\n";
   }
   else{
   	cout<<"Akar Imajiner\n";
   }
   cout<<endl;

   //no . 7
   cout<<"No. "<<n++<<"\n\n";
   cout<<"Menentukan Nilai\n";
   cout<<"-------------------\n";
   cout<<"Masukkan Nilai : ";cin>>x;
   if(x >= 75  && x <= 100){
   	cout<<"Nilai A\n";
   }
   else if(x >= 70 && x < 75){
   	cout<<"Nilai AB\n";
   }
   else if(x >= 65 && x < 70){
   	cout<<"Nilai B\n";
   }
   else if(x >= 60 && x < 65){
   	cout<<"Nilai BC\n";
   }
   else if(x >= 55 && x < 60){
   	cout<<"Nilai C\n";
   }
   else if(x >= 40 && x < 55){
   	cout<<"Nilai D\n";
   }
   else if(x >= 0 && x < 40){
   	cout<<"Nilai E\n";
   }
   else{
   	cout<<"Inputan Error\n";
   }
   cout<<endl;

   //no . 8
   cout<<"No. "<<n++<<"\n\n";
   cout<<"Menentukan Nilai\n";
   cout<<"-------------------\n";
   cout<<"Masukkan IPK : ";cin>>X;
   if(X >= 3.5 && X <= 4){
   	cout<<"Cumlaude/Dengan Pujian\n";
   }
   else if(X >= 2.75 && X < 3.5){
   	cout<<"Sangat Memuaskan\n";
   }
   else if(X >= 2 && X < 2.75){
   	cout<<"Memuaskan\n";
   }
   else{
   	cout<<"Inputan Error\n";
   }
   cout<<endl;

   //no . 9
   cout<<"No. "<<n++<<"\n\n";
   cout<<"Menghitung Total Harga\n";
   cout<<"-------------------\n";
   cout<<"Masukkan Jumlah barang : ";cin>>x;
   if(x >30){
   	y = x*23000;
   }
   else if(x > 20 && x <= 30){
   	y = x*25800;
   }
   else if(x > 10 && x <= 20){
   	y = x*26500;
   }
   else if(x > 0 && x <= 10){
   	y = x*28000;
   }
   else{
   	cout<<"Inputan Error\n";
   }
   cout<<"Total Harga = "<<y<<"\n";
   cout<<endl;

   //no . 10
   cout<<"No. "<<n++<<"\n\n";
   cout<<"Menghitung Total Harga Sewa Angkot\n";
   cout<<"-------------------\n";
   cout<<"Masukkan Jarak : ";cin>>X;
   if(X > 1){
   	y = 80000 + (X*14000);
   }
   else if(X == 1){
   	y = 80000;
   }
   if(X > 0 && X < 1){
   	y = X*14000;
   }
   else{
      cout<<"Inputan Error\n";
   }
   cout<<"Total Harga = "<<y<<"\n";
   cout<<endl;
   

getch();
}
