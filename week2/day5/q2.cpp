class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        int i=0;
        while(i<chars.size()){
        char current_char=chars[i];
        int count=0;
            while(i<chars.size()&& chars[i]==current_char){
                i++;
                count++;
            }
            chars[index]=current_char;
            index++;
            if(count>1){
                string count_str=to_string(count);
                for(char&ch:count_str){
                    chars[index]=ch;
                    index++;
                }
            }
        }
        return index;
    }
};

// string compression
