class MyQueue {
public:
    stack<int> s;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack <int>n;
        int last;
        while(!s.empty())
        {
            int k = s.top();
            s.pop();
            if(s.empty())
            {
                last = k;
                break;
            }
            n.push(k);            
        }
        while(!n.empty())
        {
            s.push(n.top());
            n.pop();
        }
        return last;
    }
    
    int peek() {
        stack <int>n;
        int last;
        while(!s.empty())
        {
            int k = s.top();
            s.pop();
            if(s.empty())
            {
                last = k;
            }
            n.push(k);            
        }
        while(!n.empty())
        {
            s.push(n.top());
            n.pop();
        }
        return last;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */