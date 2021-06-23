class Solution {
public:
     int MAH(vector<int>& heights) {
        
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
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n=matrix.size();
        if(n == 0){
            return 0;
        }
        int m=matrix[0].size();
        
        vector<int>v;
        int mx;
        for(int j=0;j<m;j++){
            v.push_back(matrix[0][j]-'0');
            mx=MAH(v);
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='0')
                    v[j]=0;
                else
                    v[j]=v[j]+(matrix[i][j]-'0');
            }
            mx=max(mx,MAH(v));
        }
        
        return mx;     
        
        
        
        
    }
};
