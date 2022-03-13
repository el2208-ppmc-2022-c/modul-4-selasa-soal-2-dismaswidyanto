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



int main()
{
    //template input
	printf("masukkan setpoint : ");
	scanf("%f", &...);
	printf("masukkan lebar hysterisis suhu : ");
	scanf("%f", &...);
	printf("Masukkan suhu : ");
	scanf("%f",&...);

	//template output
	printf("heater on!\n");
	printf("heater off!\n");

}