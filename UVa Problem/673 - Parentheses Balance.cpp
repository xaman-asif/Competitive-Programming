#include <bits/stdc++.h>
using namespace std;
struct stacc
{
  char ara[130];
  int top;
};
stacc s;
void push(char c)
{
  s.top++;
  s.ara[s.top] = c;
}
void pop()
{
  s.top--;
}
char peek()
{
  return s.ara[s.top];
}
bool empty()
{
  if(s.top==-1) return true;
  else return false;
}
bool check(string str)
{
  for(int i=0; str[i]; ++i)
  {
    if(str[i]=='(' || str[i] == '[') push(str[i]);
    else{
      if(empty()) return false;//Think about the case ())))))
      if(str[i]==')' && peek()!='(')
        return false;
      if(str[i]==']' && peek()!='[')
        return false;
      pop();
    }
  }
  if(empty())
    return true;//stack must be empty if the bracket were balanced
  return false;//If the case was (((()) then the stack wouldn't be empty
}
int main()
{
  int tc;
  scanf("%d", &tc);
  getchar();
  while(tc--)
  {
    s.top = -1;
    string line;
    getline(cin,line);
    if(line.empty())
      cout << "Yes" << endl;
    else
      (check(line)) ? printf("Yes\n") : printf("No\n");
  }
  return 0;
}
