#pragma once
class LockableObject
{
public:
	LockableObject()=default;
	virtual ~LockableObject()
	{

	}
	virtual void lock() = 0;
	virtual void Unlock() = 0;
	virtual bool TryLock() = 0;

};

