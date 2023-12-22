
#include "WifiHelper.h"
#include "WiFi.h"

WifiHelper::WifiHelper()
{
  // wifi 设置为 station 模式，将芯片作为设备的连接到路由器进行上网
  WiFi.mode(WIFI_MODE_STA);
  // 开启wifi
  WiFi.begin(this->ssid, this->password);
  Serial.print("Connecting to WiFi ..");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print('.');
    delay(1000);
  }
  Serial.println(WiFi.localIP());
}
WifiHelper::~WifiHelper() {}
