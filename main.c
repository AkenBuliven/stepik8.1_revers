#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  int N;
  int i;
  scanf ("%d", &N);

  int arr[100] = {10, -93, 22, 75, 12};


  for (i = 0; i < N ; i++)
    {
      int tmp = arr[i];
      arr[i] = arr[N - 1 - i];
      arr[N - 1 - i] = tmp;
    } 
    
printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

return 0;
}