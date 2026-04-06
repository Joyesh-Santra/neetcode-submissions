class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        vector<int>v;
        int n = temperatures.size();

        for(int i = n-1; i>=0; i--){
            while(st.size()>0 && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            if(st.size() == 0){
                v.push_back(0);
            }else{
                v.push_back(st.top()-i);
            }
            st.push(i);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
