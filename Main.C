#include <stdio.h>
#include <conio.h>

void deret1(int n)
{
    if(n==10){
        printf("%d ",n);
    }else{
        printf("%d ",n);
        return(deret1(n + 1));
    }
}

int main()
{
  deret1(1);
  return 0;
}