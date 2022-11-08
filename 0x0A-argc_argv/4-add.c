#include "main.h"
/**
 * 
*/
int main(int argc, char *argv[])
{
    int i, sum;

    if (argc == 1)
    {
        printf("0\n");
    }
    else
    {   
        for (i = 1; i < argc; i++)
        {
            if (isdigit(atoi(argv[i])))
            {
            sum = sum + atoi(argv[i]);
            
            }
            else
            {
                printf("Error\n");
                return (1);
            }
        }
        
    }
//printf("siz of integer is %ld\n", sizeof(i));
    return (0);
}