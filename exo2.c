#include<stdio.h>


int main() {
   
   int n,i=1;
/*
do
{
   printf("Entrer le nombre \n");
   scanf("%d", &n);
   i++;

} while (n<1 || n>10);
*/
/*
for (int i = 1; i <=10; i++)
{
    printf("Entrer un entier entre 1 et 10 ");
    scanf("%d", &n);
    if (n<1 || n>10)
    {
        break;
    }
    else
    {
        printf("Vous avez saisi %d\n",n);
    }break;
}*/
while (n<1 || n>10)
{
    printf("Entrer un nombre entre 1 et 10\n");
    scanf("%d", &n);
}
    return 0;
}