#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s = 1, h;                    // ��ֵ�͸߶�
    int i, j;                        // ѭ������
    scanf("%d", &h);                 // �������
    printf("1\n");                   // �����һ�� 1
    for (i = 2; i <= h; s = 1, i++)         // ���� i �� 2 �����
    {
        printf("1 ");                // ��һ�� 1
        for (j = 1; j <= i - 2; j++) // ��λ�� j �ƹ���һ��ֱ�ӿ�ʼѭ��
            //printf("%d ", (s = (i - j) / j * s));
            printf("%d ", (s = (i - j) * s / j));
        printf("1\n");               // ���һ�� 1������
    }
    getchar();                       // ��ͣ�ȴ�
    return 0;
}
