Insertion Sort, dizinin her elemanını sırayla alıp, solundaki sıralı alt diziye uygun yere yerleştirir.

---------------------------------------
Başlangıç dizisi: [22, 27, 16, 2, 18, 6]
İlk eleman zaten sıralı kabul edilir:
➤ [22, 27, 16, 2, 18, 6]

27 zaten 22’den büyük, bir şey değişmez:
➤ [22, 27, 16, 2, 18, 6]

16 alınır ve uygun yere yerleştirilir (16, 22’den küçük):
➤ [16, 22, 27, 2, 18, 6]

2 alınır ve başa yerleştirilir (2, hepsinden küçük):
➤ [2, 16, 22, 27, 18, 6]

18 alınır ve 16 ile 22 arasına yerleştirilir:
➤ [2, 16, 18, 22, 27, 6]

6 alınır ve 2 ile 16 arasına yerleştirilir:
➤ [2, 6, 16, 18, 22, 27]

 Sıralı hali: [2, 6, 16, 18, 22, 27]
--------------------------------------
 Insertion Sort için:

 Best Case: O(n) (dizi sıralıysa)
 Average Case: O(n²)
 Worst Case: O(n²)
-----------------------
Time Complexity: Dizi sıralandıktan sonra 18 sayısı aşağıdaki case'lerden hangisinin kapsamına girer? Yazınız
Cevap:
[2, 6, 16, 18, 22, 27] → 18 ortalarda bulunuyor.
Bu, Average Case tanımına girer:
----------------
[7,3,5,8,2,9,4,15,6] dizisinin Selection Sort'a göre ilk 4 adımını yazınız.
Cevap:
1. Adım:
En küçük eleman 2, baştaki 7 ile yer değiştirir.
➤ [2, 3, 5, 8, 7, 9, 4, 15, 6]

⃣ 2. Adım:
Kalan dizide (3 en küçük) → yer değişimi gerekmez.
➤ [2, 3, 5, 8, 7, 9, 4, 15, 6]

 3. Adım:
Kalan dizide (4 en küçük), 5 ile yer değiştirir.
➤ [2, 3, 4, 8, 7, 9, 5, 15, 6]

4. Adım:
Kalan dizide (5 en küçük), 8 ile yer değiştirir.
➤ [2, 3, 4, 5, 7, 9, 8, 15, 6]

Bitti.

