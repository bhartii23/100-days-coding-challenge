#include <stdio.h>
#include<stdlib.h>
void reverseArray(int arr[], int size) {
	
 int i;
 printf("reversed array : ");
 
 for(i=size-1;i>=0;i--)
 {
 	printf("%d ",arr[i]);
 }
 
}

int linearSearch(int arr[], int size, int item) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == item) {
            return i; // Return the index if item is found
        }
    }
    return -1; // Return -1 if item is not found
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findMax(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int main() {
    int choice, size, item,result;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
//int *arr=(int*)malloc(size * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
while(1)
{
    printf("Choose operation:\n");
    printf("1. Reverse Array\n");
    printf("2. Linear Search\n");
    printf("3. Bubble Sort\n");
    printf("4. Find Max and Min\n");

    scanf("%d", &choice);

    if(choice==1) {
        
            reverseArray(arr, size);
    }
    else if(choice==2)
    {
            printf("Enter the item to search: ");
            scanf("%d", &item);
            int result = linearSearch(arr, size, item);
            if (result != -1) {
                printf("item %d found at index %d\n", item, result);
            } else {
                printf("item %d not found in the array\n", item);
            }
    }

    else if (choice==3)
    {
            bubbleSort(arr, size);
            printf("Array after Bubble Sort:\n");
            for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
} 
        else if(choice==4){
            printf("Max value : %d\n", findMax(arr, size));
            printf("Min value : %d\n", findMin(arr, size));
			}
        else{
            printf("wrong choice\n");
    }

    return 0;
}
}