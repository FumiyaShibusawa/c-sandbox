#include <stdio.h>

int main()
{
    int grades[2][5];
    grades[0][0] = 80;
    grades[0][1] = 85;
    grades[0][2] = 45;
    grades[0][3] = 60;
    grades[0][4] = 64;
    grades[1][0] = 54;
    grades[1][1] = 70;
    grades[1][2] = 73;
    grades[1][3] = 23;
    grades[1][4] = 80;

    float average_for_math, average_for_phy;
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (i == 0)
                average_for_math += grades[i][j];
            if (i == 1)
                average_for_phy += grades[i][j];
        }
    }
    printf("average_for_math: %.2f\n", average_for_math / 5.0);
    printf("average_for_phy: %.2f\n", average_for_phy / 5.0);
}