vector<long long> nextLargerElement(vector<long long> arr, int n){
        
        vector<long long> v;
        stack<long long> s;
        

        int j=n-1;
        s.push(arr[j]);
        v.push_back(-1);
        
        for(j=n-2;j>=0;j--){
            
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
        reverse(v.begin(),v.end());
        return v;
    }
