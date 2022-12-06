//#include <iostream>
//#include "bst.h"
//
//int main(void) {
//    int data[] = { 6,2,7,4,9,4,8,9,2,1 };
//    int MAX = sizeof(data) / sizeof(int);
//    cout << "입 력 자 료: "; p_out(data, MAX);
//
//    Node* root = insertNode(NULL, data[0]);
//
//    int a;
//    for (a = 1; a < MAX; a++) {
//        insertNode(root, data[a]);
//    }
//
//    cout << "Binary Tree: "; In_order(root);
//
//    cout << "\n\n 찾을 수(-9 To END): "; cin >> a;
//    while (a != -9) {
//        if (Search(root, a)) { cout.width(22); cout << a << "발견"; }
//        else cout << "           찾는 자료는 없어요!!!";
//        cout << "\n\n 찾을 수(-9 To END): "; cin >> a;
//    }
//}


//c++버전
//#include <iostream>
//#include "bst.h"
//
//int main(void) {
//    int data[] = { 6,2,7,4,9,4,8,9,2,1 };
//    int MAX = sizeof(data) / sizeof(int);
//    p_out(data, MAX);
//
//    BST* root = new BST(data[0]);
//
//    int a;
//    for (a = 1; a < MAX; a++) {
//        root = root -> insertNode(data[a]);
//    }
//    root-> In_order();
//
//    cout << "\n\n 찾을 수(-9 To END): "; 
//    cin >> a;
//    while (a != -9) {
//        if (root -> Search(a) ) { 
//             cout.width(22); cout << a << " 발견"; 
//        }
//        else cout << "           찾는 자료는 없어요!!!";
//             cout << "\n\n 찾을 수(-9 To END): "; cin >> a;
//    }
//}