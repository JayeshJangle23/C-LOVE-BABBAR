#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int iteration=m*n;
        int startingrow=0;
        int endingrow=m-1;
        int startingcol=0;
        int endingcol=n-1;
        int count=0;
        while(count<iteration){
            for(int i=startingcol;i<=endingcol && count<iteration;i++){
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;
            for(int i=startingrow;i<=endingrow && count<iteration;i++){
                ans.push_back(matrix[i][endingcol]);
                count++;
            }
            endingcol--;
            for(int i=endingcol;i>=startingcol && count<iteration;i--){
                ans.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;
            for(int i=endingrow;i>=startingrow && count<iteration;i--){
                ans.push_back(matrix[i][startingcol]);
                count++;
            }
            startingcol++;
        }
        for(int i=0;i<iteration;i++){
            cout<<ans[i]<<endl;
        }
}

