vector<int> recoverArray(int n, vector<int>& s) {
    vector<int> res;
    sort(begin(s), end(s));
    while (s.size() > 1) {
        vector<int> l, r;
        int num = s[1] - s[0], l_zero = false;
        for (int i = 0, j = 0; i < s.size(); ++i)
            if (s[i] != INT_MIN) {
                l_zero |= s[i] == 0;
                l.push_back(s[i]);
                r.push_back(s[i] + num);
                for (j = max(j + 1, i + 1); s[j] != s[i] + num; ++j);
                s[j] = INT_MIN;                    
            }
        res.push_back(num * (l_zero ? 1 : -1));
        swap(s, l_zero ? l : r);
    }
    return res;
}