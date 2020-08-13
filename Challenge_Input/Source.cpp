#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
int num1 = 0, num2 = 0;   // In put Number 

float average = 0, SD = 0, sum = 0, nSum = 0;   // SD = Standard Deviation 


float Average(float xsum, float xnsum) // xsum = sum xnsum = nsum
{

    float AVG;
    AVG = xsum / xnsum;


    return AVG; //AVG put to Average()
}

/*
float standardDeviation(float SD)
{
  sqrt();


 return


}
*/


int main()
{

    if (scanf_s("%d %d", &num1, &num2))
    {
        if (num1 < num2)
        {
            for (;num1 <= num2; num1++)
            {
                printf(" %d ", num1);
                sum = sum + num1;
                nSum = nSum + 1;
            }
            average = Average(sum, nSum);
            printf("\n Average= %.1f ", average);
        }
        else if (num1 > num2)
        {
            for (;num1 >= num2; num1--)
            {
                printf(" %d ", num1);
                sum = sum + num1;
                nSum = nSum + 1;
            }
            average = Average(sum, nSum);
            printf("\n Average= %.1f ", average);
        }
        else
        {
            for (;num1 == num2; num1--)
            {
                printf(" %d ", num1);
                sum = sum + num1;
                nSum = nSum + 1;
            }
            average = Average(sum, nSum);
            printf("\n Average= %.1f ", average);
        }

    }
    else
    {
        printf(" Wrong In put integer number ");
    }
    return 0;
}
