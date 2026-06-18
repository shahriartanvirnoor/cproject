/*dijkatras algorithm in C*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int graph[MAX][MAX], visited[MAX], distance[MAX], n;
void dijkstra(int start)
{
    int i, j, minDistance, nextVertex;
    for (i = 0; i < n; i++) {
        distance[i] = graph[start][i];
        visited[i] = 0;
    }
    visited[start] = 1;
    for (i = 1; i < n; i++) {
        minDistance = 999;
        for (j = 0; j < n; j++) {
            if (!visited[j] && distance[j] < minDistance) {
                minDistance = distance[j];
                nextVertex = j;
            }
        }
        visited[nextVertex] = 1;
        for (j = 0; j < n; j++) {
            if (!visited[j] && graph[nextVertex][j] != 999 && distance[nextVertex] != 999 &&
                distance[nextVertex] + graph[nextVertex][j] < distance[j]) {
                distance[j] = distance[nextVertex] + graph[nextVertex][j];
            }
        }
    }
}

int main()
{
    int i, j, start;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix (use 999 for no direct path):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    printf("Enter the starting vertex: ");
    scanf("%d", &start);
    dijkstra(start);
    printf("Shortest distances from vertex %d:\n", start);
    for (i = 0; i < n; i++) {
        if (distance[i] == 999)
            printf("Vertex %d: INF\n", i);
        else
            printf("Vertex %d: %d\n", i, distance[i]);
    }
    return 0;
}
