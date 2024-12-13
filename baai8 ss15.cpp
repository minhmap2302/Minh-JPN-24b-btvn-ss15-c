#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(){
	char a[]="minh gio tai";
	int leng = strlen(a);
	for(int i = 0;i<leng;i++){
		if(i==0||a[i-1]==' '){
			if(a[i]>='a'&&a[i]<='z'){
				a[i]=toupper(a[i]);
			}
		}
	}
	printf("%s",a);
	return 0;
}
