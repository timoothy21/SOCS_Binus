#include <stdio.h>

int main (){
	int tc, jojo, lili, bibi;
	scanf("%d", &tc);
	scanf("%d %d %d", &jojo, &lili, &bibi);
	int arr[tc];
	int suma = 0;
	for(int i = 0; i<tc; i++){
		scanf("%d", &arr[i]);
		suma += arr[i];
	}
	suma += (jojo+lili+bibi);
	int hasil = suma/(tc+3);
	if (jojo >= hasil){
		printf("Jojo lolos\n");
	}else {
		printf("Jojo tidak lolos\n");
	}
	if (lili >= hasil){
		printf("Lili lolos\n");
	}else {
		printf("Lili tidak lolos\n");
	}
	if (bibi >= hasil){
		printf("Bibi lolos\n");
	}else {
		printf("Bibi tidak lolos\n");
	}
	return 0;
}
