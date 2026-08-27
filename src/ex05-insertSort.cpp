//
// Created by vitin on 19/08/2026.
//
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = n - 2; i >= 0; i--) {
        int chave = a[i];
        int j = i + 1;
        while (j <= n - 1 && a[j] > chave) {
            a[j - 1] = a[j];
            j++;
        }
        a[j - 1] = chave;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
