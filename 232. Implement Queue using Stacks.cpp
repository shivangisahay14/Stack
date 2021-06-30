class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
        
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        
        if(s2.empty()){
            if(s1.empty()){
                return -1;
            }
            else{
                while(!s1.empty()){
                    int x=s1.top();
                    s1.pop();
                    s2.push(x);
                }
            }
        }
    int ans=s2.top();
    s2.pop();
    return ans;
        
    }
    
    /** Get the front element. */
    int peek() {
        
        if(s2.empty()){
        if(s1.empty()){
            return -1;
        }
        else{
            while(!s1.empty()){
                int x=s1.top();
                s1.pop();
                s2.push(x);
            }
        }
    }
    int ans=s2.top();
    return ans;
        
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        
        return (s1.size()+s2.size()==0);
        
    }
};
