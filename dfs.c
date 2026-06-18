/*dfs implementation in C*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int graph[MAX][MAX], visited[MAX], n;
void dfs(int vertex) {
    int i;
    visited[vertex] = 1;
    printf("%d ", vertex);
    for (i = 0; i < n; i++) {
        if (graph[vertex][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}
int main() {
    int i, j, start;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    printf("Enter the starting vertex: ");
    scanf("%d", &start);
    printf("DFS Traversal: ");
    dfs(start);
    return 0;
}
