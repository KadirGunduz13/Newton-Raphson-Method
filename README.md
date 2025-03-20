# Yeniton Yöntemi (Newton's Method) İle Kök Bulma

Bu proje, **Yeniton Yöntemi**'ni (Newton's Method) kullanarak bir fonksiyonun kökünü bulan bir C programı içerir. Program, kullanıcıdan bir başlangıç değeri alır ve belirtilen hata oranına ulaşana kadar iterasyonlar yaparak kökü bulur.

## Kullanılan Matematiksel Fonksiyon

İşlem yapılan fonksiyon:  
\[ f(x) = x^3 + 2x - 4 \]

Türev fonksiyonu ise:  
\[ f'(x) = 3x^2 + 2 \]

## Programın Çalışma Adımları

1. Kullanıcıdan bir başlangıç değeri alınır.
2. **Yeniton Yöntemi** uygulanarak fonksiyonun kökü bulunur. Bu işlem şu şekilde yapılır:
   \[
   x_{n+1} = x_n - \frac{f(x_n)}{f'(x_n)}
   \]
3. Belirlenen hata oranına ulaşılana kadar iterasyon yapılır.
4. Kök bulunduğunda, kullanıcıya kök değeri ve iterasyon sayısı bildirilir.

## Kullanıcıdan Alınan Girdi

Program, kullanıcıdan başlangıç değeri olarak bir `x` değeri alır ve bu değeri iteratif olarak kullanarak kökü bulmaya çalışır.


Programın çıktısı, kök değerini ve kaç iterasyon yapıldığını ekrana yazdırır.

## Hata Oranı

- Hata oranı varsayılan olarak `0.001`'dir. Bu değer, kökün bulunduğu doğruluğu belirtir ve kullanıcı tarafından değiştirebilir.


