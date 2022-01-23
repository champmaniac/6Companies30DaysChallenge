long long sto(string s)
{
    long long x=0;
    for(int i=0;i<s.size();i++)
      x=x*10+s[i]-'0';
    return x;
}
int missingNumber(const string& s)
{
    int n=s.size();
    for(int len=1;len<=6;len++)
    {
       string temp="";
       int l=len,i=0;
       while(i<s.size()&&l--)
        temp+=s[i++];
       long long prev=sto(temp),count=0,j=i,miss,flag=0;
       temp="";
       while(j<s.size())
       {
               temp+=s[j++];
               if(prev+1==sto(temp))
               {
                   prev=sto(temp);
                   temp="";
               }
               else if(prev+2==sto(temp))
                    {
                        count++;
                        miss=prev+1;
                        prev=sto(temp);
                        temp="";
                    }
                    else if(prev<sto(temp))
                           flag=1;
        }
        if(count==1&&flag==0)
         return miss;
    }
    return -1;
}