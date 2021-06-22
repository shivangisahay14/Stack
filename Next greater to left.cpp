void nextGreaterElementLeft(vector<int> &vec){
  	int size = vec.size();
	/* O(N^2)
  	vector<int> ans;
  	for(int i = 0; i < size; i++){
      	int flag = 0;
    	for(int j = 0; j < i; j++){
    		if(vec[j] > vec[i]){
            	ans.push_back(vec[j]);
              	flag = 1;
              	break;
            }
    	}
      	if(flag == 0) ans.push_back(-1);
    }
  	vec = ans;
    */
vector<long long> nextLargerElement(vector<long long> arr, int n){
        
        vector<long long> v;
        stack<long long> s;
        

        
        s.push(arr[j]);
        v.push_back(-1);
        
        for(int i=0;i<n;i++){
            
            while(s.size()>0 and s.top()<arr[j]){
                s.pop();
            }
            if(s.size()>0 and s.top()>arr[j]){
                v.push_back(s.top());
            }
            else{
                v.push_back(-1);
            }
            s.push(arr[j]);
            
        }
        
        return v;
    }
