
#include <stdio.h>
#include "hello-world1.h"
#include "hello-world2.h"
#include "input.h"

//#include "freertos/FreeRTOS.h"
//#include "freertos/task.h"
//#include "esp_system.h"
//#include "esp_spi_flash.h"
//
//#include <time.h>

void app_main() {
	printf("Hello world!\n");

	hello1();
	hello2();

	setup_gpio_configs();
	fflush(stdout);
}
