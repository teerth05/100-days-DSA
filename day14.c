#include <stdio.h>
#include <stdbool.h>  

int main() {
    int m, n;
    int mat[100][100];
    
    scanf("%d %d", &m, &n);
    
   
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    bool isIdentity = true;
        if (m != n) {
        isIdentity = false;
    } else {
        for (int i = 0; i < m && isIdentity; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j && mat[i][j] != 1) {   
                    isIdentity = false;
                    break;
                }
                if (i != j && mat[i][j] != 0) { 
                    isIdentity = false;
                    break;
                }
            }
        }
    }
    
    printf("%s\n", isIdentity ? "Identity Matrix" : "Not an Identity Matrix");
    return 0;
}
