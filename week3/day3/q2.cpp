class MinStack {
public:
    stack<long long> st;
    long long cmin;

    MinStack() {
        cmin = INT_MAX;
    }

    void push(int val) {
        if (st.empty()) {
            cmin = val;
            st.push(val);
        } else {
            if (val >= cmin) {
                st.push(val);
            } else {
                st.push(2LL * val - cmin);
                cmin = val;
            }
        }
    }

    void pop() {
        if (st.empty())
            return;

        long long x = st.top();
        st.pop();

        if (x < cmin) {
            cmin = 2LL * cmin - x;
        }

        if (st.empty()) {
            cmin = INT_MAX;
        }
    }

    int top() {
        if (st.empty())
            return 0;

        long long x = st.top();

        if (x < cmin)
            return cmin;

        return x;
    }

    int getMin() {
        return (cmin == INT_MAX) ? INT_MAX : cmin;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */