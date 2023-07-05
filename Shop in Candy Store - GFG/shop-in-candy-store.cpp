//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        int b=0,c=0,a;
        sort(candies,candies+N);
        
        // if(N%K==0){
        //     a=N/K;
        // }
        // else{
        //      a =( N/K) +1;
        // }
        
        // for(int i=0;i<a;i++){
        //     b=b+candies[i];
        // }
        
        // for(int i=N-1;i>=N-a;i--){
        //     c=c+candies[i];
        // }
        
        int a1=0,i=0;
        while(i<N){
             b=b+candies[i];
             i++;
            a1=a1+K;
            if(a1+i>=N){
                break;
            }
        }
         int b1=0,j=N-1;
        while(j>=0){
             c=c+candies[j];
             j--;
            b1=b1+K;
            if(b1+N-j-1>=N){
                break;
            }
        }
        
        
        
        
        vector<int> v;
        v.push_back(b);
        v.push_back(c);
        return v;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends