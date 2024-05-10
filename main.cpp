#include <stdio.h>
#include <list>
#include <iostream>

int main() {

	//1970�N�̎R����̉w��������
	std::list<const char*>stationName{
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome","Sugamo",
		"Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu",
		"Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucho",
	};

	//1970�N�̂Ƃ�
	printf("1970�N\n");
	//1970�N�̉w����\��
	for (std::list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); itr++) {
		std::cout << *itr<<"\n";
	}

	//2019�N�̂Ƃ�
	printf("\n2019�N\n");
	//���闢�Ɠc�[�̊Ԃɐ����闢��ǉ�
	for (std::list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = stationName.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	//2019�N�̉w����\��
	for (std::list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); itr++) {
		std::cout << *itr << "\n";
	}

	//2022�N�̂Ƃ�
	printf("\n2022�N\n");
	//�i��Ɠc���̊Ԃɍ��փQ�[�g�E�F�C��ǉ�
	for (std::list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = stationName.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	//2022�N�̉w����\��
	for (std::list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); itr++) {
		std::cout << *itr << "\n";
	}

	return 0;
}