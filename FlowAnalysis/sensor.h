
#define MAX_ATTEMPTS 5
#define SENSORS 0
#define ACTUATORS 1
#define CATEGORIES 2
#define HANDLE_NUM 3
#define COMPENSATION 2

enum SENSOR_STATUS {SENSOR_READ_OK=0, SENSOR_INIT_ERROR=1, SENSOR_READ_FAILED=2};

typedef enum SENSOR_STATUS sensor_stat;
typedef int * sensor_handle;

int needCompensation(void);
int calcCompensation(int temp);
enum SENSOR_STATUS readSensor(sensor_handle, int * measure);
void finalizeSensor(sensor_handle handle);
sensor_handle initializeSensor(unsigned id);
void log_error();

