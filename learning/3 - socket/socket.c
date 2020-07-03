// /usr/include
#include <stdio.h>
#include <sys/socket.h>

int socketID;

int run() {

    int domain = AF_INET; // (IPv4 protocol) , AF_INET6 (IPv6 protocol)
    int type = SOCK_STREAM; //: TCP(reliable, connection oriented) | SOCK_DGRAM: UDP(unreliable, connectionless)
    int protocol = 0; // IP

    socketID = socket(domain, type, protocol);

    // int setsockopt(int sockfd, int level, int optname,  const void *optval, socklen_t optlen);

    const struct sockaddr *addr, socklen_t addrlen

    int bind(socketID, );
}