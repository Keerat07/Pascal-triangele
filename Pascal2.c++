class Solution {
public:
    vector<int> getRow(int rowIndex)  {
        vector<vector<int>> vec1;
        for(int i=0;i<rowIndex+1;i++){
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
            if(i==rowIndex){
                return arr;
            }
            vec1.push_back(arr);
        }
        vector<int>arr1;
        return arr1;
    }
};
