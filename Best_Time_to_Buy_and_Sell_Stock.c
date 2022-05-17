#include <stdio.h>
#include<limits.h>

int maxProfit(int *arr, int n) {

  int max_sp[n];
  int maximum = INT_MIN;
  for (int i = n - 1; i >= 0; i--) {
      if (arr[i] > maximum) {
         maximum = arr[i];
         max_sp[i] = INT_MIN;
      } 
      else {
         max_sp[i] = maximum;
      }
  }

  int profit = 0;
  for (int i = 0; i < n; i++) {

    if (max_sp[i] != INT_MIN && profit <(max_sp[i] - arr[i])) {
      profit = max_sp[i] - arr[i];
   }

  }
  return profit;
}

int main() {

   int n;
   scanf("%d", &n);

   int arr[n];

   for(int i=0; i<n; i++)
   scanf("%d", &arr[i]);

   // Calculating the max profit
   int ans = maxProfit(arr, n);

   // Print the answer
   printf("%d", ans);
   return 0;
}