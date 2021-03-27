//program to demonstrate the concept of quick sort

#include<stdio.h>

int partion(int arr[],int lb, int ub)
{
   int pivote = arr[lb];
   int iStart = lb;
   int iEnd = ub;
   int temp = 0;
   
    while(iStart < iEnd)
	{
              while(arr[iStart] <= pivote)
		{
			iStart++;
		}
		while(arr[iEnd] >pivote)
		{
			iEnd--;
		}
		if(iStart < iEnd)
		{
			temp = arr[iStart];
			arr[iStart] = arr[iEnd];
			arr[iEnd] = temp;
		}
	
	}		
	temp = arr[pivote];
	arr[pivote] = arr[iEnd];
	arr[iEnd] = temp;
	
     return iEnd;
}

void QuickSort(int arr[],int lb,int ub)
{
	int mid = 0;
	
   if(lb < ub)
   {
      mid = partion(arr,lb,ub);
	  
      QuickSort(arr,lb,mid-1);
	  QuickSort(arr,mid+1,ub);
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
  
  QuickSort(arr,0,iSize-1);
  
  printf("order of sorted element\n");
  
  for(i = 0; i < iSize; i++)
  {
	  printf("%d\n",arr[i]);
  }
return 0;
}