/*
以#号结束
1+2*(3+4)#
*/
#include<iostream> 
#include<stack>
using namespace std;
int priority( char c)
{
	if(c=='(') return 0;
	if(c=='+' || c=='-') return 1;
	if(c=='*' || c=='/') return 2;
}

int main()
{
	stack<int> opnd;
	stack<char> optr;
	stack<char> st;
	string s,s1="",s2="";
	getline(cin,s);
	for(int i=0;i<s.length();++i){
		if(s[i]=='+' ||s[i]=='-'||s[i]=='*' ||s[i]=='/'||s[i]=='(' ){
			/*
			if(s2!=""){
				s1=s1+s2;
				s2="";
			}
			*/
			while(!st.empty() && priority(st.top())>=priority(s[i])) s1 = s1 +st.top(),st.pop();
			st.push(s[i]);
		}
		else if(s[i]==')'){
			/*
			if(s2!=""){
				s1=s1+s2;
				s2="";
			}
			*/
		    while(st.top() != '(')  s1 += st.top(),st.pop();
		    st.pop();
	    }
	    else if(s[i]=='#'){
/*			if(s2!=""){
				s1=s1+s2;
				s2="";
			}
*/
	    	while(!st.empty()) s1 += st.top(),st.pop();
		}
		else {
			s2 += s[i];
		}		
		if(s2!=""){
				s1=s1+s2;
				s2="";
		}
		
	}
	cout<<s1<<endl;
	return 0;
}
