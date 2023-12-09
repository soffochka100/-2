#include "catcafe.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void search(catcafe *arr, int n)
{
	int key;
	printf("Поиск:\n 1.Название\n 2.Рейтинг\n 3.Цена за час\n");
	scanf("%d", &key);
	switch(key)
	{
		case 1:{
			char key1[40];
			int found = 0;
			printf("Совпадение найдено: ");
			scanf("%s",key1);
			for(int i = 0; i<n; i++)
			{
				if(!strcmp(arr[i].name,key1))
				{
					printf("Совпадение найдено:\n Название: %s\n Рейтинг: %d\n Цена за час: %d\n", arr[i].name, arr[i].rating, arr[i].price);
					found = 1;
				}

			}
			if (!found) printf("Совпадений не найдено\n");
			break;
		}
		case 2:{
			double key2;
			int found = 0;
			printf("Введите рейтинг: ");
			scanf("%lf",&key2);
			for(int i = 0; i<n; i++)
			{
				if(arr[i].rating == key2)
				{
					printf("Совпадение найдено:\n Название: %s\n Р Рейтинг: %d\n Цена за час: %d\n", arr[i].name, arr[i].rating, arr[i].price);
					found = 1;
				}
			}
			if (!found) printf("Совпадений не найдено\n");
			break;
		}
		case 3:{
			double key3;
			int found = 0;
			printf("Введите за час: ");
			scanf("%lf",&key3);
			for(int i = 0; i<n; i++)
			{
				if(arr[i].price == key3)
				{
					printf("Совпадение найдено:\n Название: %s\n Рейтинг: %d\n Цена за час: %d\n", arr[i].name, arr[i].rating, arr[i].price);
					found = 1;
				}
			}
			if (!found) printf("Совпадений не найдено\n");
			{while((getchar())!='\n');	
				return 0;}
			break;
		}
		default:
			break;
	}
	printf("\n");
}
