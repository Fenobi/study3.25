#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char c='\72', d;
//	printf("%c", c);
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	float r;
//	float pai = 3.14195;
//	float C, S;
//	printf("������Բ�İ뾶��>");
//	scanf("%f", &r);
//	C = 2.0 * pai * r;
//	S = (4.0 / 3.0) * pai * (r * r * r);
//	printf("\n�ܳ�=%.2f,���=%.2f\n", C, S);
//	return 0;
//}

//int main()
//{
//	float a, b, c; scanf("%f %f %f", &a, &b, &c);
//	printf("��=%.2f ƽ��ֵ=%.2f", a + b + c, (a + b + c) / 3);
//	return 0;
//}

int search(int* nums, int numsLen, int target) {
    // write code here
    int left = 0;
    int right = numsLen - 1;
    int mid = 0;
    while (right >= left)
    {
        mid = (left + right) / 2;
        if (*(nums + mid) > target)
        {
            right = mid - 1;
        }
        else if (*(nums + mid) < target)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}