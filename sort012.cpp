#include <bits/stdc++.h> 
void sort012(int *arr, int n)

{ int low = 0, mid = 0, hi = n-1;
 while(mid<=hi)
   {

      switch(arr[mid])
      {
        case 0:
          swap(arr[low++], arr[mid++]);
          break;

         case 1:

            mid++;

            break;

         case 2:

            swap(arr[mid], arr[hi--]);

            break;

      }

   }

}
