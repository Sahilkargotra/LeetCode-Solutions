class Node{
    public:
    string data;
    Node* next;
    Node* back;
    
    Node()
    {
        data = "0";
        next = nullptr;
        back = nullptr;
    }
    Node(string x)
    {
        data = x;
         next = nullptr;
        back = nullptr;
    }
    Node(string x,Node* next1,Node* back1)
    
    {
        data = x;
         next = next1;
        back =  back1;
    }
    
};

class BrowserHistory {
public:
    Node* curr;
    BrowserHistory(string homepage) {
       curr = new Node(homepage); 
    }
    
    void visit(string url) {
       Node* newNode = new Node(url);
       curr->next = newNode;
       newNode->back = curr;
       curr = newNode;
    }
    
    string back(int steps) {
        while(steps)
        {
            if(curr->back){
            curr = curr->back;
            }
            else
                break;
            steps--;
        }
        return curr->data;
    }
    
    string forward(int steps) {
        while(steps)
        {
            if(curr->next){
            curr = curr->next;
            }
            else
                break;
        steps--;
        }
        return curr->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */