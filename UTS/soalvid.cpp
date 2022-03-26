#include <stdio.h>
#include <stdlib.h>
// Timothy Theophilus Hartono - LD75
// 2540129546

int main (){
    int angka1, angka2; // angka 1 dan angka 2 ini yang akan di operasikan
    char id1[10];// temporary input yang akan di ubah ke angka
    char op; // untuk operator
    double hasil; // untuk hasil dari operasi
    double total; //untuk menyimpan hasil dari operasi di pindahkan ke total untuk pengguaan variable n
    while(1){ //untuk looping secara terus menerus
        scanf("%s", &id1);// scan untuk temp angka1
        if(id1[0] == 'n'){
            angka1 = total;
        } else if (id1[0] == 'x'){
            exit(0);
        } else{
            angka1 = atoi(id1);
        }
        scanf(" %c %d", &op, &angka2);// scan operator dan angka2
        switch (op){
            case '+':{ // penjumlahan
                hasil = angka1 + angka2;
                printf("Hasil %d + %d : %d\n", angka1, angka2, (int)hasil);
                total = hasil;
                break;
            }
            case '-':{ // pengurangan
                hasil = angka1 - angka2;
                printf("Hasil %d - %d : %d\n", angka1, angka2, (int)hasil);
                total = hasil;
                break;
            }
            case '*':{ // perkalian
                hasil = angka1 * angka2;
                printf("Hasil %d * %d : %d\n", angka1, angka2, (int)hasil);
                total = hasil;
                break;
            }
            case '/':{ // pembagian
                hasil = (double)angka1 / angka2;
                printf("Hasil %d / %d : %.2lf\n", angka1, angka2, hasil);
                total = hasil;
                break;
            }
        }
    }
    return 0;
}