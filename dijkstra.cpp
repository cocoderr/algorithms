vector<int> dijkstra(int source, vector<vector<pair<int,int> > > &adj_list){

    int n,b,i;
    int n = adj_list.size();
    vector<int> distances(n,1e9);
    set<pair<int,int> > s;   
    distances[source]=0;
    s.insert(make_pair(0,source));
    while(!s.empty())
    {
        pair <int,int> p=*s.begin();
        s.erase(s.begin());
        b=p.second;
        for(i=0;i<adj_list[b].size();i++)
            if(distances[adj_list[b][i].first]>distances[b]+adj_list[b][i].second){
                distances[adj_list[b][i].first]=distances[b]+adj_list[b][i].second;
                s.insert(make_pair(distances[adj_list[b][i].first],adj_list[b][i].first));
            }
    }
    return distances;
}
