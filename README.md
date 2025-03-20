Yeniton Yöntemi (Newton's Method) İle Kök Bulma
Bu proje, Yeniton Yöntemi'ni (Newton's Method) kullanarak bir fonksiyonun kökünü bulan bir C programı içerir. Program, kullanıcıdan bir başlangıç değeri alır ve belirtilen hata oranına ulaşana kadar iterasyonlar yaparak kökü bulur.

Kullanılan Matematiksel Fonksiyon
İşlem yapılan fonksiyon:
𝑓
(
𝑥
)
=
𝑥
3
+
2
𝑥
−
4
f(x)=x 
3
 +2x−4

Türev fonksiyonu ise:
𝑓
′
(
𝑥
)
=
3
𝑥
2
+
2
f 
′
 (x)=3x 
2
 +2

Programın Çalışma Adımları
Kullanıcıdan bir başlangıç değeri alınır.
Yeniton Yöntemi uygulanarak fonksiyonun kökü bulunur. Bu işlem şu şekilde yapılır:
𝑥
𝑛
+
1
=
𝑥
𝑛
−
𝑓
(
𝑥
𝑛
)
𝑓
′
(
𝑥
𝑛
)
x 
n+1
​
 =x 
n
​
 − 
f 
′
 (x 
n
​
 )
f(x 
n
​
 )
​
 
Belirlenen hata oranına ulaşılana kadar iterasyon yapılır.
Kök bulunduğunda, kullanıcıya kök değeri ve iterasyon sayısı bildirilir.
Kullanıcıdan Alınan Girdi
Program, kullanıcıdan başlangıç değeri olarak bir x değeri alır ve bu değeri iteratif olarak kullanarak kökü bulmaya çalışır.

Çıktı
Programın çıktısı, kök değerini ve kaç iterasyon yapıldığını ekrana yazdırır.

Hata Oranı
Hata oranı varsayılan olarak 0.001'dir. Bu değer, kökün bulunduğu doğruluğu belirtir ve kullanıcı tarafından değiştirebilir.
Örnek Çıktı
yaml
Kopyala
Düzenle
Bir baslangic degeri giriniz: 1.5
Kok: 1.335661
Iterasyon sayisi: 5
Derleme ve Çalıştırma
Programı derlemek için şu komutu kullanabilirsiniz:

bash
Kopyala
Düzenle
gcc newton_method.c -o newton_method -lm
Programı çalıştırmak için:

bash
Kopyala
Düzenle
./newton_method
Katkıda Bulunma
Herhangi bir katkı sağlamak için lütfen bir Pull Request oluşturun.
