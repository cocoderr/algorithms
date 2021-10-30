void merge_sort(vector<int> &a, int n, int l, int r){

	if(l >= r){
		return;
	}
		

	int mid = (l+r)/2;
	merge_sort(a, n, l, mid);
	merge_sort(a, n, mid+1, r);

	vector<int>tmp;
	int i=l, j=mid+1;

	while(i <= mid && j <= r){
		if(a[i] <= a[j]){
			tmp.push_back(a[i]);
			++i;
		}
		else{
			tmp.push_back(a[j]);
			++j;
		}
	}

	while(i <= mid){
		tmp.push_back(a[i]);
		++i;
	}

	while(j <= r){
		tmp.push_back(a[j]);
		++j;
	}

	for(int i=l, j=0; i<=r; ++i, ++j){
		a[i] = tmp[j];
	}

}
