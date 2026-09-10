#include "fastmdc.h"

ll mdc(ll a, ll b){
    if(b == 0) return a;
    if(!((a|b)&1ll)) return mdc(a>>1ll, b>>1ll)<<1ll;
    if((a&1ll)&(a^b)) return mdc(a, b>>1ll);
    if((a&b&1ll)&&a<=b) return mdc(a, b-a);
    return mdc(b, a);
}