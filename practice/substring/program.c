#include<stdio.h>
#define MAXLENGTH 10000
int main(void)
{
        char source[MAXLENGTH] = "\0";
        char target[MAXLENGTH] = "\0";
        int tempInd[MAXLENGTH] = {0};
        char c;
        int i,j,k;
        for(i=0;(c = getchar()) != '\n';i++)
        {
                source[i] = c;
        }

        source[i] = '\0';
        int sourceLength = i;

        for(i=0;(c = getchar()) != '\n';i++)
        {
                target[i] = c;
                tempInd[i] = i;
                for(k = 0;k <= i;k++)
                {
                        if( tempInd[k] != -1 && i - tempInd[k] >= sourceLength)
                        {
                                continue;
                        }
                        if( source[i - tempInd[k]] != target[i])
                        {
                                tempInd[k] = -1;
                                continue;
                        }
                }
        }

        int isFirst = 1;

        for(j=0;j < i - sourceLength + 1;j++)
        {
                if(tempInd[j]!=-1)
                {
                        if(isFirst)
                        {
                                isFirst = 0;
                        }
                        printf("%d ",tempInd[j]);
                }
        }
        if(isFirst)
        {
                printf("-1 ");
        }
        return 0;
}

