#include<stdio.h>
#include<string.h>

typedef long long ll;

ll hash(char *s) {
    const int p = 31;
    const int m = 1e9 + 9;
   ll hash_value = 0;
   ll p_pow = 1;
    for (int c=0;c<strlen(s);c++) {
        hash_value = (hash_value + (s[c] - 'A' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}
int main()
{
    char a[1000];
    printf("Enter the String (only upper case)\n");
    scanf("%[^\n]s",a);
    printf("Hash value: %ld",hash(a));
}
