#include<stdio.h>
#include<stdlib.h>

typedef struct cell{
	int val;
    struct cell* next;
}CELL;

void create(CELL*head,int val) {
	CELL* newhead;
	//新規作成するセル分のメモリを確保する
	newhead = (CELL*)malloc(sizeof(CELL));
	newhead->val = val;
	newhead->next = nullptr;

	//最後（最新）のセルのアドレスの一つ目の処理は引数から持ってきた
	//リストのうち最初のセルのアドレスが該当する
	while (head->next != nullptr) {
		head = head->next;
	}

	head->next = newhead;
}
void index(CELL*head) {
	while (head->next != nullptr) {
		head = head->next;
		printf("%d,", head->val);
	}
}

int main() {
	int val;
	CELL head;
	head.next = nullptr;

	while (true) {
		
		printf("好きな数字を入力してください\n");
		printf("入力した数字 : ");
		scanf_s("%d", &val);
		printf("\n");
		printf("入力された値一覧 : ");
		printf("[");
		create(&head, val);
		index(&head);
		printf("]\n\n");
	}
	return 0;
}
