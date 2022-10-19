typedef struct
{
  int nSockets;
  SOCKET sockets[MAX_SCOKETS];

} SocketList;


extern short  InList(SCOKET s, SocketList* pSocketList);
        int   Select(short operation, Socket* pSocketList, struct timeval* pTimeValue);
