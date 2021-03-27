//program to perform selection sort

#include<stdio.h>

void SelectionSort(int arr[],int iSize)
{
  int pass = 0;
  int j = 0;
  int i_Min = 0;
  int temp = 0;
  int no = 0;
  int k = 0;
  
  for(pass = 0; pass < iSize-1; pass++)
  {
	  i_Min = pass;
	  
	  for(j = pass+1; j < iSize; j++)
	  {
		if(arr[i_Min] > arr[j])
		{
             i_Min = j;
		}			
	  }
	  
	  if(arr[pass] != arr[i_Min])
	  {
		  temp = arr[pass];
		  arr[pass] = arr[i_Min];
		  arr[i_Min] = temp;
	  }
	  
	  no = pass+1;
	printf("\n array after pass %d :- \t",no);
	for(k = 0; k < iSize; k++)
	{
		printf("%d\t",arr[k]);
	}
	printf("\n");
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
  
  SelectionSort(arr,iSize);
  
  printf("\n Array after complete sorting\n");
  for(i = 0; i < iSize; i++)
  {
     printf("%d \t",arr[i]);
  }

return 0;
}

/*
output

Enter the size of the array
5
Enter the elements of the array
89
41
25
36
10
Entered data is
89
41
25
36
10

 array after pass 1 :-  10      41      25      36      89

 array after pass 2 :-  10      25      41      36      89

 array after pass 3 :-  10      25      36      41      89

 array after pass 4 :-  10      25      36      41      89

 Array after complete sorting
10      25      36      41      89

*/