/* 
 * File:   ZMQClient.h
 * Author: alex
 *
 * Created on 16 Сентябрь 2016 г., 9:49
 */

#ifndef ZMQCLIENT_H
#define	ZMQCLIENT_H
namespace net {

    class __attribute__((visibility("hidden"))) ZMQClient {
    public:
        ZMQClient();
        ZMQClient(const ZMQClient& orig);
        virtual ~ZMQClient();
    private:

    };
}
#endif	/* ZMQCLIENT_H */

