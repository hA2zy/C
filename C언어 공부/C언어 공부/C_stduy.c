//�Ľ�Į �ﰢ���� ���̸� �Է¹޾� ����ϴ� �ڵ� (��, �����ﰢ������)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main() {
    int i, j, num, array[10][10] = { 0 };

    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        for (j = 0; j <= i; j++) {
            if (i == 0 || j == 0) {
                array[i][j] = 1;
            }
            else {
                array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
            }
        }
    }

    if (i == j || j == 0) {
        array[i][j] = 1;
    }
    else {
        array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
    }

    for (i = num - 1; i >= 0; i--) {
        for (j = 0; j < num; j++) {
            if (array[i][j] != 0) {
                printf("%d ", array[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}


//�迭 1 ������

//�� ���� ������ �Է¹޾Ƽ� ���� ������ ū �������� �������� ���ʴ�� ����� �ϴ� �ڵ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mul(int x, int y);

int main()
{
	int n1, n2;

	scanf("%d %d", &n1, &n2);

	mul(n1, n2);

	return 0;
}

int mul(int x, int y) {
	for (int i = x; i <= y; i++) {
		printf("== %d�� ==\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}


//�׳� ����� �ϴ� �ڵ�

#define _CRT_SEURE_NO_WARNINGS
#include <stdio.h>

void num();

int main()
{

	num();

	return 0;
}

void num() {
	printf("first\n");
	printf("@@@@@@@@@@\n");
	printf("second\n");
	printf("@@@@@@@@@@\n");
	printf("third\n");
	printf("@@@@@@@@@@\n");
}


//1���� ������ ���� �������� ���� ���ϴ� �ڵ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int plus(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int main() {

	int num;

	scanf("%d", &num);

	printf("%d", plus(num));;

	return 0;
}


//�ڿ����� �޾Ƽ� �簢���� ����ϴ� �ڵ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void x(int n);

int main()
{
	int num;

	scanf("%d", &num);

	x(num);

	return 0;
}

void x(int n) {
	int num = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", num++);
		}
		printf("\n");
	}
}


//�� ���� ������ �Է¹޾� ū ���� �������� ���� ���� ������ �A ������� ����ϴ� �ڵ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void num(int n1, int n2);

int main()
{
	int x, y;

	scanf("%d %d", &x, &y);

	num(x, y);

	return 0;
}

void num(int n1, int n2) {
	int sum1 = 0, sum2 = 0;

	sum1 = n1 * n1;
	sum2 = n2 * n2;

	if (sum1 > sum2) {
		printf("%d", sum1 - sum2);
	}
	else {
		printf("%d", sum2 - sum1);
	}
}