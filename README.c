# Pascal-s-Triangle
打印杨辉三角
#include<stdio.h>
int main(){
	int a[100][100]={0};
	int i,j,n;
	scanf("%d",&n);
	printf("    1\n");
	for(i=2;i<=n;i++){
		a[i][1]=a[i][i]=1; 
		printf("%5d",a[i][1]);
		if(n>=3){
			for(j=2;j<=i-1;j++){
				a[i][j]=a[i-1][j]+a[i-1][j-1];
				printf("%5d",a[i][j]);
			} 
		}
		printf("%5d",a[i][i]);
		printf("\n");
	}
	return 0;
}
