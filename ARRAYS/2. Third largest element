// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        
        if(n < 3)
            return -1;
            
        int mx1 = a[0];
        int mx2 = INT_MIN;
        int mx3 = INT_MIN;
        
        for (int i = 1; i < n ; i ++){
            
            if (a[i] > mx1){
                mx3  = mx2;
                mx2 = mx1;
                mx1  = a[i];
            }
 
        /* If a[i] is in between first and second */
            else if (a[i] > mx2){
                mx3 = mx2;
                mx2 = a[i];
            }
 
        /* If arr[i] is in between second and third */
            else if (a[i] > mx3)
            mx3 = a[i];
    
        }
        /*int mn1 = a[0];      //mn = 2
        int mn2 = a[1];
        int mn;
        
        if(mn1 > mn2){
            mn = mn1;
           
        }else{
            mn = mn2;
        }
        
        for(int i = 2; i < n; i++){
            
            if(a[i] > mn1 && a[i] > mn2){
                mn = a[i];     //mn = 4
                
            }
            if(a[i] > mn1 && a[i] < mn2){
                mn1 = a[i];
            }
            if(a[i] > mn2 && a[i] < mn1){
                mn2 = a[i];
            }
            
            
        }
        
        return mn1;    
    }            */
        return mx3;
    }

};

// { Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     // } Driver Code Ends
