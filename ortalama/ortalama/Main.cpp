#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cmath>
#include <string.h>
#include <chrono>


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
	cout << "faiz yüzdesini giriniz";
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
	cout << "Toplamınız: " << a << endl;
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
	cout << "Sayi giriniz: ";
	cin >> c;
	while (c<=0)
	{
		b = b + c;
		a += 1;
	}
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
	cout << "Dairenin yari çapini giriniz: ";
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

	int dizi[2][3] = { {21, 34, 42},        // dizi[satır sayısı][satırdaki içerik sayısı]
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
	int x= 1033, xx, t, m, r,u,ı,o;
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
				cin >> r >> u >> ı >> o;
				int enbuyuk = r;
				if (u>enbuyuk)
				{
					enbuyuk = u;
				}
				if (ı>enbuyuk)
				{
					enbuyuk = ı;
				}
				if (o>enbuyuk)
				{
					enbuyuk = o;
				}
				cout << "En buyuk sayi: " << enbuyuk;
				break;
			case 2:
				cout << "4 sayi giriniz: ";
				cin >> r >> u >> ı >> o;
				int enkucuk = r;
				if (u < enkucuk)
				{
					enkucuk = u;
				}
				if (ı < enkucuk)
				{
					enkucuk = ı;
				}
				if (o < enkucuk)
				{
					enkucuk = o;
				}
				cout << "En kucuk sayi: " << enkucuk;
				break;

			case 3:
				cout << "EBOB'u alinicak sayiyilari giriniz: ";
				cin >> r >> u >> ı >> o;
				int ebob1 = findGCD(r, u);
				int ebob2 = findGCD(ebob1, ı);
				int ebob3 = findGCD(ebob2, o);
				cout << "EBOB = " << ebob3;
				break;

			case 4:
				cout << "EKOK'u alinicak sayiyilari giriniz: ";
				cin >> r >> u >> ı >> o;
				int gcd1 = findGCD(r, u);
				int gcd2 = findGCD(ı, o);
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
					int r, u, ı, o;
					cin >> r >> u >> ı >> o;

					int enbuyuk = r;
					if (u > enbuyuk) enbuyuk = u;
					if (ı > enbuyuk) enbuyuk = ı;
					if (o > enbuyuk) enbuyuk = o;

					cout << "En buyuk sayi: " << enbuyuk << endl;
					break;
				}

				case 2: {
					cout << "4 sayi giriniz: ";
					int r, u, ı, o;
					cin >> r >> u >> ı >> o;

					int enkucuk = r;
					if (u < enkucuk) enkucuk = u;
					if (ı < enkucuk) enkucuk = ı;
					if (o < enkucuk) enkucuk = o;

					cout << "En kucuk sayi: " << enkucuk << endl;
					break;
				}

				case 3: {
					cout << "EBOB'u alinicak sayiyilari giriniz: ";
					int r, u, ı, o;
					cin >> r >> u >> ı >> o;

					int ebob1 = findGCD(r, u);
					int ebob2 = findGCD(ebob1, ı);
					int ebob3 = findGCD(ebob2, o);

					cout << "EBOB = " << ebob3 << endl;
					break;
				}

				case 4: {
					cout << "EKOK'u alinicak sayiyilari giriniz: ";
					int r, u, ı, o;
					cin >> r >> u >> ı >> o;

					int gcd1 = findGCD(r, u);
					int gcd2 = findGCD(ı, o);
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
	// a
	int estop = 0, dkçarp = 1;
	for (int i = 0; i < 4; i++)
	{
		estop += a[i][i];
	}
	cout << "a matrisinin esas kosegen elemanlari toplami: " << estop << endl;
	// b
	for (int j = 0; j < 4; j++)
	{
		dkçarp *= a[3-j][j];
	}
	cout << "a matrisinin diger kosegen elemanlari carpimi: " << dkçarp << endl;
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
	cout << " Ebobunu hesaplamak istedi iniz 1. sayiyi giriniz = ";
	cin >> a;
	cout << " Ebobunu hesaplamak istedi iniz 2. sayiyi giriniz = ";
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
/*
int main() {
	float vizeNot, finalNot, ort;
	cout << "Vize notunuzu giriniz: ";
	cin >> vizeNot;
	cout << "Final notunuzu giriniz: ";
	cin >> finalNot;
	ort = (vizeNot * 0.4) + (finalNot * 0.6);
	if (finalNot<60)
	{
		cout << "Sinifta kaldiniz!!!";
	}
	if (ort>=60 && finalNot>=60)
	{
		cout << "Sinifi gectiniz!!!";
	}

	return 0;
}*/
/*
int main(){
	int sayi, sonuc;
	cout << "Birden kaca kadar toplansin: ";
	cin >> sayi;
	sonuc = (sayi * (sayi + 1)) / 2;
	cout << "Sonucunuz: " << sonuc;
	return 0;
}*/
/*
int main() {
	double x;
	cout << "Karekok'u hesaplanacak sayi: ";
	cin >> x;
	cout << "Cevap: " << sqrt(x);
	return 0;
}*/
/*
int dortgenAlan(int x, int y) {
	int alan = x * y;
	return alan;
}
int dortgenCevre(int x, int y) {
	int cevre = (x + y) * 2;
	return cevre;
}
int main() {
	int a, b;
	cout << "Dikdortgenin kenarlarini giriniz: ";
	cin >> a >> b;
	cout << "Dikdortgenin alani " << dortgenAlan(a, b) << "\nDikdortgenin cevresi " << dortgenCevre(a, b);
}*/
/*
int main() {
	int x;
	cout << "Kac sayi girilicek: ";
	cin >> x;
	int* dizi = new int[x];
	int* dizicift = new int[x];
	int* dizitek = new int[x];
	for (int i = 0; i < x; i++)
	{
		cout << "Dizinin " << i << ". elemanini giriniz: ";
		cin >> dizi[i];
	}
	for (int i = 0; i < x; i++)
	{
		if (dizi[i] % 2 == 0) {
			cout << "Dizinin " << i << ". elemani cift sayi" << endl;
			int j = 0;
			dizicift[j] = dizi[i];
			j++;
		}
		else
		{
			cout << "Dizinin " << i << ". elemani tek sayi" << endl;
			int k = 0;
			dizicift[k] = dizi[i];
			k++;
		}
	}
}*/
/*
int main() {
	double a = 1, b = 1, c;
	cout << "Fibonacci dizisinin ilk 50 elemani soyledir: \n";
	cout << a << " " << b << " ";
	for (int i = 0; i < 48; i++)
	{
		c = a + b;
		a = b;
		b = c;
		cout << c << " ";
	}
	return 0;
}*/
/*
int main() {
	int dizi[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int top = 0, carp = 1;
	for (int i = 0; i < 3; i++)
	{
		top += dizi[i][i];
		carp *= dizi[2 - i][i];
	}
	cout << "Esas kosegen toplami: " << top << endl;
	cout << "Diger kosegen carpimi: " << carp << endl;
	return 0;
}*/
/*
//1.sinav sorusu;
int main() {
	int t[2][3] = { {2,5,7},{12,6,4} };
	float top = 0, ort;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) {
			top += t[i][j];
		}
	}
	ort = top / 6.0;
	cout << ort;
	return 0;
}*/
/*
// 2. sinav sorusu;
int main() {
	float a, b, c, d, e, x;
	cout << "x= " << endl;
	cin >> x;
	a = pow(x, 3) + 1;
	b = pow(1 + 1.0 / a, 1.0 / 5);
	c = sin(x * x + 1);
	d = log(x * x + 1);
	e = b / c * c + d;
	cout << e << endl;
	return 0;
}*
/*
int main() {
	double a, b, c, d, x, y;
	cout << "x = " << endl;
	cin >> x;
	a = pow(x + 1, 1.0 / 4);
	b = pow(2 + 1 / a, 1.0 / 4);
	c = log(x * x + 1);
	d = pow(x + 2, 1.0 / 5);
	y = b / (c - d);
	cout << y << endl;
	return 0;
}*/

/*
//c)
int main() {
	int top = 0;
	for (int i = 1; i <= 21; i+=2)
	{
		top += pow(i, 3);
	}
	cout << "Toplaminiz: " << top;
	return 0;
}*/
/*
//b)
int main() {
	int top = 0, sayac = 1;
	while (sayac<=21)
	{
		top += pow(sayac, 3);
		sayac += 2;
	}
	cout << "Toplaminiz: " << top;
	return 0;
}*/
/*
//a)
int main() {
	int top = 0, x = 1;
	a:
	if (x<=21)
	{
		top += pow(x, 3);
		x += 2;
		goto a;
	}

	cout << "Toplaminiz: " << top;
	return 0;
}*/
/*
int main() {
	int t[2][3] = { {37,46,3},{53,9,41} };
	int enbuyuk, enkucuk;
	enbuyuk = t[0][0];
	enkucuk = t[0][0];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) {
			if (enbuyuk<t[i][j])
			{
				enbuyuk = t[i][j];
			}
			if (enkucuk>t[i][j])
			{
				enkucuk = t[i][j];
			}
		}
	}
	cout << "t matrisinin en buyuk elemani " << enbuyuk << endl;
	cout << "t matrisinin en kucuk elemani " << enkucuk << endl;
	return 0;
}*/
/*
//En kucuk 2. elemani bulma;
int main() {
	int t[2][4] = { {46,3,5,8},{17,6,77,9} };
	int enKucuk = t[0][0], enKucuk2 = t[0][0];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) {
			if (enKucuk>t[i][j])
			{
				enKucuk2 = enKucuk;
				enKucuk = t[i][j];
			}
			else if (enKucuk2 > t[i][j] && t[i][j] != enKucuk) {
				enKucuk2 = t[i][j];
			}
		}
	}
	cout << "Matrisin en kucuk elemani: " << enKucuk << endl;
	cout << "Matrisin en kucuk 2. elamani: " << enKucuk2 << endl;
	return 0;
}*/
/*
//2! 4! 6! .... 16! diye giden 2x4 matrisi otomatik yazdırma;
double fakt(double x) {
	double f = 1;
	for (int i = 1;  i <= x;  i++)
	{
		f *= i;
	}
	return f;
}

int main() {
	double t[2][4], x = 2;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++) {
			t[i][j] = fakt(x);
			x += 2;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++) {
			if (i==0 && j==0)
			{
				cout << "t diziniz:\nt={ " << t[i][j];
			}
			else if (i==1 && j==3)
			{
				cout << " " << t[i][j] << " }";
			}
			else
			{
			cout << " " << t[i][j];
			}

		}
		cout << endl;
	}
	return 0;
}*/
/*
//1>5,1>7,1>9...1>15 toplamlarinin eleman oldugu matris;
int main() {
	double t[2][3], x = 5;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) {
			int top = 0;
			for (int k = 1; k <= x; k++)
			{
				top += k;
			}
			t[i][j] = top;
			x += 2;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) {
			if (i == 0 && j == 0)
			{
				cout << "t diziniz:\nt={ " << t[i][j];
			}
			else if (i == 1 && j == 2)
			{
				cout << " " << t[i][j] << " }";
			}
			else
			{
				cout << " " << t[i][j];
			}

		}
		cout << endl << "   ";
	}
}*/

/*
int main() {
	int t[2][4] = { { 5,3,2,7 }, {12,6,5,4} };
	int satir, sutun, enKucuk = t[0][0];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) {
			if (enKucuk>t[i][j])
			{
				enKucuk = t[i][j];
				satir = i, sutun = j;
			}
		}
	}
	cout << "En kucuk sayi " << enKucuk << endl;
	enKucuk = t[0][0];
	t[satir][sutun] = 100000;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) {
			if (enKucuk > t[i][j])
			{
				enKucuk = t[i][j];
			}
		}
	}
	cout << "En kucuk 2. sayi " << enKucuk << endl;
	return 0;
}*/
/*
int main() {
	int matris[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			matris[i][j]=i+j;
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			cout << matris[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}*/
/*
double kupHesap(double x) {
	return(pow(x,3));
}
void kup() {
	double sayi, sonuc;
	cin >> sayi;
	sonuc = pow(sayi, 3);
	cout << sayi << " sayisinin kupu: " << sonuc << endl;
}

double kupHesap2() {
	int x;
	cout << "Sayi giriniz: ";
	cin >> x;
	return(pow(x, 3)) ;
}

int main() {
	
	cout << kupHesap(x) << endl;

	kup();

	return 0;
}*/
/*
double kare(int x) {
	double sonuc;
	sonuc = pow(x, 2);
	return sonuc;
}
double kup(int x) {
	double sonuc;
	sonuc = pow(x, 3);
	return sonuc;
}

int main() {
	int sayi;
	cout << "Sayi giriniz: ";
	cin >> sayi;
	if (sayi % 2 == 0)
		cout << kare(sayi);
	else
		cout << kup(sayi);

	return 0;
}*/
/*
double top(int x, int y) {
	double sonuc;
	sonuc = x + y;
	return sonuc;
}

double cikar(int x, int y) {
	double sonuc;
	sonuc = x - y;
	return sonuc;
}

double carp(int x, int y) {
	double sonuc;
	sonuc = x * y;
	return sonuc;
}

double bol(int x, int y) {
	double sonuc;
	sonuc = x / y;
	return sonuc;
}

int main() {
	int sayi1, sayi2, secim;
	cout << "Sayi 1 ve sayi 2 yi giriniz: ";
	cin >> sayi1 >> sayi2;
	cout << "Yapmak istediginiz islemin numarasini giriniz.\n1)+\n2-)-\n3-)*\n4-)/" << endl;
	cin >> secim;
	switch (secim)
	{
	case(1):
		cout << top(sayi1, sayi2) << endl;
		break;
	case(2):
		cout << cikar(sayi1, sayi2) << endl;
		break;
	case(3):
		cout << carp(sayi1, sayi2) << endl;
		break;
	case(4):
		cout << bol(sayi1, sayi2) << endl;
		break;
	default:
		break;
	}
}*/

/*
void fibonacciSeri() {
	double fibonacciSer, z=0, y=1,sayi;
	cout << "Sayi giriniz: ";
	cin >> sayi;
	cout << z << endl << y << endl;

	for (int i = 0; i < sayi-2; i++)
	{
		fibonacciSer = z + y;
		z = y;
		y = fibonacciSer;
		cout << fibonacciSer << endl;
	}
}

void fibonacci() {
	double fibonacciSer, z = 0, y = 1, sayi;
	cout << "Sayi giriniz: ";
	cin >> sayi;
	for (int i = 2; i < sayi; i++)
	{
		fibonacciSer = z + y;
		z = y;
		y = fibonacciSer;
	}
	cout << fibonacciSer << endl;
}

void faktoriyel() {
	double fakt = 1, sayi; 
	cout << "Sayi giriniz: ";
	cin >> sayi;
	for (int i = 1; i <= sayi; i++)
	{
		fakt *= i;
	}
	cout << "Faktoriyeliniz: " << fakt << endl;
	return ;
}

int main() {
	int sayi, secim;
	a:
	cout << "Yapmak istediginiz islemi secin:\n1-)Fibonacci dizisini yazdirma.\n2-) Fibonacci dizisinin elemanini yazdima.\n3-) Faktoriyel alma." << endl;
	cin >> secim;
	if (secim==1)
	{
		fibonacciSeri();
	}
	else if(secim==2)
	{
		fibonacci();
	}
	else if (secim==3)
	{
		faktoriyel();
	}
	else
	{
		cout << "Yanlis secim yaptiniz!!!";
		goto a;
	}
	return 0;
}*/
/*
int main() {
	int a[] = { 5,4,3,2,1 };
	for (int i = 0; i < 5; i++)
	{
		cout << *(a + i) << " ";
	}
	return 0;
}*/
/*
double fakt(double x) {
	double fakt0 = 1;
	double faktx;
	if (x>=1)
	{
		faktx = fakt(x - 1) * x;
		return faktx;
	}
	
}

int main() {
	int x;
	cout << "x giriniz: ";
	cin >> x;
	cout << fakt(x);
}*/
/*
int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int n;
	cout << "Fibonacci dizisinin terimini giriniz: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << fibonacci(i) << " ";
	}
	return 0;
}*/
/*
double usAlma(int x) {
	if (x>=1)
	{
		return x * usAlma(x--);

	}
	else if (x==0)
	{
		return 1;
	}
}

int main() {
	int x = 5, y = 3;
	cout << usAlma(5);
	return 0;
}*/
/*
double faktoriyel(double x) {
	if (x == 0 || x == 1) {
		return 1;
	}
	else {
		double f = x * faktoriyel(x-1);
		return f;
	}
}
int main() {
	double sayi;
	cout << "Faktoriyelini hesaplamak istediginiz sayiyi girin: ";
	cin >> sayi;
	cout << sayi << "! = " << faktoriyel(sayi) << endl;
	return 0;
}*/
/*
int main() {
	double a, b, c, d, e, x;
	cout << "x giriniz: ";
	cin >> x;
	a = pow(sin(x * x * x + 1),2);
	b = log(x);
	c = pow(cos(b + 1),2);
	d = pow(x + 2, 1 / 3);
	e = pow((x + d), 1 / 5);
	cout << "Sonucunuz: " << (a - b) / e << endl;
	return 0;
}*/
/*
int main() {
	int t[3][4] = { {1,5,6,8},{4,12,3,18},{16,9,7,2} };
	int a[7], b[5], sayaca = 0, sayacb = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++) {
			if (t[i][j]%2==0)
			{
				a[sayaca] = t[i][j];
				sayaca++;
			}
			else
			{
				b[sayacb] = t[i][j];
				sayacb++;
			}
		}
	}
	cout << "Cift sayilar: " << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl << "Tek sayilar: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << b[i] << " ";
	}
}*/
/*
int main() {
	double top = 0, p=1;
	for (int i = 5; i <= 35; i=i+3)
	{
		top +=p* pow(i, 3);
		p *= -1;
	}
	cout << top << endl;
}*/
//odevler
/*
//sirali arama programi
int main() {
	int dizi[100], aranacakSayi, kez = 0, devam;
	srand(time(0));
	for (int i = 0; i < 100; i++)
	{
		dizi[i] = rand() % 100;
	}
	do
	{
	cout << "Aramak istediginiz sayiyi giriniz: ";
	cin >> aranacakSayi;
	for (int i = 0; i < 100; i++)
	{
		if (dizi[i] == aranacakSayi) {
			cout << "Aradiginiz sayi " << kez+1 << ". kez dizinin " << i << " numarali elemaninda bulunur." << endl;
			kez++;
		}
	}
	if (kez==0)
	{
		cout << "Aradiginiz sayi bulunamadi!!" << endl;
	}
	cout << "Denemeye devam etmek ister misiniz?\n1-) Devam\n2-) Cikis" << endl;
	cin >> devam;
	kez = 0;
	} while (devam == 1);
	
	return 0;
}*/
/*
//ikili(binary) arama
int ikiliArama(int dizi[], int uzunluk, int aranan) {
	int mid, min = 0, max;
	max = uzunluk - 1;
	while (uzunluk>0)
	{
		mid = min + (max - min) / 2;
		if (dizi[mid] == aranan)
		{
			return mid;
		}
		else if (dizi[mid]< aranan)
		{
			min = mid + 1;

		}
		else
		{
			max = mid - 1;
		}

	}
	return -1;
}

int main() {
	int dizi[100], aranan, index;
	for (int i = 0; i < 100; i++)
	{
		dizi[i] = i + 1;
	}
	cout << "Aramak istediginiz sayiyi giriniz: ";
	cin >> aranan;
	index = ikiliArama(dizi, 100, aranan);
	if (index!=-1)
	{
		cout << "Aradiginiz sayi " << index << " numarili sirada." << endl;
	}
	else
	{
		cout << "Aradiginiz sayi bulunamadi." << endl;
	}
	return 0;
}*/
/*
// Fibonacci search
int fibonacciSearch(int dizi[], int size, int x) {
	int fibM2 = 0;
	int fibM1 = 1;
	int fibNum = fibM2 + fibM1;

	while (fibNum < size) {
		fibM2 = fibM1;
		fibM1 = fibNum;
		fibNum = fibM1 + fibM2;
	}

	int offset = -1;

	while (fibNum > 1) {
		int i = min(offset + fibM2, size - 1);

	
		if (dizi[i] > x) {
			fibNum = fibM2;
			fibM1 = fibM1 - fibM2;
			fibM2 = fibNum - fibM1;
		}

	
		else if (dizi[i] < x) {
			fibNum = fibM1;
			fibM1 = fibM2;
			fibM2 = fibNum - fibM1;
			offset = i;
		}
		else return i;
	}

	if (fibM1 && dizi[offset + 1] == x)
		return offset + 1;
	return -1;
}

int main() {
	int dizi[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof(dizi) / sizeof(dizi[0]);
	int x;
	cout << "Aradiginiz sayiyi giriniz: ";
	cin >> x;

	int result = fibonacciSearch(dizi, size, x);

	if (result != -1) {
		cout << "Eleman bulundu indeks: " << result << endl;
	} else {
		cout << "Eleman bulunamadi." << endl;
	}

	return 0;
}*/
/*
bool cullenKontrol(double sayi) {
	for (int i = 0; i <99; i++)
	{
		if ((pow(2,i) * i + 1) == sayi)
		{
			return 1;
		}
	}
	return 0;
}

int main() {
	double girilenSayi;
	int tekrar;
	do
	{
		cout << "Cullen sayi kontrolu yapmak istediginiz sayiyi giriniz:";
		cin >> girilenSayi;
		if (cullenKontrol(girilenSayi))
		{
			cout << "Sayiniz cullen sayi.\n\n";
		}
		else
		{
			cout << "Sayiniz cullen sayi degil!!!\n\n";
		}
		cout << "Tekrar denemek icin 1 tuslayiniz. \n\n";
		cin >> tekrar;
	} while (tekrar);

	return 0;
}*/

/*
int main() {
	int sayi, sayilar[5] = { 42,15,3,16,9 };
	/////
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i - 1; j++)
		{
			if (sayilar[j] > sayilar[j + 1]) {
				sayi = sayilar[j];
				sayilar[j] = sayilar[j + 1];
				sayilar[j + 1] = sayi;
			}
		}
	}
	/////
	for (int i = 0; i <= 4; i++)
	{
		for (int j = i + 1; j < 5; j++) {
			if (sayilar[i] > sayilar[j]) {
				sayi = sayilar[i];
				sayilar[i] = sayilar[j];
				sayilar[j] = sayi;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << sayilar[i] << " ";
	}
	return 0;
}*/
/*
int main() {
	int sayilar[11]  = { 22,3,9,42,5,4,6,17,19,8,21 };
	int tek[6], cift[5], sayi, sayaccift = 4, sayactek = 0;

	for (int i = 0; i <= 10; i++)
	{
		for (int j = i + 1; j < 11; j++) {
			if (sayilar[i] > sayilar[j]) {
				sayi = sayilar[i];
				sayilar[i] = sayilar[j];
				sayilar[j] = sayi;
			}
		}
	}
	

	for (int i = 0; i <= 10; i++)
	{
		if (sayilar[i]%2==0)
		{
			cift[sayaccift] = sayilar[i];
			sayaccift--;
		}
		else
		{
			tek[sayactek] = sayilar[i];
			sayactek++;
		}
	}
	for (int a = 0; a < 11; a++)
	{
		cout << sayilar[a] << " ";
	}
	cout << endl << endl;
	for (int a = 4; a >= 0; a--)
	{
		cout << cift[a] << " ";
	}
	cout << endl << endl;

	for (int a = 0; a < 6; a++)
	{
		cout << tek[a] << " ";
	}
	cout << endl << endl;

	return 0;
}*/
/*
int main()
{
	int matris[2][5] = { {-5,2,6,-4,3},{-1,12,-8,6,-3} };
	int negatif[5], sayac = 0, sayi;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++) {
			if (matris[i][j]<0)
			{
				negatif[sayac] = matris[i][j];
				sayac++;
			}
		}
	}
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i - 1; j++) {
			if (negatif[j]>negatif[j+1])
			{
				sayi = negatif[j];
				negatif[j] = negatif[j + 1];
				negatif[j + 1] = sayi;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << negatif[i] << " ";
	}

	return 0;
}*/
/*
void diziSirala(int dizi[], int uzunluk) {
	int sayi;
	for (int i = 0; i <= uzunluk-2; i++)
	{
		for (int j = i+1; j <= uzunluk-1; j++) {
			if (dizi[i] > dizi[j])
			{
				sayi = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = sayi;
			}
		}
	}
	for (int i = 0; i < uzunluk; i++)
	{
		cout << dizi[i] << " ";
	}
}

int main() {
	int a[6] = { 5,2,7,16,1,-3 };
	int b[6] = { 21,8,17,9,2,4 };
	int c[4] = { 211,22,5,61 };
	diziSirala(a, 6);
	cout << endl << endl;
	diziSirala(b, 6);
	cout << endl << endl;
	diziSirala(c, 4);
	cout << endl << endl;
	return 0;
}*/
/*
int main() {
	int a = 5, * ptr;
	ptr = &a;
	cout << "*ptr = " << *ptr << endl;
	cout << "ptr = " << ptr << endl;
	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	cout << "*&a = " << *&a << endl;

	return 0;
}*/
/*
int main() {
	int arr[5] = { 9,7,1,3,5 };
	cout << "0. elemanin adresi : " << &arr[0] << endl;
	char dizi[6] = { 'y','u','s','u','f', '\0' };
	cout << dizi << endl;
	char str[10];
	cout << "Bir sey giriniz: ";
	cin.get (str,100);
	cout << "Sunu girdiniz: " << str;
	return 0;
}*/
/*
bool sifreKontrol(char sifre[], char girilenSifre[]) {
	for (int i = 0; i < 6; i++)
	{
		if (sifre[i] != girilenSifre[i]) {
			return 1;
			break;
		}
		if (i==5)
		{
			return 0;
		}
	}
}


int main() {
	char sifre[6] = { 'y','u','s','u','f','\0'};
	char girilenSifre[6];
	do {
		cout << "Sifre giriniz: ";
		cin >> girilenSifre;
	} while (sifreKontrol(sifre, girilenSifre));
	cout << "Merhaba!!" << endl;
	char tanitim[500];
	cout << "Kendinizi tanitiniz:\n(500 karakter siniri var)\n";
	cin.ignore();
	cin.get(tanitim, 500);
	cout << "Seni tanidim. Sen " << tanitim << endl;
	cout << "Gorusuruz!!";
	return 0;
}*/

/*
// odev 1  bubble sort
// dizinin eleman sayisi 50 100 150 yapilarak sure olcumu tekrarlanmıstir
// sonuclar  13 ms  18 ms   69 ms
int main() {
	chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	int sayilar[50], sayi;
	srand(time(0));
	for (int i = 0; i < 50; i++)
	{
		sayilar[i] = rand() % 50;
	}
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50 - i - 1; j++)
		{
			if (sayilar[j] > sayilar[j + 1]) {
				sayi = sayilar[j];
				sayilar[j] = sayilar[j + 1];
				sayilar[j + 1] = sayi;
			}
		}
	}
	for (int i = 0; i < 50; i++)
	{
		cout << sayilar[i] << " ";
	}
	cout << endl << endl;

	chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	cout << "Time difference = "<< chrono::duration_cast<std::chrono::milliseconds>(end - begin).count()<< "[ms]" << endl;

	cout << endl << endl;
	cout << endl << endl;
	return 0;
}*/
/*
// odev 2  selection sort
// dizinin eleman sayisi 50 100 150 yapilarak sure olcumu tekrarlanmıstir
// sonuclar  10 ms   21 ms    43 ms
int main() {
	chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	int sayilar[50], sayi;
	srand(time(0));
	for (int i = 0; i < 50; i++)
	{
		sayilar[i] = rand() % 50;
	}
	for (int i = 0; i < 49; i++)
	{
		for (int j = i + 1; j < 50; j++) {
			if (sayilar[i] > sayilar[j]) {
				sayi = sayilar[i];
				sayilar[i] = sayilar[j];
				sayilar[j] = sayi;
			}
		}
	}
	for (int i = 0; i < 50; i++)
	{
		cout << sayilar[i] << " ";
	}
	cout << endl << endl;

	chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	cout << "Time difference = "<< chrono::duration_cast<std::chrono::milliseconds>(end - begin).count()<< "[ms]" << endl;

	cout << endl << endl;
	cout << endl << endl;
	return 0;
}*/

/*
int main() {
	int t[3][3] = { {2,17,9},{11,82,5},{3,6,8} }, a[9], sayi, sayac = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			a[sayac] = t[i][j];
			sayac++;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++) {
			if (a[i] > a[j]) {
				sayi = a[i];
				a[i] = a[j];
				a[j] = sayi;
			}
		}
	}
	sayac = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			t[i][j] = a[sayac];
			cout << t[i][j] << " ";
			sayac++;
		}
		cout << endl;
	}
	return 0;
}*/
/*
double f(double x) {
	double y = pow(x, 3) -3*x + 2;
	return y;
}

double df(double x) {
	double y = 3*pow(x, 2) - 3;
	return y;
}

double algoritma(double x0, int iterasyon) {
	double x = x0;
	for (int i = 0; i < iterasyon; ++i)
	{
		x = x - f(x) / df(x);
	}
	return x;
}


int main() {
	double x, iterasyon;
	cout << "x ve iterasyon sayilarini giriniz:";
	cin >> x >> iterasyon;
	cout << "Cevabiniz: " << algoritma(x, iterasyon);

	return 0;
}*/
//
/*
void kokDurumu(int dizi[3][3]) {
	double kokDurum, x1, x2;
	for (int i = 0; i < 3; i++)
	{
		kokDurum = dizi[i][1] * dizi[i][1] - 4 * dizi[i][0] * dizi[i][2];
		if (kokDurum>0)
		{
			x1 = (-dizi[i][1] - sqrt(kokDurum)) / 2 * dizi[i][0];
			x2 = (-dizi[i][1] + sqrt(kokDurum)) / 2 * dizi[i][0];
			cout << i+1 << ". Denklemin 2 gercek koku var. Kokler sirayla: " << x1 << ", " << x2 << endl;
		}
		else if (kokDurum==0)
		{
			x1 = (-dizi[i][1] - sqrt(kokDurum)) / 2 * dizi[i][0];
			cout << i + 1 << ". Denklemin 2 birbirine esit gercek koku var ve koku: " << x1 << endl;
		}
		else
		{
			cout << i+1 << ". Denklemin gercek koku yoktur." << endl;
		}
	}
}

int main() {
	int t[3][3] = { {2,1,2},{1,-5,6},{1,2,1} };
	kokDurumu(t);


	return 0;
}*/
//
/*
void bubbleSort(int dizi[], int n) {
	int sayi;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (dizi[j] > dizi[j + 1]) {
				sayi = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = sayi;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (i==9)
		{
			cout << dizi[i] << endl;
		}
		else
		{
			cout << dizi[i] << ", ";
		}
	}
}

int main() {
	int rakamlar[10] = { 9, 2, 7, 1, 5, 6, 3, 8, 4, 0 };
	bubbleSort(rakamlar, 10);
	return 0;
}
*/
/*
void sifreOlusturucu(string kelime, int shift) {
	for (int i = 0; i < kelime.length(); i++)
	{
		kelime[i] = kelime[i] + shift;
	}
	cout << kelime << endl;
}

int main() {
	string kelime;
	int shift;
	cout << "Kelimenizi ve oteleme miktarini giriniz" << endl;
	cin >> kelime >> shift;
	sifreOlusturucu(kelime, shift);

	return 0;
}
*/
/*
int main() {
	// tarladaki mayinlari yerleştirir
	int tarla[10][10];
	srand(time(0)); 
	for (int i = 0; i < 10; i++)
	{
		int a = rand() % 10, b = rand() % 10;
		if (tarla[a][b] != 1) {
			tarla[a][b] = 1;
		}
		else // ayni yere 2 mayin yerleştirilirse 1 kere daha çalışmasini saglar
		{
			--i;
		}
	}
	// mayin olmayan yerlere 0 yerleştirir
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (tarla[i][j]!=1)
			{
				tarla[i][j] = 0;
			}
		}
	}
	int satir, sutun;
	// ekranda gozukecek * tarlasi olusturur
	char yildizDizi[10][10];
	for (int  i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) {
			yildizDizi[i][j] = '*';
		}
	}
	// * tarlasini yazdirir
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{

			cout << yildizDizi[i][j] << " ";

		}
		cout << endl;
	}
	int sayac = 0;
	do
	{

		cout << "Satir ve sutun numarasini giriniz:" << endl;
		cin >> satir >> sutun;
		while (satir < 0 || satir > 9 || sutun < 0 || sutun > 9)
		{
			cout << "Gecersiz satir ve sutun numarasini girdiniz tekrar giriniz:" << endl;
			cin >> satir >> sutun;
		}
		cout << endl;

		// girilen satir sutunda mayin olup olmadigini kontrol eder ve * tarlasindaki gerekli yerin degerini degiştirir
		if (tarla[satir][sutun] != 1)
		{
			yildizDizi[satir][sutun] = '0';
		}
		else
		{
			yildizDizi[satir][sutun] = '1';
		}
		// yeni * tarlasini yazdirir
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				
				cout << yildizDizi[i][j] << " ";

			}
			cout << endl;
		}
		cout << endl << endl;
		sayac++;
	} while (tarla[satir][sutun]==0);
	// mayina bastiktan sonra ekrana tarlayi yazdirir
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{

			cout << tarla[i][j] << " ";

		}
		cout << endl;
	}
	cout << "Mayina bastiniz. " << sayac - 1 << " tur hayatta kaldiniz." << endl;
	return 0;
}*/
/*
	 1
	1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
1 5 10 10 5 1

int main() {
	int satir;
	cout << "Satir sayisi giriniz:";
	cin >> satir;
	cout << "1" << endl;
	for (int i = 0; i < satir; i++)
	{

	}

	return 0;
}*/
/*
int main() {
	int satir, sutun;
	cout << "Matrisin satir ve sutun sayisiniz giriniz:";
	cin >> satir >> sutun;
	int** matris = new int*[satir];
	for (int i = 0; i < satir; i++) {
		matris[i] = new int[sutun];
	}
	
	srand(time(0));
	for (int i = 0; i < satir; i++)
	{
		for (int j = 0; j < sutun; j++) {
			matris[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < satir; i++)
	{ 
		for (int j = 0; j < sutun; j++) {
			cout << matris[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}*/
/*
int main() {
	int matris[5][5]{};
	int dizicift[25]{};
	int dizitek[25]{};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "Dizinin " << i << ". satir " << j <<  ". sutun elemanini giriniz : ";
			cin >> matris[i][j];
		}
		
	}
	int a = 0, b = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (matris[i][j] % 2 == 0) {

				dizicift[a] = matris[i][j];
				a++;
			}
			else
			{
				dizitek[b] = matris[i][j];
				b++;
			}
		}
	}
	int sayi;
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 25 - i - 1; j++)
		{
			if (dizicift[j] > dizicift[j + 1]) {
				sayi = dizicift[j];
				dizicift[j] = dizicift[j + 1];
				dizicift[j + 1] = sayi;
			}
		}
	}
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 25 - i - 1; j++)
		{ 
			if (dizitek[j] > dizitek[j + 1]) { 
				sayi = dizitek[j]; 
				dizitek[j] = dizitek[j + 1]; 
				dizitek[j + 1] = sayi;
			}
		}
	}
	cout << endl << endl;

	for (int i = 0; i < 25; i++)
	{
		if (dizitek!=0)
		{
			cout << dizitek[i] << " ";
		}
	}
	cout << endl << endl;
	for (int i = 0; i < 25; i++)
	{
		if (dizicift[i]!=0)
		{
			cout << dizicift[i] << " ";
		}
	}
	cout << endl;
	return 0;
}*/

/*
void sirala(int dizi[], int uzunluk) {
	int sayi;
	for (int i = 0; i <= uzunluk - 2; i++)
	{
		for (int j = i + 1; j <= uzunluk - 1; j++)
		{
			if (dizi[i]>dizi[j])
			{
				sayi = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = sayi;
			}
		}
	}
	for (int i = 0; i < uzunluk; i++)
	{
		cout << dizi[i] << " " << endl;
	}
	cout << endl << endl;
}

int main() {
	int dizi1[6] = { 5,2,7,16,1,-5 };
	int dizi2[6] = { 21,8,17,9,2,4 };
	int dizi3[4] = { 211, 22,5,61 };
	sirala(dizi1, 6);
	sirala(dizi2, 6);
	sirala(dizi3, 4);
	return 0;
}*/
/*
void sirala(int dizi[], int uzunluk) {
	int sayi;
	for (int i = 0; i <= uzunluk - 2 ; i++)
	{
		for (int j = i + 1; j <= uzunluk - 1; j++) {
			if (dizi[i]>dizi[j])
			{
				sayi = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = sayi;
			}
		}
	}
	for (int i = 0; i < uzunluk; i++)
	{
		cout << dizi[i] << " ";
	}
	cout << endl << endl;
}

int main() {
	int dizi[2][4] = { {3,6,8,9},{11,4,2,1} };
	int cift[4]{}, tek[4]{}, c = 0, t = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++) {
			if (dizi[i][j]%2==0)
			{
				cift[c] = dizi[i][j];
				c++;
			}
			else
			{
				tek[t] = dizi[i][j];
				t++;
			}
		}
	}
	sirala(cift, 4);
	sirala(tek, 4);
	return 0;
}*/
/*
int main()
{
	int  A[][4] = { {1,40,9,60},{5,14,45,621},{77,12,483,62} };
	int T[12], C[12], d = 0, k = 0;
	// tek çift ayırma 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (A[i][j] % 2 == 0)
			{
				C[d] = A[i][j];
				d++;
			}
			else
			{
				T[k] = A[i][j];
				k++;
			}
		}
	}
	//büyükten küçüge ve tersi sıralama
	for (int i = 0; i <= 10; i++)
	{
		for (int j = i+1; j <= 11; j++)
		{
			if (T[i] < T[j])
			{
				int a;
				a = T[i];
				T[i] = T[j];
				T[j] = a;
			}
		}
	}
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 1+i; j <= 11; j++)
		{
			if (C[i] > C[j])
			{
				int a;
				a = C[i];
				C[i] = C[j];
				C[j] = a;
			}
		}
	}

	for (int i = 0; i < 12; i++)
	{
		if (T[i]!='\0')
		{
			cout << T[i] << endl;
		}
	}
	cout << endl << endl << endl;
	for (int i = 0; i < 12; i++)
	{
		if (T[i] != '\0')
		{
			cout << C[i] << endl;
		}
	}
}
*/
/*
double f(double x) {
	return sin(x) * 2 + 5 * x * x - 10*x;
}
double fturev(double x){
	return 2 * cos(x) + 10 * x - 10;
}

int main() {
	double eps, x, x0;
	cout << "x giriniz:";
	cin >> x0;
	cout << endl << "epslon degeri giriniz: ";
	cin >> eps;
	
	while (fabs(f(x0)) > eps)
	{
		x = x0 - f(x0) / fturev(x0);
		x0 = x;
	}
	cout << "kok= " << x0;
	return 0;
}*/

// sin(x^2+1)-x^3 + ln(x^2+1)
/*
double f(double x) {
	return sin(pow(x, 2) + 1) - pow(x, 3) + log(pow(x, 2)+1);
}

double fturev(double x) {
	return cos(pow(x, 2) + 1) * 2 * x - 3 * x * x + (2 * x) / ((x * x) + 1);
}

int main() {
	double x, x0, eps;
	cout << "x degeri giriniz: ";
	cin >> x0;
	cout << "epsilon degeri giriniz: ";
	cin >> eps;
	while (fabs(f(x0))>eps)
	{
		x = x0 - (f(x0) / fturev(x0));
		x0 = x;
	}
	cout << "Kok = " << x0;
	return 0;
}*/
/*
double fakt(double x) {
	double f = 1;
	for (int  i = 0; i < x; i++)
	{
		f *= i;
	}
	return f;
}

int main() {
	double faktoriyel, sayi=2, result = 0;
	for (faktoriyel = 3; faktoriyel <= 23; faktoriyel+=2)
	{
		result += (fakt(faktoriyel) + sayi) / (sayi + 1);
		sayi++;
	}
	cout << "Sonuc = " << result << endl << endl;
	return 0;
}*/
/*
void sirala(int dizi[],int uzunluk) {
	int sayi;
	for (int  i = 0; i <= uzunluk -2; i++)
	{
		for (int j = i + 1; j <= uzunluk - 1; j++) {
			if (dizi[i]>dizi[j])
			{
				sayi = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = sayi;
			}
		}
	}
	for (int i = 0; i < uzunluk; i++)
	{
		cout << dizi[i] << " ";
	}
	cout << endl << endl;
}

int main() {
	int matris[3][4] = { {4,5,8,2},{26,58,3,1},{45,7,6,9} };
	int tek[6], cift[6], t = 0, c = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++) {
			if (matris[i][j]%2==0)
			{
				cift[c] = matris[i][j];
				c++;
			}
			else
			{
				tek[t] = matris[i][j];
				t++;
			}
		}
	}
	sirala(cift,6);
	sirala(tek, 6);
	return 0;

}*/
/*
int main() {
	double a,f, b, c, d, e, x, y;
	cout << "x degeri giriniz:";
	cin >> x;
	a = pow(5,x) - cos(sqrt(x));
	f = sqrt(a);
	b = pow(x, 6) * tan(x) * sqrt(2);
	e = pow(b, 1 / 5.0);
	c = 2 * cos(x);
	d = tan(pow(c, 1 / 5.0));
	y = (a + e) / d;
	cout << y << endl;
	return 0;
}*/
/*
int main() {
	int x,y;
	cin >> x;
	y = '@' + 10 + x;
	cout << y;
}*/
/*
void bksiralama(int dizi[], int uzunluk) {
	int sayi;
	for (int i = 0; i <= uzunluk -2 ; i++)
	{
		for (int j = i + 1; j <= uzunluk - 1; j++) {
			if (dizi[i]<dizi[j])
			{
				sayi = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = sayi;
			}
		}
	}
	for (int i = 0; i < uzunluk; i++)
	{
		cout << dizi[i] << " ";
	}
	cout << endl << endl;
}
void kbsiralama(int dizi[], int uzunluk) {
	int sayi;
	for (int i = 0; i <= uzunluk - 2; i++)
	{
		for (int j = i + 1; j <= uzunluk - 1; j++) {
			if (dizi[i] > dizi[j])
			{
				sayi = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = sayi;
			}
		}
	}
	for (int i = 0; i < uzunluk; i++)
	{
		cout << dizi[i] << " ";
	}
	cout << endl << endl;
}

int main() {
	int dizi[10] = { 5,4,9,6,2,1,7,3,8,10 };
	const int uzunluk = sizeof(dizi) / sizeof(int);
	int ilk[uzunluk /2], ikinci[uzunluk / 2], sayac = 0;
	for (int i = 0; i < uzunluk / 2; i++)
	{
		ilk[i] = dizi[sayac];
		ikinci[i] = dizi[sayac + 5];
		sayac++;
	}
	bksiralama(ilk, sayac);
	kbsiralama(ikinci, sayac);
	return 0;
}*/
