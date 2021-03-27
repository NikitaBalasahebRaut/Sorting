//program to perform merge sorting\n

#include<stdio.h>
#include<stdlib.h>

void Merge(int arr[],int lb, int iMid, int ub)
{
	int i = lb;
	int j = iMid+1;
	int k = lb;
	int brr[ub-iMid];
	
	while(i <= iMid && j <= ub)
	{
		if(arr[i] <= arr[j])
		{
			brr[k] = arr[i];
			i++;
		}
		else
		{
			brr[k] = arr[j];
			j++;
		}
		k++;
       }
	
	if(i > iMid)
	{
		while(j <= ub)
		{
			brr[k] = arr[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i <= ub)
		{
			brr[k] = arr[i];
			j++;
			k++;
		}
	}
	
	for(k = lb; k <= ub; k++)
	{
		arr[k] = brr[k];
	}
}

void MergeSort(int arr[],int lb,int ub)
{
	int iMid = 0;
	
  if(lb < ub)
  {
	 iMid = (lb + ub)/2;

     MergeSort(arr,lb,iMid);
     MergeSort(arr,iMid+1,ub);

    Merge(arr,lb,iMid,ub);	 
  }
}

int main()
{
  int iSize = 0;
  int i = 0;
  
  printf("Enter the size of the array\n");
  scanf("%d",&iSize);
  int arr[iSize];
  
  printf("Enter the elements of the array\n");
  for(i = 0; i < iSize; i++)
  {
     scanf("%d",&arr[i]);
  }
   
  printf("Entered data is\n");
  for(i = 0; i < iSize; i++)
  {
     printf("%d \n",arr[i]);
  }
  
  MergeSort(arr,0,iSize-1);
  
  printf("\n Array after complete sorting\n");
  for(i = 0; i < iSize; i++)
  {
     printf("%d \t",arr[i]);
  }

return 0;
}