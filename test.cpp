#include <cstdio>
bool checkendian(){
    union my {
    int a;
    char b;
    };
    my t;
    t.a=1;
    return(t.b==1);
}

int main() {
    printf("%d\n",checkendian());
    return 0;
}
