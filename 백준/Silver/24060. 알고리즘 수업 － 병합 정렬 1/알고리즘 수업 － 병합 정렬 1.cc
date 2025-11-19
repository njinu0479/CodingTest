#include <iostream>
#include <vector>

using namespace std;

int cnt = 0, n, k;
int result = -1;
vector<int> tmp;

void merge(vector<int> &v, int p, int q, int r) {
    int i = p, j = q + 1, t = 0;

    while(i <= q && j <= r) {
        if (v[i] <= v[j]) {
            tmp[t++] = v[i++];
        } else {
            tmp[t++] = v[j++];
        }
    }

    while (i <= q) tmp[t++] = v[i++];
    while (j <= r) tmp[t++] = v[j++];

    i = p; t = 0;

    while(i <= r) {
        v[i] = tmp[t++];
        cnt++;

        if (cnt == k) {
            result = v[i];
        }

        i++;
    }
}

void merge_sort(vector<int> &v, int p, int r) {
    if(p < r) {
        int q = (p + r) / 2;
        merge_sort(v, p, q);
        merge_sort(v, q + 1, r);
        merge(v, p, q, r);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    vector<int> v(n);
    tmp.resize(n);
    
    for(int i = 0; i < n; i++) cin >> v[i];

    merge_sort(v, 0, n - 1);

    cout << result;

    return 0;
}