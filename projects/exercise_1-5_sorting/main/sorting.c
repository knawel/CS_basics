#include <sorting.h>
#include <sensor.h>

void sel_sort(SensorReading *arr, int n) {
        
    for (int i = 0; i < n; i++) {
        int max_index = i;
        // Find the index of the maximum calibrated value in the unsorted portion of the array
        for (int k = i + 1; k < n; k++) {
            if (arr[k].calibrated > arr[max_index].calibrated) {
                max_index = k;
            }
        }
        // Swap the found maximum element with the first element of the unsorted portion
        if (max_index != i) {
            SensorReading temp = arr[i];
            arr[i] = arr[max_index];
            arr[max_index] = temp;
        } 
    }

}