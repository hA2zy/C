//파스칼 삼각형의 높이를 입력받아 출력하는 코드 (단, 직각삼각형으로)

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


//배열 1 형성평가

//두 개의 정수를 입력받아서 작은 수부터 큰 수까지의 구구단을 차례대로 출력을 하는 코드

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
		printf("== %d단 ==\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}


//그냥 출력을 하는 코드

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


//1부터 전달을 받은 수까지의 합을 구하는 코드

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


//자연수를 받아서 사각형을 출력하는 코드

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


//두 개의 정수를 입력받아 큰 수의 제곱에서 작은 수의 제곱을 뺸 결과값을 출력하는 코드

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