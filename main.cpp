#include <iostream>

using namespace std;

int main()
{
    string isim;
    string soyisim;
    int yas;
    string ogrenim_durumu;
    int iq_seviyesi;
    bool mezun_musunuz;
    string e_posta_adresiniz;
    int cep_telefonu_numarasi;
    string ulke;
    int il_numarasi;
    string mezu;

    cout << "Formu Doldururken Yazim Kurallarina Uyunuz!" << endl;
    cout << "Formda Her Doldurdugunuzda Kucuk Bir Bekleme Suresi Vardir DIKKATINIZE!" << endl;
    _sleep(3000);
    cout << "\nIsim Giriniz: ";
    cin >> isim;
    _sleep(100);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(150);
    cout << "." << endl;
    cout << "Soyisim Giriniz: ";
    cin >> soyisim;
    _sleep(100);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(150);
    cout << "." << endl;
    cout << "Yasinizi Giriniz: ";
    cin >> yas;
    _sleep(100);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(150);
    cout << "." << endl;
    cout << "Ogrenim Durumunu Giriniz: ";
    cin >> ogrenim_durumu;
    _sleep(100);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(150);
    cout << "." << endl;
    cout << "Mezun musunuz?(Evet ise 1 hayir ise 0'i tuslayiniz!): ";
    cin >> mezun_musunuz;
    _sleep(100);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(150);
    cout << "." << endl;
    cout << "e-postanizi Giriniz: ";
    cin >> e_posta_adresiniz;
    _sleep(100);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(150);
    cout << "." << endl;
    cout << "Cep Telefonunuzu Giriniz(05 RAKAMLARINI KESINLIKLE YAZMAYINIZ!!!): ";
    cin >> cep_telefonu_numarasi;
    _sleep(100);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(150);
    cout << "." << endl;
    cout << "Ulkenizi Giriniz: ";
    cin >> ulke;
    _sleep(100);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(150);
    cout << "." << endl;
    cout << "Plaka Numarasini Giriniz: ";
    cin >> il_numarasi;
    _sleep(100);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(150);
    cout << "." << endl;
    cout << "Bilgiler Isleniyor Lutfen Bekleyiniz";
    _sleep(100);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(150);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(150);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(100);
    cout << ".";
    _sleep(150);
    cout << "." << endl;

    switch(mezun_musunuz){

    case 0:
        mezu = "Mezun degilim";
        break;
    case 1:
        mezu = "Mezunum";
        break;
    }
    iq_seviyesi = (((il_numarasi * yas) * 2) / 4);

    cout << "\n\n\nIsim-Soyisim: " << isim << " " << soyisim << endl;
    cout << "\nYasiniz: " << yas << endl;
    cout << "\nMezun musun: " << mezu << "\n\nOgrenim durumu nedir: " << ogrenim_durumu << endl;
    cout << "\ne-posta adresin: " << e_posta_adresiniz << "\n\nCep telefonun: " << cep_telefonu_numarasi << endl;
    cout << "\nIQ seviyeniz: " << iq_seviyesi << endl;
    cout << "\nUlken: " << ulke << "\n\nPlaka no: " << il_numarasi << endl;
    cout << "\nSize Ozel Sirket Kimligi No: " << il_numarasi * iq_seviyesi * yas + cep_telefonu_numarasi << endl;

   return 0;
}
