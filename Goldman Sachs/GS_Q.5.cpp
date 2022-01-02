// TC O(N) SC O(N)
class Solution{
public:	
	ull getNthUglyNo(int n) {
	    set<long long int> s;
	    s.insert(1);
	    n--;
	    while(n--){
	        auto it = s.begin();
	        long long int x = *it;
	        s.erase(it);
	        s.insert(x*2);
	        s.insert(x*3);
	        s.insert(x*5);
	    }
	    return *s.begin();
	}
};