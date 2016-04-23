#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

void Dijkstra(vector< vector<int> > &gr, int st, int fin, int n) {

	int  count, index, i, u;
	vector<long> distance(n, LONG_MAX);
	vector<bool> visited(n, false);

	distance[st] = 0;

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
			if ((!visited[i] && gr[u][i] && distance[u] != LONG_MAX) && (distance[u] + gr[u][i] < distance[i]))
				distance[i] = distance[u] + gr[u][i];

	}

	if (distance[fin] != LONG_MAX)
		fout << distance[fin] << endl;
	else
		fout << "NO" << endl;

}

int main() {

	int m, n, f, t;

	int keys;

	fin >> keys;

	for (int k = 0; k < keys; ++k) {

		fin >> n >> m;

		vector< vector<int> > g;

		for (int i = 0; i < n; ++i) {
			vector<int> a(n);
			g.push_back(a);
		}

		int u, v;
		long l;

		for (int i = 0; i < m; ++i) {

			fin >> u >> v >> l;

			g[u - 1][v - 1] = l;

		}

		fin >> f >> t;

		Dijkstra(g, f - 1, t - 1, n);

	}

	return 0;
}