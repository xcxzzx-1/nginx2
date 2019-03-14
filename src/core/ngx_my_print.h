#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

void print_ngx_str(ngx_str_t * ngx_str_arg){
	printf("String length: %zu ##\n", ngx_str_arg->len);
    printf("uri : %s \n", ngx_str_arg->data);
}