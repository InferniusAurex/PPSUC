#include <stdio.h>

int ans;
int main()
{
while (true)
  {
      scanf("%d", &ans);
      if (ans >= 0)
      {
          continue;
      }
      else
      {
          break;
      }
  }

 int i;
    while (i < ans)
    {
        printf("meow\n");
        i++;
    }
    return 0;
}

// Use control-c to stop