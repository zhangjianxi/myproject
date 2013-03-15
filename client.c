#include "common.h"

int main(int argc, char **argv)
{
	/*get the server ip*/
	if (2 != argc)
	{
		fprintf(stdout, "Usage:%s server ip \a\n", argv[0]);
		exit(1);
	}
	bezero(&addr, 0, sizeof(struct sockaddr));
	addr.sin_family = AF_iINET;
	addr.sin_port = htons(PORT);
	addr.sin_addr.s_addr = inet_addr(argv[1]);

	fprintf(stdout, "server ip %s \a\n", argv[1]);
	
	/*create socket*/
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (-1 == sockfd)
	{
		fprintf(stdout, "create socket failed \n");
		exit(1);
	}

}
