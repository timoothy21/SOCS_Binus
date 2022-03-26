#include <stdio.h>

int count[1000001];
int main (){
    int tc, tc1;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int hitung  = 0;
        scanf("%d", &tc1);
        for(int j = 0; j < 1000001; j++){
            count[j] = 0;
        }
        int angka[tc1];
        int max = 0;
        for(int j = 0; j < tc1; j++){
            scanf("%d", &angka[j]);
            count[angka[j]]++;
            if(angka[j] > max){
                max = angka[j];
            }
        }
        for(int j = 0; j <= max; j++){
            if(count[j] > 0){
                hitung++;
            }
        }
        printf("Case #%d: %d\n", i+1, hitung);
    }

    return 0;
}


// #include <stdio.h>

// int main () {
//     int input;
//     scanf("%d", &input);
//     for (int i = 1; i <= input; i++) {
//         int a;
//         scanf("%d", &a);
//         long long int arr[a], max=0;
        
//         for (int i = 0; i < a; i++) {
//             scanf("%lld", &arr[i]);
//         }
//         printf("Case #%d: ", i);

//         for (int i = 0; i < a; i++) {
//             if (max < arr[i]) {
//                 max = arr[i];
//             }
//         }
        
//         long long int isi[max] = {0};
        
//         for (int i = 0; i < a; i++) {
//             isi[arr[i]]++;
//         }
        
//         long long int ctr=0;
//         for (int i = 0; i <= max; i++) {
//             if (isi[i] > 0) {
//                 ctr++;
//             }
//         }
//         printf("%lld\n", ctr);
//     }
//     return 0;
// } 