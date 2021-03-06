#ifndef NETDATA_WEB_SERVER_H
#define NETDATA_WEB_SERVER_H 1

#define WEB_PATH_FILE				"file"
#define WEB_PATH_DATA				"data"
#define WEB_PATH_DATASOURCE			"datasource"
#define WEB_PATH_GRAPH				"graph"

#define LISTEN_PORT 19999
#define LISTEN_BACKLOG 100

extern int listen_backlog;
extern int listen_fd;
extern int listen_port;

#define WEB_SERVER_MODE_MULTI_THREADED 0
#define WEB_SERVER_MODE_SINGLE_THREADED 1
extern int web_server_mode;

extern int create_listen_socket4(const char *ip, int port, int listen_backlog);
extern int create_listen_socket6(const char *ip, int port, int listen_backlog);
extern void *socket_listen_main_multi_threaded(void *ptr);
extern void *socket_listen_main_single_threaded(void *ptr);
extern int create_listen_socket(void);

#endif /* NETDATA_WEB_SERVER_H */
