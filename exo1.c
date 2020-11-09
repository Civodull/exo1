#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    
    printf("Entrer 10 \n");
    scanf("%d", &n);
//la boucle for

   /* for (int i =n; i >=1 ; i--)
    {
        printf("%d ",i);
    }
  */
 //la boucle while
 /*
 int i=10;
while (i>=1)
{
  printf("%d\n",i);
  i--;
}
*/
int i=10;
do
{
printf("%d\n",i);
i--;
} while (i>=1);

    return 0;
}

