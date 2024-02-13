class Solution
{
    public:
        string firstPalindrome(vector<string> &words) {
            for(int i=0; i<words.size(); i++){
                string str = words[i];
                reverse(str.begin(), str.end());
                if(words[i] == str) return words[i];
            }
            return "";
        }
};