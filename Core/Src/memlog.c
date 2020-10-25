/*
 * log.c
 *
 *  Created on: 25 Oct 2020
 *      Author: User
 */
#include <memlog.h>
#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>

#define LOG_SIZE 10*1024
#define MSG_MAX 128

char g_log[LOG_SIZE];
char* p_log;

void memlog_init(void){
	p_log = g_log;
}

void memlog(char* fmt, ...)
{
    va_list args;
    va_start(args,fmt);
    p_log += vsprintf(p_log,fmt,args);
    if((uint32_t)(p_log-g_log) > (uint32_t)(LOG_SIZE-MSG_MAX))
    {
    	p_log = g_log;
    }
    va_end(args);
}

void memchar(char c)
{
    (*p_log++) = c;
}
