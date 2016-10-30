//
// Created by NAO on 2016/10/29.
//

#ifndef CANUTILS_CANSOCKET_H
#define CANUTILS_CANSOCKET_H

class CanSocket {
public:
    CanSocket();
    ~CanSocket();

    char *can_read_start();
};
#endif //CANUTILS_CANSOCKET_H
