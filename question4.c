#include <stdio.h>

int main() {
    int arr[100], n, key, i, found = 0;
    
    printf("Search for all the occurrences of an element in an integer array (positions)");

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    printf("\nElement %d found at position(s): ", key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("%d ", i );  
            found = 1;
        }
    }

    if(!found) {
        printf("\nNot found in the array.");
    }

    return 0;
}

