# C++ İle Temel Algoritma Geliştirme: Amiral Battı Projesi

Bu çalışma, yazılım geliştirmenin en temel yapı taşları olan **algoritma kurma**, **mantıksal akış yönetimi** ve **veri yapılarını manipüle etme** yeteneklerini pekiştirmek amacıyla hazırlanmıştır. Proje, basit bir oyun kurgusu üzerinden karmaşık problem çözme yöntemlerini simüle etmektedir.

##  Projenin Temel Odak Noktaları (Algoritmik Yaklaşım)

Bu proje sadece bir oyun değil, aşağıdaki temel yazılım prensiplerinin bir uygulama sahasıdır:

1. **Matris ve Bellek Yönetimi:** 2 boyutlu dizilerin (`2D Arrays`) bellekte nasıl konumlandığı ve bu indislere güvenli erişim sağlanması (`Boundary Checks`).
2. **Durum Yönetimi (State Management):** Oyunun her anındaki verinin (isabet, karavana, kalan gemi sayısı) anlık olarak takibi ve güncellenmesi.
3. **Hata Toleransı (Input Validation):** Kullanıcıdan gelen hatalı veya beklenmedik verilerin (dizi sınırları dışındaki sayılar vb.) programın akışını bozmadan nasıl valide edildiği ve `continue` mekanizmasıyla yönetimi.
4. **Döngü Optimizasyonu:** `while` döngüsünün, hedeflenen başarı şartı gerçekleşene kadar en verimli şekilde kullanılması.

##  Oyun Özellikleri
- **Dinamik Geri Bildirim:** Her atıştan sonra kalan gemi sayısının ve toplam hamle (tur) sayısının anlık takibi.
- **Hata Kontrolü:** Geçersiz koordinat girişlerinde (0-4 dışı) kullanıcıyı uyaran ve hatalı işlem yapılmasını engelleyen kontrol mekanizması.
- **Mükerrer Atış Engelleme:** Vurulan koordinatların `false` değerine çekilerek aynı hedefin tekrar vurulmasının önlenmesi.

##  Teknik Detaylar
- **Dil:** C++
- **Veri Yapısı:** 5x5 `bool` Matrisi
- **Kütüphaneler:** `<iostream>`
- **Kontrol Yapıları:** `if-else` karar mekanizmaları, `while` oyun döngüsü ve `continue` akış yönlendirme.

## Nasıl Çalıştırılır?
1. Bu depodaki `AmiralBatti.cpp` dosyasını indirin.
2. Herhangi bir C++ derleyicisi (Visual Studio, GCC veya Dev-C++) ile dosyayı açın.
3. Kodu derleyin ve çalıştırın.
4. Konsol ekranındaki talimatları izleyerek Satır ve Sütun (0-4 arası) bilgilerini girin.

##  Gelişim Planı
Gelecek sürümlerde algoritmaya şu özelliklerin eklenmesi hedeflenmektedir:
- [ ] Rastgele gemi yerleştirme algoritması (`Randomization`).
- [ ] Bilgisayara karşı oynama modu (Temel Yapay Zeka mantığı).
- [ ] Skor tablosu ve dosya sistemine kayıt özelliği.
