 int largestRectangleArea(vector<int>& heights) {
        
        int n= heights.size();
        vector<int> left,right;
    stack<pair<int,int>> s1,s2;
    int pseudo_index =-1;
    int pseudo_index1 =n;
    for (int i=0;i<n;i++)
    {
       while(s1.size()>0 and s1.top().first>=heights[i]){
                s1.pop();
            }
            if(s1.empty()){
                left.push_back(pseudo_index);
            }
            else{
                left.push_back(s1.top().second);
            }
            s1.push({heights[i],i});
    }
    for (int i=n-1;i>=0;i--)
    {
      while(s2.size()>0 and s2.top().first>=heights[i]){
                s2.pop();
            }
            if(s2.size()>0 and s2.top().first<heights[i]){
                right.push_back(s2.top().second);
            }
            else{
                right.push_back(pseudo_index1);
            }
            s2.push({heights[i],i});
    }
    reverse(right.begin(),right.end());
        
    int m=INT_MIN;
    for (long long i=0;i<n;i++)
    {
      m=max(m,(right[i]-left[i]-1)*heights[i]);// taking max after finding area
    }
    return m;
         

    }
