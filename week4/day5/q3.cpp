class Codec {
public:

    void serializeHelper(TreeNode* root, string &s){

        if(root == nullptr){
            s += "#,";
            return;
        }

        s += to_string(root->val) + ",";

        serializeHelper(root->left, s);
        serializeHelper(root->right, s);
    }

    string serialize(TreeNode* root) {

        string s;

        serializeHelper(root, s);

        return s;
    }

    TreeNode* deserializeHelper(vector<string>& nodes, int &index){

        if(nodes[index] == "#"){
            index++;
            return nullptr;
        }

        TreeNode* root = new TreeNode(stoi(nodes[index]));
        index++;

        root->left = deserializeHelper(nodes, index);
        root->right = deserializeHelper(nodes, index);

        return root;
    }

    TreeNode* deserialize(string data) {

        vector<string> nodes;

        string temp;

        for(char ch : data){

            if(ch == ','){
                nodes.push_back(temp);
                temp.clear();
            }
            else{
                temp += ch;
            }
        }

        int index = 0;

        return deserializeHelper(nodes, index);
    }
};