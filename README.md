# UTS_Algoritma
## penjelasan dari jawaban soal1.cpp
1.	Membuat inisialisasi a,b,x,y (int a,b,x,y;)
2.	Menginputkan nilai a dan b (a=2, b=4)
3.	Membuat pemrosesan x=a y=b
4.	Nilai tersebut (x=a=2, y=b=4) masuk ke peroses pengulangan (while) dengan kondisi (x!=y) 
5.	Karna kondisinya x!=y (2!=4) maka nilai tersebut adalah true dan masuk ke if statment
6.	Di if statment nilai x dan y di bandingkan dengan kondisi x<y (2<4)
7.	Karna nilai perbandingan di if statment tersebut bernilai true, maka nilai tersebut masuk ke proses berikutnya (“x=x+a” = “x=2+2” = “x=4”)
8.	Nilai x  dan y tersebut kemudian masuk ke proses pengulangan (while) untuk yang ke dua kalinya,
9.	Di bandingkan lagi dengan kondisi x!=y (4!=4) dan nilai tersebut adalah false karna 4  sama dengan 4
10.	Karna nilainya false, maka proses tersebut masuk ke “write x”
11.	Dan yang tercetak adalah angka 4 karna x=4
b.	Apa yang tercetak bila
a.	Untuk a di inputkan 4 dan
b.	Untuk b di inputkan 7
Jawaban :
Yang tercetak adalah angka 28
Penjelasan :
1.	Penjelasan Peroses awalnya seperti pada pertanyaan a, 
2.	Karna kondisinya x!=y (4!=7) maka nilai tersebut adalah true dan masuk ke if statment
3.	Di if statment nilai x dan y di bandingkan dengan kondisi x<y (4<7)
4.	Karna nilai perbandingan di if statment tersebut bernilai true, maka nilai tersebut masuk ke proses berikutnya (“x=x+a” = “x=4+4” = “x=8”)
5.	Nilai x  dan y tersebut kemudian masuk ke proses pengulangan (while) untuk yang ke dua kalinya,
6.	Di bandingkan lagi dengan kondisi x!=y (8!=7) dan nilai tersebut adalah true dan masuk lagi ke proses if statment,
7.	Di if statment nilai x dan y di bandingkan dengan kondisi x<y (8<7)
8.	Karna nilai perbandingan di if statment tersebut bernilai false, maka nilai tersebut masuk ke proses berikutnya (“y=y+b” = “y=7+7” = “y=14”)
9.	Nilai x  dan y tersebut kemudian masuk ke proses pengulangan (while) untuk yang ke tiga kalinya,
10.	Proses pengulangan tersebut akan terus berlangsung sampai nilai yang di hasilkan dari operator while bernilai false 

x		y			x		y	
4	  !=	7	  true		4	<	7	True
8	  !=	7	  true		8	<	7	False
8	  !=	14	true		8	<	14	True
12	!=	14	true		12	<	14	True
16	!=	14	true		16	<	14	False
16	!=	21	true		16	<	21	True
20	!=	21	true		20	<	21	True
24	!=	21	true		24	<	21	False
24	!=	28	true		24	<	28	True
28	!=	28	false		28			
Ket : 	Nilai x+4
Nilai y+7

11.	Karna nilainya false, maka proses tersebut masuk ke “write x”
12.	Dan yang tercetak adalah angka 28 karna x=28

berikut code lengkapnya :
#include <iostream>

using namespace std;

int main()
{

	int a,b,x,y;

	cout << "masukan nilai a :";
	cin >> a;
	cout << "masukan nilai b : ";
	cin >> b;

	x=a;
	y=b;

	while (x!=y){

		if (x<y)
			x=x+a;
		else
			y=y+b;
	}

	cout << x;
	

	
	return 0;
}

berikut hasil screenshot dari soal1.cpp :
![soal1](https://user-images.githubusercontent.com/44117281/47954436-b0ed7d80-dfbc-11e8-8413-b26b5215700b.png)

## penjelasan dari jawaban soal2.cpp
1.	Membuat inisialisasi (int n,x,t,batas;)
2.	Input nilai N
Ket : nilai N disini diisikan oleh 2 digit terakhir nim mahasiswa (311810209)  
3.	Membuat pemrosesan
Batasan= n + 100 ;
x = 20;
t = n;
4.	Nilai tersebut masuk ke proses pengulangan (while) dengan kondisi “t<=batasan” atau “9<=109”
5.	selama nilai T lebih kecil sama dengan BATASAN, nilai T tersebut akan terus berulang sampai nilai T tersebut melebihi dari nilai batasan
6.	setelah nilai T lebih besar dati BATASAN, maka nilai T tersebut keluar dari peroses pengulangan
7.	kemudian nilai T tersebut di cetakan ke layar

berikut code lengkapnya :
#include <iostream>

using namespace std;

int main()
{
	int x,n,t,batas;

	cout << "masukan nilai n : ";
	cin >> n;

	batas =n+100;
	x=20;
	t=n;

	while (t<=batas){
		t=t+x;
		x=x+10;
	}
	cout << t;
	

	return 0;
}

berikut hasil screenshot dari soal2.cpp :
![soal2](https://user-images.githubusercontent.com/44117281/47954467-e8f4c080-dfbc-11e8-9735-4beac6d1c76e.png)


