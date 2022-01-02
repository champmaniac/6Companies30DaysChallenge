// TC O(NLogN)
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        // To Find the repeating element
        int x;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                x=arr[i];
                break;
            }
        }
        // To find the missing element
        int y;
        for(int i=1;i<=n;i++){
            if(binary_search(arr,arr+n,i)){
                continue;
            }
            else
            {
                y=i;
            }
        }
        
        int *res = new int[2];
        res[0]=x;
        res[1]=y;
        
        return res;
    }
};