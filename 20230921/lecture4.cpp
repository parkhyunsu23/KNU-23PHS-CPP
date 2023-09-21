#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
    double x = 0;
    double y = 0;

    int count = 0, inside_circle = 0;
    double pi_estimate = 0.0;

    srand(time(NULL));

    for (int percentage = 1; percentage <= 100; percentage++) {
        int points_in_current_iteration = (int)(percentage * 0.01 * 10000);

        for (int i = 0; i < points_in_current_iteration; i++) {
            x = (double)rand() / (double)RAND_MAX;
            y = (double)rand() / (double)RAND_MAX;
            count++;

            double distance = sqrt(x * x + y * y); // 원점으로부터의 거리 계산

            if (distance <= 1.0) {
                inside_circle++;
            }
        }

        pi_estimate = 4.0 * inside_circle / count; // 현재까지의 원주율 추정
        printf("%d%%까지 진행: 현재 원주율 추정 = %lf\n", percentage, pi_estimate);
    }

    printf("원주율: %lf\n", pi_estimate);
    return 0;
}
