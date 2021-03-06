#include "capisys.h"
#include "logger.h"
#include <unistd.h>
#include <stdlib.h>
#include <jansson.h>
#include "capisys.h"
#include <time.h>
#include "sysutils.h"
//#include <capi.h>
//get info list
extern int sysutils_encode_json_from_value(char *buf ,int key_num,... );

//TODO : add your custom capi interface  ,just add in __func 
int capisys_post_handler(char *json_buf,char *result_buf){
	


}
int  __capisys_get_vender(char *buf){
#ifdef   CAPI_INTERFACE_NULL_TEST
		sprintf(buf,"XXXX");
#else 
		
#endif 
		return 0;
		//use capi get system info
}
int  __capisys_get_user_id(char *buf){
	sprintf(buf,"F45BB1D7FB5E");
	return 0;
	//use capi get system info
}
int  __capisys_get_firmware_ver(char *buf){
		sprintf(buf,"v1.230");
		return 0;
		//use capi get system info
}
int  __capisys_get_sys_model(char *buf){
		sprintf(buf,"xxx1.0");
		return 0;
}
int  __capisys_get_hardware_ver(char *buf){
		sprintf(buf,"sd3.64.418");
		return 0;
}
int  __capisys_get_product_class(char *buf){
		sprintf(buf,"xxx1.0");
		return 0;
}
int  __capisys_get_cpu_class(char *buf){
		sprintf(buf,"MipsVendorXXXX1.0");
		return 0;
}
int  __capisys_get_dev_type(char *buf){
		sprintf(buf,"XXXX1.0");
		return 0;
}
int  __capisys_get_dev_type1(char *buf){
		sprintf(buf,"XXXX1.0");
		return 0;
}
int  __capisys_get_capability(char *buf){
		sprintf(buf,"XXXX1.0/2.3/5.6/ssss");
		return 0;
}
int  __capisys_get_uplink(char *buf){
		sprintf(buf,"1");
		return 0;
}
int  __capisys_get_card(char *buf){
	buf[0] = 0 ;
//		sprintf(buf,"sd3.64.418");
		return 0;
}
int  __capisys_get_card_no(char *buf){
	buf[0] = 0 ;
//		sprintf(buf,"sd3.64.418");
		return 0;
}
int  __capisys_get_wlan_ipv6(char *buf){
		sprintf(buf,"0");
		return 0;
}
int  __capisys_get_vlan_bind(char *buf){
		sprintf(buf,"0");
		return 0;
}
int  __capisys_get_led(char *buf){
		sprintf(buf,"0");
		return 0;
}
int  __capisys_get_flash_size(char *buf){
		sprintf(buf,"1024");
		return 0;
}
int  __capisys_get_ram_size(char *buf){
		sprintf(buf,"2048");
		return 0;
}
int  __capisys_get_dev_name(char *buf){
		sprintf(buf,"EEEEEEE");
		return 0;
}
int  __capisys_get_wifi_mode(char *buf){
		sprintf(buf,"2555XXX");
		return 0;
}
int  __capisys_get_nfc(char *buf){
		sprintf(buf,"1");
		return 0;
}
int  __capisys_get_wan_ip_addr(char *buf){
		sprintf(buf,"10.9.1.180");
		return 0;
}
int  __capisys_get_lan_ip_addr(char *buf){
		sprintf(buf,"127.");
		return 0;
}
int  __capisys_get_os_ver(char *buf){
		sprintf(buf,"ZhiNengWangGuan OS 1");
		return 0;
		//use capi get system info
}
int  __capisys_get_app_ver(char *buf){
		sprintf(buf,"1.1");
		return 0;
		//use capi get system info
}

int  __capisys_get_plugin_info(char *name){


}
int  __capisys_get_wlan_mac(char *buf){
		char mac[] =  {0x84,0x82,0xf4,0x1c,0xe9,0x28 };
		sprintf(buf,"48555F44CA00");
		return 0;
		//use capi get system info
}

int  __capisys_get_platform_id(char *buf){
		sprintf(buf,"OSGI");
		return 0;
		//use capi get system info
}
int  __capisys_get_sys_card(char *buf){
		sprintf(buf,"0");
		return 0;
		//use capi get system info
}
int  __capisys_get_sys_token(char *buf){
	sprintf(buf,"token data");
	return 0;
	//get storage token data
}
int  __capisys_get_sys_loid(char *buf){
	sprintf(buf,"SMARTHUBG07");
	return 0;
	//get storage token data
}
int  __capisys_get_sys_duration(char *buf){
	sprintf(buf,"111");
	return 0;
	//get storage token data
}
int  __capisys_get_sys_ppoe_duration(char *buf){
	sprintf(buf,"222");
	return 0;
	//get storage token data
}
int  __capisys_get_sys_pond_duration(char *buf){
	sprintf(buf,"333");
	return 0;
	//get storage token data
}
int  __capisys_get_sys_sn(char *buf){
//	ctSgw_sysGetSSN();
	sprintf(buf,"48555F-4384248555F44CA00");
			return 0;
	//get storage token data
}
int  __capisys_get_sys_ssn(char *buf){
	buf[0] = 0;
	return 0;
}
int  __capisys_get_sys_time(char *buf){
	time_t timer ;
	struct tm * t_tm;
	time(&timer);
	t_tm = localtime(&timer);
	sprintf(buf,"%4d%02d%02d%02d%02d",t_tm->tm_year+1900,t_tm->tm_mon,t_tm->tm_mday,t_tm->tm_hour,t_tm->tm_min);
	for(int i = 0 ;i<strlen(buf);i++){
		if(buf[i] == ' '){
			buf[i] = '0';
		}
	}
			return 0;
	//get storage token data
}
int  __capisys_query_mem_info(char *buf){
	sprintf(buf,"50");
	return 0;
}
int  __capisys_get_cpu_info(char *buf){
	sprintf(buf,"45");
	return 0;
}
int  __capisys_get_wan_mac(char *buf){
	sprintf(buf,"48555F44CA00");
	return 0;
}
int  __capisys_get_bussiness_status(char *buf){
	sprintf(buf,"BussinessStatus");
	return 0;
}
int  __capisys_get_lan_net_info(char *buf){
	sprintf(buf,"50");
	return 0;
}
int  __capisys_get_version(char *buf){
	sprintf(buf,"v0");
	return 0;
}
int  __capisys_get_version1(char *buf){
	sprintf(buf,"v1");
	return 0;
}
int  __capisys_get_version2(char *buf){
	sprintf(buf,"v2");
	return 0;
}
int __capisys_dial_ppoe_request(
								char *con_status ,
								char *wan_status ,
								char *dail_reason ,
								char *con1_status ,
								char *wan1_status ,
								char *dail1_reason ) {
	sprintf(con_status,"con");
	sprintf(wan_status,"wan");
	sprintf(dail_reason,"dial");
	sprintf(con1_status,"con1");
	sprintf(wan1_status,"wan1");
	sprintf(dail1_reason,"dial1");
	return 0;

}

int  __capisys_get_lan1_status(char *buf){
	sprintf(buf,"status lan 1");
	return 0;
}
int  __capisys_get_lan2_status(char *buf){
	sprintf(buf,"status lan 2");
	return 0;
}
int  __capisys_get_lan3_status(char *buf){
	sprintf(buf,"status lan 3");
	return 0;
}
int  __capisys_get_lan4_status(char *buf){
	sprintf(buf,"status lan 4");
	return 0;
}
int  __capisys_get_wan_status(char *buf){
	sprintf(buf,"status wan 1");
	return 0;
}
int  __capisys_get_wifi_status(char *buf){
	sprintf(buf,"status wan 1");
	return 0;
}
int  __capisys_query_wan_num(char *num,char *des){
	sprintf(num,"1");
	sprintf(des,"des 1");
	return 0;
}
int __capisys_get_wan_realrate(char *realrate_buf){
	sprintf(realrate_buf,"realrate");
	return 0;
}
int __capisys_http_download_request(char *method_buf,char *time_buf){
	//
	return 0;
}
int  __capisys_query_wan_info(
		char *wan_name ,
		char *index ,
		char *iface ,
		char *service_list ,
		char *connection_type,
		char *vlanid,
		char *p8021,
		char *protocol,
		char *connection_status   ,
		char *ip_address   ,
		char *subnetmast   ,
		char *gateway   ,
		char *dns1   ,
		char *dns2   ,
		char *ipv6_connection_status   ,
		char *ipv6_address   ,
		char *ipv6_prefixlength   ,
		char *ipv6_gateway   ,
		char *ipv6_dns1   ,
		char *ipv6_dns2   ,
		char *ipv6_prifix  ) {
	return 0;
}
int  __capisys_get_wifi_info( 
				char *ssid_index_buf ,
				char *ssid_buf ,
				char *pwd_buf,
				char *encrypt_buf,
				char *power_level_buf,
				char *power_level_5g_buf,
  				char *channel_buf ,
				char *enable_buf 
			){

	return 0;
}
int  __capisys_get_wlan_intf_info( 
				char *ssid_buf ,
				char *pwd_buf,
				char *encrypt_buf,
				char *power_level_buf,
				char *power_level_5g_buf,
  				char *channel_buf ,
				char *enable_buf  ,
				char *recv_buf ,
				char *send_buf
			){

	return 0;
}
int __capisys_get_wlan_attach_info( 
				char *num_buf ,
				char *info_buf 
			){
	return 0;
}
int __capisys_get_voip_info( 
				char *name1_buf ,
				char *name2_buf 
			){
	return  0; 
}
int  __capisys_get_voip_reg_status( 
				char *line1_status_buf ,
				char *line2_status_buf
			){
	return 0;
}
int  __capisys_ping_diag_reg(
			char *user_buf,
			char *pass_buf,
			char *dest_buf,
			char *wan_name_buf ,
			char *length ,
			char *time
			){
	return 0;
}
int __capisys_get_ping_result(
			char *user_buf,
			char *pass_buf,
			char *ping_status,
			char *ping_result
		){
	return 0;
}

int  __capisys_traceroute_diag_reg(
			char *user_buf,
			char *pass_buf,
			char *dest_buf,
			char *wan_name_buf 
			){
	return 0;
}
int __capisys_get_traceroute_result(
			char *user_buf,
			char *pass_buf,
			char *traceroute_status,
			char *traceroute_result
		){
	return 0;
}


int  __capisys_inform_diag_reg(
			char *user_buf,
			char *pass_buf
			){
	return 0;
}
int __capisys_get_inform_result(
			char *user_buf,
			char *pass_buf,
			char *inform_status,
			char *inform_result
		){
	return 0;
}

int  __capisys_register( 
			char *user_buf,
				char *pass_buf,
				char *province_buf
		){
	return 0;
}

int  __capisys_get_register_stat( 
				char *register_status_buf 
			){
	return 0;
}
int __capisys_get_power_info(
		char *voltage ,
		char *current ,
		char *tx_power ,
		char *rx_power ){

	return 0;
}
int __capisys_get_temperate(char *temp){
	return 0;
}
int  __capisys_get_pon_status( 
			char *register_status_buf 
			){
	return 0;
}

int  __capisys_set_http_cfg( 
			char *user_buf,
				char *pass_buf,
				char *url_buf
		){
	return 0;
}

int  __capisys_set_hg_date_time_sync( 
			char *user_buf,
				char *pass_buf,
				char *time_buf
		){
	return 0;
}






int app_function_capisys_init(void){

	//LOGGER_DBG("%s \n",__FUNCTION__);
	//CtSgwSetDbusEnv();
	return 0;
}
int app_function_capisys_thread(void *dat){
//	LOGGER_DBG("%s  thread start \n",__FUNCTION__);
	while(1){
	  //  LOG_ERROR("CAPI SYS RUNING\n");
		sleep(5);
	}
	return 0;
}
/*  
int capisys_query_cpu_info(char *sequence_id ,char *cmd_type ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);
	return 0;
}
*/
int capisys_get_duriation(char *buf,char *sequence_id ,char *cmd_type ,void *data) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);
	return 0;
}
int capisys_get_service(char *sequence_id ,char *cmd_type  ,void *data) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);
	return 0;
}
int capisys_get_hg_loid(char *buf, char *sequence_id ,char *cmd_type  ,void *data) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	char loid_buf[24] = { 0 };
	char card_buf[64] = {0};
	int ret = 0 ;
	int all_info_flag = 0 ;
	ret = __capisys_get_sys_loid(loid_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get card error\n");
	}
	ret = __capisys_get_sys_card(card_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get card error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 5 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"LOID",JSON_STRING,loid_buf,
					"CARD",JSON_STRING,card_buf
				);

	}
	return 0;
}
int capisys_query_cpu_info(char *buf ,char *sequence_id ,char *cmd_type  ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	char cpu_info_buf[24] = { 0 };
	int ret = 0 ;
	int all_info_flag = 0 ;
	ret = __capisys_get_cpu_info(cpu_info_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get cpu info error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 5 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"Percent",JSON_STRING,cpu_info_buf
				);

	}
	return 0;
}
int capisys_wlan_intf_info(char *buf ,char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);
	return 0;
}
int capisys_get_version(char *buf ,char *sequence_id ,char *cmd_type  ,void *data) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);
	int ret = 0 ;
	int all_info_flag = 0 ;
	char version_buf[64] = { 0 };
	char version1_buf[64] = { 0 };
	char version2_buf[64] = { 0 };
	ret = __capisys_get_version(version_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get version error\n");
	}
	ret = __capisys_get_version1(version1_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get version1 error\n");
	}
	ret = __capisys_get_version2(version2_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get version2 error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 6 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"Version",JSON_STRING,version_buf,
					"Version1",JSON_STRING,version1_buf,
					"Version2",JSON_STRING,version2_buf
				);

	}
	return 0;
}
int capisys_get_sn_info(char *buf ,char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);
	int ret = 0 ;
	int all_info_flag = 0 ;
	char mac_buf[64] = { 0 };
	char bussin_buf[64] = { 0 };
	ret = __capisys_get_wan_mac(mac_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get mac error\n");
	}
	ret = __capisys_get_bussiness_status(bussin_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get BussinessStatus error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 5 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"MAC",JSON_STRING,mac_buf,
					"BussinessStatus",JSON_STRING,bussin_buf
				);

	}
	return 0;
}
int capisys_query_wan_num(char *buf ,char *sequence_id ,char *cmd_type ,void *data) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);
	int ret = 0 ;
	int all_info_flag = 0 ;
	char num_buf[64] = { 0 };
	char des_buf[64] = { 0 };
	ret = __capisys_query_wan_num(num_buf,des_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get version1 error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 5 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"NUM",JSON_STRING,num_buf,
					"Description",JSON_STRING,des_buf
				);

	}
	return 0;
}
int capisys_query_wan_info(char *buf ,char *sequence_id ,char *cmd_type  ,void *data) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);
	int ret = 0 ;
	int all_info_flag = 0 ;
	char index_buf[64] = { 0 };
	char iface_buf[64] = { 0 };
	char service_list_buf[64] = { 0 };
	char ipv6_connection_type_buf[64] = { 0 };
	char connection_type_buf[64] = { 0 };
	char vlanid_buf[64] = { 0 };
	char p8021_buf[64] = { 0 };
	char protocol_buf[64] = { 0 };
	char connection_status_buf[64] = { 0 };
	char ip_address_buf[64] = { 0 };
	char subnetmask_buf[64] = { 0 };
	char gateway_buf[64] = { 0 };
	char dns1_buf[64] = { 0 };
	char dns2_buf[64] = { 0 };
	char ipv6_connection_status_buf[64] = { 0 };
	char ipv6_address_buf[64] = { 0 };
	char ipv6_prefixlength_buf[64] = { 0 };
	char ipv6_gateway_buf[64] = { 0 };
	char ipv6_dns1_buf[64] = { 0 };
	char ipv6_dns2_buf[64] = { 0 };
	char ipv6_prifix_buf[64] = { 0 };
	ret = __capisys_query_wan_info("wan0",
			index_buf,
			iface_buf,
			service_list_buf,
			connection_type_buf ,
			vlanid_buf ,
			p8021_buf,
			protocol_buf,
			connection_status_buf ,
			ip_address_buf ,
			subnetmask_buf ,
			gateway_buf,
			dns1_buf,
			dns2_buf,
			ipv6_connection_status_buf ,
			ipv6_address_buf ,
			ipv6_prefixlength_buf,
			ipv6_gateway_buf ,
			ipv6_dns1_buf,
			ipv6_dns2_buf,
			ipv6_prifix_buf);

	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get version1 error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 23 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"INDEX",JSON_STRING, index_buf ,
					"IFNAME",JSON_STRING, iface_buf ,
					"SERVICELIST",JSON_STRING, service_list_buf ,
					"CONNECTIONTYPE",JSON_STRING, connection_type_buf ,
					"VLANID",JSON_STRING, vlanid_buf ,
					"8021P",JSON_STRING, p8021_buf ,
					"PROTOCOL",JSON_STRING, protocol_buf ,
					"CONNECTIONSTATUS",JSON_STRING, connection_status_buf ,
					"IPADDRESS",JSON_STRING, ip_address_buf ,
					"SUBNETMASK",JSON_STRING, subnetmask_buf ,
					"GATEWAY",JSON_STRING, gateway_buf ,
					"DNS1",JSON_STRING, dns1_buf ,
					"DNS2",JSON_STRING, dns2_buf ,
					"IPV6_CONNECTSTATUS",JSON_STRING,ipv6_connection_status_buf  ,
					"IPV6_ADDRESS",JSON_STRING, ipv6_address_buf ,
					"IPV6_PREFIXLENGTH",JSON_STRING, ipv6_prefixlength_buf ,
					"IPV6_GATEWAY",JSON_STRING,  ipv6_gateway_buf,
					"IPV6_DNS1",JSON_STRING,  ipv6_dns1_buf,
					"IPV6_DNS2",JSON_STRING,  ipv6_dns2_buf,
					"IPV6_PRIFIX",JSON_STRING, ipv6_prifix_buf 
				);

	}
	return 0;
}
int capisys_systest(char *buf,char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);
	int ret = 0 ;
	int all_info_flag = 0 ;
	char lan1_buf[64] = { 0 };
	char lan2_buf[64] = { 0 };
	char lan3_buf[64] = { 0 };
	char lan4_buf[64] = { 0 };
	char wan_buf[64] = { 0 };
	char wifi_buf[64] = { 0 };
	ret = __capisys_get_lan1_status(lan1_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get lan 1 error\n");
	}
	ret = __capisys_get_lan2_status(lan2_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get lan 2 error\n");
	}
	ret = __capisys_get_lan4_status(lan3_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get lan 3 error\n");
	}
	ret = __capisys_get_lan4_status(lan4_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get lan 4 error\n");
	}
	ret = __capisys_get_wan_status(wan_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan1 1 error\n");
	}
	ret = __capisys_get_wifi_status(wifi_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wifi error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 6 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"LAN1Status",JSON_STRING,lan1_buf,
					"LAN2Status",JSON_STRING,lan2_buf,
					"LAN3Status",JSON_STRING,lan3_buf,
					"LAN4Status",JSON_STRING,lan4_buf,
					"WANStatus",JSON_STRING,wan_buf,
					"WIFIModuleStatus",JSON_STRING,wifi_buf
				);

	}
	return 0;
}
int capisys_ppoe_diag_req(char *buf ,char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);
	int ret = 0 ;
	int all_info_flag = 0 ;
	char connection_status_buf[64] = { 0 };
	char wan_status_buf[64] = { 0 };
	char dial_reason_buf[64] = { 0 };
	char connection_status1_buf[64] = { 0 };
	char wan_status1_buf[64] = { 0 };
	char dial_reason1_buf[64] = { 0 };
	ret = __capisys_dial_ppoe_request(
			connection_status_buf ,
			wan_status_buf,
			dial_reason_buf,
			connection_status1_buf ,
			wan_status1_buf,
			dial_reason1_buf
			);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get dial ppoe request error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 9 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"ConnectionStatus",JSON_STRING,connection_status_buf,
					"WANStatus",JSON_STRING,wan_status_buf,
					"DialReason",JSON_STRING,dial_reason_buf,
					"ConnectionStatus1",JSON_STRING,connection_status1_buf,
					"WANStatus1",JSON_STRING,wan_status1_buf,
					"DialReason1",JSON_STRING,dial_reason1_buf
				);

	}
	return 0;
}
int capisys_query_system_info(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);
	return 0;
}


int capisys_get_time_duration(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char sys_duration_buf[64] = { 0 };
	char ppoe_duration_buf[64] = {0};
	char pond_duration_buf[64] = {0};
	ret = __capisys_get_sys_duration(sys_duration_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get sys duration error\n");
	}
	ret = __capisys_get_sys_ppoe_duration(ppoe_duration_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get sys ppoe duration error\n");
	}
	ret = __capisys_get_sys_pond_duration(pond_duration_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get pond duration error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 6 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"SYSDuration",JSON_STRING,sys_duration_buf,
					"PPOEDuration",JSON_STRING,ppoe_duration_buf ,
					"PONDuration",JSON_STRING,pond_duration_buf
				);

	}
	return 0;
}

int capisys_query_mem_info(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char mem_info_buf[64] = { 0 };
	ret = __capisys_query_mem_info(mem_info_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get sys mem info  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"Percent",JSON_STRING,mem_info_buf
				);

	}
	return 0;
}
int capisys_query_sys_info(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char hardware_ver_buf[64] = { 0 };
	char software_ver_buf[64] = { 0 };
	char product_class_buf[64] = { 0 };
	char cpu_class_buf[64] = { 0 };
	char dev_type_buf[64] = { 0 };
	char dev_type1_buf[64] = { 0 };
	char capability_buf[64] = { 0 };
	char card_buf[64] = { 0 };
	char uplink_buf[64] = { 0 };
	char card_no_buf[64] = { 0 };
	char ipv6_buf[64] = { 0 };
	char vlan_bind_buf[64] = { 0 };
	char led_buf[64] = { 0 };
	char flash_size_buf[64] = { 0 };
	char ram_size_buf[64] = { 0 };
	char dev_name_buf[64] = { 0 };
	char wifi_mode_buf[64] = { 0 };
	char nfc_buf[64] = { 0 };
	char wan_ip_addr_buf[64] = { 0 };
	char lan_ip_addr_buf[64] = { 0 };
	ret = __capisys_get_firmware_ver(software_ver_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get software info  error\n");
	}
	ret = __capisys_get_product_class(hardware_ver_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get product class info  error\n");
	}
	ret = __capisys_get_cpu_class(cpu_class_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get cpu class   error\n");
	}
	ret = __capisys_get_dev_type(dev_type_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get dev type  error\n");
	}
	ret = __capisys_get_dev_type1(dev_type1_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get dev type1  error\n");
	}
	ret = __capisys_get_capability(capability_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get capability_buf \n");
	}
	ret = __capisys_get_card(card_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get card  error\n");
	}
	ret = __capisys_get_uplink(uplink_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get uplink buf  error\n");
	}
	ret = __capisys_get_card_no(card_no_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get card no error\n");
	}
	ret = __capisys_get_wlan_ipv6(ipv6_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get ipv6  error\n");
	}
	ret = __capisys_get_vlan_bind(vlan_bind_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get vlan bind  error\n");
	}
	ret = __capisys_get_led(led_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get led  error\n");
	}
	ret = __capisys_get_flash_size(flash_size_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get flash_size_buf  error\n");
	}
	ret = __capisys_get_dev_name (dev_name_buf  );
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get dev_name_buf  error\n");
	}
	ret = __capisys_get_wifi_mode ( wifi_mode_buf );
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wifi_mode_buf  error\n");
	}
	ret = __capisys_get_nfc ( nfc_buf );
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get nfc_buf  error\n");
	}
	ret = __capisys_get_wan_ip_addr (wan_ip_addr_buf  );
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wlan_ip_addr_buf  error\n");
	}
	ret = __capisys_get_lan_ip_addr (lan_ip_addr_buf  );
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get lan_ip_addr_buf  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 23 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"SWVersion",JSON_STRING, software_ver_buf ,
					"HDVersion",JSON_STRING, hardware_ver_buf ,
					"ProductClass",JSON_STRING, product_class_buf ,
					"CPUClass",JSON_STRING,  cpu_class_buf,
					"DEVType",JSON_STRING, dev_type_buf ,
					"DEVType1",JSON_STRING, dev_type1_buf ,
					"Capability",JSON_STRING, capability_buf ,
					"Card",JSON_STRING,  card_buf,
					"Cardno",JSON_STRING, card_no_buf ,
					"IPV6",JSON_STRING, ipv6_buf ,
					"VLANbind",JSON_STRING, vlan_bind_buf ,
					"LED",JSON_STRING, led_buf ,
					"FlashSize",JSON_STRING, flash_size_buf ,
					"RamSize",JSON_STRING,  ram_size_buf,
					"DevName",JSON_STRING, dev_name_buf ,
					"WiFiMode",JSON_STRING, wifi_mode_buf ,
					"NFC",JSON_STRING, nfc_buf ,
					"WanIPAddr",JSON_STRING, wan_ip_addr_buf ,
					"LanIPAddr",JSON_STRING, lan_ip_addr_buf 
				);

	}
	return 0;
}

int capisys_get_lan_net_info(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char lan_net_info_buf[256] = { 0 };
	ret = __capisys_get_lan_net_info(lan_net_info_buf);
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get sys mem info  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"Info",JSON_STRING,lan_net_info_buf
				);

	}
	return 0;
}


int capisys_get_wan_realrate(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char realrate_buf[64] = { 0 };
	char user_buf[64] = { 0 };
	char pass_buf[64] = { 0 };
	ret = sysutils_get_json_value_from(data,"USER",JSON_STRING ,user_buf);
#if 1
	if(ret < 0 ){
		LOGGER_ERR("get user error \n");
	}
	ret = sysutils_get_json_value_from(data,"PASSWORD",JSON_STRING ,pass_buf);
	if(ret < 0 ){
		LOGGER_ERR("get password error \n");
	}
#endif
	//TODO :: user & password used for ?
	ret = __capisys_get_wan_realrate(realrate_buf);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"RealTimeRate",JSON_STRING,realrate_buf
				);

	}
	return 0;
}

int capisys_http_download_request(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char realrate_buf[64] = { 0 };
	char user_buf[64] = { 0 };
	char pass_buf[64] = { 0 };
	char method_buf[64] = { 0  };
	char time_buf[64] = { 0  };
	ret = sysutils_get_json_value_from(data,"USER",JSON_STRING,user_buf );
#if 1
	if(ret < 0 ){
		LOGGER_ERR("get user error \n");
	}
	ret = sysutils_get_json_value_from(data,"PASSWORD",JSON_STRING,pass_buf );
	if(ret < 0 ){
		LOGGER_ERR("get password error \n");
	}
	ret = sysutils_get_json_value_from(data,"Method",JSON_STRING,method_buf );
	if(ret < 0 ){
		LOGGER_ERR("get method error \n");
	}
	ret = sysutils_get_json_value_from(data,"Time",JSON_STRING,time_buf );
	if(ret < 0 ){
		LOGGER_ERR("get time error \n");
	}
#endif
	//TODO :: user & password used for ?
	ret = __capisys_http_download_request(method_buf,time_buf);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 3 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0"
				);

	}
	return 0;
}

int capisys_get_wifi_info(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char ssid_buf[64] = { 0 };
	char pwd_buf[64] = { 0 };
	char encrypt_buf[64] = { 0 };
	char power_level_buf[64] = { 0 };
	char power_level_5g_buf[64] = { 0 };
	char channel_buf[64] = { 0 };
	char enable_buf[64] = { 0 };
	char ssid_index_buf[64] = { 0 };
	ret = sysutils_get_json_value_from(data,"SSIDIndex",JSON_STRING, ssid_index_buf);
#if 1
	if(ret < 0 ){
		LOGGER_ERR("get ssid index  error \n");
	}
#endif
	//TODO :: user & password used for ?
	ret = __capisys_get_wifi_info( 
				ssid_index_buf ,
				ssid_buf ,
				pwd_buf,
				encrypt_buf,
				power_level_buf,
				power_level_5g_buf,
  				channel_buf ,
				enable_buf 
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 10 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"SSID",JSON_STRING,ssid_buf,
					"PWD",JSON_STRING,pwd_buf,
					"ENCRYPT",JSON_STRING,encrypt_buf,
					"PowerLevel",JSON_STRING,power_level_buf,
					"PowerLevel-5G",JSON_STRING,power_level_5g_buf,
					"Channel",JSON_STRING,channel_buf,
					"Enable",JSON_STRING,enable_buf
				);

	}
	return 0;
}

int capisys_get_wlan_attach_info(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char num_buf[64] = { 0 };
	char info_buf[64] = { 0 };
	//TODO :: user & password used for ?
	ret = __capisys_get_wlan_attach_info( 
				num_buf ,
				info_buf 
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 5 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"Num",JSON_STRING,num_buf,
					"Info",JSON_STRING,info_buf
				);

	}
	return 0;
}

int capisys_get_voip_info(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char voip_name1_buf[64] = { 0 };
	char voip_name2_buf[64] = { 0 };
	//TODO :: user & password used for ?
	ret = __capisys_get_voip_info( 
				voip_name1_buf ,
				voip_name2_buf 
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 5 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"VOIPNAME1",JSON_STRING,voip_name1_buf,
					"VOIPNAME2",JSON_STRING,voip_name2_buf
				);

	}
	return 0;
}

int capisys_get_voip_reg_status(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char line1_status_buf[64] = { 0 };
	char line2_status_buf[64] = { 0 };
	//TODO :: user & password used for ?
	ret = __capisys_get_voip_reg_status( 
				line1_status_buf ,
				line2_status_buf
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 5 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"Line1Status",JSON_STRING,line1_status_buf,
					"Line2Status",JSON_STRING,line2_status_buf
				);

	}
	return 0;
}


int capisys_ping_diag_reg(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char realrate_buf[64] = { 0 };
	char dest_buf[64] = { 0 };
	char wan_name_buf[64] = { 0 };
	char length_buf[64] = { 0  };
	char time_buf[64] = { 0  };
	char user_buf[64] = { 0  };
	char pass_buf[64] = { 0  };
#if 1
	ret = sysutils_get_json_value_from(data,"USER",JSON_STRING,user_buf );
	if(ret < 0 ){
		LOGGER_ERR("get user error \n");
	}
	ret = sysutils_get_json_value_from(data,"PASSWORD",JSON_STRING,pass_buf );
	if(ret < 0 ){
		LOGGER_ERR("get password error \n");
	}
	ret = sysutils_get_json_value_from(data,"Dest",JSON_STRING,dest_buf );
	if(ret < 0 ){
		LOGGER_ERR("get dest error \n");
	}
	ret = sysutils_get_json_value_from(data,"WANName",JSON_STRING,wan_name_buf );
	if(ret < 0 ){
		LOGGER_ERR("get wanname error \n");
	}
	ret = sysutils_get_json_value_from(data,"length",JSON_STRING,length_buf );
	if(ret < 0 ){
		LOGGER_ERR("get length error \n");
	}
	ret = sysutils_get_json_value_from(data,"time",JSON_STRING,time_buf );
	if(ret < 0 ){
		LOGGER_ERR("get time error \n");
	}
#endif
	//TODO :: user & password used for ?
	ret = __capisys_ping_diag_reg(
			user_buf,
			pass_buf,
			dest_buf,
			wan_name_buf ,
			length_buf ,
			time_buf
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 3 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0"
				);

	}
	return 0;
}



int capisys_get_ping_result(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char ping_status_buf[64] = { 0 };
	char ping_result_buf[64] = { 0 };
	char user_buf[64] = { 0  };
	char pass_buf[64] = { 0  };
#if 1
	ret = sysutils_get_json_value_from(data,"USER",JSON_STRING,user_buf );
	if(ret < 0 ){
		LOGGER_ERR("get user error \n");
	}
	ret = sysutils_get_json_value_from(data,"PASSWORD",JSON_STRING,pass_buf );
	if(ret < 0 ){
		LOGGER_ERR("get password error \n");
	}
#endif
	//TODO :: user & password used for ?
	ret = __capisys_get_ping_result( 
				user_buf,
				pass_buf,
				ping_status_buf ,
				ping_result_buf
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 5 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"PingStatus",JSON_STRING,ping_status_buf,
					"PingResult",JSON_STRING,ping_result_buf
				);

	}
	return 0;
}



int capisys_traceroute_diag_reg(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char realrate_buf[64] = { 0 };
	char dest_buf[64] = { 0 };
	char wan_name_buf[64] = { 0 };
	char user_buf[64] = { 0  };
	char pass_buf[64] = { 0  };
#if 1
	ret = sysutils_get_json_value_from(data,"USER",JSON_STRING,user_buf );
	if(ret < 0 ){
		LOGGER_ERR("get user error \n");
	}
	ret = sysutils_get_json_value_from(data,"PASSWORD",JSON_STRING,pass_buf );
	if(ret < 0 ){
		LOGGER_ERR("get password error \n");
	}
	ret = sysutils_get_json_value_from(data,"Dest",JSON_STRING,dest_buf );
	if(ret < 0 ){
		LOGGER_ERR("get dest error \n");
	}
	ret = sysutils_get_json_value_from(data,"WANName",JSON_STRING,wan_name_buf );
	if(ret < 0 ){
		LOGGER_ERR("get wanname error \n");
	}
#endif
	//TODO :: user & password used for ?
	ret = __capisys_traceroute_diag_reg(
			user_buf,
			pass_buf,
			dest_buf,
			wan_name_buf 
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 3 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0"
				);

	}
	return 0;
}



int capisys_get_traceroute_result(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char traceroute_status_buf[64] = { 0 };
	char traceroute_result_buf[64] = { 0 };
	char user_buf[64] = { 0  };
	char pass_buf[64] = { 0  };
#if 1
	ret = sysutils_get_json_value_from(data,"USER",JSON_STRING,user_buf );
	if(ret < 0 ){
		LOGGER_ERR("get user error \n");
	}
	ret = sysutils_get_json_value_from(data,"PASSWORD",JSON_STRING,pass_buf );
	if(ret < 0 ){
		LOGGER_ERR("get password error \n");
	}
#endif
	//TODO :: user & password used for ?
	ret = __capisys_get_traceroute_result( 
				user_buf,
				pass_buf,
				traceroute_status_buf ,
				traceroute_result_buf
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 5 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"TraceStatus",JSON_STRING,traceroute_status_buf,
					"TraceResult",JSON_STRING,traceroute_result_buf
				);

	}
	return 0;
}


int capisys_inform_diag_reg(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char realrate_buf[64] = { 0 };
	char dest_buf[64] = { 0 };
	char wan_name_buf[64] = { 0 };
	char user_buf[64] = { 0  };
	char pass_buf[64] = { 0  };
#if 1
	ret = sysutils_get_json_value_from(data,"USER",JSON_STRING,user_buf );
	if(ret < 0 ){
		LOGGER_ERR("get user error \n");
	}
	ret = sysutils_get_json_value_from(data,"PASSWORD",JSON_STRING,pass_buf );
	if(ret < 0 ){
		LOGGER_ERR("get password error \n");
	}
#endif
	//TODO :: user & password used for ?
	ret = __capisys_inform_diag_reg(
			user_buf,
			pass_buf
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 3 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0"
				);

	}
	return 0;
}



int capisys_get_inform_result(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char inform_status_buf[64] = { 0 };
	char inform_result_buf[64] = { 0 };
	char user_buf[64] = { 0  };
	char pass_buf[64] = { 0  };
#if 1
	ret = sysutils_get_json_value_from(data,"USER",JSON_STRING,user_buf );
	if(ret < 0 ){
		LOGGER_ERR("get user error \n");
	}
	ret = sysutils_get_json_value_from(data,"PASSWORD",JSON_STRING,pass_buf );
	if(ret < 0 ){
		LOGGER_ERR("get password error \n");
	}
#endif
	//TODO :: user & password used for ?
	ret = __capisys_get_inform_result( 
				user_buf,
				pass_buf,
				inform_status_buf ,
				inform_result_buf
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 5 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"InformStatus",JSON_STRING,inform_status_buf,
					"InformResult",JSON_STRING,inform_result_buf
				);

	}
	return 0;
}

int capisys_register(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char inform_status_buf[64] = { 0 };
	char inform_result_buf[64] = { 0 };
	char user_buf[64] = { 0  };
	char pass_buf[64] = { 0  };
	char province_buf[64] = { 0  };
#if 1
	ret = sysutils_get_json_value_from(data,"USERID",JSON_STRING,user_buf );
	if(ret < 0 ){
		LOGGER_ERR("get user error \n");
	}
	ret = sysutils_get_json_value_from(data,"PASSWORD",JSON_STRING,pass_buf );
	if(ret < 0 ){
		LOGGER_ERR("get password error \n");
	}
	ret = sysutils_get_json_value_from(data,"Province",JSON_STRING,province_buf );
	if(ret < 0 ){
		LOGGER_ERR("get province error \n");
	}
#endif
	//TODO :: user & password used for ?
	ret = __capisys_register( 
				user_buf,
				pass_buf,
				province_buf
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 3 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0"
				);

	}
	return 0;
}

int capisys_get_register_stat(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char register_status_buf[64] = { 0 };
	ret = __capisys_get_register_stat( 
				register_status_buf 
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"RegisterStatus",JSON_STRING,register_status_buf
				);

	}
	return 0;
}


int capisys_get_poninform_req(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char temperate_buf[64] = { 0 };
	char voltage_buf[64] = { 0 };
	char current_buf[64] = { 0 };
	char rx_power_buf[64] = { 0 };
	char tx_power_buf[64] = { 0 };
	ret = __capisys_get_power_info( 
				voltage_buf,
				current_buf ,
				tx_power_buf,
				rx_power_buf
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get power  error\n");
	}
	ret = __capisys_get_temperate( 
				temperate_buf
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get temperate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 8 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"Temperature",JSON_STRING,temperate_buf,
					"Vottage",JSON_STRING,voltage_buf,
					"Current",JSON_STRING,current_buf,
					"TXPower",JSON_STRING,tx_power_buf,
					"RXPower",JSON_STRING,rx_power_buf
				);

	}
	return 0;
}


int capisys_get_pon_status(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char pon_status_buf[64] = { 0 };
	ret = __capisys_get_pon_status( 
				pon_status_buf 
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"PonStatus",JSON_STRING,pon_status_buf
				);

	}
	return 0;
}

int capisys_set_http_cfg(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char user_buf[64] = { 0  };
	char pass_buf[64] = { 0  };
	char url_buf[64] = { 0  };
#if 1
	ret = sysutils_get_json_value_from(data,"USERID",JSON_STRING,user_buf );
	if(ret < 0 ){
		LOGGER_ERR("get user error \n");
	}
	ret = sysutils_get_json_value_from(data,"PASSWORD",JSON_STRING,pass_buf );
	if(ret < 0 ){
		LOGGER_ERR("get password error \n");
	}
	ret = sysutils_get_json_value_from(data,"URL",JSON_STRING,url_buf );
	if(ret < 0 ){
		LOGGER_ERR("get url error \n");
	}
#endif
	//TODO :: user & password used for ?
	ret = __capisys_set_http_cfg( 
				user_buf,
				pass_buf,
				url_buf
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 3 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0"
				);

	}
	return 0;
}

int capisys_set_hg_date_time_sync(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char user_buf[64] = { 0  };
	char pass_buf[64] = { 0  };
	char time_buf[64] = { 0  };
#if 1
	ret = sysutils_get_json_value_from(data,"USERID",JSON_STRING,user_buf );
	if(ret < 0 ){
		LOGGER_ERR("get user error \n");
	}
	ret = sysutils_get_json_value_from(data,"PASSWORD",JSON_STRING,pass_buf );
	if(ret < 0 ){
		LOGGER_ERR("get password error \n");
	}
	ret = sysutils_get_json_value_from(data,"Time",JSON_STRING,time_buf );
	if(ret < 0 ){
		LOGGER_ERR("get time error \n");
	}
#endif
	//TODO :: user & password used for ?
	ret = __capisys_set_hg_date_time_sync( 
				user_buf,
				pass_buf,
				time_buf
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 3 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0"
				);

	}
	return 0;
}


int capisys_get_wlan_intf_info(char *buf, char *sequence_id ,char *cmd_type ,void *data ) {
	LOGGER_DBG("capisys handler -> %s\n",__FUNCTION__);	 
	int ret = 0 ;
	int all_info_flag = 0 ;
	char ssid_buf[64] = { 0 };
	char pwd_buf[64] = { 0 };
	char encrypt_buf[64] = { 0 };
	char power_level_buf[64] = { 0 };
	char power_level_5g_buf[64] = { 0 };
	char channel_buf[64] = { 0 };
	char enable_buf[64] = { 0 };
	char ssid_index_buf[64] = { 0 };
	char recv_buf[64] = {0 };
	char send_buf[64] = { 0 };
	//TODO :: user & password used for ?
	ret = __capisys_get_wlan_intf_info( 
				ssid_buf ,
				pwd_buf,
				encrypt_buf,
				power_level_buf,
				power_level_5g_buf,
  				channel_buf ,
				enable_buf  ,
				recv_buf,
				send_buf
			);	
	if (ret < 0 ){
		all_info_flag = -1;
		LOGGER_ERR("get wan realrate  error\n");
	}
	all_info_flag =  0;
	if(all_info_flag < 0 ){
		LOGGER_ERR("cal capisys get loid error \n");
		ret = sysutils_encode_json_from_value(buf, 4 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"1",
					"FailReason",""
				);
	}else 
	{
		ret = sysutils_encode_json_from_value(buf, 10 ,
					"CmdType",JSON_STRING ,cmd_type,
					"SequenceId",JSON_STRING,sequence_id ,
					"Status",JSON_STRING,"0",
					"SSID",JSON_STRING,ssid_buf,
					"ENCRYPT",JSON_STRING,encrypt_buf,
					"PowerLevel",JSON_STRING,power_level_buf,
					"PowerLevel-5G",JSON_STRING,power_level_5g_buf,
					"Channel",JSON_STRING,channel_buf,
					"Enable",JSON_STRING,enable_buf ,
					"RECV",JSON_STRING,recv_buf ,
					"SEND",JSON_STRING,send_buf
				);

	}
	return 0;
}



































CapisysHandler capisys_handler[] ={
	{   "QUERY_CPU_INFO" ,
		capisys_query_cpu_info,
		NULL   },

	{   "GET_WLAN_INTF_INFO" ,
		capisys_wlan_intf_info,
		NULL   },
	{   "GET_HG_LOID" ,
		capisys_get_hg_loid,
		NULL   },
	{   "GET_SN_INFO" ,
		capisys_get_sn_info,
		NULL   },
	{   "GET_VERSION" ,
		capisys_get_version,
		NULL   },
	{   "SYSTEST" ,
		capisys_systest,
		NULL   },
	{   "PPPOE_DIAG_REQ" ,
		capisys_ppoe_diag_req,
		NULL   },
	{   "QUERY_WAN_NUM" ,
		capisys_query_wan_num,
		NULL   },
	{   "QUERY_WAN_INFO" ,
		capisys_query_wan_info,
		NULL   },
	{   "QUERY_SYSTEM_INFO" ,
		capisys_query_system_info,
		NULL   },
	{   "GET_TIME_DURATION" ,
		capisys_get_time_duration,
		NULL   },
	{   "QUERY_MEM_INFO" ,
		capisys_query_mem_info,
		NULL   },
	{   "QUERY_SYSTEM_INFO" ,
		capisys_query_sys_info,
		NULL   },
	{   "GET_LAN_NET_INFO" ,
		capisys_get_lan_net_info,
		NULL   },
	{   "GET_WAN_REALRATE" ,
		capisys_get_wan_realrate,
		NULL   },
	{   "HTTP_DOWNLOAD_REQUEST" ,
		capisys_http_download_request,
		NULL   },
	{   "GET_WIFI_INFO" ,
		capisys_get_wifi_info,
		NULL   },
	{   "GET_WLAN_ATTACH_INFO" ,
		capisys_get_wlan_attach_info,
		NULL   },
	{   "GET_VOIP_INFO" ,
		capisys_get_voip_info,
		NULL   },
	{   "GET_VOIP_REG_STATUS" ,
		capisys_get_voip_reg_status,
		NULL   },
	{   "PING_DIAG_REQ" ,
		capisys_ping_diag_reg,
		NULL   },
	{   "TRACEROUTE_DIAG_REQ" ,
		capisys_traceroute_diag_reg,
		NULL   },
	{   "GET_TRACEROUTE_RESULT" ,
		capisys_get_traceroute_result,
		NULL   },
	{   "INFORM_DIAG_REQ" ,
		capisys_inform_diag_reg,
		NULL   },
	{   "GET_INFORM_RESULT" ,
		capisys_get_inform_result,
		NULL   },
	{   "REGISTER_GETSTAT" ,
		capisys_get_register_stat,
		NULL   },
	{   "REGISTER" ,
		capisys_register,
		NULL   },
	{   "GET_PONINFORM_REQ" ,
		capisys_get_poninform_req,
		NULL   },
	{   "GET_PON_STATUS" ,
		capisys_get_pon_status,
		NULL   },
	{   "SET_HTTP_CFG" ,
		capisys_set_http_cfg,
		NULL   },
	{   "SET_HG_DATE_TIME_SYNC" ,
		capisys_set_hg_date_time_sync,
		NULL   },
	{   "GET_WLAN_INTF_INFO" ,
		capisys_get_wlan_intf_info,
		NULL   },
	{   "GET_SERVICE" ,
		NULL,
		NULL   },
	{   "GET_SERVICE" ,
		NULL,
		NULL   },
	{   "GET_SERVICE" ,
		NULL,
		NULL   },
	{   "GET_SERVICE" ,
		NULL,
		NULL   },
	{   "GET_SERVICE" ,
		NULL,
		NULL   },
	{   "GET_SERVICE" ,
		NULL,
		NULL   },
	{   "GET_SERVICE" ,
		NULL,
		NULL   },
	{   "GET_SERVICE" ,
		NULL,
		NULL   },
	{   "GET_SERVICE" ,
		NULL,
		NULL   },
	{   "GET_SERVICE" ,
		NULL,
		NULL   },
	{   "GET_SERVICE" ,
		NULL,
		NULL   },
	{   {0},
		NULL ,
		NULL  }


} ;
