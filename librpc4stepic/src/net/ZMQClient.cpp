/* 
 * File:   ZMQClient.cpp
 * Author: alex
 * 
 * Created on 16 Сентябрь 2016 г., 9:49
 */

#include "ZMQClient.h"
namespace net {

    ZMQClient::ZMQClient() {
    }

    ZMQClient::ZMQClient(const ZMQClient& orig) {
    }

    ZMQClient::~ZMQClient() {
    }

    int ZMQClient::Connect(const std::string& server_string) {
        return 0;
    }

    int Disconnect() {
        return 0;
    }

    int Send(void* data) {
        return 0;
    }

    int Send(const serialize::Request&) {
        return 0;
    }
}