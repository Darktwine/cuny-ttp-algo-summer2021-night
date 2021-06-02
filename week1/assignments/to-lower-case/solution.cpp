class Solution {
public:
    string toLowerCase(string s) {
        string lowerCaseString = "";

        for (char letter : s) {
            if (letter >= 'A' and letter <= 'Z') {
                lowerCaseString += letter + 32;
            }
            else {
                lowerCaseString += letter;
            }
        }
        return lowerCaseString;
    }
};