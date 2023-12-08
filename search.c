#include "catcafe.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void search(catcafe *arr, int n){
	int key;
	printf("Поиск:\n 1.Название\n 2.Рейтинг\n 3.Цена за час\n");
	scanf("%d", &key);
	switch(key){
		case 1:{
			char name_key[40];
			int count = 0;
			printf("Введите название: ");
			scanf("%s",name_key);
			for(int i = 0; i<n; i++){
				if(!strcmp(arr[i].name,name_key)){
					printf("Совпадение найдено:\n Название: %s\n Рейтинг: %d\n Цена за час: %d\n", arr[i].name, arr[i].rating, arr[i].price);
					count = 1;
				}
			}
			if (!count){
				printf("Совпадений не найдено\n");
				}
			break;
			}
		case 2:{
			int rating_key;
			int count = 0;
			printf("Введите рейтинг: ");
			scanf("%d",&rating_key);
			for(int i = 0; i<n; i++){
				if(arr[i].rating == rating_key){
					printf("Совпадение найдено:\n Название: %s\n Рейтинг: %d\n Цена за час: %d\n", arr[i].name, arr[i].rating, arr[i].price);
					count = 1;
				}
			}
			if (!count){ 
				printf("Совпадений не найдено\n");
				}
			break;
			}
		case 3:{
			int price_key;
			int count = 0;
			printf("Введите цену за час: ");
			scanf("%d",&price_key);
			for(int i = 0; i<n; i++){
				if(arr[i].price == price_key){
					printf("Совпадение найдено:\n Название: %s\n Рейтинг: %d\n Цена за час: %d\n", arr[i].name, arr[i].rating, arr[i].price);
					count = 1;
				}
			}
			if (!count){ 
				printf("Совпадений не найдено\n");
				}
			break;
			}
		default:
			break;
		}
	printf("\n");
}
