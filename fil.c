int byteSwap(int x, int n, int m) {
    int xn = x;
        int xm = x;
        int mask = 0;
        int mask_m = 0xFF << (m << 3);
        int mask_n = 0xFF << (n << 3);
        int x_swapped = 0;
        xn = x >> (n << 3);
        xn = xn & 0xFF;
        xm = x >> (m << 3);
        xm = xm & 0xFF;
        mask = (mask_m | mask_n) ^ ~(0x0);
        x_swapped = (x & mask) | (xm << (n <<3)) | (xn << (m <<3));
        return x_swapped;
}
