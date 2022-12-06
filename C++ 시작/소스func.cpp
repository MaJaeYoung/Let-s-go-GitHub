//#include "bst.h"
//
//void p_out(int* p, int MAX) {
//    for (int a = 0; a < MAX; ++a) {
//        cout.width(3); cout << *(p + a);
//    } cout << "\n\n";
//}
// 
//Node* insertNode(Node* p, int tmp) {
//    Node* newNode = new Node;
//
//    if (p == NULL) {
//        newNode->item = tmp; newNode->l_link = NULL; newNode->r_link = NULL;
//        return newNode;
//    }
//    else if (tmp < p->item) p->l_link = insertNode(p->l_link, tmp);
//    else if (tmp > p->item) p->r_link = insertNode(p->r_link, tmp);
//
//    return p;
//}
// 
//void In_order(Node* p) {
//    if (p) {
//        In_order(p->l_link);
//        cout.width(3); cout << p->item;
//        In_order(p->r_link);
//    }
//}
// 
//Node* Search(Node* p, int tmp) {
//    if (p == NULL) return NULL;
//    if (tmp == p->item) return p;
//    else if (tmp < p->item) return Search(p->l_link, tmp);
//    else return Search(p->r_link, tmp);
//}



//c++¹öÀü 
//#include "bst.h"
//
//void p_out(int* p, int MAX) {
//    for (int a = 0; a < MAX; ++a) {
//        cout.width(3); cout << *(p + a);
//    } cout << "\n\n";
//}
//
//BST* BST::insertNode(int tmp) {
//
//    if (this == NULL) {
//        BST* newNode = new BST(tmp);
//            return newNode;
//    }
//    else if (tmp < item) l_link = l_link -> insertNode(tmp);
//    else if (tmp > item) r_link = r_link -> insertNode(tmp);
//
//    return this;
//}
//
//void BST::In_order() {
//    if (this) {
//        l_link->In_order();
//        cout.width(3); 
//        cout << item;
//        r_link->In_order();
//    }
//}
//
//BST* BST::Search(int tmp) {
//    if (this == NULL) 
//        return NULL;
//    if (tmp == item) 
//        return this;
//    else if (tmp < item) 
//        return l_link -> Search(tmp);
//    else 
//        return r_link -> Search(tmp);
//}