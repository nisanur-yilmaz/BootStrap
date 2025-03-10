Proje 3

[7, 5, 1, 8, 3, 6, 0, 9, 4, 2] dizisinin Binary-Search-Tree aşamalarını yazınız.
İlk eleman 7 root olur.
➤ Root: 7
İkinci eleman 5
5, 7’den küçük → 7’nin soluna eklenir.
➤ 7'nin solunda: 5
 Üçüncü eleman 1
1, 7’den küçük → sola git
1, 5’ten küçük → 5’in soluna eklenir.
➤ 5'in solunda: 1
 Dördüncü eleman 8
8, 7’den büyük → 7’nin sağına eklenir.
➤ 7'nin sağında: 8
Beşinci eleman 3
3, 7’den küçük → sola git
3, 5’ten küçük → sola git
3, 1’den büyük → 1’in sağına eklenir.
➤ 1'in sağında: 3
 Altıncı eleman 6
6, 7’den küçük → sola git
6, 5’ten büyük → 5’in sağına eklenir.
➤ 5'in sağında: 6
Yedinci eleman 0
0, 7’den küçük → sola git
0, 5’ten küçük → sola git
0, 1’den küçük → 1’in soluna eklenir.
➤ 1'in solunda: 0
 Sekizinci eleman 9
9, 7’den büyük → sağa git
9, 8’den büyük → 8’in sağına eklenir.
➤ 8'in sağında: 9
9️⃣ Dokuzuncu eleman 4
4, 7’den küçük → sola git
4, 5’ten küçük → sola git
4, 1’den büyük → sağa git
4, 3’ten büyük → 3’ün sağına eklenir.
➤ 3'ün sağında: 4
🔟 Onuncu eleman 2
2, 7’den küçük → sola git
2, 5’ten küçük → sola git
2, 1’den büyük → sağa git
2, 3’ten küçük → 3’ün soluna eklenir.
➤ 3'ün solunda: 2
Sonuç:
        7
       / \
      5   8
     / \    \
    1   6    9
   / \
  0   3
     / \
    2   4

