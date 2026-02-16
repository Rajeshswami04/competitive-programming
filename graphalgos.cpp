#include <bits/stdc++.h>
using namespace std;
//dense graph 
// int n;
// vector<vector<int>> adj; 
// const int INF = 1000000000; 

// struct Edge {
//     int w = INF, to = -1;
// };

// void prim() {
//     int total_weight = 0;
//     vector<bool> selected(n, false);
//     vector<Edge> min_e(n);
//     min_e[0].w = 0;

//     for (int i = 0; i < n; ++i) {
//         int v = -1;

//         // Find minimum edge
//         for (int j = 0; j < n; ++j) {
//             if (!selected[j] && (v == -1 || min_e[j].w < min_e[v].w))
//                 v = j;
//         }

//         if (min_e[v].w == INF) {
//             cout << "No MST!" << endl;
//             return;
//         }

//         selected[v] = true;
//         total_weight += min_e[v].w;

//         if (min_e[v].to != -1)
//             cout << "Edge: " << v << " - " << min_e[v].to 
//                  << "  Weight: " << min_e[v].w << endl;

//         // Update adjacent vertices
//         for (int to = 0; to < n; ++to) {
//             if (adj[v][to] < min_e[to].w && !selected[to])
//                 min_e[to] = {adj[v][to], v};
//         }
//     }

//     cout << "Total Weight of MST: " << total_weight << endl;
// }

//sparse graph

// const int INF = 1000000000;

// struct Edge {
//     int w = INF, to = -1;
//     bool operator<(Edge const& other) const {
//         return make_pair(w, to) < make_pair(other.w, other.to);
//     }
// };

// int n;
// vector<vector<Edge>> adj;

// void prim() {
//     int total_weight = 0;
//     vector<Edge> min_e(n);
//     min_e[0].w = 0;
//     set<Edge> q;
//     q.insert({0, 0});
//     vector<bool> selected(n, false);
//     for (int i = 0; i < n; ++i) {
//         if (q.empty()) {
//             cout << "No MST!" << endl;
//             exit(0);
//         }

//         int v = q.begin()->to;
//         selected[v] = true;
//         total_weight += q.begin()->w;
//         q.erase(q.begin());

//         if (min_e[v].to != -1)
//             cout << v << " " << min_e[v].to << endl;

//         for (Edge e : adj[v]) {
//             if (!selected[e.to] && e.w < min_e[e.to].w) {
//                 q.erase({min_e[e.to].w, e.to});
//                 min_e[e.to] = {e.w, v};
//                 q.insert({e.w, e.to});
//             }
//         }
//     }

//     cout << total_weight << endl;
// }

#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000000;

struct Edge {
    int w, to;
};

int n;
vector<vector<Edge>> adj;

void prim() {

    int total_weight = 0;

    vector<int> min_w(n, INF);      // best weight to connect vertex
    vector<int> parent(n, -1);      // store MST parent
    vector<bool> selected(n, false);

    // min heap: (weight, vertex)
    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    min_w[0] = 0;
    pq.push({0, 0});

    while (!pq.empty()) {

        int v = pq.top().second;
        int weight = pq.top().first;
        pq.pop();

        // skip if already selected (important!)
        if (selected[v])
            continue;

        selected[v] = true;
        total_weight += weight;

        if (parent[v] != -1)
            cout << v << " " << parent[v] << endl;

        for (Edge e : adj[v]) {
            if (!selected[e.to] && e.w < min_w[e.to]) {

                min_w[e.to] = e.w;
                parent[e.to] = v;

                // push new pair (duplicate allowed)
                pq.push({e.w, e.to});
            }
        }
    }

    cout << total_weight << endl;
}
