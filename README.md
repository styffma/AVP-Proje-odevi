# 🌌 Güneş Sistemi Fizik Deneyleri Simülatörü

Bu proje, C programlama dili kullanılarak geliştirilmiş, Güneş Sistemi'ndeki 8 farklı gezegende temel fizik deneylerini simüle eden konsol tabanlı bir uygulamadır.

## 🎯 Projenin Amacı

Kullanıcıların Dünya'daki fiziksel koşullara alışkın olduğu deneyleri (örneğin serbest düşme veya sarkaç hareketi); Jüpiter, Mars veya Neptün gibi farklı yerçekimi ivmelerine sahip gezegenlerde simüle etmelerini sağlamaktır. Program, girilen tek bir veri setiyle tüm gezegenler için karşılaştırmalı sonuçlar üretir.

## 🚀 Özellikler

* **Çoklu Gezegen Desteği:** Merkür, Venüs, Dünya, Mars, Jüpiter, Satürn, Uranüs ve Neptün.
* **9 Farklı Fizik Deneyi:** Mekanikten akışkanlar dinamiğine kadar geniş kapsam.
* **Kullanıcı Dostu Arayüz:** İsimlendirilmiş kullanıcı karşılama ve kolay menü sistemi.
* **Hata Yönetimi:** Negatif değer girilmesi durumunda otomatik mutlak değer dönüşümü ve uyarı sistemi.
* **Temiz Kod:** Modüler fonksiyon yapısı ve açıklayıcı yorum satırları.

## 🧪 Mevcut Deneyler

Program aşağıdaki 9 deneyi simüle edebilir:

1.  **Serbest Düşme Deneyi:** Belirli bir sürede düşülen mesafeyi hesaplar ($h = 1/2gt^2$).
2.  **Yukarı Atış Deneyi:** Belirli bir ilk hızla çıkılabilecek maksimum yüksekliği hesaplar ($h_{max} = v_0^2 / 2g$).
3.  **Ağırlık Deneyi:** Bir cismin farklı gezegenlerdeki ağırlığını hesaplar ($G = mg$).
4.  **Kütleçekimsel Potansiyel Enerji:** Belirli yükseklikteki cismin enerjisini hesaplar ($E_p = mgh$).
5.  **Hidrostatik Basınç:** Sıvı basıncını hesaplar ($P = pgh$).
6.  **Arşimet Kaldırma Kuvveti:** Sıvı içindeki cisme etkiyen kaldırma kuvvetini hesaplar ($F_k = pgV$).
7.  **Basit Sarkaç Periyodu:** Sarkacın bir salınımı tamamlama süresini hesaplar ($T = 2\pi\sqrt{L/g}$).
8.  **Sabit İp Gerilmesi:** Asılı duran bir cismin ipte oluşturduğu gerilmeyi hesaplar.
9.  **Asansör Deneyi:** İvmelenen bir asansör içindeki cisme etkiyen tepki kuvvetini hesaplar.

## 🛠 Teknik Detaylar

Bu proje, Algoritmalar ve Programlama dersi kazanımlarını pekiştirmek amacıyla aşağıdaki teknikleri içerir:

* **Struct Yapıları:** Gezegen verilerini (isim ve $g$ değeri) tutmak için `struct` kullanımı.
* **Pointer Aritmetiği:** Dizilere standart indeksleme yerine pointer aritmetiği (`*(Gezegen + i)`) ile erişim.
* **Modüler Mimari:** Her deneyin ve ekran işleminin ayrı fonksiyonlarda tutulması.
* **Ternary Operator:** `if-else` blokları yerine satır içi koşullu ifadelerle (`? :`) veri kontrolü.

## 📸 Ekran Görüntüleri

<img width="651" height="105" alt="1" src="https://github.com/user-attachments/assets/f418ca5e-f734-4b6b-b684-4521f08ee706" />

<img width="678" height="478" alt="2" src="https://github.com/user-attachments/assets/3c2a767a-633f-4940-b569-481c30b33837" />

---
*Bu proje eğitim amaçlı geliştirilmiştir.*
