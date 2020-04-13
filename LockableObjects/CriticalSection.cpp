#include"CriticalSection.h"
CriticalSection::CriticalSection()
{
	cout << "Initialising Critical Section" << endl;
	InitializeCriticalSection(&m_CS);
}

CriticalSection::~CriticalSection()
{
	cout << "Deleting Critical Section" << endl;
	DeleteCriticalSection(&m_CS);
}

void CriticalSection::lock()
{
	cout << "Entering Critical Section" << endl;
	EnterCriticalSection(&m_CS);
}

void CriticalSection::Unlock()
{
	cout << "Leaving Critical Section" << endl;
	LeaveCriticalSection(&m_CS);
}

bool CriticalSection::TryLock()
{
	return TryEnterCriticalSection(&m_CS);
}
