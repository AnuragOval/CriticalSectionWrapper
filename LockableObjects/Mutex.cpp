#include "Mutex.h"

Mutex::Mutex()
{
	cout << "Creating Mutex" << endl;
	m_Mutex = CreateMutex(nullptr, FALSE, nullptr);
}

void Mutex::lock()
{
	cout << "Locking Mutex" << endl;
	WaitForSingleObject(m_Mutex, INFINITE);
}


void Mutex::Unlock()
{
	cout << "Releasing Mutex" << endl;
	ReleaseMutex(m_Mutex);
}

bool Mutex::TryLock()
{
	cout << "Try Locking Mutex" << endl;
	return WaitForSingleObject(m_Mutex, 0) == WAIT_OBJECT_0;
}

Mutex::~Mutex()
{
	cout << "Closing Mutex" << endl;
	CloseHandle(m_Mutex);
}
