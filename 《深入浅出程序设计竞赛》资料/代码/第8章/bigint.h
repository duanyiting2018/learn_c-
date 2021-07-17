#include<bits/stdc++.h>
using namespace std;
#define maxn 110
struct Bigint {
	int len, a[maxn];
	Bigint(int x = 0) {
		memset(a, 0, sizeof(a));
		for (len = 0; x; len++)
			a[len] = x % 10, x /= 10;
	}
	int &operator[](int i) {
		return a[i];
	}
	void flatten(int L) {
		len = L;
		for (int i = 0; i < len; i++)
			a[i + 1] += a[i] / 10, a[i] %= 10;
		for (; !a[len];)
			len--;
	}
	void print() {
		for (int i = max(len-1, 0); i >= 0; i--)
			printf("%d", a[i]);
	}
};
//Bigint operator+(Bigint &a, Bigint &b) {
//	Bigint c;
//	int len = max(a.len, b.len);
//	for (int i = 0; i < len; i++)
//		c[i] += a[i] + b[i];
//	c.flatten(len + 1);
//	return c;
//}
//Bigint operator*(Bigint &a, int b) {
//	Bigint c;
//	int len = a.len;
//	for (int i = 1; i <= len; i++)
//		c[i] = a[i] * b;
//	c.flatten(len + 11);
//	return c;
//}
