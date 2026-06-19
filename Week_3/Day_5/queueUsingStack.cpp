#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> in, out;
    MyQueue() {
    }
    void push(int x) {
        in.push(x);
    }
    int pop() {
        if(out.empty()) {
            while(!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
        int x = out.top();
        out.pop();
        return x;
    }

    int peek() {
        if(out.empty()) {
            while(!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }

        return out.top();
    }

    bool empty() {
        return in.empty() && out.empty();
    }
};

int main() {
    MyQueue q;
    q.push(1);
    q.push(2);
    cout << "Peek: " << q.peek() << endl;
    cout << "Pop: " << q.pop() << endl;
    cout << "Empty: " << q.empty() << endl;
    q.push(3);
    cout << "Pop: " << q.pop() << endl;
    cout << "Pop: " << q.pop() << endl;
    cout << "Empty: " << q.empty() << endl;
    return 0;
}