#include <cwchar>
#include "LogWrap.h"

LogWrap::LogWrap(char *tag)
        : _tag(tag) {
}

LogWrap::~LogWrap() {
    // Do Nothing
}

void LogWrap::log_v(const char *fmt, const char *msg) {
    if(validate(fmt, msg) == false){
        return;
    }
    print_log(VERBOSE, fmt, msg);
}

void LogWrap::log_d(const char *fmt, const char *msg) {
    if(validate(fmt, msg) == false){
        return;
    }
    print_log(DEBUG, fmt, msg);
}

void LogWrap::log_i(const char *fmt, const char *msg) {
    if(validate(fmt, msg) == false){
        return;
    }
    print_log(INFO, fmt, msg);
}

void LogWrap::log_w(const char *fmt, const char *msg) {
    if(validate(fmt, msg) == false){
        return;
    }
    print_log(WARN, fmt, msg);
}

void LogWrap::log_e(const char *fmt, const char *msg) {
    if(validate(fmt, msg) == false){
        return;
    }
    print_log(ERROR, fmt, msg);
}

void LogWrap::setTag(char *tag) {
    _tag = tag;
}

void LogWrap::print_log(const int prio, const char *fmt, const char *msg) {
    __android_log_print(prio, _tag, fmt, msg);
}

bool LogWrap::validate(const char *fmt, const char *msg) {
    bool retval = true;
    if(_tag == NULL) {
        retval = false;
        goto ret;
    }
    if(fmt == NULL){
        retval = false;
        goto ret;
    }
    if(msg == NULL){
        retval = false;
        goto ret;
    }

ret:
    return retval;
}
