/*
	# ��ȡ��n������������


*/
vector<int> getFactor(int n){
	vector<int> res;
	int i=2;
	while(i<=n){
		if(n%i==0){
			res.push_back(i);
			n=n/i;
		}else{
			i++;
		}
	}
	return res;
}