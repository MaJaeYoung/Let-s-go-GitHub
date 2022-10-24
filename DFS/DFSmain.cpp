//#include <iostream>
//using namespace std;
//
//#define MX		100
//#define FALSE	 0
//#define TRUE	 1
//
//typedef int element;
//
//typedef struct _node {
//	element dat;
//	struct _node* Link;
//} Node;
//
//typedef struct GraphType {
//	int n;
//	int visited[MX];
//	Node* adjList_H[MX];
//} GraphType;
//
//enum { A, B, C, D, E, F, G, H, I, J };
//Node* StackTop = NULL;
//int V1, SU1;
//// V1: �׷����� vertex���� , SU1:�׷����� Edge����
//
//int isEmpty();
//void push(element item);
//
//element pop();
//
//void creatGraph(GraphType* g);
//void insertVertex(GraphType* g, int v);
//void insertEdge(GraphType* g, int u, int v);
//void printGraph(GraphType* g);
//void DFS_adjList(GraphType* g, int v);
//
//int main() {
//	int a;
//	element vert[] = { A,B,C,D,E,F,G };
//	element in1[] = { A,A,A,A,B,B,B,C,C,D,E,E,F,G };
//	element out1[] = { G,E,C,B,F,E,A,D,A,C,B,A,B,A };
//
//	V1 = sizeof(vert) / sizeof(element);
//	SU1 = sizeof(in1) / sizeof(element);
//
//	GraphType* G1 = new GraphType;
//
//	creatGraph(G1);
//
//	for (a = 0; a < V1; a++) {
//		insertVertex(G1, a);
//	}
//
//	for (a = 0; a < SU1; a++) {
//		insertEdge(G1, in1[a], out1[a]);
//	}
//
//	cout << "\n\n G1�� ��������Ʈ"; printGraph(G1);
//	cout << "\n\n ���� �켱 Ž��>> "; DFS_adjList(G1, 0);
//}
//
//int isEmpty() {
//	if (StackTop == NULL) return 1;
//	else return 0;
//}
//
//void push(element item) {
//	Node* Tmp = new Node;
//	Tmp->dat = item;
//	Tmp->Link = StackTop;
//	StackTop = Tmp;
//}
//
//element pop() {
//	element item;
//	Node* Tmp = StackTop;
//
//	if (isEmpty()) {
//		cout << "\n\n Stack is Empty ~\n";
//		return 0;
//	}
//	else {
//		item = Tmp->dat;
//		StackTop = Tmp->Link;
//
//		free(Tmp);
//
//		return item;
//	}
//}
//
//void creatGraph(GraphType* g) {
//	g->n = 0;
//	for (int v = 0; v < V1; v++) {
//		g->visited[v] = 0;
//		g->adjList_H[v] = NULL;
//	}
//}
//
//void insertVertex(GraphType* g, int v) {
//	if ((g->n) + 1 > V1) {
//		cout << "\n �׷��� ������ ������ �ʰ��Ͽ����ϴ�.";
//		return;
//	}
//	g->n++;
//}
//
//void insertEdge(GraphType* g, int u, int v) {
//	Node* GNode = new Node;
//	if (u >= g->n || v >= g->n) {
//		cout << "\b �׷����� ���� �����Դϴ�.";
//		return;
//	}
//
//	GNode->dat = v;
//	GNode->Link = g->adjList_H[u];
//	g->adjList_H[u] = GNode;
//}
//
//void printGraph(GraphType* g) {
//	int a; char t;
//	Node* p;
//
//	for (a = 0; a < g->n; a++) {
//		t = a + 65;
//		cout << "\n ���� " << t << "�� ���� ����Ʈ : " << t;
//		p = g->adjList_H[a];
//		while (p) {
//			t = p->dat + 65;
//			cout << " -> " << t;
//			p = p->Link;
//		}
//	}
//}
//
//
//void DFS_adjList(GraphType* g, int v) {
//	Node* w;
//
//	StackTop = NULL;
//	push(v);
//	g->visited[v] = TRUE;
//
//	printf(" %c", v + 65);
//
//	while (!isEmpty()) {
//		w = g->adjList_H[v];
//		while (w) {
//			if (!g->visited[w->dat]) {
//				push(w->dat);
//				g->visited[w->dat] = TRUE;
//
//				printf(" %c", w->dat + 65);
//
//				v = w->dat;
//				w = g->adjList_H[v];
//			}
//			else w = w->Link;
//		}
//		v = pop();
//	}
//}