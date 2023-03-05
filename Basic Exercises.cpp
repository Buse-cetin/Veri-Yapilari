//201307037_Buse_Çetin


int main()
{
	// 1- Sýralý verilen iki diziyi birleþtiren program 

	int dizi_1[4]{ 1,3,4,5 };
	int dizi_2[4]{ 2,4,6,8 };

	int dizi_3[8];
	for (int i = 0; i < 4; i++)
	{
		dizi_3[i] = dizi_1[i];

	}
	for (int k = 0; k < 4; k++)
	{
		dizi_-3[k + 4] = dizi_2[k];
	}

	int temp;
	for (int m = 0; m < 7; m++)
	{

		for (int n = 0; n < 7; n++)
		{
			if (dizi_3[n] > dizi_3[n + 1]) {
				temp = dizi_3[n];
				dizi_3[n] = dizi_3[n + 1];
				dizi_3[n + 1] = temp;
			}
		}
	}
	cout << "Dizi :  ";
	for (int l = 0; l < 8; l++)
	{
		cout << dizi_3[l] << "\n";

	}

	//2- Sýralanmýþ bir diziden yinelenmiþ olan sayýlarý kaldýran program 

	int array[] = { 0,0,1,1,1,2,2,3,3,4 };


	int identical_nums[10];
	int num_identical = 0;

	for (int i = 0; i < 10; i++) {
		for (int m = i + 1; m < 10; m++) {
			if (array[i] == array[m]) {
				identical_nums[num_identical] = array[i + 1];
				num_identical++;
				i = i + 2;

			}
		}
	}

	cout << "Ayný numaralar bulundu: ";
	for (int i = 0; i < num_identical; i++) {
		cout << identical_nums[i] << "\n ";
	}



	//3-  Klavyeden -1 giriline kadar, girilen sayýlarýn ortalamalarýný gösteren program

	int tane = 0, sayi = 0, toplam = 0;
	float sonuc = 0;


	cout << "Lütfen sayýlarý giriniz: ";
	while (sayi != -1)
	{
		cin >> sayi;
		tane++;
		toplam = toplam + sayi;

	}
	toplam++;
	tane--;
	sonuc = toplam / tane;
	cout << "Sayý adedi :" << tane << "\n";
	cout << "Sayýlarýn ortalamasý: " << sonuc << "\n";

	//Fonksiyon kullanarak Vize ve Final notu girilen öðrencinin ortalamasýný hesaplama

	int vizeN, finalN;


	cout << "Vize notunuzu giriniz: " << "\n";
	cin >> vizeN;


	cout << "Final notunuzu giriniz: " << "\n";
	cin >> finalN;

	cout << "Ortalamanýz: " << hesapla(vizeN, finalN);
}

int hesapla(int x, int y) {
	float sonuc;
	float vizehesap = (x * 40) / 100;
	float finalhesap = (y * 60) / 100;
	sonuc = vizehesap + finalhesap;
	return sonuc;

}
