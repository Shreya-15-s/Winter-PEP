/*The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"*/
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows) 
            return s; 

        string result = "";
        int n = s.length();

        for (int row = 0; row < numRows; row++) {
            int i = row;
            bool down = true;  

            while (i < n) {
                result += s[i];
                if (row == 0 || row == numRows - 1) {
                    i += 2 * (numRows - 1);  
                } else {
                    if (down)
                        i += 2 * (numRows - row - 1);
                    else
                        i += 2 * row;
                    down = !down;  
                }
            }
        }

        return result;
    }
};
