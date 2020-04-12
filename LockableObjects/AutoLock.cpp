#include "AutoLock.h"

AutoLock::AutoLock(LockableObject * data_type):m_pLockableObject(data_type)
{
	m_pLockableObject->lock();
}

AutoLock::~AutoLock()
{
	m_pLockableObject->Unlock();
}
