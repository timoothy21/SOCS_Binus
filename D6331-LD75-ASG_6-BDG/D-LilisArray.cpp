#include <stdio.h>

int main (){
    int tc, tc1;
    int countFreq;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1);
        int arr[tc1];
        int freqMax = 0;
        int nilaiMin = 1000000000;
        for(int j = 0; j < tc1; j++){ // scan array
            scanf("%d", &arr[j]);
        }
        for(int j = 0; j < tc1; j++){  // nyari freqMax
            countFreq = 1;
            if(arr[j] > 0){
                for(int k = j+1; k < tc1; k++){
                    if(arr[j] == arr[k]){
                        countFreq++;
                    }
                }
                if(countFreq > freqMax){
                    freqMax = countFreq;
                }      
            }
        }

        for(int j = 0; j < tc1; j++){
            countFreq = 1;
            for(int k = j+1; k < tc1; k++){ // nyari freq
                if(arr[j] == arr[k]){
                    countFreq++;
                }
            }
            if(freqMax == countFreq && arr[j] < nilaiMin){ // jika freq = freqmaksimal dan nilaimin > arr[j] // nilai min = arr[j]
                    nilaiMin = arr[j];
            }
        }
        
        printf("Case #%d: %d\n", i+1, freqMax);
        printf("%d\n", nilaiMin);

    }
    return 0;
}