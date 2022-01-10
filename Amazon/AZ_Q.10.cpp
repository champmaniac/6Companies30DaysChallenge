// Brute Force
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    sort(nuts,nuts+n);
	    sort(bolts,bolts+n);
	}

};

// Optimized Solution

class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    char arr[9]={'0','0','0','0','0','0','0','0','0'};
	    for(int i=0;i<n;i++){
	        if(nuts[i]=='!') arr[0]='!';
	        else if(nuts[i]=='#')arr[1]='#';
	        else if(nuts[i]=='$')arr[2]='$';
	        else if(nuts[i]=='%')arr[3]='%';
	        else if(nuts[i]=='&')arr[4]='&';
	        else if(nuts[i]=='*')arr[5]='*';
	        else if(nuts[i]=='@')arr[6]='@';
	        else if(nuts[i]=='^')arr[7]='^';
	        else arr[8]='~';
	    }
	    int count =0;
	    for(int i=0;i<9;i++){
	        if(arr[i]!='0'){
	            nuts[count]=arr[i];
	            bolts[count]=arr[i];
	            count++;
	        }
	    }
	}

};