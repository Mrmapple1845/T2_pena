#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "driver/gpio.h"
#include "esp_attr.h"
#include "esp_err.h"
#include "esp_log.h"
#include "esp_system.h"
#include "esp_timer.h"
#include "sdkconfig.h"

// Componentes
#include "consola.h"
#include "led.h"
#include "pulsador.h"
#include "sensor.h"

// Archivos auxiliares main
#include "pines.h"


void app_main(void)
{

}