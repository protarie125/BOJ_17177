#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll a, b, c;
	cin >> a >> b >> c;

	const auto p = a * a - b * b;
	const auto q = a * a - c * c;
	const auto r = b * c;

	const auto d = ((ll)round(sqrt(p * q)) - r) / a;

	if (d < 0) {
		cout << -1;
		return 0;
	}

	cout << d;

	return 0;
}