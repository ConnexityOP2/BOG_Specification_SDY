
#include "sgl.h"

void GetCharVertAdvance(SGLlong Font, SGLbyte(*LabelString), SGLfloat(*CharVertAdvance))
{
    SGLfloat newCharVertAdvance;
    if (CharVertAdvance != NULL) {
        newCharVertAdvance = sglGetFontValue((SGLulong) Font, 0U, SGL_MAX_CHAR_V_ADVANCE);
        *CharVertAdvance = newCharVertAdvance;
    }
}
