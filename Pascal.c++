class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec1;
        for(int i=0;i<numRows;i++){
            vector<int> arr;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    arr.push_back(1);
                }
                else{
                    int num=vec1[i-1][j-1]+vec1[i-1][j];
                    arr.push_back(num);
                }
            }
            vec1.push_back(arr);
        }
        return vec1;
    }
};
