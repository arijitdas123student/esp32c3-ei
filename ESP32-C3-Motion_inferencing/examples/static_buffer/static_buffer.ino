/*  Generated using Edge Impulse. 
    With modifications by Arijit Das (@arijitdas123student).
 /

/* Includes ---------------------------------------------------------------- */
#include <ESP32-C3-Motion_inferencing.h>

static const float features[] = {
-11.3000, 2.4000, 5.3000, -11.1000, 2.8000, 5.9000, -12.1000, 3.5000, 7.3000, -12.4000, 4.1000, 9.0000, -12.0000, 4.5000, 9.7000, -12.4000, 5.2000, 10.2000, -12.1000, 5.8000, 9.5000, -10.2000, 6.2000, 9.2000, -6.8000, 7.2000, 9.5000, -6.5000, 7.7000, 9.7000, -8.0000, 7.4000, 9.9000, -8.5000, 7.0000, 9.8000, -9.1000, 5.9000, 8.5000, -8.5000, 4.7000, 5.8000, -6.4000, 3.9000, 3.7000, -5.1000, 3.7000, 3.0000, -3.3000, 3.6000, 2.6000, -3.3000, 3.6000, 2.6000, -3.1000, 3.1000, 3.0000, -3.4000, 2.0000, 3.6000, -2.5000, 1.5000, 4.4000, 0.4000, 0.6000, 5.5000, 3.4000, 1.2000, 4.4000, 4.2000, 1.5000, 2.9000, 5.1000, 2.3000, -0.3000, 4.4000, 2.5000, -2.4000, 3.4000, 2.1000, -2.3000, 4.0000, 1.9000, -1.0000, 5.8000, 2.1000, 2.4000, 7.5000, 2.3000, 3.8000, 8.6000, 2.7000, 3.0000, 9.1000, 2.7000, 2.5000, 10.0000, 3.1000, 1.2000, 11.8000, 3.6000, 1.0000, 13.2000, 4.4000, 1.9000, 16.5000, 5.6000, 3.1000, 19.0000, 6.8000, 3.2000, 19.1000, 7.6000, 1.0000, 18.7000, 8.0000, 0.3000, 19.1000, 8.4000, 2.1000, 20.2000, 8.8000, 4.6000, 20.6000, 9.0000, 5.1000, 20.6000, 9.0000, 5.1000, 20.3000, 8.9000, 4.4000, 19.3000, 8.5000, 2.1000, 18.8000, 7.8000, 1.1000, 18.7000, 7.3000, 1.9000, 16.4000, 5.8000, 3.8000, 13.0000, 4.4000, 5.2000, 10.8000, 3.3000, 5.6000, 10.0000, 3.0000, 5.5000, 8.0000, 2.4000, 4.1000, 5.6000, 1.7000, 3.4000, 4.7000, 1.5000, 3.5000, 4.2000, 1.2000, 3.8000, 5.1000, 1.2000, 3.8000, 4.1000, 1.1000, 3.1000, 2.3000, 0.9000, 1.6000, -0.8000, 0.7000, -1.3000, -2.4000, 1.1000, -0.6000, -3.6000, 2.1000, 0.5000, -3.9000, 2.4000, 1.1000, -4.7000, 2.8000, 1.4000, -7.3000, 2.8000, 0.9000, -8.2000, 3.2000, 1.9000, -10.2000, 4.1000, 2.2000, -10.3000, 5.4000, 3.8000, -10.3000, 5.4000, 3.8000, -9.1000, 6.5000, 5.3000, -8.8000, 7.1000, 6.0000, -8.2000, 7.8000, 6.5000, -7.5000, 8.3000, 7.7000, -7.5000, 8.6000, 8.3000, -7.4000, 8.7000, 8.8000, -8.1000, 8.6000, 9.3000, -9.1000, 8.1000, 8.6000, -9.2000, 8.0000, 8.3000, -8.8000, 7.6000, 7.5000, -7.6000, 7.1000, 6.4000, -6.7000, 6.3000, 4.7000, -6.0000, 5.9000, 4.0000, -4.4000, 5.2000, 3.5000, -2.0000, 5.0000, 4.9000, -1.9000, 4.5000, 5.2000, -2.1000, 4.2000, 5.0000, -1.3000, 3.6000, 4.8000, -0.5000, 3.0000, 4.8000, 1.0000, 2.8000, 4.7000, 2.9000, 2.9000, 4.0000, 3.3000, 3.0000, 2.1000, 3.0000, 2.8000, 0.2000, 3.2000, 2.8000, -0.3000, 3.2000, 2.8000, -0.3000, 3.9000, 2.6000, 0.0000, 3.2000, 2.3000, 0.9000, 3.0000, 2.0000, 2.8000, 3.7000, 2.1000, 3.6000, 5.9000, 2.5000, 4.6000, 7.5000, 2.9000, 4.5000, 11.5000, 4.1000, 3.7000, 13.6000, 5.1000, 1.7000, 14.7000, 6.0000, 0.8000, 17.1000, 7.3000, 1.4000, 17.6000, 7.8000, 2.1000, 18.5000, 8.7000, 3.1000, 19.6000, 9.4000, 2.5000, 21.2000, 10.0000, 0.5000, 21.5000, 10.0000, -0.6000, 20.6000, 9.4000, -1.9000, 18.6000, 8.5000, -0.8000, 17.3000, 8.1000, 0.6000, 16.0000, 7.6000, 3.8000, 15.7000, 7.0000, 6.8000, 14.6000, 5.8000, 7.4000, 13.4000, 5.2000, 5.9000, 11.5000, 4.3000, 2.1000, 10.2000, 3.5000, -0.4000, 10.2000, 3.5000, -0.4000, 9.4000, 3.0000, -0.8000, 6.7000, 1.5000, -0.7000, 3.7000, 0.4000, 0.1000, 1.2000, 0.1000, 1.5000, 0.3000, 0.2000, 2.0000, -0.6000, 0.8000, 1.9000, -0.6000, 1.6000, 1.4000


};

/**
 * @brief      Copy raw feature data in out_ptr
 *             Function called by inference library
 *
 * @param[in]  offset   The offset
 * @param[in]  length   The length
 * @param      out_ptr  The out pointer
 *
 * @return     0
 */
int raw_feature_get_data(size_t offset, size_t length, float *out_ptr) {
    memcpy(out_ptr, features + offset, length * sizeof(float));
    return 0;
}


/**
 * @brief      Arduino setup function
 */
void setup()
{
    // put your setup code here, to run once:
    Serial.begin(115200);

    Serial.println("Edge Impulse RISC-V Inferencing Demo");
}

/**
 * @brief      Arduino main function
 */
void loop()
{
    ei_printf("Edge Impulse standalone inferencing (RISC-V)\n");

    if (sizeof(features) / sizeof(float) != EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE) {
        ei_printf("The size of your 'features' array is not correct. Expected %lu items, but had %lu\n",
            EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE, sizeof(features) / sizeof(float));
        delay(1000);
        return;
    }

    ei_impulse_result_t result = { 0 };

    // the features are stored into flash, and we don't want to load everything into RAM
    signal_t features_signal;
    features_signal.total_length = sizeof(features) / sizeof(features[0]);
    features_signal.get_data = &raw_feature_get_data;

    // invoke the impulse
    EI_IMPULSE_ERROR res = run_classifier(&features_signal, &result, false /* debug */);
    ei_printf("run_classifier returned: %d\n", res);

    if (res != 0) return;

    // print the predictions
    ei_printf("Predictions ");
    ei_printf("(DSP: %d ms., Classification: %d ms., Anomaly: %d ms.)",
        result.timing.dsp, result.timing.classification, result.timing.anomaly);
    ei_printf(": \n");
    ei_printf("[");
    for (size_t ix = 0; ix < EI_CLASSIFIER_LABEL_COUNT; ix++) {
        ei_printf("%.5f", result.classification[ix].value);
#if EI_CLASSIFIER_HAS_ANOMALY == 1
        ei_printf(", ");
#else
        if (ix != EI_CLASSIFIER_LABEL_COUNT - 1) {
            ei_printf(", ");
        }
#endif
    }
#if EI_CLASSIFIER_HAS_ANOMALY == 1
    ei_printf("%.3f", result.anomaly);
#endif
    ei_printf("]\n");

    // human-readable predictions
    for (size_t ix = 0; ix < EI_CLASSIFIER_LABEL_COUNT; ix++) {
        ei_printf("    %s: %.5f\n", result.classification[ix].label, result.classification[ix].value);
    }
#if EI_CLASSIFIER_HAS_ANOMALY == 1
    ei_printf("    anomaly score: %.3f\n", result.anomaly);
#endif

    delay(1000);
}

/**
 * @brief      Printf function uses vsnprintf and output using Arduino Serial
 *
 * @param[in]  format     Variable argument list
 */
void ei_printf(const char *format, ...) {
    static char print_buf[1024] = { 0 };

    va_list args;
    va_start(args, format);
    int r = vsnprintf(print_buf, sizeof(print_buf), format, args);
    va_end(args);

    if (r > 0) {
        Serial.write(print_buf);
    }
}
