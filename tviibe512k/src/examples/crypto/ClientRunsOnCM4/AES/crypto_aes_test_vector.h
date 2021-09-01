
#ifndef __CRYPTO_AES_TEST_VECTOR__
#define __CRYPTO_AES_TEST_VECTOR__

#ifdef __CRYPTO_ENABLE_TEST_VECTOR__

/*******************************************************************************
* AES ECB MODE
********************************************************************************/
const uint8_t AesEcbKey128[] =
{
    0x2b,0x7e,0x15,0x16,0x28,0xae,0xd2,0xa6,0xab,0xf7,0x15,0x88,0x09,0xcf,0x4f,0x3c,
};

const uint8_t AesEcb128PlainTxtRef[4][16] =
{
    {0x6b,0xc1,0xbe,0xe2,0x2e,0x40,0x9f,0x96,0xe9,0x3d,0x7e,0x11,0x73,0x93,0x17,0x2a},
    {0xae,0x2d,0x8a,0x57,0x1e,0x03,0xac,0x9c,0x9e,0xb7,0x6f,0xac,0x45,0xaf,0x8e,0x51},
    {0x30,0xc8,0x1c,0x46,0xa3,0x5c,0xe4,0x11,0xe5,0xfb,0xc1,0x19,0x1a,0x0a,0x52,0xef},
    {0xf6,0x9f,0x24,0x45,0xdf,0x4f,0x9b,0x17,0xad,0x2b,0x41,0x7b,0xe6,0x6c,0x37,0x10},
};

uint8_t AesEcb128CypherTxtRef[4][16] = 
{
    {0x3a,0xd7,0x7b,0xb4,0x0d,0x7a,0x36,0x60,0xa8,0x9e,0xca,0xf3,0x24,0x66,0xef,0x97},
    {0xf5,0xd3,0xd5,0x85,0x03,0xb9,0x69,0x9d,0xe7,0x85,0x89,0x5a,0x96,0xfd,0xba,0xaf},
    {0x43,0xb1,0xcd,0x7f,0x59,0x8e,0xce,0x23,0x88,0x1b,0x00,0xe3,0xed,0x03,0x06,0x88},
    {0x7b,0x0c,0x78,0x5e,0x27,0xe8,0xad,0x3f,0x82,0x23,0x20,0x71,0x04,0x72,0x5d,0xd4},
};

/* ----------------------------------------------------------------------------- */
const uint8_t AesEcbKey192[] =
{
    0x8e,0x73,0xb0,0xf7,0xda,0x0e,0x64,0x52,0xc8,0x10,0xf3,0x2b,0x80,0x90,0x79,0xe5,0x62,0xf8,0xea,0xd2,0x52,0x2c,0x6b,0x7b,
};

const uint8_t AesEcb192PlainTxtRef[4][16] =
{
    {0x6b,0xc1,0xbe,0xe2,0x2e,0x40,0x9f,0x96,0xe9,0x3d,0x7e,0x11,0x73,0x93,0x17,0x2a},
    {0xae,0x2d,0x8a,0x57,0x1e,0x03,0xac,0x9c,0x9e,0xb7,0x6f,0xac,0x45,0xaf,0x8e,0x51},
    {0x30,0xc8,0x1c,0x46,0xa3,0x5c,0xe4,0x11,0xe5,0xfb,0xc1,0x19,0x1a,0x0a,0x52,0xef},
    {0xf6,0x9f,0x24,0x45,0xdf,0x4f,0x9b,0x17,0xad,0x2b,0x41,0x7b,0xe6,0x6c,0x37,0x10},
};

uint8_t AesEcb192CypherTxtRef[4][16] = 
{
    {0xbd,0x33,0x4f,0x1d,0x6e,0x45,0xf2,0x5f,0xf7,0x12,0xa2,0x14,0x57,0x1f,0xa5,0xcc},
    {0x97,0x41,0x04,0x84,0x6d,0x0a,0xd3,0xad,0x77,0x34,0xec,0xb3,0xec,0xee,0x4e,0xef},
    {0xef,0x7a,0xfd,0x22,0x70,0xe2,0xe6,0x0a,0xdc,0xe0,0xba,0x2f,0xac,0xe6,0x44,0x4e},
    {0x9a,0x4b,0x41,0xba,0x73,0x8d,0x6c,0x72,0xfb,0x16,0x69,0x16,0x03,0xc1,0x8e,0x0e},
};

/* ----------------------------------------------------------------------------- */
const uint8_t AesEcbKey256[] =
{
    0x60,0x3d,0xeb,0x10,0x15,0xca,0x71,0xbe,0x2b,0x73,0xae,0xf0,0x85,0x7d,0x77,0x81,0x1f,0x35,0x2c,0x07,0x3b,0x61,0x08,0xd7,0x2d,0x98,0x10,0xa3,0x09,0x14,0xdf,0xf4,
};

const uint8_t AesEcb256PlainTxtRef[4][16] =
{
    {0x6b,0xc1,0xbe,0xe2,0x2e,0x40,0x9f,0x96,0xe9,0x3d,0x7e,0x11,0x73,0x93,0x17,0x2a},
    {0xae,0x2d,0x8a,0x57,0x1e,0x03,0xac,0x9c,0x9e,0xb7,0x6f,0xac,0x45,0xaf,0x8e,0x51},
    {0x30,0xc8,0x1c,0x46,0xa3,0x5c,0xe4,0x11,0xe5,0xfb,0xc1,0x19,0x1a,0x0a,0x52,0xef},
    {0xf6,0x9f,0x24,0x45,0xdf,0x4f,0x9b,0x17,0xad,0x2b,0x41,0x7b,0xe6,0x6c,0x37,0x10},
};

uint8_t AesEcb256CypherTxtRef[4][16] = 
{
    {0xf3,0xee,0xd1,0xbd,0xb5,0xd2,0xa0,0x3c,0x06,0x4b,0x5a,0x7e,0x3d,0xb1,0x81,0xf8},
    {0x59,0x1c,0xcb,0x10,0xd4,0x10,0xed,0x26,0xdc,0x5b,0xa7,0x4a,0x31,0x36,0x28,0x70},
    {0xb6,0xed,0x21,0xb9,0x9c,0xa6,0xf4,0xf9,0xf1,0x53,0xe7,0xb1,0xbe,0xaf,0xed,0x1d},
    {0x23,0x30,0x4b,0x7a,0x39,0xf9,0xf3,0xff,0x06,0x7d,0x8d,0x8f,0x9e,0x24,0xec,0xc7},
};

/*******************************************************************************
* AES CBC MODE
********************************************************************************/
uint8_t AesCbcIV[] =
{
    0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,
};

/* ----------------------------------------------------------------------------- */
const uint8_t AesCbcKey128[] =
{
    0x2B,0x7E,0x15,0x16,0x28,0xAE,0xD2,0xA6,0xAB,0xF7,0x15,0x88,0x09,0xCF,0x4F,0x3C,
};

const uint8_t AesCbc128PlainTxtRef[4][16] =
{
    {0x6B,0xC1,0xBE,0xE2,0x2E,0x40,0x9F,0x96,0xE9,0x3D,0x7E,0x11,0x73,0x93,0x17,0x2A},
    {0xAE,0x2D,0x8A,0x57,0x1E,0x03,0xAC,0x9C,0x9E,0xB7,0x6F,0xAC,0x45,0xAF,0x8E,0x51},
    {0x30,0xC8,0x1C,0x46,0xA3,0x5C,0xE4,0x11,0xE5,0xFB,0xC1,0x19,0x1A,0x0A,0x52,0xEF},
    {0xF6,0x9F,0x24,0x45,0xDF,0x4F,0x9B,0x17,0xAD,0x2B,0x41,0x7B,0xE6,0x6C,0x37,0x10},
};

uint8_t AesCbc128CypherTxtRef[4][16] = 
{
    {0x76,0x49,0xAB,0xAC,0x81,0x19,0xB2,0x46,0xCE,0xE9,0x8E,0x9B,0x12,0xE9,0x19,0x7D},
    {0x50,0x86,0xCB,0x9B,0x50,0x72,0x19,0xEE,0x95,0xDB,0x11,0x3A,0x91,0x76,0x78,0xB2},
    {0x73,0xBE,0xD6,0xB8,0xE3,0xC1,0x74,0x3B,0x71,0x16,0xE6,0x9E,0x22,0x22,0x95,0x16},
    {0x3F,0xF1,0xCA,0xA1,0x68,0x1F,0xAC,0x09,0x12,0x0E,0xCA,0x30,0x75,0x86,0xE1,0xA7},
};

/* ----------------------------------------------------------------------------- */
const uint8_t AesCbcKey192[] =
{
    0x8E,0x73,0xB0,0xF7,0xDA,0x0E,0x64,0x52,0xC8,0x10,0xF3,0x2B,0x80,0x90,0x79,0xE5,0x62,0xF8,0xEA,0xD2,0x52,0x2C,0x6B,0x7B,
};

const uint8_t AesCbc192PlainTxtRef[4][16] =
{
    {0x6B,0xC1,0xBE,0xE2,0x2E,0x40,0x9F,0x96,0xE9,0x3D,0x7E,0x11,0x73,0x93,0x17,0x2A},
    {0xAE,0x2D,0x8A,0x57,0x1E,0x03,0xAC,0x9C,0x9E,0xB7,0x6F,0xAC,0x45,0xAF,0x8E,0x51},
    {0x30,0xC8,0x1C,0x46,0xA3,0x5C,0xE4,0x11,0xE5,0xFB,0xC1,0x19,0x1A,0x0A,0x52,0xEF},
    {0xF6,0x9F,0x24,0x45,0xDF,0x4F,0x9B,0x17,0xAD,0x2B,0x41,0x7B,0xE6,0x6C,0x37,0x10},
};

uint8_t AesCbc192CypherTxtRef[4][16] = 
{
    {0x4F,0x02,0x1D,0xB2,0x43,0xBC,0x63,0x3D,0x71,0x78,0x18,0x3A,0x9F,0xA0,0x71,0xE8},
    {0xB4,0xD9,0xAD,0xA9,0xAD,0x7D,0xED,0xF4,0xE5,0xE7,0x38,0x76,0x3F,0x69,0x14,0x5A},
    {0x57,0x1B,0x24,0x20,0x12,0xFB,0x7A,0xE0,0x7F,0xA9,0xBA,0xAC,0x3D,0xF1,0x02,0xE0},
    {0x08,0xB0,0xE2,0x79,0x88,0x59,0x88,0x81,0xD9,0x20,0xA9,0xE6,0x4F,0x56,0x15,0xCD},
};

/* ----------------------------------------------------------------------------- */
const uint8_t AesCbcKey256[] =
{
    0x60,0x3D,0xEB,0x10,0x15,0xCA,0x71,0xBE,0x2B,0x73,0xAE,0xF0,0x85,0x7D,0x77,0x81,0x1F,0x35,0x2C,0x07,0x3B,0x61,0x08,0xD7,0x2D,0x98,0x10,0xA3,0x09,0x14,0xDF,0xF4,
};

const uint8_t AesCbc256PlainTxtRef[4][16] =
{
    {0x6B,0xC1,0xBE,0xE2,0x2E,0x40,0x9F,0x96,0xE9,0x3D,0x7E,0x11,0x73,0x93,0x17,0x2A},
    {0xAE,0x2D,0x8A,0x57,0x1E,0x03,0xAC,0x9C,0x9E,0xB7,0x6F,0xAC,0x45,0xAF,0x8E,0x51},
    {0x30,0xC8,0x1C,0x46,0xA3,0x5C,0xE4,0x11,0xE5,0xFB,0xC1,0x19,0x1A,0x0A,0x52,0xEF},
    {0xF6,0x9F,0x24,0x45,0xDF,0x4F,0x9B,0x17,0xAD,0x2B,0x41,0x7B,0xE6,0x6C,0x37,0x10},
};

uint8_t AesCbc256CypherTxtRef[4][16] = 
{
    {0xF5,0x8C,0x4C,0x04,0xD6,0xE5,0xF1,0xBA,0x77,0x9E,0xAB,0xFB,0x5F,0x7B,0xFB,0xD6},
    {0x9C,0xFC,0x4E,0x96,0x7E,0xDB,0x80,0x8D,0x67,0x9F,0x77,0x7B,0xC6,0x70,0x2C,0x7D},
    {0x39,0xF2,0x33,0x69,0xA9,0xD9,0xBA,0xCF,0xA5,0x30,0xE2,0x63,0x04,0x23,0x14,0x61},
    {0xB2,0xEB,0x05,0xE2,0xC3,0x9B,0xE9,0xFC,0xDA,0x6C,0x19,0x07,0x8C,0x6A,0x9D,0x1B},
};

/*******************************************************************************
* AES CFB MODE
********************************************************************************/
uint8_t AesCfbIV[] =
{
    0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,
};

/* ----------------------------------------------------------------------------- */
const uint8_t AesCfbKey128[] =
{
    0x2B,0x7E,0x15,0x16,0x28,0xAE,0xD2,0xA6,0xAB,0xF7,0x15,0x88,0x09,0xCF,0x4F,0x3C,
};

const uint8_t AesCfb128PlainTxtRef[4][16] =
{
    {0x6B,0xC1,0xBE,0xE2,0x2E,0x40,0x9F,0x96,0xE9,0x3D,0x7E,0x11,0x73,0x93,0x17,0x2A},
    {0xAE,0x2D,0x8A,0x57,0x1E,0x03,0xAC,0x9C,0x9E,0xB7,0x6F,0xAC,0x45,0xAF,0x8E,0x51},
    {0x30,0xC8,0x1C,0x46,0xA3,0x5C,0xE4,0x11,0xE5,0xFB,0xC1,0x19,0x1A,0x0A,0x52,0xEF},
    {0xF6,0x9F,0x24,0x45,0xDF,0x4F,0x9B,0x17,0xAD,0x2B,0x41,0x7B,0xE6,0x6C,0x37,0x10},
};

uint8_t AesCfb128CypherTxtRef[4][16] = 
{
    {0x3B,0x3F,0xD9,0x2E,0xB7,0x2D,0xAD,0x20,0x33,0x34,0x49,0xF8,0xE8,0x3C,0xFB,0x4A},
    {0xC8,0xA6,0x45,0x37,0xA0,0xB3,0xA9,0x3F,0xCD,0xE3,0xCD,0xAD,0x9F,0x1C,0xE5,0x8B},
    {0x26,0x75,0x1F,0x67,0xA3,0xCB,0xB1,0x40,0xB1,0x80,0x8C,0xF1,0x87,0xA4,0xF4,0xDF},
    {0xC0,0x4B,0x05,0x35,0x7C,0x5D,0x1C,0x0E,0xEA,0xC4,0xC6,0x6F,0x9F,0xF7,0xF2,0xE6},
};

/* ----------------------------------------------------------------------------- */
const uint8_t AesCfbKey192[] =
{
    0x8E,0x73,0xB0,0xF7,0xDA,0x0E,0x64,0x52,0xC8,0x10,0xF3,0x2B,0x80,0x90,0x79,0xE5,0x62,0xF8,0xEA,0xD2,0x52,0x2C,0x6B,0x7B,
};

const uint8_t AesCfb192PlainTxtRef[4][16] =
{
    {0x6B,0xC1,0xBE,0xE2,0x2E,0x40,0x9F,0x96,0xE9,0x3D,0x7E,0x11,0x73,0x93,0x17,0x2A},
    {0xAE,0x2D,0x8A,0x57,0x1E,0x03,0xAC,0x9C,0x9E,0xB7,0x6F,0xAC,0x45,0xAF,0x8E,0x51},
    {0x30,0xC8,0x1C,0x46,0xA3,0x5C,0xE4,0x11,0xE5,0xFB,0xC1,0x19,0x1A,0x0A,0x52,0xEF},
    {0xF6,0x9F,0x24,0x45,0xDF,0x4F,0x9B,0x17,0xAD,0x2B,0x41,0x7B,0xE6,0x6C,0x37,0x10},
};

uint8_t AesCfb192CypherTxtRef[4][16] = 
{
    {0xCD,0xC8,0x0D,0x6F,0xDD,0xF1,0x8C,0xAB,0x34,0xC2,0x59,0x09,0xC9,0x9A,0x41,0x74},
    {0x67,0xCE,0x7F,0x7F,0x81,0x17,0x36,0x21,0x96,0x1A,0x2B,0x70,0x17,0x1D,0x3D,0x7A},
    {0x2E,0x1E,0x8A,0x1D,0xD5,0x9B,0x88,0xB1,0xC8,0xE6,0x0F,0xED,0x1E,0xFA,0xC4,0xC9},
    {0xC0,0x5F,0x9F,0x9C,0xA9,0x83,0x4F,0xA0,0x42,0xAE,0x8F,0xBA,0x58,0x4B,0x09,0xFF},
};

/* ----------------------------------------------------------------------------- */
const uint8_t AesCfbKey256[] =
{
    0x60,0x3D,0xEB,0x10,0x15,0xCA,0x71,0xBE,0x2B,0x73,0xAE,0xF0,0x85,0x7D,0x77,0x81,0x1F,0x35,0x2C,0x07,0x3B,0x61,0x08,0xD7,0x2D,0x98,0x10,0xA3,0x09,0x14,0xDF,0xF4,
};

const uint8_t AesCfb256PlainTxtRef[4][16] =
{
    {0x6B,0xC1,0xBE,0xE2,0x2E,0x40,0x9F,0x96,0xE9,0x3D,0x7E,0x11,0x73,0x93,0x17,0x2A},
    {0xAE,0x2D,0x8A,0x57,0x1E,0x03,0xAC,0x9C,0x9E,0xB7,0x6F,0xAC,0x45,0xAF,0x8E,0x51},
    {0x30,0xC8,0x1C,0x46,0xA3,0x5C,0xE4,0x11,0xE5,0xFB,0xC1,0x19,0x1A,0x0A,0x52,0xEF},
    {0xF6,0x9F,0x24,0x45,0xDF,0x4F,0x9B,0x17,0xAD,0x2B,0x41,0x7B,0xE6,0x6C,0x37,0x10},
};

uint8_t AesCfb256CypherTxtRef[4][16] = 
{
    {0xDC,0x7E,0x84,0xBF,0xDA,0x79,0x16,0x4B,0x7E,0xCD,0x84,0x86,0x98,0x5D,0x38,0x60},
    {0x39,0xFF,0xED,0x14,0x3B,0x28,0xB1,0xC8,0x32,0x11,0x3C,0x63,0x31,0xE5,0x40,0x7B},
    {0xDF,0x10,0x13,0x24,0x15,0xE5,0x4B,0x92,0xA1,0x3E,0xD0,0xA8,0x26,0x7A,0xE2,0xF9},
    {0x75,0xA3,0x85,0x74,0x1A,0xB9,0xCE,0xF8,0x20,0x31,0x62,0x3D,0x55,0xB1,0xE4,0x71},
};

/*******************************************************************************
* AES CTR MODE
********************************************************************************/
/* nonceCounter */
const uint8_t AesCtrIV[] =
{
    0xf0,0xf1,0xf2,0xf3,0xf4,0xf5,0xf6,0xf7,0xf8,0xf9,0xfa,0xfb,0xfc,0xfd,0xfe,0xff,
};
uint8_t AesCtrIV_copied[16];
uint32_t AesCtrSrcOffset;

/* ----------------------------------------------------------------------------- */
const uint8_t AesCtrKey128[] =
{
    0x2B,0x7E,0x15,0x16,0x28,0xAE,0xD2,0xA6,0xAB,0xF7,0x15,0x88,0x09,0xCF,0x4F,0x3C,
};

const uint8_t AesCtr128PlainTxtRef[4][16] =
{
    {0x6B,0xC1,0xBE,0xE2,0x2E,0x40,0x9F,0x96,0xE9,0x3D,0x7E,0x11,0x73,0x93,0x17,0x2A},
    {0xAE,0x2D,0x8A,0x57,0x1E,0x03,0xAC,0x9C,0x9E,0xB7,0x6F,0xAC,0x45,0xAF,0x8E,0x51},
    {0x30,0xC8,0x1C,0x46,0xA3,0x5C,0xE4,0x11,0xE5,0xFB,0xC1,0x19,0x1A,0x0A,0x52,0xEF},
    {0xF6,0x9F,0x24,0x45,0xDF,0x4F,0x9B,0x17,0xAD,0x2B,0x41,0x7B,0xE6,0x6C,0x37,0x10},
};

uint8_t AesCtr128CypherTxtRef[4][16] = 
{
    {0x87,0x4d,0x61,0x91,0xb6,0x20,0xe3,0x26,0x1b,0xef,0x68,0x64,0x99,0x0d,0xb6,0xce},
    {0x98,0x06,0xf6,0x6b,0x79,0x70,0xfd,0xff,0x86,0x17,0x18,0x7b,0xb9,0xff,0xfd,0xff},
    {0x5a,0xe4,0xdf,0x3e,0xdb,0xd5,0xd3,0x5e,0x5b,0x4f,0x09,0x02,0x0d,0xb0,0x3e,0xab},
    {0x1e,0x03,0x1d,0xda,0x2f,0xbe,0x03,0xd1,0x79,0x21,0x70,0xa0,0xf3,0x00,0x9c,0xee},
};

/* ----------------------------------------------------------------------------- */
const uint8_t AesCtrKey192[] =
{
    0x8E,0x73,0xB0,0xF7,0xDA,0x0E,0x64,0x52,0xC8,0x10,0xF3,0x2B,0x80,0x90,0x79,0xE5,0x62,0xF8,0xEA,0xD2,0x52,0x2C,0x6B,0x7B,
};

const uint8_t AesCtr192PlainTxtRef[4][16] =
{
    {0x6B,0xC1,0xBE,0xE2,0x2E,0x40,0x9F,0x96,0xE9,0x3D,0x7E,0x11,0x73,0x93,0x17,0x2A},
    {0xAE,0x2D,0x8A,0x57,0x1E,0x03,0xAC,0x9C,0x9E,0xB7,0x6F,0xAC,0x45,0xAF,0x8E,0x51},
    {0x30,0xC8,0x1C,0x46,0xA3,0x5C,0xE4,0x11,0xE5,0xFB,0xC1,0x19,0x1A,0x0A,0x52,0xEF},
    {0xF6,0x9F,0x24,0x45,0xDF,0x4F,0x9B,0x17,0xAD,0x2B,0x41,0x7B,0xE6,0x6C,0x37,0x10},
};

uint8_t AesCtr192CypherTxtRef[4][16] = 
{
    {0x1a,0xbc,0x93,0x24,0x17,0x52,0x1c,0xa2,0x4f,0x2b,0x04,0x59,0xfe,0x7e,0x6e,0x0b}, 
    {0x09,0x03,0x39,0xec,0x0a,0xa6,0xfa,0xef,0xd5,0xcc,0xc2,0xc6,0xf4,0xce,0x8e,0x94}, 
    {0x1e,0x36,0xb2,0x6b,0xd1,0xeb,0xc6,0x70,0xd1,0xbd,0x1d,0x66,0x56,0x20,0xab,0xf7}, 
    {0x4f,0x78,0xa7,0xf6,0xd2,0x98,0x09,0x58,0x5a,0x97,0xda,0xec,0x58,0xc6,0xb0,0x50}, 
};

/* ----------------------------------------------------------------------------- */
const uint8_t AesCtrKey256[] =
{
    0x60,0x3D,0xEB,0x10,0x15,0xCA,0x71,0xBE,0x2B,0x73,0xAE,0xF0,0x85,0x7D,0x77,0x81,0x1F,0x35,0x2C,0x07,0x3B,0x61,0x08,0xD7,0x2D,0x98,0x10,0xA3,0x09,0x14,0xDF,0xF4,
};

const uint8_t AesCtr256PlainTxtRef[4][16] =
{
    {0x6B,0xC1,0xBE,0xE2,0x2E,0x40,0x9F,0x96,0xE9,0x3D,0x7E,0x11,0x73,0x93,0x17,0x2A},
    {0xAE,0x2D,0x8A,0x57,0x1E,0x03,0xAC,0x9C,0x9E,0xB7,0x6F,0xAC,0x45,0xAF,0x8E,0x51},
    {0x30,0xC8,0x1C,0x46,0xA3,0x5C,0xE4,0x11,0xE5,0xFB,0xC1,0x19,0x1A,0x0A,0x52,0xEF},
    {0xF6,0x9F,0x24,0x45,0xDF,0x4F,0x9B,0x17,0xAD,0x2B,0x41,0x7B,0xE6,0x6C,0x37,0x10},
};

uint8_t AesCtr256CypherTxtRef[4][16] = 
{
    {0x60,0x1e,0xc3,0x13,0x77,0x57,0x89,0xa5,0xb7,0xa7,0xf5,0x04,0xbb,0xf3,0xd2,0x28},
    {0xf4,0x43,0xe3,0xca,0x4d,0x62,0xb5,0x9a,0xca,0x84,0xe9,0x90,0xca,0xca,0xf5,0xc5},
    {0x2b,0x09,0x30,0xda,0xa2,0x3d,0xe9,0x4c,0xe8,0x70,0x17,0xba,0x2d,0x84,0x98,0x8d},
    {0xdf,0xc9,0xc5,0x8d,0xb6,0x7a,0xad,0xa6,0x13,0xc2,0xdd,0x08,0x45,0x79,0x41,0xa6},
};

#endif

#endif

