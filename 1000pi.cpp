//Golfed

#include<bits/stdc++.h>
using namespace std;int r,i,c,p,e;int main(){vector<int>a(3340,2);string d;r=1002;while(r--){for(i=0;i<=3339;i++)a[i]*=10;c=0;for(i=3339;i>0;i--)a[i]+=c,c=(a[i]/(2*i+1))*i,a[i]%=(2*i+1);a[0]+=c;p=a[0]/10;a[0]%=10;if(p<=8){for(char c:d){cout<<c;if(!e)cout<<".",e=1;}d.clear();d+=(p+'0');}else if(p==9)d+=(p+'0');else{p=0;for(char c:d)cout<<(c-'0'+1)%10;d.clear();d+=(p+'0');}}}


/*
Ungolfed Version~

#include<bits/stdc++.h>
using namespace std;
int r,i,c,p,e;
int main() {
    vector<int>a(3340,2);
    string d;
    r=1002, p=0;
    while(r--) {
        for(i=0;i<=3339;i++) a[i]*=10;
		c=0;
        for(int i=3339;i>0;i--) {
            a[i]+=c,c=(a[i]/(2*i+1))*i,a[i]%=(2*i+1);
        }
        a[0]+=c;p=a[0]/10;a[0]%=10;
        if(p<=8) {
            for(char c:d) {
                cout<<c;
                if(!e)cout<<".",e=1;
            }
            d.clear();
            d+=(p+'0');
        } else if(p==9) {
            d+=(p+'0');
        } else {
            p=0;
            for(char c:d) {
                cout<<(c-'0'+1)%10;
            }
            d.clear();
            d+=(p+'0');
        }
    }
}

*/