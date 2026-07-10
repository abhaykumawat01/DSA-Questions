class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        vector<vector<char>>ans(numRows,vector<char>(1000-numRows,'#'));
        int i = 0;
        int row = 0;
        int col = 0;
        while(i<s.size()){
            if(col%(numRows-1)==0 && row<numRows){
                ans[row][col] = s[i];
                i++,row++;
            }
            else if(row==numRows){
                int j = row-2;
                col++;
                while(j && i<s.size()){
                    ans[j][col] = s[i];
                    j--,col++,i++;
                }
                row = j;
            }
        }
        string a = "";
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=col;j++){
                if(ans[i][j]!='#')
                a +=ans[i][j];
            }
        }
        return a;
    }
};