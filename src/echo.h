#ifndef ECHO_H
#define	ECHO_H

#define NETLINK_CHANNEL 31

int init_nlecho(void);

int dest_nlecho(void);

void nlecho(struct sk_buff*);

#endif