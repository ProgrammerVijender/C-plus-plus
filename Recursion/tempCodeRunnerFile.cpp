e(const string &ch, char x, int size) {
    if (size < 0)
        return -1;

    if (ch[size] == x)
        return size;