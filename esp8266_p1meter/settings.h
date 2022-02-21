// **********************************
// * Settings                       *
// **********************************

// Update treshold in milliseconds, messages will only be sent on this interval
#define UPDATE_INTERVAL 9000  // 1 minute --> 5 seconds
//#define UPDATE_INTERVAL 300000 // 5 minutes

// * Baud rate for both hardware and software 
#define BAUD_RATE 115200

// The used serial pins, note that this can only be UART0, as other serial port doesn't support inversion
// By default the UART0 serial will be used. These settings displayed here just as a reference. 
// #define SERIAL_RX RX
// #define SERIAL_TX TX

// * Max telegram length
#define P1_MAXLINELENGTH 1050

// * The hostname of our little creature
#define HOSTNAME "p1meter"

// * The password used for OTA
#define OTA_PASSWORD "admin"

// * Wifi timeout in milliseconds
#define WIFI_TIMEOUT 30000

// * MQTT network settings
#define MQTT_MAX_RECONNECT_TRIES 10

// * MQTT root topic
#define MQTT_ROOT_TOPIC "sensors/power/p1meter"

// * MQTT Last reconnection counter
long LAST_RECONNECT_ATTEMPT = 0;

long LAST_UPDATE_SENT = 0;

// * To be filled with EEPROM data
char MQTT_HOST[64] = "";
char MQTT_PORT[6]  = "";
char MQTT_USER[32] = "";
char MQTT_PASS[32] = "";

// * Set to store received telegram
char telegram[P1_MAXLINELENGTH];

// * Set to store the data values read
float TIMESTAMP;

float CONSUMPTION_LOW_TARIF;
float CONSUMPTION_HIGH_TARIF;

float RETURNDELIVERY_LOW_TARIF;
float RETURNDELIVERY_HIGH_TARIF;

float ACTUAL_CONSUMPTION;
float ACTUAL_RETURNDELIVERY;
float GAS_METER_M3;

float L1_INSTANT_POWER_USAGE;
float L2_INSTANT_POWER_USAGE;
float L3_INSTANT_POWER_USAGE;
float L1_INSTANT_POWER_CURRENT;
float L2_INSTANT_POWER_CURRENT;
float L3_INSTANT_POWER_CURRENT;
float L1_VOLTAGE;
float L2_VOLTAGE;
float L3_VOLTAGE;

// Set to store data counters read
float ACTUAL_TARIF;
float SHORT_POWER_OUTAGES;
float LONG_POWER_OUTAGES;
float SHORT_POWER_DROPS;
float SHORT_POWER_PEAKS;

// * Set during CRC checking
unsigned int currentCRC = 0;
