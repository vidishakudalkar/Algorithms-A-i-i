#include<stdio.h>

void main()
{
	int A[20];
	int size,i,index=-1;
	int low,high,mid;
	printf("Enter length of array : "); //Input array length
	scanf("%d", &size);

	printf("Enter elements of array: ");// Input array elements

	for (i = 1 ; i <= size; i++)
	{
		scanf("%d", &A[i]);
	}
	low=1;
	high=size;
	
	while(low<=high)
	{
		mid = (low+high) / 2;
		if (A[mid] == mid)//Check if key is mid
		{
			index = mid;
			break;
		}
		else if (A[mid] > mid)//Check if key lies in left 
			high= mid-1;
		else if (A[mid] < mid)//Check if key lies in right
			low = mid+1;
	}
	
	
	if (index == -1)
		printf("No such index \n");
	else
		printf("Index is %d\n",index);
}

