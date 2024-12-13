#include<stdio.h>
int main(){
	int n, isprime;
	printf("moi ban nhap vao so n");
	scanf ("%d",&n);
	if(n==2){
		printf(" so %d la so nguyen to\n",n);
		}
	for(int i=2; i<n; i++){
		if(n%i==0){
			isprime=isprime+1;
		}
		
	}
	if (isprime==0){
			   	printf(" so %d la so nguyen to\n",n);
			}
			else 
				printf(" so %d khong phai so nguyen to\n",n);
	return 0;
}
