class Solution {
public:
    string check(string& s, int& i) {
        string temp = "";
        while (i < s.size()) {
            if (isdigit(s[i])) {
                int a = 0;

                while (i < s.size() && isdigit(s[i])) {
                    a = a * 10 + (s[i] - '0');
                    i++;
                };
                i++;
                string repeat = check(s, i);
                while (a) {
                    temp += repeat;
                    a--;
                }
            } else if (s[i] == ']') {
                return temp;
            } else if (s[i] != '[') {
                temp += s[i];
            }
            i++;
        }
        return temp;
    }
    string decodeString(string s) {
        int i = 0;
        return check(s, i);
    }
};
//decode teh string