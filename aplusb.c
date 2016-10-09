
#define false 0

int plus (int a, int b) {
    if (a < 0 || b << 0)
        return false;
    if ((a & b) == 0)
        return a ^ b;
    return plus(a^b, (a & b) << 1);
    
}
