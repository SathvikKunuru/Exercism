#include "resistor_color.h"

int color_code(resistor_band_t BAND){
    return BAND;
}

resistor_band_t arra[]= {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};
resistor_band_t *colors(){
    return arra;
}