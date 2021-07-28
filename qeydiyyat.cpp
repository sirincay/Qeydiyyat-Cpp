//   Author - t.me/HusnuEhedov 

#include <iostream>  //Kitabxana, komponent, müeyyen bir menbe saxlayir
#include <conio.h>   // getch(); bu kitabxanada aktifdir
using namespace std;

class Qeydiyyat{         //Açar Söz
	public:
		string ad,kod;   // String Adlarý Teyin Edirik
};

class Giris {           //Açar Söz
	public:
		string ad,kod;   // String Adlarý Teyin Edirik
};

int main(){
	Qeydiyyat yeniAdam;     // YeniAdam-Qeydiyyatda "ad" stringi ucun funksiya 
	
	cout << "Qeydiyyat\n";
	cout << "Adinizi Yazin:\n";	cin >> yeniAdam.ad;
	cout << "\nIndi ise kodu daxil edin:\n"; cin >> yeniAdam.kod;
	
	Giris yeniGiris;           // YeniGiris-Qeydiyyatda "kod" stringi ucun funksiya
	cout << "\n\nGiris Yeri";
	cout << "\nXosGeldin! Giris Ucun Qeydiyyat Adinizi Yazin:\n";
	cin >> yeniGiris.ad;
	cout << "\nKodu Daxil Edin:\n";
	cin >> yeniGiris.kod;
	
	if(yeniGiris.ad==yeniAdam.ad && yeniGiris.kod == yeniAdam.kod){   //Xeta olsa legv olacaq
		cout << "\n\nTebrikler Giris Ugurlu!";
	} else {
		cout << "\n\nMelumat Sehfdir! Giris Ugursuz....";
	}
	
	getch (); //Proqram bitenden sonra, sonlandirma yazilari qaldirmaq ucun
	return 0;
}
