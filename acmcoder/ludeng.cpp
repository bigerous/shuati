#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    while (scanf("%d %d",&n,&d)!=EOF){
        vector<int> lights;
        for (int i = 0; i < n; i++){
            int x ;
            scanf("%d",&x);
            if (x<=d){
                lights.push_back(x);
            }
        }
        lights.push_back(0);
        lights.push_back(d);
        sort(lights.begin(), lights.end());
        double ans = 0;
        for (int i =0; i<lights.size()-1; i++){
            ans = max(ans, (lights[i+1] - lights[i]) /2.0);
        }
        printf("%.2f\n",ans);
    }

}