template<typename T>
void selection(T a[], size_t left, size_t right) {
    for (size_t i = left; i < right - 1; ++i) {
        size_t min = i;
        for (size_t j = i + 1; j < right; ++j) {
            if (a[j] < a[min])
                min = j;
            swap(a[i], a[min]);
        } //for
    } //for
}