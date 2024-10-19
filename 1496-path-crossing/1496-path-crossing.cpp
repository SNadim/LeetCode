class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int, int>> st;
        st.insert({0,0});
        int currX = 0;
        int currY = 0;
        for(auto i : path)
        {
            if(i == 'N')
            {
                currY+=1;
            }
            else if(i == 'S')
            {
                currY-=1;
            }
            else if(i == 'E')
            {
                currX+=1;
            }
            else
            {
                currX-=1;
            }
            
            if(st.find({currX, currY}) != st.end())
            {
                return true;
            }
            st.insert({currX, currY});
        }
        
        return false;
    }
};