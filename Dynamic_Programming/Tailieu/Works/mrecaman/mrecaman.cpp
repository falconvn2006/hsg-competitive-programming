#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const char* INPUT = "mrecanman.inp";
const char* OUTPUT = "mrecaman.out";

const int MAXN = 500010;

int m;
int arr[MAXN]; // Actual sequence
set<int> seq; // Sub sequence non-dup
set<int>::iterator it;

int main()
{
    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);

    faster;

    // Code here

    // First element
    seq.insert(0);
    arr[0] = 0;

    // Establish the sequence
    for (int i=1; i<=MAXN; i++) {
		int k = arr[i-1] - i;
		if (k > 0) {
			it = seq.find(k); // Find element
			if (it != seq.end()) { // IF found
				arr[i] = arr[i-1] + i;
				seq.insert(arr[i]);
			} else {
				arr[i] = k;
				seq.insert(k);
			}
		} else {
			arr[i] = arr[i-1] + i;
			seq.insert(arr[i]);
		}
	}

	while (1) {
		scanf("%d", &m);
		if (m == -1) break;
		printf("%d\n", arr[m]);
	}

    return 0;
}