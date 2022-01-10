class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>> vec;
        set<string> st;
        string search_str;
        search_str = s.substr(0,1); // first char of s


        // first of all search all strings in list with first char matching
       // and store the results lexicographicaly using a set of strings
       // then push the set values in a vector temp and push this temp       vector into a 2d vector vec
       // TC here -> O(n * max|contack[i]| * logn)

        for(int j=0;j<n;j++){
            if(contact[j].substr(0,1)==search_str){
                st.insert(contact[j]);
            }
        }
        vector<string> temp;
        if(!st.empty()){ // push set values in vec
            for(auto it:st){
                temp.push_back(it);
            }
            vec.push_back(temp);
        }
        else // if no value found then we have to push zero in whole vec and return it
        {
            temp.push_back("0");
            for(int d=0;d<s.size();++d){
                vec.push_back(temp);
            }
            return vec;
        }

      // Now we have vec with 1st row , rest s.size()-1 rows can be found by 
      // searching for next substrings in previous rows 
      // like searching in vec[0]th vector to fill vec[1] and in vec[1] to fill vec[2] and so on
      // TC here -> O(|s| * n)

        for(int i=1;i<s.size();++i){
            temp.clear();
            search_str = s.substr(0,i+1);
            for(int j=0;j<vec[i-1].size();++j){
                if(vec[i-1][j].substr(0,i+1)==search_str){
                    temp.push_back(vec[i-1][j]);
                }
            }
            if(temp.size()==0)
            {
                temp.push_back("0");
                while(i<s.size()){
                    vec.push_back(temp);
                    i++;
                }
                return vec;
            }
            else
            vec.push_back(temp);
        }
        return vec;
    }
};
