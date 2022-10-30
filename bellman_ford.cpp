vector<int> bellman_ford(int num_vertex, vector<vector<int> > &edges){

    vector<int> distances(n,1e9);
    distances[0] = 0;

    for(int i=0;i<num_vertex-1;i++){
        int j=0;
        while(edges[j].size()!= 0){
            if(distances[edges[j][0]]+edges[j][2]<distances[edges[j][1]]){
                distances[edges[j][1]]=distances[edges[j][0]]+edges[j][2];
            }
            j++;
        }
    }

    return distances;
}
