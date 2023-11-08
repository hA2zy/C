//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	int score[10];
//	int large;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &score[i]);
//	}
//
//	large = score[0];
//	for (int i = 0; i < 10; i++) {
//		if (score[i] > large) {
//			large = score[i];
//		}
//	}
//
//	printf("%d", large);
//
//	return 0;
//}
//
//2의 100승 = 126,7650,6002,2822,9401,4967,0320,5376
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n1, n2;
//	int tmp;
//	scanf("%d %d", &n1, &n2);
//	tmp = n1;
//	n1 = n2;
//	n2 = tmp;
//	printf("%d %d", n1, n2);
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n1, n2;
//	scanf("%d %d", &n1, &n2);
//	if (n1 > n2) {
//		printf("%d", n1);
//	}
//	else {
//		printf("%d", n2);
//	}
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int num;
//	int sum = 0;
//	scanf("%d", &num);
//	for (int i = 1; i <= num; i++) {
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int num;
//	scanf("%d", &num);
//	for (int i = 1; i <= num; i++) {
//		for (int j = 1; j <= num; j++) {
//			printf("%d X %d = %d\n", i, j, (i * j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//하노이 탑
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void hanoi(int n, char start, char mid, char end) {
//	if (n == 0) {
//		return;
//
//	}
//	hanoi(n - 1, start, end, mid);
//	printf("%c -> %c로 이동\n", start, end);
//	hanoi(n - 1, mid, start, end);
//}
//
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	hanoi(n, 'A', 'B', 'C');
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void selection_sort(int n) {
//	for (int i = 0; i < n - 1; i++) {
//		int index = 0; 
//		int min = 0;
//		for (int j = i; j > n; j--) {	
//			if (arr[index] > arr[j]) {
//				index = j;
//			}
//		}
//		min = arr[index];
//		arr[index] = arr[i];
//		arr[i] = min;
//
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
//	selection_sort(n);
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void insertion_sort(int arr[], int n) {
//	for (int i = 1; i < n - 1; i++) {
//		int key = arr[i];
//		int j = i - 1;
//		while (j >= 0 && arr[j] > key) {
//			arr[j + 1] = arr[j];
//			j = j - 1;
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
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//
//	insertion_sort(arr, n);
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	//정렬된 배열 출력
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void Bubble_sort(int n) {
//	for (int i = 0; i <= n - 1; i++) {
//		for (int j = 0; j <= n - 2 - i; j++) {
//			if (arr[j] > arr[j + 1]) { // arrp[]을 안해서 실행이 안됐다.ㅋ
//				int a;
//				a = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = a;
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
//	for (int i = 0; i < MAX_SIZE; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	Bubble_sort(n);
//
//	for (int i = 0; i < MAX_SIZE; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//
//int insertion_sort(int first, int gap) {
//	int i, j, key;
//	for (i = first + gap; i <= MAX_SIZE; i += gap) {
//		key = arr[i];
//		for (j = i - gap; j >= 0 && arr[j] > key; j = j - gap) {
//			arr[j + gap] = arr[j];
//		}
//		arr[j + gap] = key;
//	}
//}
//
//int shell_sort(int n) {
//	int i, gap;
//	for (gap = MAX_SIZE / 2; gap >= 1; gap = gap / 2) {
//		if (gap % 2 == 0) gap++;
//		for (i = 0; i < gap; i++) {
//			insertion_sort(i, gap);
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
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	shell_sort(n);
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//int arr[MAX_SIZE];
//int patition(int left, int right) {
//	int pivot = left;
//	int low = left + 1;
//	int high = right;
//	int tmp;
//
//	do {
//		do {
//			if (low == right) {
//				break;
//			}
//			low += 1;
//		} while (pivot > low);
//		do {
//			high -= 1;
//		} while (pivot < high);
//		if (low < high) {
//			tmp = arr[low];
//			arr[low] = arr[high];
//			arr[high] = tmp;
//		}
//	} while (low < high);
//
//		tmp = arr[high];
//		arr[high] = arr[pivot];
//		arr[pivot] = tmp;
//
//		return high;
//}
//
//void quick_sort(int left, int right) {
//	if (left < right) {
//		int q = patition(left, right);
//		quick_sort(left, q - 1);
//		quick_sort(q + 1, right);
//	}
//}
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++)
//		arr[i] = rand() % 100;
//
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//
//	quick_sort(0, n - 1);
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//
//#include<stdio.h>
//#define MAX_STACK_SIZE 100
//int stack[MAX_STACK_SIZE];
//int top = -1;
//
////포화상태 확인
//int is_full() {
//	//스택이 가득 차 있는지 검사(스택이 가득 찬 조건은 무엇일까요?)
//	return(top == MAX_STACK_SIZE - 1);
//}
//
////공백상태 확인
//int is_empty() {
//	//스택이 비어있는지 검사(스택이 비어있는 조건은 무엇일까요?)
//	return (top == -1);
//}
//
//void push(int n) {
//	// 스택이 가득 차 있다면 에러를 출력합니다.
//	// 삽입
//	if (is_full()) {
//		printf("에러에러에러\n");
//	}
//	else {
//		top++;
//		stack[top] = n;
//	}
//}
//
//int pop() {
//	// 스택이 비어 있다면 에러를 출력합니다.
//	// 삭제
//	if (is_empty()) {
//		printf("에러에러에러에러\n");
//		return -1;
//	}
//	else {
//		int value = stack[top];
//		top--;
//		return value;
//	}
//}
//
//int main() {
//	push(1);
//	push(2);
//	push(3);
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//
//	return 0;
//}
//
//#include<stdio.h>
//#define MAX_STACK_SIZE 100
//#define MAX_STRING 100
//
//struct element {
//	int student_no;
//	char name[MAX_STRING];
//	char address[MAX_STRING];
//}stack[MAX_STACK_SIZE];
//int top = -1;
//
//int is_full() {
//	return (top == MAX_STACK_SIZE - 1);
//}
//int is_empty() {
//	return (top == -1);
//}
//void push(struct element data) {
//	if (is_full) {
//		printf("에러에러에러");
//		return;
//	}
//	stack[++top] = data;
//}
//struct element pop() {
//	if (is_empty()) {
//		printf("에러에러에러에러");
//		return;
//	}
//	return stack[top--];
//}
//
//int main() {
//	struct element is = { 1305, "남궁윤교", "평택" };
//	struct element os;
//	push(is);
//	os = pop();
//	printf("학번: %d\n", os.student_no);
//	printf("이름: %s\n", os.name);
//	printf("주소: %s\n", os.address);
//	return 0;
//}
//
//#include <stdio.h>
//
//#define MAX_STACK_SIZE 100
//
//struct StackType {
//    int data[MAX_STACK_SIZE];
//    int top;
//};
//
//void init_stack(struct StackType* s)
//{
//    s->top = -1;
//}
//
//int is_empty(struct StackType* s)
//{
//    return s->top == -1;
//}
//
//int is_full(struct StackType* s)
//{
//    return s->top == MAX_STACK_SIZE - 1;
//}
//
//void push(struct StackType* s, int item)
//{
//    if (is_full(s)) {
//        printf("스택이 가득 찼습니다.\n");
//        return;
//    }
//    s->data[++s->top] = item;
//}
//
//int pop(struct StackType* s)
//{
//    if (is_empty(s)) {
//        printf("스택이 비어 있습니다.\n");
//        return -1; // 오류를 나타내기 위한 값을 반환
//    }
//    return s->data[s->top--];
//}
//
//int main(void)
//{
//    struct StackType s;
//    init_stack(&s);
//
//    push(&s, 1);
//    push(&s, 2);
//    push(&s, 3);
//
//    printf("%d\n", pop(&s));
//    printf("%d\n", pop(&s));
//    printf("%d\n", pop(&s));
//
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#define MAX_STACK_SIZE 100
//
//struct stacks {
//	char stack[MAX_STACK_SIZE];
//	int top;
//};
//
//void init_stack(struct stacks* s) {
//	s->top = -1;
//}
//
//char peek(struct stacks* s) {
//	if (is_empty(s)) printf("error");
//	else return s->stack[s->top];
//}
//
////스택과 관련된 함수 모두 작성
//
//char is_empty(struct stacks* s) {
//	return s->top == -1;
//}
//
////연산자 우선순위 결정하는 함수
//int rank(char c) {
//	if (c == '(' || c == ')')
//		return 0;
//	else if (c == '+' || c == '-')
//		return 1;
//	else if (c == '/' ||c == '*')
//		return 2;
//	else return -1;
//}
//
////중위 -> 후위
//void infix_to_postfix(char* s) {
//	struct stacks st;
//	char ch, c;
//	int length = strlen(s);
//	init_stack(&st);
//	for (int i = 0; i < length; i++) {
//		ch = s[i];
//		//연산자일때
//		//왼쪽 괄호일때 (
//		//오른쪽 괄호일때 )
//		//나머지(피연산자일때)
//		switch(ch) {
//		case '+':
//		case '-':
//		case '/':
//		case '*':
//			while (rank(peek(s)) >= rank(ch)) {
//				c = pop(s);
//				printf("%c", c);
//				push(s, ch);
//			}
//			break;
//		case '(':
//			push(s, ch);
//			break;
//		case ')':
//			c = pop(s);
//			while (c != '(') {
//				printf("%c", c);
//				c = pop(s);
//			}
//		}
//
//	}
//		
//}
//	
//
//int main() {
//	char* s = "(2+3)*4+9";
//	printf("중위표기수식 %s\n", s);
//	printf("후위표기수식 ");
//	infix_to_postfix(s);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#define MAX_SIZE 100
//
//struct stacks {
//	int stack[MAX_SIZE];
//	int top;
//};
//
//void init_stack(struct stacks* st) {
//	st->top = -1;
//}
//
//int is_empty(struct stacks* st) {
//	return st->top == -1;
//}
//
//int is_full(struct stacks* st) {
//	return st->top == MAX_SIZE - 1;
//}
//
//void push(struct stacks* st, int value) {
//	if (is_full(st)) {
//		printf("스택이 가득 찼습니다.\n");
//		return;
//	}
//	st->stack[++st->top] = value;
//}
//
//int pop(struct stacks* st) {
//	if (is_empty(st)) {
//		printf("스택이 비어 있습니다.\n");
//		return -1; 
//	}
//	return st->stack[st->top--];
//}
//
//int calc_postfix(char exp[]) {
//	struct stacks st;
//	int first, second, value;
//	int len = strlen(exp);
//	char c;
//
//	init_stack(&st);
//
//	for (int i = 0; i < len; i++) {
//		c = exp[i];
//		if (48 <= c && c <= 57) {
//			push(&st, c - '0'); 
//		}
//		else if (c == '+' || c == '-' || c == '*' || c == '/') {
//			second = pop(&st);
//			first = pop(&st);
//			if (c == '+')
//				value = first + second;
//			else if (c == '-')
//				value = first - second;
//			else if (c == '*')
//				value = first * second;
//			else if (c == '/')
//				value = first / second;
//			push(&st, value);
//		}
//	}
//	return pop(&st);
//}
//
//int main() {
//	printf("후위표기식은 : 82/3-32*+\n");
//	printf("결과값은 %d\n", calc_postfix("82/3-32*+"));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#define MAX_STACK_SIZE 100
//
//struct stacks {
//	char stack[MAX_STACK_SIZE];
//	int top;
//};
//
//void init_stack(struct stacks* st) {
//	st->top = -1;
//}
//
//int is_empty(struct stacks* st) {
//	return st->top == -1;
//}
//
//int is_full(struct stacks* st) {
//	return st->top == MAX_STACK_SIZE - 1;
//}
//
//void push(struct stacks* st, int value) {
//	if (is_full(st)) {
//		printf("스택이 가득 찼습니다.\n");
//		return;
//	}
//	st->stack[++st->top] = value;
//}
//
//int pop(struct stacks* st) {
//	if (is_empty(st)) {
//		printf("스택이 비어 있습니다.\n");
//		return -1;
//	}
//	return st->stack[st->top--];
//}
//
//int is_match(char* c) {
//	struct stacks* st;
//	char ch, open;
//	int length = strlen(c);
//	init_stack(&st);
//
//	for (int i = 0; i < length; i++) {
//		ch = c[i];
//		if (ch == '(' || ch == '{' || ch == '[') {
//			push(&st, ch);
//		}
//		else if (ch == ')' || ch == '}' || ch == ']') {
//			open = pop(&st);
//			if ((open == '(') != (ch == ')')) {
//				return 0;
//			}
//			else if ((open == '{') != (ch == '}')) {
//				return 0;
//			}
//			else if ((open == '[') != (ch == ']')) {
//				return 0;
//			}
//		}
//	}
//	
//	return is_empty(&st); //괄호 검사가 모두 정상적으로 끝나면 1반환 -> 오류 없음
//}
//
//int main() {
//	char* p = "{A[(i+1)]=0;}";
//	if (is_match(p) == 1)
//		printf("%s 괄호 검사 성공!\n", p);
//	else
//		printf("%s 괄호 검사 실패!\n", p);
//
//	return 0;
//}

//#include<stdio.h>
//#define MAX_QUEUE_SIZE 5
//
//struct Queue {
//	int data[MAX_QUEUE_SIZE];
//	int front, rear;
//};
//
//void init_queue(struct Queue* q)
//{
//	q->front = -1;
//	q->rear = -1;
//}
//
//int is_full(struct Queue* q) {
//	if (q->rear == MAX_QUEUE_SIZE - 1) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int is_empty(struct Queue* q) {
//	if (q->rear == q->front) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//void enqueue(struct Queue* q, int item) {
//	if (is_full(q)) {
//		printf("Error");
//		return;
//	}
//	else {
//		q->data[q->rear] = item;
//	}
//}
//
//int dequeue(struct Queue* q) {
//	if (is_empty(q)) {
//		printf("Error");
//		return;
//	}
//	else {
//		q->front++;
//		return q->data[q->front];
//	}
//
//}
//
//void print_queue(struct Queue* q) { // 출력 형태 만들어주는 함수
//	for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
//		if (i <= q->front || i > q->rear) {
//			printf("   |");
//		}
//		else {
//			printf("%d |", q->data[i]);
//		}
//	}
//	printf("\n");
//}
//
//int main() {
//	int n;
//	struct Queue q;
//	init_queue(&q);
//
//	enqueue(&q, 10); print_queue(&q);
//	enqueue(&q, 20); print_queue(&q);
//	enqueue(&q, 30); print_queue(&q);
//
//	n = dequeue(&q); print_queue(&q);
//	n = dequeue(&q); print_queue(&q);
//	n = dequeue(&q); print_queue(&q);
//
//	return 0;
//}

//#include<stdio.h>
//#define MAX_QUEUE_SIZE 5
//
//struct Queue {
//	int data[MAX_QUEUE_SIZE];
//	int front, rear;
//};
//
//void init_queue(struct Queue* q)
//{
//	q->front = 0;
//	q->rear = 0;
//}
//
//int is_full(struct Queue* q) {
//	if (q->front == (q->rear + 1) % MAX_QUEUE_SIZE) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int is_empty(struct Queue* q) {
//	if (q->front == q->rear) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//void enqueue(struct Queue* q, int item) {
//	if (is_full(q)) {
//		printf("Error_1");
//		return;
//	}
//	else {
//		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//		q->data[q->rear + 1] = item;
//	}
//}
//
//int dequeue(struct Queue* q) {
//	if (is_empty(q)) {
//		printf("Error_2");
//		return;
//	}
//	else {
//		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//		return q->data[q->front];
//	}
//}
//
//void print_queue(struct Queue* q) {
//	for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
//		if (i <= q->front || i > q->rear) {
//			printf("   |");
//		}
//		else {
//			printf("%d |", q->data[i]);
//		}
//	}
//	printf("\n");
//}
//
//int main() {
//	int n;
//	struct Queue q;
//	init_queue(&q);
//
//	enqueue(&q, 10); print_queue(&q);
//	enqueue(&q, 20); print_queue(&q);
//	enqueue(&q, 30); print_queue(&q);
//
//	n = dequeue(&q); print_queue(&q);
//	n = dequeue(&q); print_queue(&q);
//	n = dequeue(&q); print_queue(&q);
//
//	return 0;
//}

//#include<stdio.h>
//#define MAX_QUEUE_SIZE 5
//
//struct Queue {
//	int data[MAX_QUEUE_SIZE];
//	int front, rear;
//};
//
//void init_queue(struct Queue* q) {
//	q->front = q->rear = 0;
//}
//
//int is_empty(struct Queue* q) {
//	if (q->rear == q->front) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int is_full(struct Queue* q) {
//	if (q->front == (q->rear + 1) % MAX_QUEUE_SIZE) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//void print_deque(struct Queue* q) {
//	int i = q->front;
//	if (!is_empty(q)) {
//		while (i != q->rear) {
//			i = (i + 1) % MAX_QUEUE_SIZE;
//			printf("%d |  ", q->data[i]);
//		}
//		printf("\n");
//	}
//}
//
////원형큐 삽입과 동일 enqueue
//void add_rear(struct Queue* q, int item) {
//	if (is_full(q))	printf("포화상태\n");
//	else {
//		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//		q->data[q->rear] = item;
//	}
//}
//
////원형큐의 삭제 함수와 동일 dequeue
//int delete_front(struct Queue* q) {
//	if (is_empty(q)) {
//		printf("공백상태\n");
//	}
//	else {
//		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//		return q->data[q->front];
//	}
//}
//
//void add_front(struct Queue* q, int item) {
//	if (is_full(q)) {
//		printf("포화상태\n");
//	}
//	else {
//		q->data[q->front] = item;
//		q->front = (q->front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//	}
//}
//
//int delete_rear(struct Queue* q) {
//	int val;
//	if (is_empty(q)) {
//		printf("공백상태\n");
//	}
//	else {
//		val = q->data[q->rear];
//		q->rear = (q->rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//		return val;
//	}
//}
//
//int main() {
//	struct Queue q;
//	init_queue(&q);
//	add_rear(&q, 10);	print_deque(&q);
//	add_front(&q, 20);	print_deque(&q);
//	add_rear(&q, 30);	print_deque(&q);
//
//	delete_front(&q);	print_deque(&q);
//	delete_rear(&q);	print_deque(&q);
//
//	return 0;
//}

//#include<stdio.h>
//#define MAX_LIST_SIZE 5
//
//struct ArrayListType {
//	int array[MAX_LIST_SIZE]; //리스트로 사용할 배열 정의
//	int size;  // 현재 리스트에 저장된 항목들의 개수
//};
//
//void init_list(struct ArrayListType* L) {
//	L->size = 0;
//}
//
//int is_full(struct ArrayListType* L) {
//	if (L->size == MAX_LIST_SIZE) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int is_empty(struct ArrayListType* L) {
//	if (L->size == 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//void print_list(struct ArrayListType* L) {
//	for (int i = 0; i < L->size; i++) {
//		printf("%d->", L->array[i]);
//	}
//	printf("\n");
//}
//
//void insert_last(struct ArrayListType* L, int item) {
//	if (is_full(L)) {
//		printf("포화상태\n");
//	}
//	else {
//		L->array[L->size++] = item;
//	}
//}
//
//void insert(struct ArrayListType* L, int pos, int item) {
//	if (is_full(L)) printf("포화상태\n");
//	else if (!is_full(L) && pos >= 0 && pos <= L->size) {
//		for (int i = L->size - 1; i >= pos; i--) {
//			L->array[i + 1] = L->array[i];
//		}
//		//원하는 자리에 item 삽입
//		L->array[pos] = item;
//		//리스트 배열에 들어간 항목 한개 증가
//		L->size++;
//	}
//	else printf("위치오류\n"); // 경우의 수3
//}
//
//int delete(struct ArrayListType* L, int pos) {
//	int item;
//	if (is_empty(L)) { //경우의 수1
//		printf("공백상태\n");
//		return 0;
//	}
//	else if (pos < 0 || pos >= L->size) { //pos가 어떤 범위에 있을 때 오류가 날까요? (경우의 수2)
//		printf("위치오류\n");
//	}
//	item = L->array[pos]; // 경우의 수3
//	//한칸씩 앞으로 당기기
//	for (int i = pos; i < L->size - 1; i++) {
//		L->array[i] = L->array[i + 1];
//	}
//	//리스트 배열에 들어간 항목 한개 감소
//	L->size--;
//	return item;
//}
//
//int main() {
//	struct ArrayListType list;
//
//	init_list(&list);
//	insert(&list, 0, 10);	print_list(&list);
//	insert(&list, 0, 20);	print_list(&list);
//	insert(&list, 0, 30);	print_list(&list);
//	insert_last(&list, 40);	print_list(&list);
//	delete(&list, 0);	print_list(&list);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Listnode {
//	int data;
//	struct Listnode* link;
//};
//
//int insert_first(struct Listnode* head,int value) {
//	struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
//
//	p->data = value;
//	p->link = head;
//	head = p;
//
//	return head;
//}
//
//struct Listnode* insert(struct Listnode* head, struct Listnode* pre, int value) {
//	struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
//	p->data = value;
//	p->link = pre->link;
//	pre->link = p;
//
//	return head;
//}
//
//struct Listnode* delete(struct Listnode* head, struct Listnode* pre) {
//	struct Listnode* removed = pre->link;
//	pre = removed->link;
//	free(removed);
//	return head;
//}
//
//struct Listnode* delete_first(struct Listnode* head) {
//	struct Listnode* removed = head;
//	head = head->link;
//	free(removed);
//	return head;
//}
//
//int main() {
//	struct Listnode* head = NULL;
//
//	head = (struct Listnode*)malloc(sizeof(struct Listnode));
//
//	head->data = 10;
//	head->link = NULL;
//
//	struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
//
//	p->data = 20;
//	p->link = NULL;
//
//	head->link = p;
//
//	printf("%d -> ", head->data);
//	printf("%d", head->link->data);
//
//	head = insert_first(head,5);
//	head = insert(head, head->link, 15);
//
//
//	printf("%d -> ", head->data);
//	printf("%d -> ", head->link->data);
//	printf("%d\n", head->link->link->data);
//
//	head = delete_first(head);
//	head = delete(head, head);
//
//	printf("%d -> ", head->data);
//	printf("%d -> ", head->link->data);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//struct Listnode {
//	int data;
//	struct Listnode* link;
//};
//
//struct Listnode* insert_first(struct Listnode* head, int value) {
//	struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
//	p->data = value;
//	p->link = head;
//	head = p;
//	return head;
//}
//
//struct Listnode* insert(struct Listnode* head, struct Listnode* pre, int value) {
//	struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
//	p->data = value;
//	p->link = pre->link;
//	pre->link = p;
//	return head;
//}
//
//struct Listnode* delete_first(struct Listnode* head) {
//	struct Listnode* removed;
//	if (head == NULL) return NULL;
//	removed = head;
//	head = head->link;
//	free(removed);
//	return head;
//}
//
//struct Listnode* delete(struct Listnode* head, struct Listnode* pre) {
//	struct Listnode* removed;
//	removed = pre->link;
//	pre->link = removed->link;
//	free(removed);
//	return head;
//}
//
//void print_list(struct Listnode* head) {
//	struct Listnode* p;
//	for (p = head; p != NULL; p = p->link) {
//		printf("%d->", p->data);
//	}
//	printf("NULL \n");
//}
//
//int main() {
//	struct Listnode* head = NULL;
//	for (int i = 0; i < 5; i++) {
//		head = insert_first(head, i);
//		print_list(head);
//	}
//	for (int i = 0; i < 5; i++) {
//		head = delete_first(head);
//		print_list(head);
//	}
//	return 0;
//}

#include <stdlib.h>
#include <stdio.h>

struct Listnode {
	int data;
	struct Listnode* link;
};

struct Listnode* head = NULL;

void insert_first(int value) {
	struct Listnode* node = (struct Listnode*)malloc(sizeof(struct Listnode));
	node->data = value;
	if (head == NULL) {
		head = node;
		node->link = head;
	}
	else {
		node->link = head->link;
		head->link = node;
	}
}

void insert_last(int value) {
	struct Listnode* node = (struct Listnode*)malloc(sizeof(struct Listnode));
	node->data = value;
	if (head == NULL) {
		head = node;
		node->link = head;
	}
	else {
		node->link = head->link;
		head->link = node;
		head = node;
	}
}

void delete() {
	struct Listnode* removed = head->link;
	head->link = removed->link;
	free(removed);
}

int main() {
	insert_first(30);
	insert_first(20);
	insert_first(10);
	insert_first(40);

	printf("%d -> ", head->link->data);
	printf("%d -> ", head->link->link->data);
	printf("%d -> ", head->link->link->link->data);
	printf("%d -> \n", head->data);

	insert_last(50);

	printf("%d -> ", head->link->data);
	printf("%d -> ", head->link->link->data);
	printf("%d -> ", head->link->link->link->data);
	printf("%d -> ", head->link->link->link->link->data);
	printf("%d -> \n", head->data);

	delete();

	printf("%d -> ", head->link->data);
	printf("%d -> ", head->link->link->data);
	printf("%d -> ", head->link->link->link->data);
	printf("%d -> \n", head->data);

	return 0;
}
