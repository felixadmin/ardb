/*
 * repl.hpp
 *
 *  Created on: 2013年8月26日
 *      Author: wqy
 */

#ifndef REPL_HPP_
#define REPL_HPP_

#define SLAVE_STATE_CLOSED 1
#define SLAVE_STATE_CONNECTING 2
#define SLAVE_STATE_CONNECTED 3
#define SLAVE_STATE_WAITING_INFO_REPLY 4
#define SLAVE_STATE_WAITING_REPLCONF_REPLY 5
#define SLAVE_STATE_WAITING_FULLSYNC_REPLY 6
#define SLAVE_STATE_WAITING_PSYNC_REPLY 7
#define SLAVE_STATE_SYNING_DATA 8
#define SLAVE_STATE_SYNCED 9

#define REDIS_DB_SERVER_TYPE 1
#define ARDB_DB_SERVER_TYPE 2
#define REDIS_DB_CLIENT_TYPE 1
#define ARDB_DB_CLIENT_TYPE 2

namespace ardb
{
	struct MMapBuf
	{
			char* buf;
			uint32 size;
			MMapBuf() :
					buf(0), size(0)
			{
			}
	};
}

#endif /* REPL_HPP_ */
