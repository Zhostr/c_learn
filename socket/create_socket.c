#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>

int make_socket(uint16_t port) {
    int socket_fd;
    struct sockaddr_in socket_address;
    
    // 创建 IPv4 TCP Socket，返回该 Socket 对应的文件句柄
    socket_fd = socket(PF_INET, SOCK_STREAM, 0);
    if (socket_fd < 0) {
        perror("socket create error");
        exit(EXIT_FAILURE);
    }

    // 初始化 socket 地址（指定地址族、端口、ip）
    socket_address.sin_family = AF_INET;
    socket_address.sin_port = htons(port);
    socket_address.sin_addr.s_addr = htonl(INADDR_ANY);   // IPv4 通配地址

    // 将地址绑定到 socket
    if (bind(socket_fd, (struct sockaddr *)&socket_address, sizeof(socket_address)) < 0) {
        perror("socket create error");
        exit(EXIT_FAILURE);
    }
    return socket_fd;
}