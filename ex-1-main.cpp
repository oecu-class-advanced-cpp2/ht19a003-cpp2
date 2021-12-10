#include <iostream>
#include <string>
#include <algorithm>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。
using namespace std;
/*
*is_prime
*与えられた正の整数numが素数ならtrueを返すそうでなければfaulseを返す関数
*/

bool is_prime(int num) {
	if (num == 1) {
		return false;
	}
	for (int i = 2; i < num; i++) {
		if (num%i == 0) {
			return false;
		}
	}
	return true;
}
int gcd(int a, int b) {
	int c;
	while (b > 0) {
		c = a%b;
		a = b;
		b = c;
	}
	/*if (a == 1) {
		return a;
	}*/
	if (a != 1) {
		cout << "この組み合わせは無効です";
		return 0;
	}
	
}

/* --------------------------------------------------------------- */
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int count = 0;
	int e = a;
	int l = d;
	int m = n;
	
	while (e < CPP2_PRIME_UPPER_LIMIT) {
		
		if (e <= 0 || l <= 0 || m <= 0) {
		std::cout << "０以上の値を入力してください" << endl;
		break;
		}
		if (gcd(e, l)) {
			
		}
		if (e == 1) {
			exit(-1);
		}
		if (is_prime(e)) {
			count++;
		}
		if (count == n) {
			break;
			count << 0;
		}
		e += d;
	}

	return e;
}
int main() {
	std::cout << nth_prime(1, 1, 1) << std::endl;
	// 以下、同様に、入出力例通りになるか確認せよ。
	cin.get();
	cin.get();
	return 0;
}