
[16,21,11,8,12,22] -> Merge Sort

Yukarıdaki dizinin sort türüne göre aşamalarını yazınız.
Cevap:
Dizi: [16, 21, 11, 8, 12, 22]
1. Diziyi ikiye bölüyoruz:
Sol taraf: [16, 21, 11]
Sağ taraf: [8, 12, 22]
2.  Her iki tarafı tekrar ikiye bölüyoruz:
Sol taraf [16, 21, 11] →
[16]
[21, 11]
→ [21] ve [11]
Sağ taraf [8, 12, 22] →
[8]
[12, 22]
→ [12] ve [22]
3. Alt dizileri sıralayıp birleştiriyoruz:
[21] ve [11] birleşir → [11, 21]

[16] ve [11, 21] birleşir → [11, 16, 21]

[12] ve [22] birleşir → [12, 22]

[8] ve [12, 22] birleşir → [8, 12, 22]

4.  İki ana diziyi birleştiriyoruz:
[11, 16, 21] ve [8, 12, 22]
Karşılaştırarak sırayla birleştiririz:
➤ [8, 11, 12, 16, 21, 22]

Sonuç:[8, 11, 12, 16, 21, 22]

Big-O gösterimini yazınız.

Best Case: O(n log n)
Average Case: O(n log n)
Worst Case: O(n log n)
