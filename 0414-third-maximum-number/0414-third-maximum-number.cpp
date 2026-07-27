class Solution {
public:
    int thirdMax(vector<int>& arr) {

        long long lar=arr[0];
        long long slar = LLONG_MIN;
        long long tlar = LLONG_MIN;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>lar){
                tlar=slar;
                slar=lar;
                lar=arr[i];
            }
            else if(arr[i]>slar && arr[i]!=lar){
                tlar=slar;
                slar=arr[i];
            }
            else if(arr[i]>tlar && arr[i]!=lar && arr[i]!=slar){
                tlar=arr[i];
            }
        }
        if(tlar==LLONG_MIN){
            return lar;
        }
        return tlar;
    }
};