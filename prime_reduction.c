#include<stdio.h>
int prime(int n){
	if(n<=1){
		return 0;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main()
{
	int number,count,x=0;
	printf("enter your number:");
	scanf("%d",&number);

	int result=prime(number);
	printf("%d\n",result);
	

	if(result==0){
		for(int i=2;i<number;i++){
			if(number%i==0){
				count=0;
				for(int j=2;j<i/2;j++){
					if(i%j==0){
						count++;
						break;
					}
				}
				if(count==0){
					x=x+i;
				}


			}
		}
	}





	return 0;
}

