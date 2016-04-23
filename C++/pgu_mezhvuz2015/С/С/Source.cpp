#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

void Dijkstra(vector< vector<int> > &gr, int st, int n) {

	int  count, index, i, u, m = st + 1;
	vector<long> distance(n, LONG_MAX);
	vector<bool> visited(n, false);
	int max_distance = -5;

	distance[st] = 0;

	vector<long> ans;

	for (count = 0; count < n - 1; count++) {

		int min = LONG_MAX;

		for (i = 0; i < n; i++)
			if (!visited[i] && distance[i] <= min) {
				min = distance[i];
				index = i;
			}
		u = index;
		visited[u] = true;

		for (i = 0; i < n; i++)
			if ((!visited[i] && gr[u][i] && distance[u] != LONG_MAX) && (distance[u] + gr[u][i] < distance[i])) {
				distance[i] = distance[u] + gr[u][i];
				if (distance[i] > max_distance)
					max_distance = distance[i];
				ans.push_back(i + 1);
			}

	}

	fout << max_distance << endl;

	for (int i = 0; i < ans.size(); ++i)
		fout << ans[i] << ' ';
}

int main() {

	int n, m;

	fin >> n >> m;

	int s = 0;

	vector< vector<int> > g(n);
	vector<int> a(n);
	
	for (int i = 0; i < n; ++i) {
		g[i] = a;
	}

	for (int i = 0; i < m; ++i) {
		int v, u;
		fin >> v >> u;
		g[v - 1][u - 1] = 1;
	}

	Dijkstra(g, 0, n);

	return 0;
}