#include <iostream>
#include <cmath>          
#include <algorithm>      
using namespace std;
 
int main()
{
    int n,i,j;
    while (cin>>n)
    {
        if (n==0)
        {
            break;
        }
        float *array=new float[n+1];   
        for (i=0;i<n;i++)
        {
            cin>>array[i];
        }
        for(i=0;i<n-1;i++){            
            int max=i;
            for (j=1+i;j<n;j++)                   
            {
                if(fabs(array[max])<fabs(array[j])){    
                    max=j;
                }
            }
            swap(array[i],array[max]);
        }
        for(i=0;i<n;i++){
            if(i==n-1){         
                cout<<array[i]<<endl;
            }else{
                cout<<array[i]<<" ";
            }
        }
            delete []array;
    }
    return 0;
}
