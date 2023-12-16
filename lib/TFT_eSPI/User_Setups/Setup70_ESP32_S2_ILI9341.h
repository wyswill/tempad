#define ILI9341_2_DRIVER
// #define RPI_DISPLAY_TYPE // 20MHz maximum SPI

#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS   15  // Chip select control pin
#define TFT_DC    2  // Data Command control pin
#define TFT_RST   4  // Reset pin (could connect to RST pin)
#define TOUCH_CS 21     // Chip select pin (T_CS) of touch screen
#define TFT_BL   16            // LED back-light control pin
#define TFT_BACKLIGHT_ON HIGH  // Level to turn ON back-light (HIGH or LOW)

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
// #define LOAD_GFXFF

// #define SMOOTH_FONT
#define USE_HSPI_PORT
#define SPI_FREQUENCY  40000000   // Maximum for ILI9341
#define SPI_READ_FREQUENCY  20000000 // 6 MHz is the maximum SPI read speed for the ST7789V
#define SPI_TOUCH_FREQUENCY  2500000