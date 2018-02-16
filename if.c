#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d",&i);
    if(i>=90)
        {
        printf("A");
        }else{
            if(i>=80)
            {
            printf("B");
            }else{
                if(i>=70)
                    {
                    printf("C");
                    }else{
                        if(i>=60)
                            {
                            printf("D");
                            }else{
                                printf("E");
                                }
                            }
                        }
                    }
    printf("\nHello world!\n");
    return 0;
}
