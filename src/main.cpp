#include <Arduino.h>

int count1 = 0;
int count2 = 0;

void task1(void * parameters){
  for(;;){
    Serial.print("Task 1 counter:" );
    Serial.println(count1++);
    vTaskDelay(1000 / portTICK_PERIOD_MS); 
    // Delay for 1 second, this allows other tasks to run during this delay if u have any
  }
}

void task2(void * parameters){
  for(;;){
    Serial.print("Task 2 counter:" );
    Serial.println(count2++);
    vTaskDelay(1000 / portTICK_PERIOD_MS); 
    // Delay for 1 second, this allows other tasks to run during this delay if u have any
  }
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate

  xTaskCreatePinnedToCore(
    task1, // function name
    "Task 1", // task name
    1000, // stack size
    NULL, // task parameters
    1, // task priority
    NULL, //task handle helps interact with a task from within other tasks
    0); // core ID

  xTaskCreatePinnedToCore(
    task2, // function name
    "Task 2", // task name
    1000, // stack size
    NULL, // task parameters
    1, // task priority
    NULL, //task handle helps interact with a task from within other tasks
    1); // core ID
}

void loop() {
  // put your main code here, to run repeatedly:
}
