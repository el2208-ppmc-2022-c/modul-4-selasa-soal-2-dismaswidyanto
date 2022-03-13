/*EL2208 Praktikum Pemecahan Masalah dengan C 2021/2022
*Modul            : 4 - Structures and Dynamic Arrays
*Percobaan        : -
*Hari dan Tanggal : Selasa, 15 Maret 2022
*Nama (NIM)       : -
*Asisten (NIM)    : -
*Nama File        : soal-02.c
*Deskripsi        : -
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct heater
{
    int state;
    float setpoint;
    float hysterisis;
}heater ;



heater findState(struct heater heater1, float suhu)
{
    if (suhu <= heater1.setpoint - heater1.hysterisis/2.0)
    {
        heater1.state = 1;
    }
    else if (suhu >= heater1.setpoint + heater1.hysterisis/2.0)
    {
        heater1.state = 0;
    }
    else
    {
        heater1.state = heater1.state;
    }
    return heater1;
}

int main()
{
	heater heater1;
    float temp;
	float* suhu;
	int length=0;
    
	printf("masukkan setpoint : ");
	scanf("%f", &heater1.setpoint);
	printf("masukkan lebar hysterisis suhu : ");
	scanf("%f", &heater1.hysterisis);
	printf("Masukkan suhu : ");
	scanf("%f",&temp);
	while(temp != -1){
		length += 1;
		
		if(length == 1){
			suhu = (float*) malloc(sizeof(float));
		}
		else{
			suhu = (float*) realloc(suhu, length * sizeof(float));
		}
		
		suhu[length-1] = temp;
		
		printf("Masukkan suhu : ");
		scanf("%f",&temp);
	
	}

	for(int i=0;i<length;i++){
		heater1 = findState(heater1, suhu[i]);
		if (heater1.state == 1)
		{
			printf("heater on!\n");
		}
		else
		{
			printf("heater off!\n");
		}
	}

}
