#include <stdio.h>
#include <list>
#include <iostream>

int main() {

	//1970年の山手線の駅を初期化
	std::list<const char*>stationName{
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome","Sugamo",
		"Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu",
		"Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucho",
	};

	//1970年のとき
	printf("1970年\n");
	//1970年の駅名を表示
	for (std::list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); itr++) {
		std::cout << *itr<<"\n";
	}

	//2019年のとき
	printf("\n2019年\n");
	//日暮里と田端の間に西日暮里を追加
	for (std::list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = stationName.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	//2019年の駅名を表示
	for (std::list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); itr++) {
		std::cout << *itr << "\n";
	}

	//2022年のとき
	printf("\n2022年\n");
	//品川と田町の間に高輪ゲートウェイを追加
	for (std::list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = stationName.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	//2022年の駅名を表示
	for (std::list<const char*>::iterator itr = stationName.begin(); itr != stationName.end(); itr++) {
		std::cout << *itr << "\n";
	}

	return 0;
}