#pragma once
#include"LockableObjecct.h"
class AutoLock
{
public:
	AutoLock(LockableObject *);
	~AutoLock();
private:
	LockableObject* m_pLockableObject;

};