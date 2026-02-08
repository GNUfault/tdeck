# tdeck
hw init function for T-Deck &amp; T-Deck Plus

## Hello World
<img width="300" height="300" alt="output" src="https://github.com/user-attachments/assets/35800419-458c-4641-a039-2ee968c88be7" />

```cpp
#include <TFT_eSPI.h>
#include "tdeck.h"

TDeck tdeck;
TFT_eSPI tft = TFT_eSPI();

void setup() {
  tdeck.init();
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.println("Hello World");
}

void loop() {}
```
