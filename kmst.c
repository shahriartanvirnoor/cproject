#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int parent[MAX];
int n;

typedef struct Edge {
    int u, v, weight;
} Edge;

Edge edges[MAX * MAX];
int edge_count = 0;

int find(int i) {
    if (parent[i] == i)
        return i;
    return parent[i] = find(parent[i]);
}

void unionSets(int i, int j) {
    int root_i = find(i);
    int root_j = find(j);
    if (root_i != root_j) {
        parent[root_j] = root_i;
    }
}

int compareEdges(const void* a, const void* b) {
    Edge* edgeA = (Edge*)a;
    Edge* edgeB = (Edge*)b;
    return edgeA->weight - edgeB->weight;
}

void kruskal() {
    int mst_cost = 0;
    int num_edges_in_mst = 0;
    Edge mst_edges[MAX - 1];

    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }

    qsort(edges, edge_count, sizeof(Edge), compareEdges);

    printf("Edges in the Minimum Spanning Tree:\n");
    for (int i = 0; i < edge_count && num_edges_in_mst < n - 1; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int weight = edges[i].weight;

        if (find(u) != find(v)) {
            unionSets(u, v);
            mst_cost += weight;
            mst_edges[num_edges_in_mst++] = edges[i];
            printf("%d - %d (Weight: %d)\n", u, v, weight);
        }
    }

    if (num_edges_in_mst == n - 1) {
        printf("Minimum Spanning Tree Cost: %d\n", mst_cost);
    } else {
        printf("Graph is not connected, a Minimum Spanning Tree cannot be formed.\n");
    }
}

int main() {
    int i, j, weight;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix (use 0 for no direct path, positive weights):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &weight);
            if (i < j && weight != 0) {
                edges[edge_count].u = i;
                edges[edge_count].v = j;
                edges[edge_count].weight = weight;
                edge_count++;
            }
        }
    }

    kruskal();

    return 0;
}