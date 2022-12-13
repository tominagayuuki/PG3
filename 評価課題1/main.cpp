#include<stdio.h>
#include<stdlib.h>

typedef struct cell{
	int val;
    struct cell* next;
}CELL;

void create(CELL*head,int val) {
	CELL* newhead;
	//�V�K�쐬����Z�����̃��������m�ۂ���
	newhead = (CELL*)malloc(sizeof(CELL));
	newhead->val = val;
	newhead->next = nullptr;

	//�Ō�i�ŐV�j�̃Z���̃A�h���X�̈�ڂ̏����͈������玝���Ă���
	//���X�g�̂����ŏ��̃Z���̃A�h���X���Y������
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
		
		printf("�D���Ȑ�������͂��Ă�������\n");
		printf("���͂������� : ");
		scanf_s("%d", &val);
		printf("\n");
		printf("���͂��ꂽ�l�ꗗ : ");
		printf("[");
		create(&head, val);
		index(&head);
		printf("]\n\n");
	}
	return 0;
}
