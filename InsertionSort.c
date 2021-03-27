//sort list using insertion sort
//1 consider first element is sorted
//2 second element is consider as key
//3 compare all element of list to first element

#include<stdio.h>

void InsertionSort(int arr[],int iSize)
{
  int pass = 0;
  int j = 0;
  int no = 0;
  int key = 0;
  
  for(pass = 1; pass < iSize; pass++)
  {
	  key = arr[pass];
	  j = pass-1;
	 
	 while((j >= 0) && (arr[j] > arr[pass]))   //check j index and value
	 {
		 arr[j+1] = arr[j];
		 j--;                   //j index = 0
	 }
	 
        arr[j+1]  = key;              //copy value from key to arr[j+1]  -->at index 1(index increment of j then copy value)
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
  
  InsertionSort(arr,iSize);
  
  printf("\n Array after complete sorting\n");
  for(i = 0; i < iSize; i++)
  {
     printf("%d \t",arr[i]);
  }

return 0;
}

/*output

D:\ProgramTopicWise\DS>myexe
Enter the size of the array
4
Enter the elements of the array
12
45
78
91
Entered data is
12
45
78
91

 Array after complete sorting
12      45      78      91

*/