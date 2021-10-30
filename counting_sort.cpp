void counting_sort(vector<int> &a, int n){

	int max_val = 0;
	for(int i=0; i<n; ++i){
		if(a[i] > max_val){
			max_val = a[i];
		}
	}

	vector<int>counts(max_val+1, 0);

	for(int i=0; i<n; ++i){
		++counts[a[i]];
	}

	for(int i=0, j=0; i<=max_val; ++i){
		while(counts[i]){
			a[j] = i;
			++j;
			--counts[i];
		}
	}
}
