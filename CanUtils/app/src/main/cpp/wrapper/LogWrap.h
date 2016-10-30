//
// Created by NAO on 2016/10/30.
//

#ifndef CANUTILS_LOGWRAP_H
#define CANUTILS_LOGWRAP_H

#include <android/log.h>

#define VERBOSE ANDROID_LOG_VERBOSE
#define DEBUG ANDROID_LOG_DEBUG
#define INFO ANDROID_LOG_INFO
#define WARN ANDROID_LOG_WARN
#define ERROR ANDROID_LOG_ERROR

class LogWrap
{
public:
    LogWrap(char *tag);
    ~LogWrap();

    void log_v(const char *fmt, const char *msg);
    void log_d(const char *fmt, const char *msg);
    void log_i(const char *fmt, const char *msg);
    void log_w(const char *fmt, const char *msg);
    void log_e(const char *fmt, const char *msg);

    void setTag(char *tag);

private:
    char *_tag;
    void print_log(const int prio, const char *fmt, const char *msg);
    bool validate(const char *fmt, const char *msg);
};

#endif //CANUTILS_LOGWRAP_H
