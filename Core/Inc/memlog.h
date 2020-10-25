/*
 * log.h
 *
 *  Created on: 25 Oct 2020
 *      Author: User
 */

#ifndef INC_MEMLOG_H_
#define INC_MEMLOG_H_

void memlog_init(void);
void memlog(char* fmt, ...);
void memchar(char c);

#endif /* INC_MEMLOG_H_ */
