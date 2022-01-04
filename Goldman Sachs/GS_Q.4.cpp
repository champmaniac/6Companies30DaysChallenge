// TC O(N)

string encode(string src)
{     
  //Your code here 
  int len = src.size();
  string s;
  int i=0,j=0,count=0;
  while(j<len){
      s+=src[i];
      j++;
      count++;
      while(src[i]==src[j]){
        j++;
        count++;
      }
      s+=count+'0';
      count=0;
      i=j;
  }
  return s;
}     
 