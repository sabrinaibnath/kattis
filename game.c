#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter the number of row and column:");
	scanf("%d %d",&r,&c);
	char k[r][c];


	for( i=0;i<r;i++){
			scanf("%s",k[i]);
	
	}

	int current_row=0,current_col=0,moves=0;
	while(1){
		char direction=k[current_row][current_col];
		if(direction=='T'){
			printf("%d\n",moves);
			break;
		}
		else if(direction=='N'){
		
		current_row--;
	}
	else if(direction=='S'){
		current_row++;
	}
	else if(direction=='W'){
		current_col--;
	}
	else if(direction=='E'){
		current_col++;
	}
	if(current_row<0 || current_row>=r || current_col<0 || current_col>=c){
		printf("out");
		break;
	}
	if(++moves>r*c){
		printf("Lost\n");
		break;
	}
	}
	return 0;
}
