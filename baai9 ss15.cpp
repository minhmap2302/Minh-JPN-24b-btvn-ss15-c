#include <stdio.h>
#include <string.h>
int main() {
    char a[]="Minh Con Nho";
    int length = strlen(a);
    printf("hay nhap ky tu ban muon xoa : ");
    char kyTu;
    scanf("%c",&kyTu);
    for(int i=0;i<length;i++){
        if(a[i]==kyTu){
            
            for(int j=i;j<length;j++){
                a[j]=a[j+1];
            }
        }
    }
    printf("%s",a);
    return 0;
}
