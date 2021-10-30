void insertion_sort(vector<int> &a, int n){

	for(int i=1; i<n; ++i){
		int cur = a[i];
		for(int j=i-1; j>=0; --j){
			if(cur > a[j]){
				a[j+1] = cur;
				break;
			}
			else{
				a[j+1] = a[j];
			}
				
		}
		if(cur < a[0]){
			a[0] = cur;
		}
	}
}
