#pragma once
#include "stdafx.h"

template<typename T>
class Singleton {
private:
	static T* _instance;

protected:
	Singleton() {}
	virtual ~Singleton()
	{
		delete _instance;
	}

public:
	static T& GetInstance() {
		if (_instance == nullptr) {
			_instance = new T();
		}
		return *_instance;
	}

	Singleton(const Singleton&) = delete;
	Singleton& operator= (const Singleton) = delete;


};
