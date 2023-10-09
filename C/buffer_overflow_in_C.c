#include <stdio.h>
#include <string.h>


int main() {
    
    /* 
     jika kita tidak menginisiasi berapa buffer size di variable string
     lalu kita menggunakan salah satu fungsi dari string.h misal strlen, strcpy, strcat, dll, 
     maka sudah pasti akan merusak atau membuat perubahan nilai pada variable numnum, seperti dibawah ini: 
     */

    // int numnum = 5;
    // char texte[] = "ikan";

    // strcpy(texte, "tongkol");
    // printf("%d\n", numnum);
    // printf("%s\n", texte);

    // untuk mengatasinya, kita harus sudah menginisiasi berapa buffer size yang dibutuhkan si texte misal texte[20]

    // int numnum2 = 10;
    // char texte2[20] = "ikan";

    // strcpy(texte2, "sapu sapu");
    // printf("%d\n", numnum2);
    // printf("%s\n", texte2);

    /* maka kesimpulannya harus terbiasa untuk inisiasi buffer pada string, JANGAN MALAS :) 
    ~ KACAMATA_09 */ 

    // ini juga termasuk akan merusak nilai dari numnum5, 
    // karena jika user memasukkan lebih dari 9 char atau lebih dari size yang bisa ditampung text 5, 
    // pasti akan membuat variale lainnya terganggu
    // kenapa saya mengatakan 9 char, karena biasanya string otomatis nambahkan \0 pada akhir string nya

    int numnum5 = 100;
    char text5[10];
    printf("Coba masukkan lebih dari 9 char : ");
    scanf("%s]", &text5);
    printf("ini text5 : %s\n", text5);
    printf("ini numnnum5 : %d\n", numnum5);

    // untuk mengatasinya, kita bisa membuat limitasi berapa yang boleh diinput user, 
    // kita tinggal ubah spesifikasi format pada waktu scanf menjadi scanf("%9s" atau "%9[^\n]"(untuk membaca karakter spasi pada input user), &text5);
    // maka jika user input lebih dari 9 char, maka char yang diambil cuma 9 char awal yang diinput user

    // biasakan juga penggunaan \0 di awal string dan di akhir string, untuk :
    /* 1. Menghindari Sampah Data: Dengan menginisialisasi buffer, 
    Anda memastikan bahwa tidak ada data yang acak atau "sampah" 
    yang ada di dalamnya dari alokasi sebelumnya.

    2. Mencegah Akses Tidak Terduga: Dalam bahasa C, string diakhiri 
    dengan karakter null ('\0'). Tanpa inisialisasi, jika Anda tidak memasukkan 
    karakter null secara eksplisit, Anda dapat berakhir dengan string yang tidak 
    diakhiri dengan benar, yang dapat menyebabkan akses tidak terduga saat 
    fungsi-fungsi string berusaha memanipulasi atau mengukur string tersebut.

    3. Menandai Akhir String: Inisialisasi buffer dengan karakter null adalah
    cara umum untuk menandai akhir string dalam bahasa C. Hal ini memungkinkan
    fungsi-fungsi string standar seperti strlen, strcpy, strcat, dan sebagainya
    untuk beroperasi dengan benar.
    */

   return 0;


}