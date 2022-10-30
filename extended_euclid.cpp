int extended_euclid(int a, int b, int &x, int &y){ 
    if(!a){
        x=0;
        y=1;
        return b;
    }
    int tx,ty;
    int d=xgcd(b%a,a,tx,ty);
    x=ty-(b/a)*tx;
    y=tx;
    return d;
}
