#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Graph {
public:
	map<int, bool> visited;
	map<int, list<int> > adj;
    map<int, int>once;
	void addEdge(int v, int w);

	void DFS(int v);
};

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); 
}

void Graph::DFS(int v)
{
	visited[v] = true;
    if(once.find(v)==once.end()){
        
        once[v]=1;
    }else{
        once[v]++;
    }
	

	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFS(*i);
}

int main()
{
    int n,m,a,b;
    scanf("%d %d",&n,&m);
    map<int ,int>map;
	Graph g;
    for(int x=0;x<m;x++){
        scanf("%d %d",&a,&b);
        if(map.find(a)==map.end()){
            map[a]=1;
        }else{
            map[a]++;
        }
        g.addEdge(a,b);
    }
	int start;
    for(auto it=map.begin();it!=map.end();it++){
        if(it->second == 1){
            start = it->first;
            g.DFS(start);
        }
    }

	

	return 0;
}

