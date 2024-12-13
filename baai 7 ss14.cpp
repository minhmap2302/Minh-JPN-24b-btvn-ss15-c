#include<stdio.h>
#include<string.h>
int main(){
	char m[]="Nguyen Tien Minh 23 @";
	int leng = strlen(m);
	int num = 0;
	int chara = 0;
	int spe = 0;
	for(int i=0;i<leng;i++){
			if (m[i]>='a' && m[i]<='z' ){
				chara++;
			} else if (m[i]>='A'&& m[i]<='Z'){
				chara++;
			} else if (m[i]>='1'&& m[i]<='9'){
				num++;
			}else{
				spe++;
			}
		}	
	printf("so ky tu chu la %d\n",chara);
	printf("so ky tu so la %d\n",num);
	printf("so ky tu dac biet la %d\n",spe);
	return 0;
}
