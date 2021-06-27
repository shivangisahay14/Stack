using 2 stack:

stack<int> s1;
    stack<int> s2;
    MinStack() {
       
    }
    
    
    void push(int val) {
        if(s2.empty() || val<=getMin()) s2.push(val);
        s1.push(val);
    }
    
    void pop() {
        if(s1.top()==getMin()) s2.pop();
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};


Using O(1) space:
class MinStack {
public:
    /** initialize your data structure here. */
    stack<long long int>s;
     long long int minEle; //supporting stack
    MinStack() {
        
    }
    
    void push(int val) {
        
        if(s.empty()){
        s.push(val);
        minEle=val;
    }
    else{
        if(val>=minEle){
            s.push(val);
        }
        else{
            s.push((long long)(2*(long long)val) - minEle);
            minEle=val;
        }
    }       
                
        
    }
    
    void pop() {
        
    if(s.empty())  return ;
    
    else{
    if(s.top()>=minEle){
        s.pop();
        
    }
    else{
        minEle=2*minEle-s.top();
        s.pop();
        
    }
    }
        
    }
    
    int top() {
        
        if(s.empty()) return -1;
        
        if(s.top()>=minEle){
            return s.top();
        }
        else{
            return minEle;
        }
    }
    
    int getMin() {
        if(s.empty()) return -1;
    
    return minEle;        
    }  
