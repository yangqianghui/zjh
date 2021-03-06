#ifndef __PROTO_H__
#define __PROTO_H__

enum system_command
{
    SYS_ECHO						= 0001,       /* echo */
    SYS_ONLINE						= 0002,       /* get online */
};

enum client_command
{
	CLIENT_LOGIN_REQ				= 1001,       /* join table */
	CLIENT_LOGOUT_REQ				= 1002,
	CLIENT_READY_REQ				= 1003,	      /* game ready */
	CLIENT_BET_REQ		 			= 1004,
	CLIENT_CHAT_REQ					= 1005,
	CLIENT_FACE_REQ					= 1006,
	CLIENT_CHANGE_REQ            = 1007,       /* change table */
	CLIENT_ROBOT_REQ             = 1008,
	CLIENT_INFO_REQ              = 1009,       /* update player info */
	CLIENT_TABLE_INFO_REQ        = 1010,      /* table info */
	CLIENT_EMOTION_REQ           = 1011,      /* interaction emotion */
	CLIENT_PROP_REQ              = 1012,      /* game prop */
};

enum client_action
{
	PLAYER_CALL 					= 2001,       /* call */
    PLAYER_RAISE	                = 2002,       /* raise */
	PLAYER_COMPARE		            = 2003,       /* compare */
	PLAYER_SEE						= 2004,		  /* see */
    PLAYER_FOLD	                    = 2005,       /* fold */
    PLAYER_ALLIN              = 2006,     /* all in */
    PLAYER_ALLIN_COMPARE      = 2007,     /* all in compare */
};

enum prop_item
{
	CHANGE_CARD = 3001,  /* change card */
	FORBIDDEN_CARD = 3002, /* forbidden compare card */
	DOUBLE_CARD_FOUR = 3003,    /* compare four multiple bet card */
	DOUBLE_CARD_SIX = 3004,    /* compare six multiple bet card */
	DOUBLE_CARD_EIGHT = 3005,    /* compare eight multiple bet card */
};

enum server_command
{
	SERVER_LOGIN_SUCC_UC       		 = 4000,
    SERVER_LOGIN_SUCC_BC       		 = 4001,
    SERVER_LOGIN_ERR_UC         	 = 4002,
	SERVER_REBIND_UC				 = 4003,
	SERVER_LOGOUT_SUCC_BC			 = 4004,
	SERVER_LOGOUT_ERR_UC			 = 4005,
	SERVER_TABLE_INFO_UC			 = 4006,
	SERVER_READY_SUCC_BC			 = 4007,
	SERVER_READY_ERR_UC				 = 4008,
	SERVER_GAME_START_BC			 = 4009,
	SERVER_NEXT_BET_BC				 = 4010,
	SERVER_BET_SUCC_BC				 = 4011,
	SERVER_BET_SUCC_UC				 = 4012,
	SERVER_BET_ERR_UC			     = 4013,
	SERVER_GAME_END_BC				 = 4014,
	SERVER_GAME_PREREADY_BC			 = 4015,
	SERVER_CHAT_BC					 = 4016,
	SERVER_FACE_BC					 = 4017,
	SERVER_ROBOT_SER_UC           = 4018,
	SERVER_ROBOT_NEED_UC          = 4019,
	SERVER_UPDATE_INFO_BC        = 4020,
	SERVER_EMOTION_BC            = 4021,
	SERVER_PROP_SUCC_UC          = 4022,
	SERVER_PROP_SUCC_BC        = 4023,
	SERVER_PROP_ERR_UC         = 4024,

	SERVER_ROBOT_CHANGE_UC     = 4025,	//robot change table
};


enum CardType
{
	CARD_TYPE_ERROR   = 0,			// 错误类型
	CARD_TYPE_BAOZI   = 1,			// 豹子
	CARD_TYPE_SHUNJIN = 2,		    // 顺金
	CARD_TYPE_JINHUA  = 3,			// 金花 
	CARD_TYPE_SHUNZI  = 4,		    // 顺子
	CARD_TYPE_DUIZI   = 5,			// 对子		
	CARD_TYPE_DANPAI  = 6,			// 单牌
	CARD_TYPE_TESHU	  = 7,	        // 特殊
};

#endif
