#include <stdio.h>
#include <stdlib.h>
#include "catcafe.h"
void create(catcafe ** arr, int * n){
	printf("n = ");
	scanf("%d", n);
	if (*n <= 0)
		return;
	*arr = (catcafe *)calloc(*n, sizeof(catcafe));
	for (int i = 0; i < * n; i++){
		printf("Название = ");
		scanf("%s", (*arr)[i].name);
		printf("Рейтинг = ");
		scanf("%d", &(*arr)[i].rating);
		printf("Цена за час = ");
		scanf("%d", &(*arr)[i].price);
	}
}
void read(catcafe ** arr, int *n){
	FILE * fp = fopen("file.txt", "r");
	if (!fp)
		return;
	if(fscanf(fp, "%d", n) != 1){
		fclose(fp);
		return;
	}
	if(*n <= 0){
		fclose(fp);
		return;
	}
	*arr = (catcafe *)calloc(*n, sizeof(catcafe));
	for(int i = 0; i < *n; i++){
		if (fscanf(fp, "%s %d %d", (*arr)[i].name, &(*arr)[i].rating, &(*arr)[i].price) != 3)
			break;
	}
	fclose(fp);
}
void write(catcafe * arr, int n){
	if(n <= 0)
		return;
	FILE * fp = fopen("file.txt", "w");
	if(!fp)
		return;
	fprintf(fp, "%d \n", n);
	for(int i = 0; i < n; i++)
		fprintf(fp, "%s %d %d", arr[i].name, arr[i].rating, arr[i].price);
fclose(fp);
}	
void print(catcafe * arr, int n){
	for(int i = 0; i < n; i++)
					printf("Название: %s\n Рейтинг: %d\n Цена за час: %d \n", arr[i].name, arr[i].rating, arr[i].price);
}	
