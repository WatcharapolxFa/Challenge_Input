#include<stdio.h>
#include<math.h>
int num1 = 0, num2 = 0, number = 0, sumavg = 0;   // In put Number 

float average = 0, sum = 0, nSum = 0, sumx = 0, sumz = 0, SD = 0, nsumSD = 0;   // SD = Standard Deviation 


float Average(float xsum, float xnsum) // xsum = sum xnsum = nsum
{

    float AVG;
    AVG = xsum / xnsum;


    return AVG; //AVG put to Average()
}


float standardDeviation(float xnumber, float nSumm)
{
    float ans;
    ans = sqrt((xnumber / nSumm - 1));


    return ans;


}



int main()
{

    if (scanf("%d %d", &num1, &num2))
    {
        if (num1 < num2)
        {
            number = num1;
            for (;num1 <= num2; num1++)
            {
                printf(" %d ", num1);
                sum = sum + num1;
                nSum = nSum + 1;
            }

            average = Average(sum, nSum);
            printf("\n Average= %.1f ", average);


            for (;number <= num2; number++)
            {
                sumz = (number - average) * (number - average);
                sumx = sumx + sumz;
                nsumSD = nsumSD + 1;
            }
            printf("\n Standard Deviation= %.2f %.2f ", nsumSD, SD);
            SD = standardDeviation(sumx, nsumSD);
            printf("\n Standard Deviation= %.2f ", SD);
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
