#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   int hour1,mim1,sec1,hour2,mim2,sec2,finhour,finmim,finsec,time;

    printf("�п�J�_�l�ɶ��G");

    scanf("%d:%d:%d", &hour1, &mim1, &sec1);

    printf("�п�J�����ɶ��G");

    scanf("%d:%d:%d", &hour2, &mim2, &sec2); 

    finhour = hour1-hour2;

    finmim  = mim1-mim2;

    finsec  = sec1-sec2;

	finhour = abs(finhour);

    finmim = abs(finmim);

    finsec = abs(finsec);

    time = finhour * 3600 + finmim * 60 + finsec;

    printf("\n��Ӯɶ����j��Ƭ�: %d\n", time);

    system("pause");

    return 0;

}
