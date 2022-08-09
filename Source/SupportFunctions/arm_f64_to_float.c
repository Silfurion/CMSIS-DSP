

#include "dsp/support_functions.h"




void arm_f64_to_float(
  const float64_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize)
{
    const float64_t *pIn = pSrc;      /* Src pointer */
    uint32_t  blkCnt;           /* loop counter */

    /*
     * Loop over blockSize number of values
     */
    blkCnt = blockSize;

    while (blkCnt > 0U)
    {

        *pDst++ = (float32_t) * pIn++;
        /*
         * Decrement the loop counter
         */
        blkCnt--;
    }
}
