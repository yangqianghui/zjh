#ifndef _GAME_H_
#define _GAME_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <ev++.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>

#include <iostream>
#include <fstream>
#include <string>
#include <map>

class Client;
class Player;
class Table;

class Game
{
public:
	std::map<int, Table*>       seven_tables;
	std::map<int, Table*>       six_tables;
	std::map<int, Table*>       five_tables;
	std::map<int, Table*>       four_tables;
	std::map<int, Table*>       three_tables;
	std::map<int, Table*>       two_tables;
	std::map<int, Table*>       one_tables;
	std::map<int, Table*>       zero_tables;
	std::map<int, Table*>       all_tables;
    std::map<int, Client*> 		fd_client;
	std::map<int, Player*>      offline_players;
	std::map<int, Player*>      online_players;
	Client *robot_client;

private:
    ev_io _ev_accept;
	int _fd;

public:
    Game();
    virtual ~Game();	
	int start();
	static void accept_cb(struct ev_loop *loop, struct ev_io *w, int revents);
    void del_client(Client *client);

    int dispatch(Client *client);
	int safe_check(Client *client, int cmd);
	int handler_login_table(Client *client);
	int login_table(Client *client, std::map<int, Table*> &a, std::map<int, Table*> &b);
	
	int handle_logout_table(int tid);
	int send_error(Client *client, int cmd, int error_code);
	
	int check_skey(Client *client);
    int add_player(Client *client);
    int del_player(Player *player);
    int change_table(Player *player);

private:
	int     init_table();
    int     init_accept();

};

#endif
