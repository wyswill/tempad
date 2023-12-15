// Setup for the ESP32 S2 with ILI9341 display
// Note SPI DMA with ESP32 S2 is not currently supported

// See SetupX_Template.h for all options available
#define ILI9341_DRIVER

#define TFT_MOSI 21
#define TFT_SCLK 18
#define TFT_CS   15  // Chip select control pin
#define TFT_DC   23  // Data Command control pin
#define TFT_RST   4  // Reset pin (could connect to RST pin)

#define TFT_BL   32            // LED back-light control pin
#define TFT_BACKLIGHT_ON HIGH  // Level to turn ON back-light (HIGH or LOW)

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

#define SMOOTH_FONT

// FSPI port will be used unless the following is defined
#define USE_HSPI_PORT

//#define SPI_FREQUENCY  27000000
#define SPI_FREQUENCY  40000000   // Maximum for ILI9341



#define SPI_READ_FREQUENCY  6000000 // 6 MHz is the maximum SPI read speed for the ST7789V
