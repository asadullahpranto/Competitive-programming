#include <bits/stdc++.h>
using namespace std;
// LCS to LIS
int A[262144], B[262144];
int LIS(int A[], int n) {
    set<int>st;
    set<int>::iterator it;
    st.clear();
    for(int i=0;i<n;i++){
        it=st.lower_bound(A[i]);
        if(it!=st.end()) st.erase(it);
        st.insert(A[i]);
    }
    return st.size();
}
int main() {
    int testcase, cases = 0;
    int n, x;
    scanf("%d", &testcase);
    while (testcase--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            A[x] = i;
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            B[i] = A[x];
        }
        printf("Case %d: %d\n", ++cases, (n - LIS(B, n)) * 2);
    }
    return 0;
}
