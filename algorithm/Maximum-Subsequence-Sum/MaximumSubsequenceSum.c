#include<stdio.h>
void main()
{
/*01-复杂度2 Maximum Subsequence Sum （25 分）
 * Given a sequence of K integers { N1, N2 , ..., NK}. A continuous subsequence is defined to be { Ni , Ni+1 , ..., Nj  } where 1≤i≤j≤K. The Maximum Subsequence is the continuous subsequence which has the largest sum of its elements. For example, given sequence { -2, 11, -4, 13, -5, -2 }, its maximum subsequence is { 11, -4, 13 } with the largest sum being 20.
 *
 * Now you are supposed to find the largest sum, together with the first and the last numbers of the maximum subsequence.
 *
 * Input Specification:
 * Each input file contains one test case. Each case occupies two lines. The first line contains a positive integer K (≤10000). The second line contains K numbers, separated by a space.
 *
 * Output Specification:
 * For each test case, output in one line the largest sum, together with the first and the last numbers of the maximum subsequence. The numbers must be separated by one space, but there must be no extra space at the end of a line. In case that the maximum subsequence is not unique, output the one with the smallest indices i and j (as shown by the sample case). If all the K numbers are negative, then its maximum sum is defined to be 0, and you are supposed to output the first and the last numbers of the whole sequence.
 * */




#include<stdio.h>
int main()
{ 
    int maxNum=0;
    scanf("%d",&maxNum);
    int i=0;
    int maxResult = -1;
    int startNumber = -1;
    int endNumber = -1;
    int newNumber;
    scanf("%d",&newNumber);
    int tempStartNumber = newNumber;
    int tempEndNumber = newNumber;
    int tempInt = 0;
    if(newNumber>0)
    {
        maxResult = newNumber;
    }
    for(i=0;i<maxNum;i++)
    {
        if(tempInt<0)
        {
            if(newNumber>0||(tempStartNumber<0&&newNumber==0))
            {
                tempStartNumber = newNumber;
            }
            tempInt = 0;
        }
        tempInt+=newNumber;

        tempEndNumber = newNumber;

        if(tempInt>maxResult)
        {
            startNumber = tempStartNumber;
            endNumber = tempEndNumber;
            maxResult = tempInt;
        }
        if(i!=maxNum-1)
        {
            scanf("%d",&newNumber);
        }
    }

    if(startNumber<0)
    {
        startNumber = tempStartNumber;
    }
    if(endNumber<0)
    {
        endNumber = tempEndNumber;
    }
    if(maxResult<0)
    {
        maxResult=0;
    }

    printf("%d %d %d\n",maxResult,startNumber,endNumber);

    return 0;

}

}
