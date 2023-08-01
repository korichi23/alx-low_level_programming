#include "main.h"
/**
* compare - helper function
* X:first par
* Y:second par
* Return: 1 if X =Y 
* 0 otherwise
*/
int compare(char *X, char *Y)
{
        while (*X && *Y)
        {
                if (*X != *Y)
                        return (0);
                ++X;
                ++Y;
        }
        return (*Y == '\0');
}
