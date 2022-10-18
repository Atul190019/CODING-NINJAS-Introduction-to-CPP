void printParanthesesHelper(string cur, int open, int close, int max) 
{
    //t<<"{}";

if (cur.length()==(max * 2))
{
cout << cur << endl; 
    return;

//or(int i=0;i<=n;

}

//out<<"{"<<"}";

if (open < max)
 {
printParanthesesHelper (cur + "{", open + 1, close, max);

}

if (close <open)
   {
printParanthesesHelper(cur + "}", open, close + 1, max);

}
   }

void printParantheses(int n)
{
string str = "";
printParanthesesHelper(str, 0, 0, n);
}
