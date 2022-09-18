#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int i;

struct product {
	int barcode;				//��ǰ ���ڵ� ������ ���� ����
	char name[100];			//��ǰ �̸� ���� �迭 ����(ũ�� 100)
	int count;		//��ǰ ���� ������ ���� ����
}list[100] = { 0 };

void input()
{
	printf("��ǰ ���ڵ� ��ȣ : ");
	scanf("%d", &list->barcode);		//��ǰ ���ڵ� ��ȣ �Է�
	printf("��ǰ �̸� : ");
	scanf(" %s", &list->name);		//��ǰ �̸� �Է�
	printf("��ǰ ���� : ");
	scanf("%d", &list->count);//��ǰ ���� �Է�
	i++;
}

void show()
{
	for(int j = 0; j < i;j++) {		//�ݺ��� ����(����� ��ǰ ���� ����� �� �ֵ��� �ݺ��� ��) 
		printf("%d\t%s\t%d\n", list[j].barcode, list[j].name, list[j].count);
	}
}

void sold()
{
	int code, cnt;
	printf("�Ǹ��� ��ǰ ���ڵ� ��ȣ �Է� : ");
	scanf("%d", &code);
	printf("�Ǹ��� ��ǰ�� ���� �Է� : ");
	scanf("%d", &cnt);

	for (int j = 0; j < i; j++) {
		if (code == list[j].barcode) {
			if (cnt > list[j].count) {							//if�� �ۼ� 
				printf("��� �����մϴ�.\n");
			}
			else {
				list[j].count = list[j].count - cnt;				//���� ������ �ִ� ��ǰ �������� �Ǹ��� ��ǰ ���� ����
				printf("%d\t%s\t%d\n", list[j].barcode, list[j].name, list[j].count);
				break;
			}
		}
	}
}


int main()
{
	int n;
	int* p = &n;
	while (1) {
		printf("1. ��ǰ �߰�\t2. ��ǰ �����ֱ�\t3. �Ǹ��� ��ǰ\t0. ����\n");
		scanf("%d", p);
		if (1 == *p) {			//������ ������ ����� ��
			input();			//��ǰ �߰� �Լ� ȣ��
		}
		else if (2 == *p){		//������ ������ ����� ��
		show();					//��ǰ �����ֱ� �Լ� ȣ��
		}
		else if (3 == *p){		//������ ������ ����� ��
			sold();				//�Ǹ��� ��ǰ �Լ� ȣ��
		}
		else if (0 == *p){		//������ ������ ����� ��
		printf("���α׷� ����\n");
		break;
		}
		else {
		printf("��ȣ�� �����ϴ�. �ٽ� �Է��ϼ���.\n");
		}
	}

	return 0;
}

