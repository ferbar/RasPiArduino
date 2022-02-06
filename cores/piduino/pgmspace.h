#ifndef PGMSPACE_INCLUDE
#define PGMSPACE_INCLUDE

#ifdef __cplusplus
class __FlashStringHelper;
#endif

#define PROGMEM
#define PSTR(s) (s)
#define F(string_literal) (reinterpret_cast<const __FlashStringHelper *>(PSTR(string_literal)))

#define pgm_read_byte(addr) (*(const unsigned char *)(addr))
#define pgm_read_word(addr) (*(const unsigned short *)(addr))
#define pgm_read_dword(addr) (*(const unsigned long *)(addr))
#define pgm_read_float(addr) (*(const float *)(addr))

#define pgm_read_byte_near(addr) pgm_read_byte(addr)
#define pgm_read_word_near(addr) pgm_read_word(addr)
#define pgm_read_dword_near(addr) pgm_read_dword(addr)
#define pgm_read_float_near(addr) pgm_read_float(addr)
#define pgm_read_byte_far(addr) pgm_read_byte(addr)
#define pgm_read_word_far(addr) pgm_read_word(addr)
#define pgm_read_dword_far(addr) pgm_read_dword(addr)
#define pgm_read_float_far(addr) pgm_read_float(addr)

#define memcpy_P(to,from,len) memcpy(to,from,len)

// https://github.com/esp8266/Arduino/blob/85ba53a24994db5ec2aff3b7adfa05330a637413/tests/host/sys/pgmspace.h
#define memccpy_P     memccpy
#define memmem_P      memmem
#define strcpy_P      strcpy
#define strncpy_P     strncpy
#define strcat_P      strcat
#define strncat_P     strncat
#define strcmp_P strcmp
#define strncmp_P strncmp
#define strcasecmp_P  strcasecmp
#define strncasecmp_P strncasecmp
#define strlen_P      strlen
#define strnlen_P     strnlen
#define strstr_P      strstr
#define printf_P printf
#define sprintf_P     sprintf
#define snprintf_P    snprintf
#define vsnprintf_P   vsnprintf

#endif
