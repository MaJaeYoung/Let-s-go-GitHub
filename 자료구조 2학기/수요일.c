//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct DListNode {	// ���߿��� ��� Ÿ��
//	int data;
//	struct DListNode* llink;
//	struct DListNode* rlink;
//} DListNode;
//
//// ���� ���� ����Ʈ�� �ʱ�ȭ
//void init(DListNode* phead)
//{
//	phead->llink = phead;
//	phead->rlink = phead;
//}
//// ���� ���� ����Ʈ�� ��带 ���
//void print_dlist(DListNode* phead)
//{
//	DListNode* p;
//	for (p = phead->rlink; p != phead; p = p->rlink) {
//		printf("<-| |%d| |-> ", p->data);
//	}
//	printf("\n");
//}
//// ���ο� �����͸� ��� before�� �����ʿ� �����Ѵ�.
//void dinsert(DListNode* before, int item)
//{
//	DListNode* newnode = (DListNode*)malloc(sizeof(DListNode));
//	newnode->data = item;
//	newnode->llink = before;
//	newnode->rlink = before->rlink;
//	before->rlink->llink = newnode;
//	before->rlink = newnode;
//}
//// ��� removed�� �����Ѵ�.
//void ddelete(DListNode* head, DListNode* removed)
//{
//	if (removed == head) return;
//	removed->llink->rlink = removed->rlink;
//	removed->rlink->llink = removed->llink;
//	free(removed);
//}
//// ���� ���� ����Ʈ �׽�Ʈ ���α׷�
//int main(void)
//{
//	DListNode* head = (DListNode*)malloc(sizeof(DListNode));
//	init(head);
//	printf("�߰� �ܰ�\n");
//	for (int i = 1; i <= 5; i++) {
//		// ��� ����� �����ʿ� ����
//		dinsert(head, i * 10);
//		print_dlist(head);
//	}
//	printf("\n���� �ܰ�\n");
//	for (int i = 1; i <= 5; i++) {
//		print_dlist(head);
//		ddelete(head, head->rlink);
//	}
//	free(head);
//	return 0;
//}