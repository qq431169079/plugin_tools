#ifndef __NETUTILS_H__
#define __NETUTILS_H__


int  netutils_dns_resolver(char *domain,char *ip_list,int max_ret_ip,int max_len_ip);

#define NETUTILS_MAX_DOMAIN_LEN  64
#define NETUTIIS_MAX_IP_PER_DOMAIN 6
#define NETUTILS_MAX_IP_LEN      20
typedef struct {
		char domain[NETUTILS_MAX_DOMAIN_LEN];
		int  tcp_port ;
		int  udp_port ;
		int  cur_ip ;
		int  ip_list_number;
		char ip_list[NETUTIIS_MAX_IP_PER_DOMAIN][NETUTILS_MAX_IP_LEN];

}DnsAddressInfo;


#endif
