void bubble(item a[], intleft, intright) {
    for (int i = left; i < right - 1; ++i)
        for (int j = right - 1; j > i; --j)
            if (a[j] < a[j - 1])
                swap(a[j - 1], a[j]);
}