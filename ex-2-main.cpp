// ex_2_main.cpp
#include <iostream>
#include <string>
#include <sstream>
namespace cpp2
{
	/* --------------------------------------------------------------------- */
	/*
	mcxi
	mcxi 記法を解析するクラスです。
	*/
	/* --------------------------------------------------------------------- */
	class mcxi
	{
	public:
		int value_;
		int unit(char c)
		{
			switch (c)
			{
			case 'm':
				return 1000;
			case 'c':
				return 100;
			case 'x':
				return 10;
			case 'i':
				return 1;
			}
		}

		mcxi operator+ (mcxi& rhs) {
			mcxi nm("");
			nm.value_ = value_ + rhs.value_;
			return nm;
		}
		std::string to_string() {
			std::string ss = "";

			int num = value_;
			int q = value_ / 1000;
			if (q == 1) {
				ss += 'm';
			}
			if (q > 1) {
				ss += std::to_string(q);
				ss += 'm';
			}
			num %= 1000;
			q = num / 100;
			if (q == 1) {
				ss += 'c';
			}
			if (q > 1) {
				ss += std::to_string(q);
				ss += 'c';
			}
			num %= 100;
			q = num / 10;
			if (q == 1) {
				ss += 'x';
			}
			if (q > 1) {
				ss += std::to_string(q);
				ss += 'x';
			}
			num %= 10;
			q = num;
			if (q == 1) {
				ss += 'i';
			}
			if (q > 1) {
				ss += std::to_string(q);
				ss += 'i';
			}
			//std::cout << ss << std::endl;
			return ss;
		}
		mcxi(const std::string s) : value_(0)
		{
			//mcxi文字列 -> int の変換処理を書く
			int num = 0;
			for (auto pos = s.begin(); pos != s.end(); ++pos) {
				if (*pos >= '2' && *pos <= '9') {
					num = *pos - '0';
				}
				else if (*pos == 'm' || *pos == 'c' || *pos == 'x' || *pos == 'i') {
					int u = unit(*pos);
					value_ += std::max(num, 1) * u;
					num = 0;
				}
				else {
					std::cout << "exception" << std::endl;
				}
				//std::cout << s << std::endl;
			}
			if (s == this->to_string() && s != "") {
				std::cout << s << std::endl;
				std::cout << "order ok " << this->to_string() << std::endl;
			}
			else {
				std::cout << "order no" << std::endl;
			}
		}
	};
} // namespace cpp2
void test(std::string a, std::string b, std::string c) {
	std::cout << a << " " << b << " " << c << std::endl;
	std::cout << "a0処理" << std::endl;
	cpp2::mcxi a0(a);
	std::cout << "b0処理" << std::endl;
	cpp2::mcxi b0(b);
	std::cout << "result処理" << std::endl;
	cpp2::mcxi result0 = a0 + b0;

	if (result0.to_string() == c) {
		std::cout << "ok" << std::endl;

	}
	else {
		std::cout << "no" << std::endl;
	}
}
int main()
{
	test("xi", "x9i", "3x");
	test("i", "9i", "x");
	test("c2x2i", "4c8x8i", "6cx");
	test("m2ci", "4m7c9x8i", "5m9c9x9i");
	test("9c9x9i", "i", "m");
	test("i", "9m9c9x8i", "9m9c9x9i");
	test("m", "i", "mi");
	test("i", "m", "mi");
	test("m9i", "i", "mx");
	test("9m8c7xi", "c2x8i", "9m9c9x9i");
	test("9s", "ce", "1");
	test("9x9i9m9c", "2i1c", "9");
}