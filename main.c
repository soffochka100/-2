#include <stdio.h>
#include <stdlib.h>
#include "catcafe.h"
int main(){
	catcafe * arr = NULL;
	int n = 0;
	int stop = 0;
	while(stop != 1){
		int keybd;
		printf("1 - Р—Р°РіСЂСѓР·РёС‚СЊ Р±Рґ, 2 - Р’С‹РІРµСЃС‚Рё Р±Рґ, 3 - РџРѕРёСЃРє \n");
		scanf("%d", &keybd);
		switch(keybd){
			case 1:{
				int keybd2;
				printf("1 - РЎРѕР·РґР°С‚СЊ, 2 - РџСЂРѕС‡РёС‚Р°С‚СЊ\n");
				scanf("%d", &keybd2);
			if(keybd2 == 1){
				create(&arr, &n);
				if(!arr)
					printf("РћС€РёР±РєР° СЃРѕР·РґР°РЅРёСЏ \n");
				else
					printf("РЎРѕР·РґР°РЅРЅРѕ %d СЌР»РµРјРµРЅС‚РѕРІ \n", n);
				write(arr, n);
			}
			else{
				read(&arr, &n);
				if(!arr)
					printf("РћС€РёР±РєР° С‡С‚РµРЅРёСЏ \n");
				else
					printf("Р—Р°РіСЂСѓР¶РµРЅРЅРѕ %d СЌР»РµРјРµРЅС‚РѕРІ \n", n);
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
