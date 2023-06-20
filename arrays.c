//Sophia Hostetler
//U27264415
//This program rearranges a list of arrays so the elements less than or equal to the value given by the user and the elements greater than are listed in order


#include<stdio.h>
void rearrange(int *a, int n, int insert, int *b);

int main()
{
	int n, i, x;

//prompt user to enter length of array

	printf("Enter the length of the array: ");
		scanf("%d", &n);

//create array of length inserted	

	int a[n];

//prompt user to enter array elements and for loop to read array elements

	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++)
		scanf("%d", a+i);

//prompt user to insert number

	printf("Enter the number for insertion: ");
		scanf("%d", &x);
	int b[n+1];

//call rearrange function

	rearrange(a,n,x,b);

	printf("Output: ");

//for loop to display output array
	
	for(i=0;i<n+1;i++)
	printf("%d ", *(b+i));

return 0;
}

void rearrange(int *a, int n, int insert, int *b)
{
	int pos=0;
	int i;

//for loop seeing if a number is less than the inserted value

	for(i=0;i<n;i++)
	{
		if(*(a+i)<=insert)
		{
			*(b+pos)= *(a+i);
			pos++;
		}
	}
	
	*(b+pos)=insert;
	pos++;

//for loop seeing is a number is greater than the inserted value

	for(i=0;i<n;i++)
	{
		if(*(a+i)>insert)
		{
			*(b+pos)= *(a+i);
			pos++;
		}
	}
}
