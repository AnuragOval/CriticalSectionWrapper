#pragma once
#include"stdafx.h"
#include"LockableObjecct.h"
class Mutex : public LockableObject
{
public:
	Mutex();
	virtual void lock() override;
	virtual void Unlock() override;
	virtual bool TryLock() override;
	~Mutex();
	Mutex(const Mutex&) = delete;
	Mutex& operator = (Mutex) = delete;
	Mutex(Mutex&&) = delete;
	Mutex& operator = (Mutex&&) = delete;
private:
	HANDLE m_Mutex;
};