#include <bits/stdc++.h>

using namespace std;

int N;
int candies[10][10];
int ss,ans;
int ban[10];

void f(int row){
    if(row==N){
        ans=max(ss,ans);
        return;
    }
    for(int i=0; i<N; i++){
        if(ban[i]==0){
            ban[i]=1;
            ss+=candies[row][i];
            f(row+1);
            ban[i]=0;
            ss-=candies[row][i];
        }
    }
}
int main()
{
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> candies[i][j];
        }
    }
    f(0);

    cout << ans;
    return 0;
}
