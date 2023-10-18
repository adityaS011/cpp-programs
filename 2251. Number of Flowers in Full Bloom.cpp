class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) 
    {
        vector<int> ans;

        vector<int> start;
        vector<int> end;

        for(int i=0; i<flowers.size(); i++)
        {
            start.push_back(flowers[i][0]);
            end.push_back(flowers[i][1]);
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        for(int i=0; i<people.size(); i++)
        {
            int bloomed= upper_bound(start.begin(), start.end(), people[i])- start.begin();
            int finished= lower_bound(end.begin(), end.end(), people[i])- end.begin();

            ans.push_back(bloomed- finished);
        }
        return ans;
    }
};

//Explanation:
// - Find the first flower that blooms after the person's preferred time (x) using a binary search on the starts array.
// - Find the last flower that blooms before or at the person's preferred time (y) using a binary search on the ends array.
// - Calculate the number of flowers in full bloom for this person as x - y and store it in the ans array.
