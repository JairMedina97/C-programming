// KR Exercise 1.6
// Verify that the expression getchar() != EOF is 0 or 1
#include <stdio.h>
#define TRUE 1
#define FALSE 0
int main()
{
    char v;
    int c;
    printf("Type a character \n");
    v = ((c = getchar()) != EOF);
    if(v == TRUE){
    printf("%i Tiene valor\n",v);
    } else {
    printf("%i No tiene valor\n",v);    
    }
    return 0;
}
