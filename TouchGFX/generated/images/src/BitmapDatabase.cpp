// 4.16.1 0x7af7acc6
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_hepa_1[]; // BITMAP_HEPA_1_ID = 0, Size: 160x128 pixels
extern const unsigned char image_hepa_2[]; // BITMAP_HEPA_2_ID = 1, Size: 160x128 pixels
extern const unsigned char image_hepa_3[]; // BITMAP_HEPA_3_ID = 2, Size: 160x128 pixels
extern const unsigned char image_hepa_4[]; // BITMAP_HEPA_4_ID = 3, Size: 160x128 pixels
extern const unsigned char image_hepa_5[]; // BITMAP_HEPA_5_ID = 4, Size: 160x128 pixels
extern const unsigned char image_u[]; // BITMAP_U_ID = 5, Size: 160x128 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { image_hepa_1, 0, 160, 128, 0, 0, 160, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 128, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { image_hepa_2, 0, 160, 128, 0, 0, 160, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 128, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { image_hepa_3, 0, 160, 128, 0, 0, 160, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 128, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { image_hepa_4, 0, 160, 128, 0, 0, 160, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 128, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { image_hepa_5, 0, 160, 128, 0, 0, 160, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 128, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { image_u, 0, 160, 128, 0, 0, 160, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 128, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
