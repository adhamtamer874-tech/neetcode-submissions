
class MinStack {
public:
    stack<int> f;
    stack<int>g;
    MinStack() {
    }
    void push(int val) {
        f.push(val);
        if (!g.empty() && val <= g.top())
        {
            g.push(val);
        }
        else if (g.empty())
            g.push(val);

       
    }
    void pop() {
        if (f.top() == g.top())
        {
            g.pop();
        }

        f.pop();
    }

    int top() {
        return f.top();
    }

    int getMin() {
        return g.top();
    }

};