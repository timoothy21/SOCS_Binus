#include <stdio.h>

int main (){
	int daging, sayur, telur; 
	scanf("%d %d %d", &daging, &sayur, &telur);
	for(int i = 0; i < 3; i++){
		if(daging >= sayur && daging >= telur){
			printf("Daging\n");
			daging = 0;
		} else if(sayur >= daging && sayur >= telur){
			printf("Sayur\n");
			sayur = 0;
		} else if(telur >= daging && telur >= sayur){
			printf("Telur\n");
			telur = 0;
		}
	}
	return 0;
}
