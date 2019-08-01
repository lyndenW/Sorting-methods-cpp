template<typename T>
// Merge Sort
void merge_sort(T a[], int left, int right) {
    if (right < left + 2)
        return;
    int mid = left + (right - left) / 2;
    merge_sort(a, left, mid);
    merge_sort(a, mid, right);
    merge(a, left, mid, right);
}

template<typename T>
void merge(T a[], int left, int mid, int right) {
    int size = right - left;
    vector<int> c(size);
    for (int i = left, j = mid, k = 0; k < size; ++k) {
        if (i == mid)
            c[k] = a[j++];
        else if (j == right)
            c[k] = a[i++];
        else
            c[k] = (a[i] <= a[j]) ? a[i++] : a[j++];
    }
    copy(c.begin(), c.end(), &a[left]);
}