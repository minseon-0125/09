#include <stdio.h>

int main(void)
{
    int i;
    int score[5];
    score[0]=100;
    score[1]=30;
    score[2]=60;
    score[3]=90;
    score[4]=30;

    for (i=0; i<5; i++)
    printf("score[%d]=%d\n", i, score[i]);

    return 0;
}

