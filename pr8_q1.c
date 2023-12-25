/*
Q.1 Write a Program to find the length of a string using a Pointer.
For example,
Input:
Enter any string: hello world

Output:
The length of a string is: 11
*/

#include<stdio.h>
#include<string.h>

 main(){
	int i,n;
	char a[100];
	int *ptr;
	
	printf("Enter any string : ");
	gets(a);
	
	ptr=&a;
	
	ptr=strlen(a);
	
	printf("String langth is : %d",ptr);
}
