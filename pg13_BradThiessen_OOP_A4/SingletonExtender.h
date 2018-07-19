#pragma once
#include "Singleton.h"
#include <string>

using namespace std;

class SingletonExtender : public Singleton<SingletonExtender> {
	friend class Singleton<SingletonExtender>;
private:
	string _innerValue = "";
	SingletonExtender() {}

public:
	void SetInnverValue(string value) {
		_innerValue = value;
	}

	string GetInnverValue() {
		return _innerValue;
	}

};