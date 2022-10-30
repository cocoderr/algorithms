vector<vector<int> > floyd_warshall(int num_vertex, vector<pair<int, int> > &edges){

    int n,m,x,y,z;

    int m = edges.size();

    vector<vector<int> > distances(n,vector<int>(n,INF));

    for(int i=0;i<m;i++){
        x = i;
        y = edges[i].first;
        z = edges[i].second;
        distances[x][y]=min(distances[x][y],z);
        distances[y][x]=min(distances[y][x],z);
    }

    for(int k=0;k<num_vertex;k++)
        for(int i=0;i<num_vertex;i++)
            for(int j=0;j<num_vertex;j++)
                if(i==j)
                    distances[i][j]=0;
                else
                    distances[i][j]=min(distances[i][j],distances[i][k]+distances[k][j]);

    return distances;

}
