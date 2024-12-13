#include<stdio.h>
int main(){
	int n;
	printf("moi ban nhap so n\n");
	scanf("%d",&n);
	for(int i=1; i<=n;i++){
		if(n%i==0){
			printf("n chia het cho %d\n",i);
	}
}
return 0;
}
