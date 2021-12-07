// ex_2_main.cpp
#include <iostream>
#include <string>
namespace cpp2 {
	/* --------------------------------------------------------------------- */
	/*
	mcxi
	mcxi 記法を解析するクラスです。
	*/
	/* --------------------------------------------------------------------- */
	class mcxi {
	public:
		mcxi(std::string s) {
			//mixi文字列 -> int の変換処理を書く
			for (auto pos = s.begin(); pos != s.end(); ++pos) {
				if (*pos == '2'|| *pos == '3'|| *pos == '4'|| *pos == '5'|| 
					*pos == '6'|| *pos == '7'|| *pos == '8'|| *pos == '9'){
					switch (*pos) {
					case '2': num = 2; break;
					case '3': num = 3; break;
					case '4': num = 4; break;
					case '5': num = 5; break;
					case '6': num = 6; break;
					case '7': num = 7; break;
					case '8': num = 8; break;
					case '9': num = 9; break;
					}
				}else{
					swirch(*pos) {
					case 'm':num = 1000; break;
					case 'c':num = 100; break;
					case 'x':num = 10; break;
					case 'i':num = 1; break;
						}
				}
			}
			std::cout << s << std::endl;
			value_ = 0;
		}
		mcxi operator+(mcxi rhs) {
			return rhs;
		}
		std::string to_string() {
			return "xxx";
		}
	private:
		int value_;
	};
} // namespace cpp2
int main() {
	cpp2::mcxi a0("xi");
	cpp2::mcxi b0("x9i");
	cpp2::mcxi result0 = a0 + b0;
	std::cout << "3x" << " " << result0.to_string() << std::endl;
	cpp2::mcxi a1("i");
	cpp2::mcxi b1("9i");
	cpp2::mcxi result1 = a1 + b1;
	std::cout << "x" << " " << result1.to_string() << std::endl;
	cpp2::mcxi a2("c2x2i");
	cpp2::mcxi b2("4c8x8i");
	cpp2::mcxi result2 = a2 + b2;
	std::cout << "6cx" << " " << result2.to_string() << std::endl;
	3
		cpp2::mcxi a3("m2ci");
	cpp2::mcxi b3("4m7c9x8i");
	cpp2::mcxi result3 = a3 + b3;
	std::cout << "5m9c9x9i" << " " << result3.to_string() << std::endl;
	cpp2::mcxi a4("9c9x9i");
	cpp2::mcxi b4("i");
	cpp2::mcxi result4 = a4 + b4;
	std::cout << "m" << " " << result4.to_string() << std::endl;
	cpp2::mcxi a5("i");
	cpp2::mcxi b5("9m9c9x8i");
	cpp2::mcxi result5 = a5 + b5;
	std::cout << "9m9c9x9i" << " " << result5.to_string() << std::endl;
	cpp2::mcxi a6("m");
	cpp2::mcxi b6("i");
	cpp2::mcxi result6 = a6 + b6;
	std::cout << "mi" << " " << result6.to_string() << std::endl;
	cpp2::mcxi a7("i");
	cpp2::mcxi b7("m");
	cpp2::mcxi result7 = a7 + b7;
	std::cout << "mi" << " " << result7.to_string() << std::endl;
	cpp2::mcxi a8("m9i");
	cpp2::mcxi b8("i");
	cpp2::mcxi result8 = a8 + b8;
	std::cout << "mx" << " " << result8.to_string() << std::endl;
	cpp2::mcxi a9("9m8c7xi");
	cpp2::mcxi b9("c2x8i");
	cpp2::mcxi result9 = a9 + b9;
	std::cout << "9m9c9x9i" << " " << result9.to_string() << std::endl;
}