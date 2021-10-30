void swap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

void bubble_sort(vector<int> &a, int n){

	for(int i=0; i<n-1; ++i){

		for(int j=n-1; j>0; --j){
			if(a[j] < a[j-1]){
				swap(a[j], a[j-1]);
			}
		}
	}
}
