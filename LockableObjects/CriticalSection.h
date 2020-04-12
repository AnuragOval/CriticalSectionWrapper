#pragma once
#include"stdafx.h"
#include"LockableObjecct.h"
class CriticalSection : public LockableObject
{
public:
	CriticalSection();
	~CriticalSection();
	virtual void lock();
	virtual void Unlock();
	

private:
	CRITICAL_SECTION m_CS;
};