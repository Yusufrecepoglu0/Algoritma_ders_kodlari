#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;
/*
int main() {
	int toplam, Not, osay, sonuc;
	toplam = 0;
	cout << "Ogrenci sayisini giriniz: ";
	cin >> osay;

	for (int i = 0; i < osay; i++)
	{
		cout << "Not girniz: ";
		cin >> Not;
		toplam += Not;
	}
	sonuc = toplam / osay;
	if (sonuc>=70)
	{
		cout << "Basarili sinif!!";
	}
	else
	{
		cout << "Basarisiz sinif!!";
	}
}
*/
/*
int main() { 
	double sonuc, a, b;
	cout << "a sayisini giriniz: " << endl;
	cin >> a;
	cout << "b sayisini giriniz: " << endl;
	cin >> b;
	sonuc = (a + b) / (a*a*a + b*b*b);
	cout << "Sonucunuz: " << sonuc;
}*/
/*
int main() {
	int a, b;
	cout << "a degeri giriniz: ";
	cin >> a;
	b = pow(a, 2) - a + 5;//b=a*a-a+5;
	cout << "Cevap: " << b;
	return 0;
}*/	
/*
int main() {
float a, i, n, p;
	cout << "Ana para miktarini giriniz";
	cin >> a;
	cout << "faiz y�zdesini giriniz";
	cin >> i;
	cout << "Gecen zamani giriniz";
	cin >> n;
	cout << a * pow(1 + a, n);*/
/*
	float x;
	cout << "x degerini giriniz: ";
	cin >> x;
	cout << (x + pow(x * x + 1, 1 / 2)) / log(x + 1);
	}*/
/*
int main() {
	
	int a;
	cout << "Sayi giriniz: ";
	cin >> a;
	if (a%2==1)
	{
		cout << "Sayiniz tek.";
	}
	else
	{
		cout << "Sayiniz cift.";
	}

	int x, y, z;
	x = 5;
	y = 6;
	z = x * y;
	printf("\nz=%d", z);
	return 0;
}*/
/*
int main() {
	char a, b, c, d, e;
	basla:
	cout << "Sifre giriniz: ";
	cin >> a >> b >> c >> d >> e;
	if (a == 'Y', b == 'u', c == 's', d == 'u', e == 'F')
	{
		cout << "Hos Geldiniz!" << endl;
		system("pause");
	}
	else
	{
		cout << "Sifre Yanlis!" << endl;
		goto basla;
	}
}*/
/*
int main() {
	float taban, yukseklik , kenar;
	float alan;
	int secim, gsif, sif = 11033;
	string gkadi, kadi = "yusuf";
	cout << "Kullanici adinizi giriniz\n";
	cin >> gkadi;
	if (gkadi == kadi) {
		b:
		cout << "Sifrenizi giriniz\n";
		cin >> gsif;
		if (gsif == sif) {

			
			a:
			cout << "Secenekler: " << endl << "1-Ucgen Alan" << endl << "2- Dikdorgen Alan" << endl << "3- Kare Alan" << endl << "4- Cikis" << endl;
			cin >> secim;
			if (secim==1)
			{
				cout << "Ucgenin taban ve yukseklik degerini giriniz: ";
				cin >> taban >> yukseklik;
				alan =(taban * yukseklik)/2;
				cout << "Alaniniz: " << alan << endl;
				goto a;
			}
			else if (secim==2)
			{
				cout << "Taban ve yukseklik degerini giriniz: ";
				cin >> taban >> yukseklik;
				alan = taban * yukseklik;
				cout << "Alaniniz: " << alan << endl;
				goto a;
			}
			else if (secim==3)
			{
				cout << "Kenar degerini giriniz: ";
				cin	>> kenar;
				alan = kenar*kenar;
				cout << "Alaniniz: " << alan << endl;
				goto a;
			}
			else if (secim==4)
			{
				return 0;
			}
			else
			{
				cout << "Gecersiz deger!!!" << endl;
				goto a;
			}
		}
		else
		{
			cout << "Sifreniz yanlis!!!\nTekrar deneyiniz.";
			goto b;
		}
	}
}
*/
/*
int main() {
	float a, b, c;
	a = 0;
	b = 1;
x:
	a = a + 1 / b;
	b += 4;
	
	if (b<=401) goto x;
	cout << "Toplaminiz: " << a << endl;
}*/
/*
int main() {
	float a, b, c;
	a = 1;
	b = 2;
x:
	a = a + (b / b + 1);
	b += 2;
	if (b <= 400) goto x;
	cout << "Toplam�n�z: " << a << endl;
}*/
/*
int main() {
	float x;
	a:
	cout << "Notunuzu giriniz: " << endl;
	cin >> x;
	if (x < 50)
	{
		cout << "Harf notunuz: F";
	}
	else if (x<70)
	{
		cout << "Harf notunuz: C";
	}
	else if (x < 85)
	{
		cout << "Harf notunuz: B";
	}
	else if (x <= 100 && x >=85)
	{
		cout << "Harf notunuz: A";
	}
	else
	{
		cout << "Notunuzu yanlis girdiniz!" << endl;
		goto a;
	}
}*/
/*
int main() {
	int a, b, c;
	a = 0;
	b = 0;
	do
	{	
		cout << "Sayi giriniz: ";
		cin >> c;
		b += c;
		a += 1;
	} while (c!=0);
	cout << a << " adet sayi girdiniz. Sayilarin toplami: " << b << endl;
	return 0;

}*/
/*
int main() {
	int a, b, c;
	a = 0;
	b = 2;
	c = 1;
	while (b<=200)
	{
		a += b -(b+2);
		b += 4;
		c++;
	}
	cout << c << " adet sayinin toplami: " << a;

}*/
/*
int main() {
	int i = 0;
	while (i++<10)
	{
		int j = 0;
		while (j++<10)
		{
			cout << "*";
		}
		cout << endl;
	}
}*/
/*
int main() {
	int sayi, sayac, sonuc;
	cout << "Faktoriyeli alinicak sayiyi giriniz: ";
	cin >> sayi;
	sayac = 1;
	sonuc = 1;
	while (sayac<=sayi)
	{
		sonuc *= sayac;
		sayac ++;
	}
	cout << "Sonucunuz: " << sonuc;
}*/
/*
int main() {

	int sayi;
	int sonuc = 1;
	cout << "Faktoriyelini almak istediginiz sayiyi giriniz: ";
	cin >> sayi;

	for (int i = 1;  i <= sayi ; i++)
	{
		sonuc *= i;
	}
	cout << "Sonucunuz: " << sonuc;

	return 0;
}*/
/*
int main() {
	int i, j, n;
	double f, s;
	i = 2;
	s = 0;
	cout << "Ust limiti giriniz: ";
	cin >> n;

	while (i<=n)
	{
		f = 1;
		j = 1;
		while (j<=i)
		{
			f *= j;
			j++;
		}
		s += f;
		i+=2;
	}
	cout << "Sonuc: " << s;
}*/
/*
int main()
{
	int renk; char c;
	do {
		cout << "RENK SECINIZ:" << endl;
		cout << "1.Beyaz" << endl;
		cout << "2.Siyah" << endl;
		cout << "3.Kirmizi" << endl;
		cout << "4.Mavi" << endl;
		cout << "5.Yesil" << endl;
		cout << "RENK...";
		cin >> renk;
		switch (renk)
		{
		case 1:cout << "SECTIGINIZ RENK BEYAZDIR" << endl; break;
		case 2:cout << "SECTIGINIZ RENK SIYAHTIR" << endl; break;
		case 3:cout << "SECTIGINIZ RENK KIRMIZIDIR" << endl; break;
		case 4:cout << "SECTIGINIZ RENK MAVIDIR" << endl; break;
		case 5:cout << "SECTIGINIZ RENK YESILDIR"<<endl;break;
		default:cout << "HATALI SECIM YAPTINIZ,1-5 ARASI BIR RENK SECINIZ..\n\n";break;
			return 0;
		}
		cout << "Devam etmek istiyormu sunuz e/h ";
		cin >> c;
	} while (c == 'e' || c == 'E');
}*/
/*
int main() {
	int sayi;
	int sonuc = 1;
	cout << "Faktoriyelini almak istediginiz sayiyi giriniz: ";
	cin >> sayi;

	for (int i = 1; i <= sayi; i++)
	{
		sonuc *= i;
	}
	cout << "Sonucunuz: " << sonuc << endl;

	return 0;
}*/
/*
int main() {
	int n;
	int top = 0;
	float ort;
	cout << "Kac sayi giriceksiniz?" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		top += i;
	}
	ort = top / n;
	cout << "Girdiginz sayilarin ortalamasi: " << ort;
	return 0;

}*/// Mantik hatali kod
/*
int main() {
	int n, a;
	int top = 0;

	cout << "Kac sayi giriceksiniz: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << ". Sayiyi giriniz: ";
		cin >> a;
		top += a;
	}
	cout << "Girdiginz sayilarin ortalamasi: " << float (top / n) << endl;
	return 0;

}*/
/*
int main() {
	float r, sonuc, pi = 3.14;
	cout << "Dairenin yari �apini giriniz: ";
	cin >> r;
	sonuc = 2 * pi * pow(r, 2);
	cout << "sonucunuz: " << sonuc;
	return 0;
}*/
/*
int main() {
	int tut, dene, kontrol;
	srand(time(NULL));
	tut = rand() % 101;
	a:
	cout << "0-100 arasinda bi sayi giriniz: ";
	cin >> dene;
	int sayac = 1;
	while (tut != dene)
	{
		if (tut < dene) {
			cout << "Sayiyi kucultun." << endl;
		}
		else
		{
			cout << "Sayiyi buyutunuz." << endl;
		}
		cin >> dene;
		sayac++;
	}
	cout << "Bildiniz!!" << endl;
	cout << sayac << " denemede buldunuz." << endl;
	b:
	cout << "Tekrar denemek ister misiniz? \n 1-Devam 2-Bitir" << endl;
	cin >> kontrol;
	if (kontrol==1)
	{
		goto a;
	}
	else if (kontrol!=1 && kontrol!=2)
	{
		cout << "Yanlis deger" << endl;
		goto b;
	}

	return 0;
}*/
/*
int main() {
	int i, s= 1, top = 0;
	for ( i = 2; i <= 62; i+=2)
	{
		top += pow(i, 7) * s;
		s = -s;
	}
	cout << "Toplaminiz: " << top;
	return 0;
}*/
/*
int main() {
	long long int b = 1, f = 1, top = 0;
	for (int i = 2; i <=17; i+=3)
	{
		for (int j = 1; j <= i; j++) {
			f *= j;
		}
		top += f * b;
		b = -b;
		f = 1;
	}
	cout << "Toplaminiz: " << top;
	return 0;
}*/
/*
int main() {

	int arr[5];
	arr[0] = 20;
	arr[1] = 21;
	arr[2] = 22;
	arr[3] = 23;
	arr[4] = 24;

	cout << arr[4];
	cout << endl;

	float dizi[] = { 35.1, 15.8, 31.1, 20.8, 10.2 };

	for (int i = 0; i < 5; i++) {
		cout << dizi[i] << " ";
	}

	cout << endl;
	return 0;
}*/
/*
int main() {

	int dizi[2][3] = { {21, 34, 42},        // dizi[sat�r say�s�][sat�rdaki i�erik say�s�]
					   {22, 35, 47} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << dizi[i][j] << " ";
		}
		cout << endl;
	}


	cout << endl;
	return 0;
}*/
/*
int main() {
	int dizi[5] = {};
	int f = 1, sayac = 0;
	for (int i = 2; i <= 10; i+=2)
	{
		for (int j = 1; j <= i; j++)
		{
			f *= j;
		}
		dizi[sayac] = f;
		f = 1;
		sayac++;
	}
	for (int a = 0; a < 5; a++)
	{
		cout << "Dizinin " << a + 1 << ". elemani: " << dizi[a] << endl;
	}
	return 0;
}*/
/*
int main() {
	int dizi[6] = { 7, 12, 5, 8, 11, 4 };
	int i, j = 1;
	for (i=0; i < 6; i++)
	{ 
		j *= dizi[i];
	}
	cout << "Dizinin elemanlar carpimi: " << j;
	return 0;
}*/
/*
int findGCD(int a, int b)
{
	while (b!=0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int findLCM(int a, int b) {
	return (a * b) / findGCD(a, b);
}

int main() {
	int x= 1033, xx, t, m, r,u,�,o;
	string yy, y = "yusufrecepoglu";
	cout << "1) Giris\n2)Cikis";
	cin >> t;
	if (t==1)
	{
		cout << "Kullanici adi ve sifre giriniz: ";
		cin >> yy >> xx;
		if (yy==y && xx==x)
		{
			l:
			cout << "1-) En buyuk sayiyi bul\n2-)En kucuk sayiyi bul\n3-)EBOB\n4-)EKOK";
			cin >> m;
			switch (m)
			{
			case 1:
				cout << "4 sayi giriniz: ";
				cin >> r >> u >> � >> o;
				int enbuyuk = r;
				if (u>enbuyuk)
				{
					enbuyuk = u;
				}
				if (�>enbuyuk)
				{
					enbuyuk = �;
				}
				if (o>enbuyuk)
				{
					enbuyuk = o;
				}
				cout << "En buyuk sayi: " << enbuyuk;
				break;
			case 2:
				cout << "4 sayi giriniz: ";
				cin >> r >> u >> � >> o;
				int enkucuk = r;
				if (u < enkucuk)
				{
					enkucuk = u;
				}
				if (� < enkucuk)
				{
					enkucuk = �;
				}
				if (o < enkucuk)
				{
					enkucuk = o;
				}
				cout << "En kucuk sayi: " << enkucuk;
				break;

			case 3:
				cout << "EBOB'u alinicak sayiyilari giriniz: ";
				cin >> r >> u >> � >> o;
				int ebob1 = findGCD(r, u);
				int ebob2 = findGCD(ebob1, �);
				int ebob3 = findGCD(ebob2, o);
				cout << "EBOB = " << ebob3;
				break;

			case 4:
				cout << "EKOK'u alinicak sayiyilari giriniz: ";
				cin >> r >> u >> � >> o;
				int gcd1 = findGCD(r, u);
				int gcd2 = findGCD(�, o);
				int lcm = findLCM(gcd1, gcd2);
				cout << "EKOK= " << lcm;
				break;

			default:
				cout << "Gecersiz deger!!!";
				goto l;
				break;
			}
			goto l;

		}
	}
	else
	{
	return 0;
	}
}*/
/*
// EBOB'u bulan fonksiyon
int findGCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

// EKOK'u bulan fonksiyon
int findLCM(int a, int b) {
	return (a * b) / findGCD(a, b);
}

int main() {
	int x = 1033, xx;
	int t;
	string yy, y = "yusufrecepoglu";
	int m;
	cout << "1) Giris\n2) Cikis" << endl;
	cin >> t;

	if (t == 1) {
		cout << "Kullanici adi ve sifre giriniz: ";
		cin >> yy >> xx ;

		if (yy == y && xx == x) {
			do {
				
				cout << "1-) En buyuk sayiyi bul\n2-) En kucuk sayiyi bul\n3-) EBOB\n4-) EKOK\n5-) Cikis\n";
				cin >> m;

				switch (m) {
				case 1: {
					cout << "4 sayi giriniz: ";
					int r, u, �, o;
					cin >> r >> u >> � >> o;

					int enbuyuk = r;
					if (u > enbuyuk) enbuyuk = u;
					if (� > enbuyuk) enbuyuk = �;
					if (o > enbuyuk) enbuyuk = o;

					cout << "En buyuk sayi: " << enbuyuk << endl;
					break;
				}

				case 2: {
					cout << "4 sayi giriniz: ";
					int r, u, �, o;
					cin >> r >> u >> � >> o;

					int enkucuk = r;
					if (u < enkucuk) enkucuk = u;
					if (� < enkucuk) enkucuk = �;
					if (o < enkucuk) enkucuk = o;

					cout << "En kucuk sayi: " << enkucuk << endl;
					break;
				}

				case 3: {
					cout << "EBOB'u alinicak sayiyilari giriniz: ";
					int r, u, �, o;
					cin >> r >> u >> � >> o;

					int ebob1 = findGCD(r, u);
					int ebob2 = findGCD(ebob1, �);
					int ebob3 = findGCD(ebob2, o);

					cout << "EBOB = " << ebob3 << endl;
					break;
				}

				case 4: {
					cout << "EKOK'u alinicak sayiyilari giriniz: ";
					int r, u, �, o;
					cin >> r >> u >> � >> o;

					int gcd1 = findGCD(r, u);
					int gcd2 = findGCD(�, o);
					int lcm = findLCM(gcd1, gcd2);

					cout << "EKOK= " << lcm << endl;
					break;
				}

				case 5:
					cout << "Programdan cikiliyor." << endl;
					break;

				default:
					cout << "Gecersiz deger!!!" << endl;
					break;
				}

			} while (m != 5);
		}
		else {
			cout << "Kullanici adi veya sifre hatali!" << endl;
		}
	}
	else {
		cout << "Programdan cikiliyor." << endl;
	}

	return 0;
}
*/
/*
int main() {
	int a[4] = { 3,7,9,4 }, b[4] = { -2,16,1,3 }, top = 0;
	for (int i = 0; i < 4; i++)
	{
		top += a[i] * b[i];
	}
	cout << "a ve b dizilerinin carpimi= " << top;
	return 0;
}*/
/*
int main() {
	int a[5]{}, f = 1, p = 1, k = 3;
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 1; j <= k ; j++)
		{
			f *= j;
		}
		k += 2;
		a[i] = f * p;
		f = 1;
		p = -p;
	}
	for (int s = 0; s < 5; s++)
	{
		cout << a[s] << endl;
	}
}*/
/*
int main() {
	int a[3][3] = {};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << "Dizinin " << i+1 << ". satir " << j+1 << ". sutun elemanini giriniz : ";
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}*/
/*
int main() {
	int a[4][3] = { { 5, 10, 2 },
					{ 4,8,6 },
					{ 10,1,5 },
					{ 2,7,9 } };
	int top = 0, gtop = 0;
	//Satir toplami
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++) {
			top += a[i][j];
		}
		cout << i + 1 << ". satir toplami: " << top << endl;
		gtop += top;
		top = 0;
	}
	// Sutun toplami
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++) {
			top += a[j][i];
		}
		cout << i + 1 << ". sutun toplami: " << top << endl;
		gtop += top;
		top = 0;
	}
	cout << "Matrisin genel toplami: " << gtop << endl;
	return 0;
}*/
/*
int main() {
	int a[4][4] = { {5,8,1,2},{7,9,11,13},{2,7,6,4},{13,1,5,8} };
	int estop = 0, dk�arp = 1;
	for (int i = 0; i < 4; i++)
	{
		estop += a[i][i];
		dk�arp *= a[3-j][j];
	}
	cout << "a matrisinin esas kosegen elemanlari toplami: " << estop << endl;
	cout << "a matrisinin diger kosegen elemanlari carpimi: " << dk�arp << endl;
}*/
/*
int ntop(int x) {
	int a;
	a = (x * (x + 1)) / 2;
	return a;
}

int main() {
	int a;
	cout << "1 den kaca kadar toplanmasini istediginiz sayiyi yaziniz: ";
	cin >> a;
	cout << ntop(a);
	return 0;
}*/
/*
int fakt(int x) {
	int f = 1;
	for (int i = 1; i <= x; i++)
	{
		f *= i;
	}
	return f;
}

int main() {
	int x, y, sonuc;;
	cout << "Kombinasyonunu almak istediginiz sayilari giriniz: ";
	cin >> x >> y;
	sonuc = fakt(x) / fakt(y) * fakt(x - y);
	cout << "Sonucunuz = " << sonuc;

	return 0;
}*/
/*
float disk(int b, int a, int c) {
	float x;
	x = pow(b, 2) - 4 * a * c;
	return x;
}
float kok1(int b, int a, int c) {
	float x;
	x = (-b + sqrt(disk(b,a,c))) / 2 * a;
	return x;
}
float kok2(int b, int a, int c) {
	float x;
	x = (-b - sqrt(disk(b, a, c))) / 2 * a;
	return x;
}


int main() {
	float a, b, c, x;
	cout << "2. dereceden denklemin kat sayilarini giriniz: ";
	cin >> a >> b >> c;
	x = disk(b, a, c);
	if (x==0)
	{
		cout << "Kokunuz: " << kok1(b, a, c);
	}
	else if (x>0)
	{
		cout << "1. kokunuz: " << kok1(b, a, c) << endl;
		cout << "2. kokunuz: " << kok2(b, a, c) << endl;
	}
	else
	{
		cout << "Gercek kokunuz yok!";
	}
	return 0;
}
*/
/*
int main() {
	
	int dizi[] = { 1,2,3,4,5 };
	int dizi2[] = { 6,7,8,9,0 };
	for (int i = 0; i < 5; i++)
	{
		cout << "1. Dizinizin" << i << ". elemani" << dizi[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "2. Dizinizin" << i << ". elemani" << dizi2[i] << endl;
	}

	return 0;
}*/
/*
int main() {
	int dizi[100]{}, top = 0, tut;
	srand(time(0));
	for (int i = 0; i < 100; i++)
	{
		
		tut = rand() % 100;
		dizi[i] = tut;
	}
	cout << "Diziniz { ";
	for (int i = 0; i < 100; i++)
	{
		if (i==99)
		{
			cout << dizi[i] << " }" << endl;
			break;
		}
		else
		{
			cout << dizi[i] << ", ";
		}
	}
	for (int i = 0; i < 100; i++)
	{
		top += dizi[i];
	}
	cout << "Dizinizin elemanlari toplami: " << top;
	return 0;
}*/
/*
int faktoriyel(int x) {
	long long int f = 1;
	for (int i = 1; i <= x; i++)
	{
		f *= i;
	}
	return f;
}
int main() {
	double k;
	k = (static_cast<double>(faktoriyel(5)) * faktoriyel(7) * faktoriyel(10)) / ((2 - faktoriyel(4)) * (3 - faktoriyel(5)));
	cout << "'k' degeriniz: " << k;
	return 0;
}*/
/*
double fakt(int x) {
	double f = 1;
	for (int i = 1; i <= x; i++)
	{
		f *= i;
	}
	return f;
}
int main() {
	int n, x;
	cout << "Kac defa islem yappicaksiniz?\n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Faktoriyel almak istediginiz sayi: " << endl;
		cin >> x;
		cout << "Sonucunuz: " << fakt(x) << endl;
	}
	return 0;
}*/
/*
double fakt(int x) {
	double f = 1;
	for (int i = 1; i <= x; i++)
	{
		f *= i;
	}
	return f;
}

int main() {
	int dizi[2][3] = {  };
	int x = 2;
	for (int i = 0; i < 2; i++)
	{
		
		for (int j = 0; j < 3; j++) {
			
			dizi[i][j] = fakt(x);
			x += 2;
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << dizi[i][j] << " " ;
		}
		cout << endl;
	}
	return 0;
}*/
/*
void matristop(int dizi1[2][3], int dizi2[2][3],int dizi3[2][3]) {
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) {
			dizi3[i][j] = dizi1[i][j] + dizi2[i][j];
		}
	}
}
int main() {
	int t[2][3] = { {1,5,7},{2,6,8} };
	int u[2][3] = { {-1,3,5},{2,6,7} };
	int sonuc[2][3];
	matristop(t, u, sonuc);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << sonuc[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}*/
/*
int topl(int x[][3], int y) {
	int top = 0;
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < 3; j++) {
			top += x[i][j];
		}
	}
	return top;
}

int main() {
	int t[2][3] = { {1,2,3},{4,5,6} };
	int u[2][3] = { {4,5,6},{7,8,9} };
	cout << "t matrisimin elemanlar toplami: " << topl(t, 2) << endl;
	cout << "u matrisimin elemanlar toplami: " << topl(u, 2) << endl;

	return 0;
}*/
/*
int main() {
	int t[3][3] = { {5,3,2},{2,4,6},{1,5,8} };
	int carp = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			carp *= t[i][j];
		}
		cout << i << ". satir elemanlari carpimi: " << carp << endl;
		carp = 1;
	}
	return 0;
}*/
/*
int main() {
	int x = 37, * p;
	p = &x;
	cout << *p;

	return 0;
}*/
/*
int main() {
	int girilicekSayi;
	cout << "Kac sayi girilicek: ";
	cin >> girilicekSayi;
	int *p = new int[girilicekSayi];
	for (int i = 0; i <girilicekSayi ; i++)
	{
		cout << "Sayi giriniz: ";
		cin >> p[i];
		if (p[i]%2==0)
		{
			cout << p[i] << "sayisi cift!" << endl;
		}
		else
		{
			cout << p[i] << "sayisi tek!" << endl;
		}
	}
	cout << "Simdiye kadar girilen sayilar:\n{ ";
	for (int j = 0; j < girilicekSayi; j++)
	{
		if (j==girilicekSayi-1)
		{
			cout << p[j] << " }";
		}
		else
		{
			cout << p[j] << ", ";
		}
	}
	return 0;
}*/
/*
int main() {
	setlocale(LC_ALL, "Turkish");
	cout << " Ebob hesaplama programina hosgeldiniz" << endl;
	int a, b, ebob;
	cout << " Ebobunu hesaplamak istedi�iniz 1. sayiyi giriniz = ";
	cin >> a;
	cout << " Ebobunu hesaplamak istedi�iniz 2. sayiyi giriniz = ";
	cin >> b;
	if (a < b)
	{
		for (int i = 1; i <= b; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				ebob = i;

			}
		}
	}
	else if (b < a)
	{
		for (int i = 1; i <= a; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				ebob = i;
			}
		}
	}
	cout << "ebob = " << ebob;

	return 0;
}*/
/*
int main() {
	int i = 0;
	for  (;;)
	{
		cout << i << " ";
		i++;
	}
}*/
