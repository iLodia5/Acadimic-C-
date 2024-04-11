#include<iostream>
//the infix_expression is a reverse expression without prakets
using namespace std;
short getp(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if (c=='*'||c=='/')
    {
        return 2;
    }
    else if (c=='+' || c=='-')
    {
        return 1;
    }
    else 
    {
        return 0;
    }

}
int main()
{

    string infix_exp ="",post="";
    int top = -1;
    char s[10];
    short p;
    cin>>infix_exp;

    for(int i=0; i<infix_exp.length(); i++)
    {
        char c = infix_exp[i];
        if(c=='(')
        {
            top++;
            s[top]=c;
        }
        else if (c==')')
        {
            while (s[top]!='(')
            {
                post = post + s[top];
                top--;
            }
            top--;
            
        }
        else
        {
            p=getp(c);
            if(p==0)
            {
                post = post +c;
            }
            else 
            {
                if(top==-1 || s[top] == '(' || p>getp(s[top]))
                {
                    top++;
                    s[top]=c;
                }
                else
                {
                    while (top != -1 && s[top] != '(' && p<= getp(s[top]))
                    {
                        post = post + s[top];
                        top--;
                    }
                    top++;
                    s[top] = c;

                }
            }
        }
    }
    while (top != -1)
    {
        post = post +s[top];
        top--;

    }
    cout << post ;
    return 0;


}