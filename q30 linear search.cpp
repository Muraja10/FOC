#include <stdio.h>
using namespace std;
int main() {
   int arr[100], n, x, i;
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);
   printf("Enter the elements of the array:\n");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   printf("Enter the value to search for: ");
   scanf("%d", &x);
   for (i = 0; i < n; i++) {
      if (arr[i] == x) {
         printf("Element found at index %d", i);
         break;
      }
   }
   if (i == n) {
      printf("Element not found in array");
   }
   return 0;
}
