#pragma once
#include <afxsock.h>
class CClientSocket :
    public CSocket
{
public:
    CClientSocket();
    ~CClientSocket();
public:
    CAsyncSocket* m_pListenSocket;
    void SetListenSocket(CAsyncSocket* pSocket);
    
};

