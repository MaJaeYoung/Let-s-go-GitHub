//사각형1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//    int i,j;
//    int n;
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//사각형 2
//#define _crt_secure_no_warnings
//#include <stdio.h>
//int main() {
//    int i,j;
//    int n;
// 
//    scanf("%d", &n);
// 
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= n; j++)
//        {
//            if (i == 1 || i == n || j == 1 || j == n) {
//                printf("*");
//            }
//            else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

//삼각형1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//    int i, j;
//    int n;
// 
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//삼각형2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//    int i, j, k;       
//    int n;    
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n - i; j++) {  
//            printf(" ");
//        }
// 
//        for (k = 0; k <= i; k++) { 
//            printf("*");
//        }
//        printf("\n");
//    }
//	  return 0;
//}

//역삼각형1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//    int i, j;
//    int num;
//
//    scanf("%d", &num);
//
//    for (i = 0; i < num; i++) {
//        for (j = 0; j < num - i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//역삼각형2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//    int i, j, k;
//    int num2;
// 
//    scanf("%d", &num2);
// 
//    for (i = 0; i < num2; i++) {
//        for (j = 0; j < i + 1; j++) {
//            printf(" ");
//        }
// 
//        for (k = 0; k < num2 - i; k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//피라미드
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//    int i, j, k;
//    int n;
// 
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        for (j = n - 1; j > i; j--) {
//            printf(" ");
//        }
// 
//        for (k = 0; k < 2 * i + 1; k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//	  return 0;
//}

//역피라미드
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//  int i, j, k;
//  int n;
// 
//  scanf("%d", &n);
//
//   for (i = n; i >= 1; --i){
//       for (j = 0; j < n - i; ++j) {
//           printf(" ");
//       }
// 
//       for (j = i; j <= 2 * i - 1; ++j) {
//           printf("*");
//       }
// 
//       for (j = 0; j < i - 1; ++j) {
//           printf("*");
//       }
//       printf("\n");
//    }
//    return 0;
//}
 
//모래시계
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int n;
//	int i, j, k;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < i; j++) {
//			printf(" ");
//		}
//
//		for (k = 0; k < 2 * (n - i) - 1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 1; i < n; i++) {
//		for (j = 0; j < n - i - 1; j++) {
//			printf(" ");
//		}
//
//		for (k = 0; k < 2 * i + 1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//마름모
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int i, j, k;
//	int n;
// 
//	scanf("%d", &n);
// 
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n - i - 1; j++) {
//			printf(" ");
//		}
//
//		for (k = 0; k < 2 * i + 1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 1; i < n; i++) {
//		for (j = 0; j < i; j++) {
//			printf(" ");
//		}
//
//		for (k = 0; k < 2 * (n - i) - 1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//  return 0;
//}

//리본
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int n;
//	int i, j, k;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j <= i; j++) {
//			printf("*");
//		}
//
//		for (k = 0; k < n - i - 1; k++) {
//			printf("  ");
//		}
//
//		for (j = 0; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 1; i < n; i++) {
//		for (j = 0; j < n - i; j++) {
//			printf("*");
//		}
//
//		for (k = 0; k < i; k++) {
//			printf("  ");
//		}
//
//		for (j = 0; j < n - i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//하트
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int i, j;
//	int star = 10;
//	int up = (star / 2) - 2;
//	int down = star * 2 + 1;
//
//	for (i = up; i < star; i += 2) {
//		for (j = 0; j <= (star - i); j++) {
//			printf(" ");
//		}
//
//		for (j = 0; j <= i * 2; j++) {
//			printf("*");
//		}
//
//		for (j = 0; j <= (star - i) * 2; j++) {
//			printf(" ");
//		}
//
//		for (j = 0; j <= i * 2; j++) {
//			printf("*");
//		}
//
//		printf("\n");
//	}
//
//	for (i = down; i >= 0; i -= 2) {
//		for (j = 0; j <= down - i; j++) {
//			printf(" ");
//		}
//
//		for (j = 0; j <= i * 2; j++) {
//			printf("*");
//		}
//
//		printf("\n");
//	}
//  return 0;
//}

//육망성
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main(void){
//	int i, j;
//	int n;
//
//	scanf("%d", &n);
//
//	for (i = 1; i <= 4 * n; i++) {
//		if (1 <= i && i <= n) {
//			for (j = 1; j <= 3 * n - i - 1; j++) {
//				printf(" ");
//			}
//
//			for (j = 1; j <= 2 * i - 1; j++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//
//		else if (n < i && i < 2 * n) {
//			for (j = 1; j <= i - n - 1; j++) {
//				printf(" ");
//			}
//
//			for (j = 1; j <= 8 * n - 2 * i - 1; j++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//
//		else if (i == 2 * n) {
//			for (j = 1; j <= n - 1; j++) {
//				printf(" ");
//			}
//
//			for (j = 1; j <= 4 * n - 1; j++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//
//		else if (2 * n < i && i < 3 * n) {
//			for (j = 1; j <= 3 * n - i - 1; j++) {
//				printf(" ");
//			}
//
//			for (j = 1; j <= 2 * i - 1; j++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//
//		else if (3 * n <= i && i < 4 * n) {
//			for (j = 1; j <= (-1) * n + i - 1; j++) {
//				printf(" ");
//			}
//
//			for (j = 1; j <= 8 * n - 2 * i - 1; j++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//}