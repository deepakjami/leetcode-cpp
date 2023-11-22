//Solution 1:
// time complexity of O(n log n)
// space complexity of O(1)
class Solution {
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

//Solution 2:
//time complexity is O(n)
//space complexity is O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> charFreq;

        for (char c : s) {
            charFreq[c]++;
        }

        for (char c : t) {
            charFreq[c]--;

            if (charFreq[c] < 0) {
                return false;
            }
        }

        return true;
    }
};
