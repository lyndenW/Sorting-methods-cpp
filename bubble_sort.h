void bubble(item a[], intleft, intright) {
    for (int i = left; i < right - 1; ++i)
        for (int j = right - 1; j > i; --j)
            if (a[j] < a[j - 1])
                swap(a[j - 1], a[j]);
}

// Adaptive version, stop early if already sorted.
void bubble_ad(item a[], intleft, intright) {
    for (int i = left; i < right - 1; ++i) {
        bool swapped = false;
        for (int j = right - 1; j > i; --j) {
            if (a[j] < a[j - 1]) {
                swapped = true;
                swap(a[j - 1], a[j]);
            }
        }
        if (!swapped)
            break;
    }
}
