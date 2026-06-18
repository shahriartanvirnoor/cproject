/*implementation BFS in C language*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 100
int graph[MAX][MAX], visited[MAX], queue[MAX];
int front = -1, rear = -1, n;
void bfs(int start) {
    int i;
    queue[++rear] = start;
    visited[start] = 1;
    while (front != rear) {
        int current = queue[++front];
        printf("%d ", current);
        for (i = 0; i < n; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                queue[++rear] = i;
                visited[i] = 1;
            }
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
    printf("BFS Traversal: ");
    bfs(start);
    return 0;
}
