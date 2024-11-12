 /*
 * This file is part of the openHiTLS project.
 *
 * openHiTLS is licensed under the Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *
 *     http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PSL v2 for more details.
 */

#include "hitls_build.h"
#if defined(HITLS_CRYPTO_SM4) && defined(HITLS_CRYPTO_ECB)

#include "crypt_modes_ecb.h"

int32_t SM4_ECB_InitCtx(MODES_CipherCtx *modeCtx, const uint8_t *key, uint32_t keyLen, const uint8_t *iv,
    uint32_t ivLen, bool enc)
{
    return MODES_ECB_InitCtx(modeCtx, key, keyLen, iv, ivLen, enc);
}

int32_t SM4_ECB_Update(MODES_CipherCtx *modeCtx, const uint8_t *in, uint32_t inLen, uint8_t *out, uint32_t *outLen)
{
    return MODES_ECB_Update(modeCtx, in, inLen, out, outLen);
}

int32_t SM4_ECB_Final(MODES_CipherCtx *modeCtx, uint8_t *out, uint32_t *outLen)
{
    return MODES_ECB_Final(modeCtx, out, outLen);
}

#endif