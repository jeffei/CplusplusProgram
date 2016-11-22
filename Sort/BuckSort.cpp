/*
	*Ͱ���򣬷ǱȽ�������ͻ�ƻ��ڱȽ������ʱ�临�Ӷ��½�O(nlogn)
	*��Щʱ��Ҫ�ȿ�������飬�����ȶ�����
	*Ӧ�ó����������������򣬺�����������λ��
	
	*�ռ任ʱ��


*/

void BuckSort(vector<int>& vec){
	int min=vec[0];
	int max=vec[0];
	for(int i=1;i<vec.size();i++){
		if(vec[i]>max) max = vec[i];
		else if(vec[i]<min) min=vec[i];
	}
	int numOfBuck = max-min+1;
	vector<list<int> > tmp(numOfBuck);
	for(int i=0;i<vec.size();i++){
		tmp[vec[i]-min].push_back(vec[i]);
	}
	int idx=0;
	for(int i=0;i<numOfBuck;i++){
		for(list<int>::iterator it =tmp[i].begin();it!=tmp[i].end();++it)
			vec[idx++]=*it;
	}
}

int main(){
	int k=10;
	srand((unsigned)(NULL));//����ѭ������
	while(k--){
		int cnt=rand()%10;
		vector<int> t1;
		generate_n(back_inserter(t1),cnt,rand);
		vector<int> t2(t1);
		BuckSort(t1);
		sort(t2.begin(),t2.end());
		if(t1==t2) cout<<cnt<<"ok"<<endl;
		else cout<<"00000000000"<<endl;
	}

	return 0;
}