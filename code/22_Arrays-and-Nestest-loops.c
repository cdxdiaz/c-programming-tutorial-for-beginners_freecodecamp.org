#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3][2] = {
                    {1, 2},
                    {3, 4},
                    {5, 6}
                    };
    size_t i, j;

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            printf("%d, ", nums[i][j]);
        }
        printf("\n");
    }
    return (0);
}