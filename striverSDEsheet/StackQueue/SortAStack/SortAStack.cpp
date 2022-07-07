codingninjas.com/codestudio/problems/sort-a-stack_985275?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

void insert(int temp , stack<int> &s) {
    if(s.size() == 0 or temp >= s.top()) {
        s.push(temp);
        return;
    }
    
    int val = s.top();
    s.pop();
    insert(temp , s);
    s.push(val);
   
    
}

void sortStack(stack<int> &stack)
{
	if(stack.size() == 1) return;
    
    int temp = stack.top();
    stack.pop();
    sortStack(stack);
    insert(temp , stack);
   
    
    
}