/*
	���޿�ʼ�����޽�β��
	��·�����
	method1���и��׽ڵ㣬��ÿһ���ڵ����ϱ�����ͬʱ��¼��������������������������������������ӵ�ǰ�ڵ���������ӽڵ�ݹ����


*/
vector<int> print(TreeNode* root,int len){
	vector<int> res;
	for(int i=0;i<len;i++){
		res.push_back(root->val);
		root=root->parent;
	}
	reverse(res.begin(),res.end());
	return res;
}
void getPath(TreeNode* root,int sum,vector<vector<int> >& res){
	if(!root) return;
	int tmp=0;
	TreeNode* node=root;
	for(int i=1;node;i++){
		tmp+=node->val;
		if(tmp==sum) res.push_back(print(root,i));
		node=node->parent;
	}
	getPath(root->left,sum,res);
	getPath(root->right,sum,res);
}
vector<vector<int> > getPath(TreeNode* root,int sum){
	vector<vector<int> > res;
	getPath(root,sum,res);
	return res;
}