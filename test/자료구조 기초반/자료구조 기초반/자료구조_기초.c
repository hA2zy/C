//삽입 정렬

//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void insertion_sort(int arr[], int n) {
//	int key, i, j;
//	for (i = 1; i < MAX_SIZE; i++) {
//		key = arr[i];
//		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
//			arr[j + 1] = arr[j];
//		}
//		arr[j + 1] = key;
//	}
//
//}
//
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100;
//	}
//	insertion_sort(arr, n);
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void selection_sort(int arr[], int n) {
//	int least, tmp;
//	for (int i = 0; i < n - 1; i++) {
//		least = 1;
//		for (int j = i + 1; j < n; j++) {
//			if (arr[least] > arr[j])
//				least = j;
//		}
//		tmp = arr[i];
//		arr[i] = arr[least];
//		arr[least] = tmp;
//	}
//}
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100; 
//	}
//	selection_sort(arr, n);
//	//정렬된 배열 출력
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void Bubble_sort(int arr[], int n) {
//	int temp;
//	for (int i = n - 1; i >= 1; i--) {
//		for (int j = 0; j <= i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100;
//	}
//
//	Bubble_sort(arr, n);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void selection_sort(int arr[], int n) {
//	int least, tmp;
//	for (int i = 0; i < n - 1; i++) {
//		least = i;
//		for (int j = i + 1; j < n; j++) {
//			if (arr[least] > arr[j]) {
//				least = j;
//			}
//		}
//		tmp = arr[i];
//		arr[i] = arr[least];
//		arr[least] = tmp;
//	}
//}
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100; 
//	}
//	selection_sort(arr, n);
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void insertion_sort(int arr[], int n) {
//	int key, i, j;
//	for (i = 1; i < MAX_SIZE; i++) {
//		key = arr[i];
//		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
//			arr[j + 1] = arr[j];
//		}
//		arr[j + 1] = key;
//	}
//}
//
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100;
//	}
//
//	insertion_sort(arr, n);
//
//	for (int i = 0; i <= n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void insertion_sort(int arr[], int n) {
//	int key, i, j;
//	for (i = 1; i < MAX_SIZE; i++) { // i가 1부터 시작하는 것에 유의
//		key = arr[i];
//		for (j = i - 1; j >= 0 && arr[j] > key; j--) // key 값의 위치 찾기
//			arr[j + 1] = arr[j];
//		arr[j + 1] = key; // key 값 삽입
//	}
//}
//
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100;
//	}
//	insertion_sort(arr, n);
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void Bubble_sort(int arr[], int n) {
//	int temp;
//	for (int i = n - 1; i >= 1; i--) {
//		for (int j = 0; j <= i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100;
//	}
//
//	Bubble_sort(arr, n);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void selection_sort(int arr[], int n) {
//	int least, temp;
//	for (int i = 0; i < n - 1; i++) {
//		least = i;
//		for (int j = i + 1; j < n; j++) {
//			if (arr[least] > arr[j]) {
//				least = j;
//			}
//		}
//		temp = arr[i];
//		arr[i] = arr[least];
//		arr[least] = temp;
//	}
//}
//int main() {
//	srand(time(NULL)); // 씨드 변경 함수
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100; // 랜덤값 반환 함수
//	}
//	selection_sort(arr, n);
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}