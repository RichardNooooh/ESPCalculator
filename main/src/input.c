#include "driver/gpio.h"


//TODO make list of calc buttons to corresponding GPIO pin


//Listens for number presses
void setup_gpio_configs()
{
    gpio_config_t io_conf;
    io_conf.intr_type = GPIO_PIN_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = 1;  //this is the value that determines which gpio ports are setup
    io_conf.pull_down_en = 0;
    io_conf.pull_up_en = 0;
    gpio_config(&io_conf);
}

