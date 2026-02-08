#include <SPI.h>

#define BOARD_POWERON   10
#define BOARD_SDCARD_CS 39
#define RADIO_CS_PIN    9
#define BOARD_TFT_CS    12
#define BOARD_SPI_MISO  38
#define BOARD_SPI_SCK   40
#define BOARD_SPI_MOSI  41

void tdeck.init(void) {
  pinMode(BOARD_POWERON, OUTPUT);
  digitalWrite(BOARD_POWERON, HIGH);

  pinMode(BOARD_SDCARD_CS, OUTPUT);
  pinMode(RADIO_CS_PIN, OUTPUT);
  pinMode(BOARD_TFT_CS, OUTPUT);

  digitalWrite(BOARD_SDCARD_CS, HIGH);
  digitalWrite(RADIO_CS_PIN, HIGH);
  digitalWrite(BOARD_TFT_CS, HIGH);

  pinMode(BOARD_SPI_MISO, INPUT_PULLUP);
  SPI.begin(BOARD_SPI_SCK, BOARD_SPI_MISO, BOARD_SPI_MOSI);
}
