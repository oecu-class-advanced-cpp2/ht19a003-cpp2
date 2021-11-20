#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //�T������l�̏���l�B
using namespace std;
/*
*is_prime
*�^����ꂽ���̐���num���f���Ȃ�true��Ԃ������łȂ����faulse��Ԃ��֐�
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
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* �^����ꂽ������ a �� d �� n �ɑ΂��āA���̓�������Ɋ܂܂�� n �Ԗڂ�
* �f����Ԃ��B
*
* TODO: ���� nth_prime �֐�����������B�K�v�ł���Α��Ɋ֐���
* �t�@�C�����쐬����B
*/
/* -------------------------------------------------------------- */

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int count = 0;
	int e = a;
	while (e < CPP2_PRIME_UPPER_LIMIT) {
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
	std::cout << nth_prime(367, 186, 151) << std::endl;
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	cin.get();
	cin.get();
	return 0;
}