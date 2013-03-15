#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <gtk/gtk.h>
#include <pthread.h>

#define PORT 5000

char *ch_server_ip;
pthread_mutex_t p_mutex;
int sockfd;
int ret;
struct sockaddr_in addr;

void *create_windows(void);
void *create_send_msg_func(void);
void get_setting(void);
