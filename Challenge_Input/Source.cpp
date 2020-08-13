#include<stdio.h>
#include<math.h>
int num1 = 0, num2 = 0;   // In put Number 

float average = 0, SD = 0, sum = 0, nSum = 0;   // SD = Standard Deviation


float Average(float a, float b)
{

    float AVG;
    AVG = a / b;


    return AVG;
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
    scanf("%d %d", &num1, &num2);
    if (num1 < num2)
    {
        for (;num1 <= num2; num1++)
        {
            printf("%d ", num1);
            sum = sum + num1;
            nSum = nSum + 1;
        }
        average = Average(sum, nSum);
        printf("%.2f ", average);
    }


    return 0;
}
