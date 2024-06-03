#include<stdio.h>
#include<stdlib.h>
int main()
{
	 long long int number1,number2,difference;
	 
	 while(scanf("%lld %lld",&number1,&number2)==2){
		 difference=number1-number2;
		 printf("%lld",abs(difference));
	 }

	 return 0;


}
