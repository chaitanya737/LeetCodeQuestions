https://www.codingninjas.com/codestudio/problems/795104?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
bool isValidParenthesis(string expression)
{
    int n = expression.length();
    stack<char> s;
    for(int i = 0 ; i < n ; i++) {
        if(expression[i] == '[' or expression[i] == '{' or expression[i] == '(')
            s.push(expression[i]);
        else if(expression[i] == ']' and !s.empty() and s.top() == '[') s.pop();
        else if(expression[i] == '}' and !s.empty() and s.top() == '{') s.pop();
        else if(expression[i] == ')' and !s.empty() and s.top() == '(') s.pop();
        else return false;
        
    }
    return s.empty();
    
}