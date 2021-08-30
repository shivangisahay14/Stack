queue<int>q1;
    queue<int>q2;
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        
        q1.push(x);        
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        
        if(q1.empty()) return -1;
    
        while(q1.size()>1){
            int ele=q1.front();
            q2.push(ele);
            q1.pop();

        }
        int ans=q1.front();
        q1.pop();
        swap(q1,q2);
        return ans;
        
    }
    
    /** Get the top element. */
    int top() {
        
         while(q1.size()>1){
            int ele=q1.front();
            q2.push(ele);
            q1.pop();

        }
        int ans=q1.front();
        q1.pop();
        q2.push(ans);
        swap(q1,q2);
        return ans;
        
    }
    
    
    
    /** Returns whether the stack is empty. */
    bool empty() {
        
        return (q1.size()+q2.size()==0);
        
    }
