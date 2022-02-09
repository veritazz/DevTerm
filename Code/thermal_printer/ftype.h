#ifndef FTYPE_H
#define FTYPE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#include <freetype2/ft2build.h>
#include <freetype/freetype.h>

#ifndef UTF8
typedef unsigned char UTF8;
#endif

#ifndef UTF32
typedef int32_t UTF32;
#endif

bool init_ft (const char *ttf_file, FT_Face *face, FT_Library *ft,
              int req_size_w,int req_size_h, char **error);


int get_slice_len(const char lb);

#endif
