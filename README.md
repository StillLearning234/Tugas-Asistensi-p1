Penjelasan mengenai kode program Foodie_Special_ID_Generator.

Program akan meminta 3 input dari user(terminal) berupa nama, umur, dan makanan favorit.
Setelah itu, komputer akan menyimpan nilai-nilai tersebut ke dalam variabel name, umur, dan fav_food.
Proses pembuatan id akan menggunakan sebuah fungsi bernama converter yang tugasnya mengkonversi nilai-nilai tadi
menjadi id, sekaligus meng-output id dengan format yang sudah ditentukan.
Proses konversi dalam fungsi converter mengikuti format berikut :
Angka hasil convert:
(huruf pertama nama * umur + huruf pertama fav_food) + 1000 - umur + huruf pertama fav_food * (huruf pertama nama + huruf pertama fav_food)

Dan id dengan format : (huruf pertama nama)(huruf kedua fav_food)(angka)(huruf kedua nama)(huruf pertama fav_food)

Berikut contoh format output pada terminal

----------------------------------------------
|
|  ID             : is31585932sa
|  Name           : Hisam
|  Favorite Food  : Nasi
|
----------------------------------------------
