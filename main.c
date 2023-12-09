#include <stdio.h>
#include <stdlib.h>
#include "catcafe.h"
int main(){
	catcafe * arr = NULL;
	int n = 0;
	int stop = 0;
	while(stop != 1){
		int keybd;
		printf("1 - Загрузить бд, 2 - Вывести бд, 3 - Поиск \n");
		scanf("%d", &keybd);
		switch(keybd){
			case 1:{
				int keybd2;
				printf("1 - Создать, 2 - Прочитать\n");
				scanf("%d", &keybd2);
			if(keybd2 == 1){
				create(&arr, &n);
				if(!arr)
					printf("Ошибка создания \n");
				else
					printf("Созданно %d элементов \n", n);
				write(arr, n);
			}
			else{
				read(&arr, &n);
				if(!arr)
					printf("Ошибка чтения \n");
				else
					printf("Загруженно %d элементов \n", n);
			}
				break;
			}
			case 2:{
				print(arr, n);
				break;
			}
			case 3:	
				search(arr, n);
				break;
			default:
				stop = 1;
				break;
		}
	}
	if(arr)
		free(arr);
	return 0;
}
