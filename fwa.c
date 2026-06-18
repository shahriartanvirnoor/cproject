/*Floyd Warshall’s Algorithm*/
#include<stdio.h>
#include<conio.h>
#define MAX 100
int graph[MAX][MAX], n;
void floydWarshall() {
    int i, j, k;
    for (k = 0; k < n; k++)

        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (graph[i][j] > graph[i][k] + graph[k][j])
                    graph[i][j] = graph[i][k] + graph[k][j];
}
int main() {
    int i, j;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix (use 999 for no direct path):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    floydWarshall();
    printf("Shortest path matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (graph[i][j] == 999)
                printf("INF ");
            else
                printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    return 0;
}
