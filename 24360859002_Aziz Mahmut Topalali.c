#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// TANIMLAMA
// her bir gezegenin ismini ve yüzeyindeki yer cekimi kuvvetini kaydediyorum
struct Gezegen_Bilgileri {
    char ad[20];
    double g;
};

#define PI 3

// ANA FONKSÝYONLAR :
// Komutlar arasý sonuçlarý daha rahat görebilmek için kullandýðým fonksiyon
void ekran_temizle() {
    printf("\n------------------\n\n");
}

// deney hesaplamalarýnda kullanýcý tarafýndan negatif deðer girildiðinde
// input'un mutlak deðerini alan fonksiyon
double mutlak_deger(double deger) {
    (deger < 0) ? -deger : deger;
}

// Ýlk baþta kullanýcýnýn adýný almak için kullandýðým fonksiyon
void isim_belirle(char *kullanici_adi) {
    printf("Merhaba bilim insani! Size ne diye seslenelim: ");
    scanf("%s", kullanici_adi);
    ekran_temizle();
}

// YARDIMCI FONKSÝYONLAR
// Bu kýsýmda deney hesaplamalarýný kullanacaðým fonksiyonlar olacak,
// fonksiyon isimleri = "deney_ismi_deneynumarasý" þeklinde olacaktýr.

// Serbest Düþme Deneyi
void serbest_dusme_1 (char *isim, struct Gezegen_Bilgileri *Gezegen) {
    ekran_temizle();
    printf("Serbest Dusme Deneyini sectiniz!\n");
    // hesaplanacak formül
    // h = (g*t*t)/2
    double h, t;
    printf("Lutfen saniye cinsinden (t) bir sure giriniz: ");
    scanf("%lf", &t);

    // Kullanýcýdan girilen deðer kontrol ediliyor eðer
    // negatif ise mutlak deðeri alýnýyor ve iþleme devam ediliyor.
    (t < 0) ?
    (
        printf("\nGirdiginiz deger negatif bir deger oldugu icin mutlak degeri aliniyor\n")
    )
    : (t);
    (t < 0) ? mutlak_deger(t) : t ;
    printf("\n###DENEY HAKKINDA BILGILER###");
    printf("\nDeney Adi        : Serbest Dusme Deneyi");
    printf("\nGirilen Deger    : %.2lf", t);
    printf("\nDeneyi Yapan Kisi: %s\n\n", isim);

    for (int i = 0 ; i < 8; i++) {
        h = ( (*(Gezegen + i)).g * t * t )/2;
        printf("%-10s\t: %8.2lf (M) Yukseklik\n",(*(Gezegen + i)).ad, h);
    }
    ekran_temizle();
}

// Yukari Atis Deneyi
void yukari_atis_2 (char *isim, struct Gezegen_Bilgileri *Gezegen) {
    ekran_temizle();
    printf("Yukari Atis Deneyini sectiniz!\n");
    // hesaplanacak formül
    // hmax = (v0^2)/2g
    double v0, hmax;
    printf("Lutfen cismin ilk hizini (m/s) cinsinden giriniz: ");
    scanf("%lf", &v0);

    // Kullanýcýdan girilen deðer kontrol ediliyor eðer
    // negatif ise mutlak deðeri alýnýyor ve iþleme devam ediliyor.
    (v0 < 0) ?
    (
        printf("\nGirdiginiz deger negatif bir deger oldugu icin mutlak degeri aliniyor\n")
    )
    : (v0);
    (v0 < 0) ? mutlak_deger(v0) : v0;
    printf("\n###DENEY HAKKINDA BILGILER###");
    printf("\nDeney Adi        : Yukari Atis");
    printf("\nGirilen Deger    : %.2lf", v0);
    printf("\nDeneyi Yapan Kisi: %s\n\n", isim);

    for (int i = 0 ; i < 8; i++) {
        hmax = ( v0 * v0 )/ (2 * (*(Gezegen + i)).g);
        printf("%-10s\t: %8.2lf (M) Yukseklik\n",(*(Gezegen + i)).ad, hmax);
    }
    ekran_temizle();
}

// Aðýrlýk Deneyi
void agirlik_3 (char *isim, struct Gezegen_Bilgileri *Gezegen) {
    ekran_temizle();
    printf("Agirlik Deneyini sectiniz!\n");
    // hesaplanacak formül
    // G = mg
    double G, m;
    printf("Lutfen cismin kutlesini (kg) cinsinden giriniz: ");
    scanf("%lf", &m);

    // Kullanýcýdan girilen deðer kontrol ediliyor eðer
    // negatif ise mutlak deðeri alýnýyor ve iþleme devam ediliyor.
    (m < 0) ?
    (
        printf("\nGirdiginiz deger negatif bir deger oldugu icin mutlak degeri aliniyor\n")
    )
    : (m);
    (m < 0) ? mutlak_deger(m) : m;
    printf("\n###DENEY HAKKINDA BILGILER###");
    printf("\nDeney Adi        : Yukari Atis");
    printf("\nGirilen Deger    : %.2lf", m);
    printf("\nDeneyi Yapan Kisi: %s\n\n", isim);

    for (int i = 0 ; i < 8; i++) {
        G = m * (*(Gezegen + i)).g;
        printf("%-10s\t: %8.2lf (G) Agirlik\n",(*(Gezegen + i)).ad, G);
    }
    ekran_temizle();
}

// Kütlesçekimsel Potansiyel Enerji Deneyi
void kutlecekimsel_potansiyel_enerji_4 (char *isim, struct Gezegen_Bilgileri *Gezegen) {
    ekran_temizle();
    printf("Agirlik Deneyini sectiniz!\n");
    // hesaplanacak formül
    // Ep = mgh
    double Ep, m, h;
    printf("Lutfen cismin kutlesini (kg) cinsinden giriniz: ");
    scanf("%lf", &m);
    printf("Lutfen cismin yuksekligini (metre) cinsinden giriniz: ");
    scanf("%lf", &h);

    // Kullanýcýdan girilen deðer kontrol ediliyor eðer
    // negatif ise mutlak deðeri alýnýyor ve iþleme devam ediliyor.
    (m < 0) ?
    (
        printf("\nGirdiginiz deger negatif bir deger oldugu icin mutlak degeri aliniyor\n")
    )
    : (m);
    (m < 0) ? mutlak_deger(m) : m;

    (h < 0) ?
    (
        printf("\nGirdiginiz deger negatif bir deger oldugu icin mutlak degeri aliniyor\n")
    )
    : (h);
    (h < 0) ? mutlak_deger(h) : h;


    printf("\n###DENEY HAKKINDA BILGILER###");
    printf("\nDeney Adi                   : Kutlecekimsel Potansiyel Enerji");
    printf("\nGirilen Degerler(sirasiyla) : %.2lf ,%.2lf", m, h);
    printf("\nDeneyi Yapan Kisi           : %s\n\n", isim);

    for (int i = 0 ; i < 8; i++) {
        Ep = m * (*(Gezegen + i)).g * h;
        printf("%-10s\t: %8.2lf (Ep) Potansiyel Enerjisi\n",(*(Gezegen + i)).ad, Ep);
    }
    ekran_temizle();
}

// Hidrostatik Basýnç Deneyi
void hidrostatik_basinc_5 (char *isim, struct Gezegen_Bilgileri *Gezegen) {
    ekran_temizle();
    printf("Hidrostatik Basinc sectiniz!\n");
    // hesaplanacak formül
    // P = pgh
    double P, p, h;
    printf("Lutfen sivinin birim hacimindeki kutlesini (kg/m^3) cinsinden giriniz: ");
    scanf("%lf", &p);
    printf("Lutfen sivinin derinligini (metre) cinsinden giriniz: ");
    scanf("%lf", &h);

    // Kullanýcýdan girilen deðer kontrol ediliyor eðer
    // negatif ise mutlak deðeri alýnýyor ve iþleme devam ediliyor.
    (p < 0) ?
    (
        printf("\nGirdiginiz deger negatif bir deger oldugu icin mutlak degeri aliniyor\n")
    )
    : (p);
    (p < 0) ? mutlak_deger(p) : p;

    (h < 0) ?
    (
        printf("\nGirdiginiz deger negatif bir deger oldugu icin mutlak degeri aliniyor\n")
    )
    : (h);
    (h < 0) ? mutlak_deger(h) : h;

    printf("\n###DENEY HAKKINDA BILGILER###");
    printf("\nDeney Adi                    : Hidrostatik Basinc");
    printf("\nGirilen Degerler (sirasiyla) : %.2lf ,%.2lf", p,h);
    printf("\nDeneyi Yapan Kisi            : %s\n\n", isim);

    for (int i = 0 ; i < 8; i++) {
        P = p * (*(Gezegen + i)).g * h;
        printf("%-10s\t: %8.2lf (P) Basinc\n",(*(Gezegen + i)).ad, P);
    }
    ekran_temizle();
}

// Arþimet Kaldýrma Kuvveti Deneyi
void arsimet_kaldirma_6 (char *isim, struct Gezegen_Bilgileri *Gezegen) {
    ekran_temizle();
    printf("Arsimet Kaldirma Kuvveti Deneyini sectiniz!\n");
    // hesaplanacak formül
    // Fk = pgV
    double Fk, p, V;
    printf("Lutfen sivinin birim hacimindeki kutlesini (kg/m^3) cinsinden giriniz: ");
    scanf("%lf", &p);
    printf("Lutfen cismin batan hacmini (m^3) cinsinden giriniz: ");
    scanf("%lf", &V);

    // Kullanýcýdan girilen deðer kontrol ediliyor eðer
    // negatif ise mutlak deðeri alýnýyor ve iþleme devam ediliyor.
    (p < 0) ?
    (
        printf("\nGirdiginiz deger negatif bir deger oldugu icin mutlak degeri aliniyor\n")
    )
    : (p);
    (p < 0) ? mutlak_deger(p) : p;

    (V < 0) ?
    (
        printf("\nGirdiginiz deger negatif bir deger oldugu icin mutlak degeri aliniyor\n")
    )
    : (V);
    (V < 0) ? mutlak_deger(V) : V;

    printf("\n###DENEY HAKKINDA BILGILER###");
    printf("\nDeney Adi                    : Arsimet Kaldirma kuvveti");
    printf("\nGirilen Degerler (sirasiyla) : %.2lf ,%.2lf", p,V);
    printf("\nDeneyi Yapan Kisi            : %s\n\n", isim);

    for (int i = 0 ; i < 8; i++) {
        Fk = p * (*(Gezegen + i)).g * V;
        printf("%-10s\t: %8.2lf (Fk) Kaldirma Kuvveti\n",(*(Gezegen + i)).ad, Fk);
    }
    ekran_temizle();
}

// Basit Sarkaç Periyodu Deneyi
void basit_sarkac_periyodu_7 (char *isim, struct Gezegen_Bilgileri *Gezegen) {
    ekran_temizle();
    printf("Basit Sarkac Periyodu Deneyini sectiniz!\n");
    // hesaplanacak formül
    // T = 2 * PI * ((L/g)^(1/2))
    double T, L;
    printf("Lutfen ipin uzunlugunu (metre) cinsinden giriniz: ");
    scanf("%lf", &L);

    // Kullanýcýdan girilen deðer kontrol ediliyor eðer
    // negatif ise mutlak deðeri alýnýyor ve iþleme devam ediliyor.
    (L < 0) ?
    (
        printf("\nGirdiginiz deger negatif bir deger oldugu icin mutlak degeri aliniyor\n")
    )
    : (L);
    (L < 0) ? mutlak_deger(L) : L;
    printf("\n###DENEY HAKKINDA BILGILER###");
    printf("\nDeney Adi        : Basit Sarkac Periyodu");
    printf("\nGirilen Deger    : %.2lf", L);
    printf("\nDeneyi Yapan Kisi: %s\n\n", isim);

    for (int i = 0 ; i < 8; i++) {
        T = 2 * PI * pow((L/(*(Gezegen + i)).g), 0.5);
        printf("%-10s\t: %8.2lf (T) Saniye\n",(*(Gezegen + i)).ad, T);
    }
    ekran_temizle();
}

// Sabit Ýp Gerilmesi Deneyi
void sabit_ip_gerilmesi_8 (char *isim, struct Gezegen_Bilgileri *Gezegen) {
    ekran_temizle();
    printf("Sabit Ip Gerilmesi Deneyini sectiniz!\n");
    // hesaplanacak formül
    // T = m * g
    double T, m;
    printf("Lutfen cismin kutlesini (kg) cinsinden giriniz: ");
    scanf("%lf", &m);

    // Kullanýcýdan girilen deðer kontrol ediliyor eðer
    // negatif ise mutlak deðeri alýnýyor ve iþleme devam ediliyor.
    (m < 0) ?
    (
        printf("\nGirdiginiz deger negatif bir deger oldugu icin mutlak degeri aliniyor\n")
    )
    : (m);
    (m < 0) ? mutlak_deger(m) : m;
    printf("\n###DENEY HAKKINDA BILGILER###");
    printf("\nDeney Adi        : Sabit Ip Gerilmesi");
    printf("\nGirilen Deger    : %.2lf", m);
    printf("\nDeneyi Yapan Kisi: %s\n\n", isim);

    for (int i = 0 ; i < 8; i++) {
        T = m * (*(Gezegen + i)).g;
        printf("%-10s\t: %8.2lf Ip Gerilme Kuvveti(T)\n",(*(Gezegen + i)).ad, T);
    }
    ekran_temizle();
}

// Asansör Deneyi
void asonsor_9 (char *isim, struct Gezegen_Bilgileri *Gezegen) {
    ekran_temizle();
    printf("Asonsor Deneyini sectiniz!\n");
    // hesaplanacak formül
    // N = m * (g +- a)
    double N, a ,m;
    printf("Lutfen cismin kutlesini (kg) cinsinden giriniz: ");
    scanf("%lf", &m);
    printf("Lutfen cismin ivmesini (m/s^2) cinsinden giriniz \n(Asansor yukari yonde ivmelenerek hizlaniyorsa\nveya asagý yonde ivmelenerek yavasliyorsa, ivmeyi pozitif;\nAsansor asagý yonde ivmelenerek hizlaniyorsa veya\nyukari yonde ivmelenerek yavasliyorsa\nivmeyi negatif giriniz): ");
    scanf("%lf", &a);

    // Kullanýcýdan girilen deðer kontrol ediliyor eðer
    // negatif ise mutlak deðeri alýnýyor ve iþleme devam ediliyor.
    (m < 0) ?
    (
        printf("\nGirdiginiz deger negatif bir deger oldugu icin mutlak degeri aliniyor\n")
    )
    : (m);
    (m < 0) ? mutlak_deger(m) : m;

    printf("\n###DENEY HAKKINDA BILGILER###");
    printf("\nDeney Adi        : Asonsor");
    printf("\nGirilen Deger    : %.2lf ,%.2lf", m, a);
    printf("\nDeneyi Yapan Kisi: %s\n\n", isim);

    for (int i = 0 ; i < 8; i++) {
        N = m * ( (*(Gezegen + i)).g + a);
        printf("%-10s : %8.2lf (Newton) N\n",(*(Gezegen + i)).ad, N);
    }
    ekran_temizle();
}

void menu(char *isim, struct Gezegen_Bilgileri *Gezegen) {
while (1) {
    printf("Hangi deneyi secmek istersin?\n\n");
    printf("1. Serbest Dusme Deneyi\n");
    printf("2. Yukari Atis Deneyi\n");
    printf("3. Agirlik Deneyi\n");
    printf("4. Kutlecekimsel Potansiyel Enerji deneyi\n");
    printf("5. Hidrostatik Basinc Deneyi\n");
    printf("6. Arsimet Kaldýrma Kuvveti Deneyi\n");
    printf("7. Basit Sarkac Periyodu Deneyi\n");
    printf("8. Sabit Ip Gerilmesi Deneyi\n");
    printf("9. Asonsor Deneyi\n\n");
    printf("Seciminiz (Cikmak icin '-1'): ");

    int secim;
    scanf("%d", &secim);
    // switch case yapisi kullanarak yapýlabilir
    // MENU
    if (secim == -1)
        break;
    switch (secim) {
    case 1:
        serbest_dusme_1(isim, Gezegen);
        break;
    case 2:
        yukari_atis_2(isim, Gezegen);
        break;
    case 3:
        agirlik_3(isim, Gezegen);
        break;
    case 4:
        kutlecekimsel_potansiyel_enerji_4(isim, Gezegen);
        break;
    case 5:
        hidrostatik_basinc_5(isim, Gezegen);
        break;
    case 6:
        arsimet_kaldirma_6(isim, Gezegen);
        break;
    case 7:
        basit_sarkac_periyodu_7(isim, Gezegen);
        break;
    case 8:
        sabit_ip_gerilmesi_8(isim, Gezegen);
        break;
    case 9:
        asonsor_9(isim, Gezegen);
        break;
    default:
        printf("Yanlis secim mi yaptiniz? Lutfen 1-9 arasi sayi giriniz: ");
        break;
    }
}
}



int main() {

    // tanýmlamalar !!!
    struct Gezegen_Bilgileri Gezegen[] = {
        {"Merkur" , 3.7  },
        {"Venus"  , 8.87 },
        {"Dunya"  , 9.81 },
        {"Mars"   , 3.71 },
        {"Jupiter", 24.79},
        {"Saturn" , 10.4 },
        {"Uranus" , 8.87 },
        {"Neptune", 11.15}
    };
    char kullanici_adi[50];
    isim_belirle(kullanici_adi);
    printf("%s hosgeldin!\n",kullanici_adi);

    menu(kullanici_adi, Gezegen);

    return 0;
}
