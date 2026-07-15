#include<stdio.h>

float add(float a, float b){
	return a+b;
}

float sub(float a, float b){
	return a-b;
}

int main(){

	//while(1){
	int a,b;
	char c;
	printf("Enter two nums: ");
	scanf("%d %d",&a,&b);
	printf("Enter operator:");
	scanf("%c",c);
	switch(c){
		case '+':
			printf("%f",add(a,b));
			break;
		case '-':
			printf("%f",sub(a,b));
			break;
		default:
			printf("Invalid");
			break;
	}
	
	return 0;

}
