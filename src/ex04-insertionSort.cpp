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

    int deslocamentos = 0;

    for (int i = 1; i < n; i++) {
        int chave = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > chave) {
            a[j + 1] = a[j];
            deslocamentos++;
            j--;
        }
        a[j + 1] = chave;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
    printf("%d\n", deslocamentos);

    return 0;
}
