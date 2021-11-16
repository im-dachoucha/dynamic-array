#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr, i, size, newSize;

	printf("enter the size of the array ");
	scanf("%d", &size);

	arr = calloc(size, sizeof(int));

	for(i = 0; i < size; i++){
		printf("enter the element N %d : ", i);
		scanf("%d", (arr + i));
	}

	printf("\nintergers you entered are : \n");
	for(i = 0; i < size; i++){
		printf("%d ", *(arr + i));
	}

	printf("\nenter the size you want to add ");
	scanf("%d", &newSize);

	if(newSize > 0) arr = realloc(arr, newSize * sizeof(int));

	for(i = size; i < size+newSize; i++){
		printf("enter the element N %d : ", i);
		scanf("%d", (arr + i));
	}

	printf("\nintergers you entered are : \n");
	for(i = 0; i < size + newSize; i++){
		printf("%d ", *(arr + i));
	}
}