# 1 "imagePNG.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 175 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "imagePNG.cpp" 2

# 1 "/usr/local/include/png.h" 1 3
# 467 "/usr/local/include/png.h" 3
# 1 "/usr/local/include/pnglibconf.h" 1 3
# 468 "/usr/local/include/png.h" 2 3




# 1 "/usr/local/include/pngconf.h" 1 3
# 52 "/usr/local/include/pngconf.h" 3
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h" 1 3 4
# 38 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 63 "/usr/include/limits.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 484 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 485 "/usr/include/sys/cdefs.h" 2 3 4
# 550 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 551 "/usr/include/sys/cdefs.h" 2 3 4
# 64 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/machine/limits.h" 1 3 4





# 1 "/usr/include/i386/limits.h" 1 3 4
# 40 "/usr/include/i386/limits.h" 3 4
# 1 "/usr/include/i386/_limits.h" 1 3 4
# 41 "/usr/include/i386/limits.h" 2 3 4
# 7 "/usr/include/machine/limits.h" 2 3 4
# 65 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 4
# 66 "/usr/include/limits.h" 2 3 4
# 39 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h" 2 3 4
# 53 "/usr/local/include/pngconf.h" 2 3
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;







typedef long unsigned int size_t;
# 53 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long unsigned int rsize_t;
# 54 "/usr/local/include/pngconf.h" 2 3
# 67 "/usr/local/include/pngconf.h" 3
# 1 "/usr/include/stdio.h" 1 3 4
# 65 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 148 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 149 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 58 "/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[192]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[16]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[1168]; };
# 94 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t
   *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 86 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 120 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;

extern "C" {
extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
}
# 228 "/usr/include/stdio.h" 3 4
extern "C" {
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * , fpos_t *);
char *fgets(char * , int, FILE *);



FILE *fopen(const char * , const char * ) __asm("_" "fopen");

int fprintf(FILE * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * , FILE * ) __asm("_" "fputs") ;
size_t fread(void * , size_t, size_t, FILE * );
FILE *freopen(const char * , const char * ,
                 FILE * ) __asm("_" "freopen") ;
int fscanf(FILE * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * , size_t, size_t, FILE * ) __asm("_" "fwrite") ;
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * , ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * , ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * , char * );
int setvbuf(FILE * , char * , int, size_t);
int sprintf(char * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * , va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
}
# 290 "/usr/include/stdio.h" 3 4
extern "C" {



char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen");

int fileno(FILE *);
}
# 312 "/usr/include/stdio.h" 3 4
extern "C" {
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen");

}
# 334 "/usr/include/stdio.h" 3 4
extern "C" {
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
}







inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 371 "/usr/include/stdio.h" 3 4
extern "C" {
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam") ;
}
# 409 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 410 "/usr/include/stdio.h" 2 3 4

extern "C" {
int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);
}



extern "C" {
int snprintf(char * , size_t, const char * , ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * , const char * , va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * , va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * , size_t, const char * , va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * , const char * , va_list) __attribute__((__format__ (__scanf__, 2, 0)));
}
# 434 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 435 "/usr/include/stdio.h" 2 3 4

extern "C" {
int dprintf(int, const char * , ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * , va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** , size_t * , int, FILE * ) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** , size_t * , FILE * ) __attribute__((availability(macosx,introduced=10.7)));
}







extern "C" {
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
}
# 68 "/usr/local/include/pngconf.h" 2 3




# 1 "/usr/include/setjmp.h" 1 3 4
# 36 "/usr/include/setjmp.h" 3 4
typedef int jmp_buf[((9 * 2) + 3 + 16)];
typedef int sigjmp_buf[((9 * 2) + 3 + 16) + 1];
# 72 "/usr/include/setjmp.h" 3 4
extern "C" {
extern int setjmp(jmp_buf);
extern void longjmp(jmp_buf, int) __attribute__((noreturn));


int _setjmp(jmp_buf);
void _longjmp(jmp_buf, int) __attribute__((noreturn));
int sigsetjmp(sigjmp_buf, int);
void siglongjmp(sigjmp_buf, int) __attribute__((noreturn));



void longjmperror(void);

}
# 73 "/usr/local/include/pngconf.h" 2 3




# 1 "/usr/include/time.h" 1 3 4
# 69 "/usr/include/time.h" 3 4
# 1 "/usr/include/_structs.h" 1 3 4
# 24 "/usr/include/_structs.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 73 "/usr/include/sys/_structs.h" 3 4
# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 30 "/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 74 "/usr/include/sys/_structs.h" 2 3 4
# 25 "/usr/include/_structs.h" 2 3 4
# 70 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 71 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 72 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 73 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 74 "/usr/include/time.h" 2 3 4

struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 98 "/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone") ;

extern int daylight;

extern "C" {
char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock") ;
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime") ;
size_t strftime(char * , size_t, const char * , const struct tm * ) __asm("_" "strftime") ;
char *strptime(const char * , const char * , struct tm * ) __asm("_" "strptime") ;
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * , char * );
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * , struct tm * );
struct tm *localtime_r(const time_t * , struct tm * );


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *, struct timespec *) __asm("_" "nanosleep") ;

}
# 78 "/usr/local/include/pngconf.h" 2 3
# 503 "/usr/local/include/pngconf.h" 3
   typedef unsigned char png_byte;







   typedef short png_int_16;







   typedef unsigned short png_uint_16;





   typedef int png_int_32;







   typedef unsigned int png_uint_32;
# 543 "/usr/local/include/pngconf.h" 3
typedef size_t png_size_t;
typedef ptrdiff_t png_ptrdiff_t;
# 578 "/usr/local/include/pngconf.h" 3
   typedef png_size_t png_alloc_size_t;
# 595 "/usr/local/include/pngconf.h" 3
typedef png_int_32 png_fixed_point;


typedef void * png_voidp;
typedef const void * png_const_voidp;
typedef png_byte * png_bytep;
typedef const png_byte * png_const_bytep;
typedef png_uint_32 * png_uint_32p;
typedef const png_uint_32 * png_const_uint_32p;
typedef png_int_32 * png_int_32p;
typedef const png_int_32 * png_const_int_32p;
typedef png_uint_16 * png_uint_16p;
typedef const png_uint_16 * png_const_uint_16p;
typedef png_int_16 * png_int_16p;
typedef const png_int_16 * png_const_int_16p;
typedef char * png_charp;
typedef const char * png_const_charp;
typedef png_fixed_point * png_fixed_point_p;
typedef const png_fixed_point * png_const_fixed_point_p;
typedef png_size_t * png_size_tp;
typedef const png_size_t * png_const_size_tp;


typedef FILE * png_FILE_p;



typedef double * png_doublep;
typedef const double * png_const_doublep;



typedef png_byte * * png_bytepp;
typedef png_uint_32 * * png_uint_32pp;
typedef png_int_32 * * png_int_32pp;
typedef png_uint_16 * * png_uint_16pp;
typedef png_int_16 * * png_int_16pp;
typedef const char * * png_const_charpp;
typedef char * * png_charpp;
typedef png_fixed_point * * png_fixed_point_pp;

typedef double * * png_doublepp;



typedef char * * * png_charppp;
# 473 "/usr/local/include/png.h" 2 3
# 505 "/usr/local/include/png.h" 3
extern "C" {
# 563 "/usr/local/include/png.h" 3
typedef char* png_libpng_version_1_6_13;







typedef struct png_struct_def png_struct;
typedef const png_struct * png_const_structp;
typedef png_struct * png_structp;
typedef png_struct * * png_structpp;
# 585 "/usr/local/include/png.h" 3
typedef struct png_info_def png_info;
typedef png_info * png_infop;
typedef const png_info * png_const_infop;
typedef png_info * * png_infopp;
# 601 "/usr/local/include/png.h" 3
typedef png_struct * png_structrp;
typedef const png_struct * png_const_structrp;
typedef png_info * png_inforp;
typedef const png_info * png_const_inforp;





typedef struct png_color_struct
{
   png_byte red;
   png_byte green;
   png_byte blue;
} png_color;
typedef png_color * png_colorp;
typedef const png_color * png_const_colorp;
typedef png_color * * png_colorpp;

typedef struct png_color_16_struct
{
   png_byte index;
   png_uint_16 red;
   png_uint_16 green;
   png_uint_16 blue;
   png_uint_16 gray;
} png_color_16;
typedef png_color_16 * png_color_16p;
typedef const png_color_16 * png_const_color_16p;
typedef png_color_16 * * png_color_16pp;

typedef struct png_color_8_struct
{
   png_byte red;
   png_byte green;
   png_byte blue;
   png_byte gray;
   png_byte alpha;
} png_color_8;
typedef png_color_8 * png_color_8p;
typedef const png_color_8 * png_const_color_8p;
typedef png_color_8 * * png_color_8pp;





typedef struct png_sPLT_entry_struct
{
   png_uint_16 red;
   png_uint_16 green;
   png_uint_16 blue;
   png_uint_16 alpha;
   png_uint_16 frequency;
} png_sPLT_entry;
typedef png_sPLT_entry * png_sPLT_entryp;
typedef const png_sPLT_entry * png_const_sPLT_entryp;
typedef png_sPLT_entry * * png_sPLT_entrypp;






typedef struct png_sPLT_struct
{
   png_charp name;
   png_byte depth;
   png_sPLT_entryp entries;
   png_int_32 nentries;
} png_sPLT_t;
typedef png_sPLT_t * png_sPLT_tp;
typedef const png_sPLT_t * png_const_sPLT_tp;
typedef png_sPLT_t * * png_sPLT_tpp;
# 694 "/usr/local/include/png.h" 3
typedef struct png_text_struct
{
   int compression;




   png_charp key;
   png_charp text;

   png_size_t text_length;
   png_size_t itxt_length;
   png_charp lang;

   png_charp lang_key;

} png_text;
typedef png_text * png_textp;
typedef const png_text * png_const_textp;
typedef png_text * * png_textpp;
# 732 "/usr/local/include/png.h" 3
typedef struct png_time_struct
{
   png_uint_16 year;
   png_byte month;
   png_byte day;
   png_byte hour;
   png_byte minute;
   png_byte second;
} png_time;
typedef png_time * png_timep;
typedef const png_time * png_const_timep;
typedef png_time * * png_timepp;
# 754 "/usr/local/include/png.h" 3
typedef struct png_unknown_chunk_t
{
    png_byte name[5];
    png_byte *data;
    png_size_t size;







    png_byte location;
}
png_unknown_chunk;

typedef png_unknown_chunk * png_unknown_chunkp;
typedef const png_unknown_chunk * png_const_unknown_chunkp;
typedef png_unknown_chunk * * png_unknown_chunkpp;
# 885 "/usr/local/include/png.h" 3
typedef struct png_row_info_struct
{
   png_uint_32 width;
   png_size_t rowbytes;
   png_byte color_type;
   png_byte bit_depth;
   png_byte channels;
   png_byte pixel_depth;
} png_row_info;

typedef png_row_info * png_row_infop;
typedef png_row_info * * png_row_infopp;
# 906 "/usr/local/include/png.h" 3
typedef void ( *png_error_ptr) (png_structp, png_const_charp);
typedef void ( *png_rw_ptr) (png_structp, png_bytep, png_size_t);
typedef void ( *png_flush_ptr) (png_structp);
typedef void ( *png_read_status_ptr) (png_structp, png_uint_32, int);

typedef void ( *png_write_status_ptr) (png_structp, png_uint_32, int);



typedef void ( *png_progressive_info_ptr) (png_structp, png_infop);
typedef void ( *png_progressive_end_ptr) (png_structp, png_infop);
# 928 "/usr/local/include/png.h" 3
typedef void ( *png_progressive_row_ptr) (png_structp, png_bytep, png_uint_32, int);





typedef void ( *png_user_transform_ptr) (png_structp, png_row_infop, png_bytep);




typedef int ( *png_user_chunk_ptr) (png_structp, png_unknown_chunkp);
# 959 "/usr/local/include/png.h" 3
typedef void ( *png_longjmp_ptr) (jmp_buf, int);
# 996 "/usr/local/include/png.h" 3
typedef png_voidp ( *png_malloc_ptr) (png_structp, png_alloc_size_t);

typedef void ( *png_free_ptr) (png_structp, png_voidp);
# 1030 "/usr/local/include/png.h" 3
extern png_uint_32 ( png_access_version_number) (void);




extern void ( png_set_sig_bytes) (png_structrp png_ptr, int num_bytes);






extern int ( png_sig_cmp) (png_const_bytep sig, png_size_t start, png_size_t num_to_check);
# 1051 "/usr/local/include/png.h" 3
extern __attribute__((__malloc__)) png_structp ( png_create_read_struct) (png_const_charp user_png_ver, png_voidp error_ptr, png_error_ptr error_fn, png_error_ptr warn_fn);





extern __attribute__((__malloc__)) png_structp ( png_create_write_struct) (png_const_charp user_png_ver, png_voidp error_ptr, png_error_ptr error_fn, png_error_ptr warn_fn);




extern png_size_t ( png_get_compression_buffer_size) (png_const_structrp png_ptr);


extern void ( png_set_compression_buffer_size) (png_structrp png_ptr, png_size_t size);
# 1079 "/usr/local/include/png.h" 3
extern jmp_buf* ( png_set_longjmp_fn) (png_structrp png_ptr, png_longjmp_ptr longjmp_fn, size_t jmp_buf_size);
# 1092 "/usr/local/include/png.h" 3
extern __attribute__((__noreturn__)) void ( png_longjmp) (png_const_structrp png_ptr, int val);




extern __attribute__((__deprecated__)) int ( png_reset_zstream) (png_structrp png_ptr);




extern __attribute__((__malloc__)) png_structp ( png_create_read_struct_2) (png_const_charp user_png_ver, png_voidp error_ptr, png_error_ptr error_fn, png_error_ptr warn_fn, png_voidp mem_ptr, png_malloc_ptr malloc_fn, png_free_ptr free_fn);




extern __attribute__((__malloc__)) png_structp ( png_create_write_struct_2) (png_const_charp user_png_ver, png_voidp error_ptr, png_error_ptr error_fn, png_error_ptr warn_fn, png_voidp mem_ptr, png_malloc_ptr malloc_fn, png_free_ptr free_fn);







extern void ( png_write_sig) (png_structrp png_ptr);


extern void ( png_write_chunk) (png_structrp png_ptr, png_const_bytep chunk_name, png_const_bytep data, png_size_t length);



extern void ( png_write_chunk_start) (png_structrp png_ptr, png_const_bytep chunk_name, png_uint_32 length);



extern void ( png_write_chunk_data) (png_structrp png_ptr, png_const_bytep data, png_size_t length);



extern void ( png_write_chunk_end) (png_structrp png_ptr);


extern __attribute__((__malloc__)) png_infop ( png_create_info_struct) (png_const_structrp png_ptr);






extern __attribute__((__deprecated__)) void ( png_info_init_3) (png_infopp info_ptr, png_size_t png_info_struct_size);



extern void ( png_write_info_before_PLTE) (png_structrp png_ptr, png_const_inforp info_ptr);

extern void ( png_write_info) (png_structrp png_ptr, png_const_inforp info_ptr);




extern void ( png_read_info) (png_structrp png_ptr, png_inforp info_ptr);
# 1162 "/usr/local/include/png.h" 3
extern __attribute__((__deprecated__)) png_const_charp ( png_convert_to_rfc1123) (png_structrp png_ptr, png_const_timep ptime);


extern int ( png_convert_to_rfc1123_buffer) (char out[29], png_const_timep ptime);





extern void ( png_convert_from_struct_tm) (png_timep ptime, const struct tm * ttime);



extern void ( png_convert_from_time_t) (png_timep ptime, time_t ttime);




extern void ( png_set_expand) (png_structrp png_ptr);
extern void ( png_set_expand_gray_1_2_4_to_8) (png_structrp png_ptr);
extern void ( png_set_palette_to_rgb) (png_structrp png_ptr);
extern void ( png_set_tRNS_to_alpha) (png_structrp png_ptr);






extern void ( png_set_expand_16) (png_structrp png_ptr);




extern void ( png_set_bgr) (png_structrp png_ptr);




extern void ( png_set_gray_to_rgb) (png_structrp png_ptr);
# 1210 "/usr/local/include/png.h" 3
extern void ( png_set_rgb_to_gray) (png_structrp png_ptr, int error_action, double red, double green);

extern void ( png_set_rgb_to_gray_fixed) (png_structrp png_ptr, int error_action, png_fixed_point red, png_fixed_point green);


extern png_byte ( png_get_rgb_to_gray_status) (png_const_structrp png_ptr);




extern void ( png_build_grayscale_palette) (int bit_depth, png_colorp palette);
# 1266 "/usr/local/include/png.h" 3
extern void ( png_set_alpha_mode) (png_structrp png_ptr, int mode, double output_gamma);

extern void ( png_set_alpha_mode_fixed) (png_structrp png_ptr, int mode, png_fixed_point output_gamma);
# 1359 "/usr/local/include/png.h" 3
extern void ( png_set_strip_alpha) (png_structrp png_ptr);




extern void ( png_set_swap_alpha) (png_structrp png_ptr);




extern void ( png_set_invert_alpha) (png_structrp png_ptr);




extern void ( png_set_filler) (png_structrp png_ptr, png_uint_32 filler, int flags);





extern void ( png_set_add_alpha) (png_structrp png_ptr, png_uint_32 filler, int flags);





extern void ( png_set_swap) (png_structrp png_ptr);




extern void ( png_set_packing) (png_structrp png_ptr);





extern void ( png_set_packswap) (png_structrp png_ptr);




extern void ( png_set_shift) (png_structrp png_ptr, png_const_color_8p true_bits);
# 1414 "/usr/local/include/png.h" 3
extern int ( png_set_interlace_handling) (png_structrp png_ptr);




extern void ( png_set_invert_mono) (png_structrp png_ptr);
# 1428 "/usr/local/include/png.h" 3
extern void ( png_set_background) (png_structrp png_ptr, png_const_color_16p background_color, int background_gamma_code, int need_expand, double background_gamma);


extern void ( png_set_background_fixed) (png_structrp png_ptr, png_const_color_16p background_color, int background_gamma_code, int need_expand, png_fixed_point background_gamma);
# 1444 "/usr/local/include/png.h" 3
extern void ( png_set_scale_16) (png_structrp png_ptr);





extern void ( png_set_strip_16) (png_structrp png_ptr);






extern void ( png_set_quantize) (png_structrp png_ptr, png_colorp palette, int num_palette, int maximum_colors, png_const_uint_16p histogram, int full_quantize);
# 1479 "/usr/local/include/png.h" 3
extern void ( png_set_gamma) (png_structrp png_ptr, double screen_gamma, double override_file_gamma);

extern void ( png_set_gamma_fixed) (png_structrp png_ptr, png_fixed_point screen_gamma, png_fixed_point override_file_gamma);





extern void ( png_set_flush) (png_structrp png_ptr, int nrows);

extern void ( png_write_flush) (png_structrp png_ptr);



extern void ( png_start_read_image) (png_structrp png_ptr);


extern void ( png_read_update_info) (png_structrp png_ptr, png_inforp info_ptr);




extern void ( png_read_rows) (png_structrp png_ptr, png_bytepp row, png_bytepp display_row, png_uint_32 num_rows);





extern void ( png_read_row) (png_structrp png_ptr, png_bytep row, png_bytep display_row);





extern void ( png_read_image) (png_structrp png_ptr, png_bytepp image);



extern void ( png_write_row) (png_structrp png_ptr, png_const_bytep row);







extern void ( png_write_rows) (png_structrp png_ptr, png_bytepp row, png_uint_32 num_rows);



extern void ( png_write_image) (png_structrp png_ptr, png_bytepp image);


extern void ( png_write_end) (png_structrp png_ptr, png_inforp info_ptr);




extern void ( png_read_end) (png_structrp png_ptr, png_inforp info_ptr);



extern void ( png_destroy_info_struct) (png_const_structrp png_ptr, png_infopp info_ptr_ptr);



extern void ( png_destroy_read_struct) (png_structpp png_ptr_ptr, png_infopp info_ptr_ptr, png_infopp end_info_ptr_ptr);



extern void ( png_destroy_write_struct) (png_structpp png_ptr_ptr, png_infopp info_ptr_ptr);



extern void ( png_set_crc_action) (png_structrp png_ptr, int crit_action, int ancil_action);
# 1583 "/usr/local/include/png.h" 3
extern void ( png_set_filter) (png_structrp png_ptr, int method, int filters);
# 1639 "/usr/local/include/png.h" 3
extern void ( png_set_filter_heuristics) (png_structrp png_ptr, int heuristic_method, int num_weights, png_const_doublep filter_weights, png_const_doublep filter_costs);


extern void ( png_set_filter_heuristics_fixed) (png_structrp png_ptr, int heuristic_method, int num_weights, png_const_fixed_point_p filter_weights, png_const_fixed_point_p filter_costs);
# 1664 "/usr/local/include/png.h" 3
extern void ( png_set_compression_level) (png_structrp png_ptr, int level);


extern void ( png_set_compression_mem_level) (png_structrp png_ptr, int mem_level);


extern void ( png_set_compression_strategy) (png_structrp png_ptr, int strategy);





extern void ( png_set_compression_window_bits) (png_structrp png_ptr, int window_bits);


extern void ( png_set_compression_method) (png_structrp png_ptr, int method);





extern void ( png_set_text_compression_level) (png_structrp png_ptr, int level);


extern void ( png_set_text_compression_mem_level) (png_structrp png_ptr, int mem_level);


extern void ( png_set_text_compression_strategy) (png_structrp png_ptr, int strategy);





extern void ( png_set_text_compression_window_bits) (png_structrp png_ptr, int window_bits);


extern void ( png_set_text_compression_method) (png_structrp png_ptr, int method);
# 1715 "/usr/local/include/png.h" 3
extern void ( png_init_io) (png_structrp png_ptr, png_FILE_p fp);
# 1726 "/usr/local/include/png.h" 3
extern void ( png_set_error_fn) (png_structrp png_ptr, png_voidp error_ptr, png_error_ptr error_fn, png_error_ptr warning_fn);



extern png_voidp ( png_get_error_ptr) (png_const_structrp png_ptr);
# 1742 "/usr/local/include/png.h" 3
extern void ( png_set_write_fn) (png_structrp png_ptr, png_voidp io_ptr, png_rw_ptr write_data_fn, png_flush_ptr output_flush_fn);



extern void ( png_set_read_fn) (png_structrp png_ptr, png_voidp io_ptr, png_rw_ptr read_data_fn);



extern png_voidp ( png_get_io_ptr) (png_const_structrp png_ptr);

extern void ( png_set_read_status_fn) (png_structrp png_ptr, png_read_status_ptr read_row_fn);


extern void ( png_set_write_status_fn) (png_structrp png_ptr, png_write_status_ptr write_row_fn);




extern void ( png_set_mem_fn) (png_structrp png_ptr, png_voidp mem_ptr, png_malloc_ptr malloc_fn, png_free_ptr free_fn);


extern png_voidp ( png_get_mem_ptr) (png_const_structrp png_ptr);



extern void ( png_set_read_user_transform_fn) (png_structrp png_ptr, png_user_transform_ptr read_user_transform_fn);




extern void ( png_set_write_user_transform_fn) (png_structrp png_ptr, png_user_transform_ptr write_user_transform_fn);




extern void ( png_set_user_transform_info) (png_structrp png_ptr, png_voidp user_transform_ptr, int user_transform_depth, int user_transform_channels);



extern png_voidp ( png_get_user_transform_ptr) (png_const_structrp png_ptr);
# 1797 "/usr/local/include/png.h" 3
extern png_uint_32 ( png_get_current_row_number) (png_const_structrp);
extern png_byte ( png_get_current_pass_number) (png_const_structrp);
# 1821 "/usr/local/include/png.h" 3
extern void ( png_set_read_user_chunk_fn) (png_structrp png_ptr, png_voidp user_chunk_ptr, png_user_chunk_ptr read_user_chunk_fn);




extern png_voidp ( png_get_user_chunk_ptr) (png_const_structrp png_ptr);






extern void ( png_set_progressive_read_fn) (png_structrp png_ptr, png_voidp progressive_ptr, png_progressive_info_ptr info_fn, png_progressive_row_ptr row_fn, png_progressive_end_ptr end_fn);




extern png_voidp ( png_get_progressive_ptr) (png_const_structrp png_ptr);



extern void ( png_process_data) (png_structrp png_ptr, png_inforp info_ptr, png_bytep buffer, png_size_t buffer_size);
# 1852 "/usr/local/include/png.h" 3
extern png_size_t ( png_process_data_pause) (png_structrp, int save);







extern png_uint_32 ( png_process_data_skip) (png_structrp);






extern void ( png_progressive_combine_row) (png_const_structrp png_ptr, png_bytep old_row, png_const_bytep new_row);



extern __attribute__((__malloc__)) png_voidp ( png_malloc) (png_const_structrp png_ptr, png_alloc_size_t size);


extern __attribute__((__malloc__)) png_voidp ( png_calloc) (png_const_structrp png_ptr, png_alloc_size_t size);



extern __attribute__((__malloc__)) png_voidp ( png_malloc_warn) (png_const_structrp png_ptr, png_alloc_size_t size);



extern void ( png_free) (png_const_structrp png_ptr, png_voidp ptr);


extern void ( png_free_data) (png_const_structrp png_ptr, png_inforp info_ptr, png_uint_32 free_me, int num);
# 1895 "/usr/local/include/png.h" 3
extern void ( png_data_freer) (png_const_structrp png_ptr, png_inforp info_ptr, int freer, png_uint_32 mask);
# 1920 "/usr/local/include/png.h" 3
extern __attribute__((__malloc__)) __attribute__((__deprecated__)) png_voidp ( png_malloc_default) (png_const_structrp png_ptr, png_alloc_size_t size);

extern __attribute__((__deprecated__)) void ( png_free_default) (png_const_structrp png_ptr, png_voidp ptr);





extern __attribute__((__noreturn__)) void ( png_error) (png_const_structrp png_ptr, png_const_charp error_message);



extern __attribute__((__noreturn__)) void ( png_chunk_error) (png_const_structrp png_ptr, png_const_charp error_message);
# 1944 "/usr/local/include/png.h" 3
extern void ( png_warning) (png_const_structrp png_ptr, png_const_charp warning_message);



extern void ( png_chunk_warning) (png_const_structrp png_ptr, png_const_charp warning_message);
# 1958 "/usr/local/include/png.h" 3
extern void ( png_benign_error) (png_const_structrp png_ptr, png_const_charp warning_message);




extern void ( png_chunk_benign_error) (png_const_structrp png_ptr, png_const_charp warning_message);



extern void ( png_set_benign_errors) (png_structrp png_ptr, int allowed);
# 1992 "/usr/local/include/png.h" 3
extern png_uint_32 ( png_get_valid) (png_const_structrp png_ptr, png_const_inforp info_ptr, png_uint_32 flag);



extern png_size_t ( png_get_rowbytes) (png_const_structrp png_ptr, png_const_inforp info_ptr);






extern png_bytepp ( png_get_rows) (png_const_structrp png_ptr, png_const_inforp info_ptr);





extern void ( png_set_rows) (png_const_structrp png_ptr, png_inforp info_ptr, png_bytepp row_pointers);




extern png_byte ( png_get_channels) (png_const_structrp png_ptr, png_const_inforp info_ptr);




extern png_uint_32 ( png_get_image_width) (png_const_structrp png_ptr, png_const_inforp info_ptr);



extern png_uint_32 ( png_get_image_height) (png_const_structrp png_ptr, png_const_inforp info_ptr);



extern png_byte ( png_get_bit_depth) (png_const_structrp png_ptr, png_const_inforp info_ptr);



extern png_byte ( png_get_color_type) (png_const_structrp png_ptr, png_const_inforp info_ptr);



extern png_byte ( png_get_filter_type) (png_const_structrp png_ptr, png_const_inforp info_ptr);



extern png_byte ( png_get_interlace_type) (png_const_structrp png_ptr, png_const_inforp info_ptr);



extern png_byte ( png_get_compression_type) (png_const_structrp png_ptr, png_const_inforp info_ptr);



extern png_uint_32 ( png_get_pixels_per_meter) (png_const_structrp png_ptr, png_const_inforp info_ptr);

extern png_uint_32 ( png_get_x_pixels_per_meter) (png_const_structrp png_ptr, png_const_inforp info_ptr);

extern png_uint_32 ( png_get_y_pixels_per_meter) (png_const_structrp png_ptr, png_const_inforp info_ptr);



extern float ( png_get_pixel_aspect_ratio) (png_const_structrp png_ptr, png_const_inforp info_ptr);

extern png_fixed_point ( png_get_pixel_aspect_ratio_fixed) (png_const_structrp png_ptr, png_const_inforp info_ptr);



extern png_int_32 ( png_get_x_offset_pixels) (png_const_structrp png_ptr, png_const_inforp info_ptr);

extern png_int_32 ( png_get_y_offset_pixels) (png_const_structrp png_ptr, png_const_inforp info_ptr);

extern png_int_32 ( png_get_x_offset_microns) (png_const_structrp png_ptr, png_const_inforp info_ptr);

extern png_int_32 ( png_get_y_offset_microns) (png_const_structrp png_ptr, png_const_inforp info_ptr);






extern png_const_bytep ( png_get_signature) (png_const_structrp png_ptr, png_const_inforp info_ptr);




extern png_uint_32 ( png_get_bKGD) (png_const_structrp png_ptr, png_inforp info_ptr, png_color_16p *background);




extern void ( png_set_bKGD) (png_const_structrp png_ptr, png_inforp info_ptr, png_const_color_16p background);




extern png_uint_32 ( png_get_cHRM) (png_const_structrp png_ptr, png_const_inforp info_ptr, double *white_x, double *white_y, double *red_x, double *red_y, double *green_x, double *green_y, double *blue_x, double *blue_y);



extern png_uint_32 ( png_get_cHRM_XYZ) (png_const_structrp png_ptr, png_const_inforp info_ptr, double *red_X, double *red_Y, double *red_Z, double *green_X, double *green_Y, double *green_Z, double *blue_X, double *blue_Y, double *blue_Z);



extern png_uint_32 ( png_get_cHRM_fixed) (png_const_structrp png_ptr, png_const_inforp info_ptr, png_fixed_point *int_white_x, png_fixed_point *int_white_y, png_fixed_point *int_red_x, png_fixed_point *int_red_y, png_fixed_point *int_green_x, png_fixed_point *int_green_y, png_fixed_point *int_blue_x, png_fixed_point *int_blue_y);





extern png_uint_32 ( png_get_cHRM_XYZ_fixed) (png_const_structrp png_ptr, png_const_inforp info_ptr, png_fixed_point *int_red_X, png_fixed_point *int_red_Y, png_fixed_point *int_red_Z, png_fixed_point *int_green_X, png_fixed_point *int_green_Y, png_fixed_point *int_green_Z, png_fixed_point *int_blue_X, png_fixed_point *int_blue_Y, png_fixed_point *int_blue_Z);
# 2113 "/usr/local/include/png.h" 3
extern void ( png_set_cHRM) (png_const_structrp png_ptr, png_inforp info_ptr, double white_x, double white_y, double red_x, double red_y, double green_x, double green_y, double blue_x, double blue_y);



extern void ( png_set_cHRM_XYZ) (png_const_structrp png_ptr, png_inforp info_ptr, double red_X, double red_Y, double red_Z, double green_X, double green_Y, double green_Z, double blue_X, double blue_Y, double blue_Z);



extern void ( png_set_cHRM_fixed) (png_const_structrp png_ptr, png_inforp info_ptr, png_fixed_point int_white_x, png_fixed_point int_white_y, png_fixed_point int_red_x, png_fixed_point int_red_y, png_fixed_point int_green_x, png_fixed_point int_green_y, png_fixed_point int_blue_x, png_fixed_point int_blue_y);





extern void ( png_set_cHRM_XYZ_fixed) (png_const_structrp png_ptr, png_inforp info_ptr, png_fixed_point int_red_X, png_fixed_point int_red_Y, png_fixed_point int_red_Z, png_fixed_point int_green_X, png_fixed_point int_green_Y, png_fixed_point int_green_Z, png_fixed_point int_blue_X, png_fixed_point int_blue_Y, png_fixed_point int_blue_Z);
# 2136 "/usr/local/include/png.h" 3
extern png_uint_32 ( png_get_gAMA) (png_const_structrp png_ptr, png_const_inforp info_ptr, double *file_gamma);

extern png_uint_32 ( png_get_gAMA_fixed) (png_const_structrp png_ptr, png_const_inforp info_ptr, png_fixed_point *int_file_gamma);





extern void ( png_set_gAMA) (png_const_structrp png_ptr, png_inforp info_ptr, double file_gamma);

extern void ( png_set_gAMA_fixed) (png_const_structrp png_ptr, png_inforp info_ptr, png_fixed_point int_file_gamma);




extern png_uint_32 ( png_get_hIST) (png_const_structrp png_ptr, png_inforp info_ptr, png_uint_16p *hist);




extern void ( png_set_hIST) (png_const_structrp png_ptr, png_inforp info_ptr, png_const_uint_16p hist);



extern png_uint_32 ( png_get_IHDR) (png_const_structrp png_ptr, png_const_inforp info_ptr, png_uint_32 *width, png_uint_32 *height, int *bit_depth, int *color_type, int *interlace_method, int *compression_method, int *filter_method);




extern void ( png_set_IHDR) (png_const_structrp png_ptr, png_inforp info_ptr, png_uint_32 width, png_uint_32 height, int bit_depth, int color_type, int interlace_method, int compression_method, int filter_method);





extern png_uint_32 ( png_get_oFFs) (png_const_structrp png_ptr, png_const_inforp info_ptr, png_int_32 *offset_x, png_int_32 *offset_y, int *unit_type);





extern void ( png_set_oFFs) (png_const_structrp png_ptr, png_inforp info_ptr, png_int_32 offset_x, png_int_32 offset_y, int unit_type);





extern png_uint_32 ( png_get_pCAL) (png_const_structrp png_ptr, png_inforp info_ptr, png_charp *purpose, png_int_32 *X0, png_int_32 *X1, int *type, int *nparams, png_charp *units, png_charpp *params);






extern void ( png_set_pCAL) (png_const_structrp png_ptr, png_inforp info_ptr, png_const_charp purpose, png_int_32 X0, png_int_32 X1, int type, int nparams, png_const_charp units, png_charpp params);





extern png_uint_32 ( png_get_pHYs) (png_const_structrp png_ptr, png_const_inforp info_ptr, png_uint_32 *res_x, png_uint_32 *res_y, int *unit_type);





extern void ( png_set_pHYs) (png_const_structrp png_ptr, png_inforp info_ptr, png_uint_32 res_x, png_uint_32 res_y, int unit_type);



extern png_uint_32 ( png_get_PLTE) (png_const_structrp png_ptr, png_inforp info_ptr, png_colorp *palette, int *num_palette);


extern void ( png_set_PLTE) (png_structrp png_ptr, png_inforp info_ptr, png_const_colorp palette, int num_palette);



extern png_uint_32 ( png_get_sBIT) (png_const_structrp png_ptr, png_inforp info_ptr, png_color_8p *sig_bit);




extern void ( png_set_sBIT) (png_const_structrp png_ptr, png_inforp info_ptr, png_const_color_8p sig_bit);




extern png_uint_32 ( png_get_sRGB) (png_const_structrp png_ptr, png_const_inforp info_ptr, int *file_srgb_intent);




extern void ( png_set_sRGB) (png_const_structrp png_ptr, png_inforp info_ptr, int srgb_intent);

extern void ( png_set_sRGB_gAMA_and_cHRM) (png_const_structrp png_ptr, png_inforp info_ptr, int srgb_intent);




extern png_uint_32 ( png_get_iCCP) (png_const_structrp png_ptr, png_inforp info_ptr, png_charpp name, int *compression_type, png_bytepp profile, png_uint_32 *proflen);





extern void ( png_set_iCCP) (png_const_structrp png_ptr, png_inforp info_ptr, png_const_charp name, int compression_type, png_const_bytep profile, png_uint_32 proflen);





extern int ( png_get_sPLT) (png_const_structrp png_ptr, png_inforp info_ptr, png_sPLT_tpp entries);




extern void ( png_set_sPLT) (png_const_structrp png_ptr, png_inforp info_ptr, png_const_sPLT_tp entries, int nentries);





extern int ( png_get_text) (png_const_structrp png_ptr, png_inforp info_ptr, png_textp *text_ptr, int *num_text);
# 2270 "/usr/local/include/png.h" 3
extern void ( png_set_text) (png_const_structrp png_ptr, png_inforp info_ptr, png_const_textp text_ptr, int num_text);




extern png_uint_32 ( png_get_tIME) (png_const_structrp png_ptr, png_inforp info_ptr, png_timep *mod_time);




extern void ( png_set_tIME) (png_const_structrp png_ptr, png_inforp info_ptr, png_const_timep mod_time);




extern png_uint_32 ( png_get_tRNS) (png_const_structrp png_ptr, png_inforp info_ptr, png_bytep *trans_alpha, int *num_trans, png_color_16p *trans_color);





extern void ( png_set_tRNS) (png_structrp png_ptr, png_inforp info_ptr, png_const_bytep trans_alpha, int num_trans, png_const_color_16p trans_color);





extern png_uint_32 ( png_get_sCAL) (png_const_structrp png_ptr, png_const_inforp info_ptr, int *unit, double *width, double *height);
# 2306 "/usr/local/include/png.h" 3
extern png_uint_32 ( png_get_sCAL_fixed) (png_const_structrp png_ptr, png_const_inforp info_ptr, int *unit, png_fixed_point *width, png_fixed_point *height);



extern png_uint_32 ( png_get_sCAL_s) (png_const_structrp png_ptr, png_const_inforp info_ptr, int *unit, png_charpp swidth, png_charpp sheight);



extern void ( png_set_sCAL) (png_const_structrp png_ptr, png_inforp info_ptr, int unit, double width, double height);

extern void ( png_set_sCAL_fixed) (png_const_structrp png_ptr, png_inforp info_ptr, int unit, png_fixed_point width, png_fixed_point height);


extern void ( png_set_sCAL_s) (png_const_structrp png_ptr, png_inforp info_ptr, int unit, png_const_charp swidth, png_const_charp sheight);
# 2423 "/usr/local/include/png.h" 3
extern void ( png_set_keep_unknown_chunks) (png_structrp png_ptr, int keep, png_const_bytep chunk_list, int num_chunks);






extern int ( png_handle_as_unknown) (png_const_structrp png_ptr, png_const_bytep chunk_name);




extern void ( png_set_unknown_chunks) (png_const_structrp png_ptr, png_inforp info_ptr, png_const_unknown_chunkp unknowns, int num_unknowns);
# 2447 "/usr/local/include/png.h" 3
extern void ( png_set_unknown_chunk_location) (png_const_structrp png_ptr, png_inforp info_ptr, int chunk, int location);


extern int ( png_get_unknown_chunks) (png_const_structrp png_ptr, png_inforp info_ptr, png_unknown_chunkpp entries);







extern void ( png_set_invalid) (png_const_structrp png_ptr, png_inforp info_ptr, int mask);





extern void ( png_read_png) (png_structrp png_ptr, png_inforp info_ptr, int transforms, png_voidp params);



extern void ( png_write_png) (png_structrp png_ptr, png_inforp info_ptr, int transforms, png_voidp params);




extern png_const_charp ( png_get_copyright) (png_const_structrp png_ptr);

extern png_const_charp ( png_get_header_ver) (png_const_structrp png_ptr);

extern png_const_charp ( png_get_header_version) (png_const_structrp png_ptr);

extern png_const_charp ( png_get_libpng_ver) (png_const_structrp png_ptr);



extern png_uint_32 ( png_permit_mng_features) (png_structrp png_ptr, png_uint_32 mng_features_permitted);
# 2504 "/usr/local/include/png.h" 3
extern void ( png_set_user_limits) (png_structrp png_ptr, png_uint_32 user_width_max, png_uint_32 user_height_max);

extern png_uint_32 ( png_get_user_width_max) (png_const_structrp png_ptr);

extern png_uint_32 ( png_get_user_height_max) (png_const_structrp png_ptr);


extern void ( png_set_chunk_cache_max) (png_structrp png_ptr, png_uint_32 user_chunk_cache_max);

extern png_uint_32 ( png_get_chunk_cache_max) (png_const_structrp png_ptr);


extern void ( png_set_chunk_malloc_max) (png_structrp png_ptr, png_alloc_size_t user_chunk_cache_max);

extern png_alloc_size_t ( png_get_chunk_malloc_max) (png_const_structrp png_ptr);




extern png_uint_32 ( png_get_pixels_per_inch) (png_const_structrp png_ptr, png_const_inforp info_ptr);


extern png_uint_32 ( png_get_x_pixels_per_inch) (png_const_structrp png_ptr, png_const_inforp info_ptr);


extern png_uint_32 ( png_get_y_pixels_per_inch) (png_const_structrp png_ptr, png_const_inforp info_ptr);


extern float ( png_get_x_offset_inches) (png_const_structrp png_ptr, png_const_inforp info_ptr);


extern png_fixed_point ( png_get_x_offset_inches_fixed) (png_const_structrp png_ptr, png_const_inforp info_ptr);



extern float ( png_get_y_offset_inches) (png_const_structrp png_ptr, png_const_inforp info_ptr);


extern png_fixed_point ( png_get_y_offset_inches_fixed) (png_const_structrp png_ptr, png_const_inforp info_ptr);




extern png_uint_32 ( png_get_pHYs_dpi) (png_const_structrp png_ptr, png_const_inforp info_ptr, png_uint_32 *res_x, png_uint_32 *res_y, int *unit_type);







extern png_uint_32 ( png_get_io_state) (png_const_structrp png_ptr);





extern png_uint_32 ( png_get_io_chunk_type) (png_const_structrp png_ptr);
# 2681 "/usr/local/include/png.h" 3
extern png_uint_32 ( png_get_uint_32) (png_const_bytep buf);
extern png_uint_16 ( png_get_uint_16) (png_const_bytep buf);
extern png_int_32 ( png_get_int_32) (png_const_bytep buf);


extern png_uint_32 ( png_get_uint_31) (png_const_structrp png_ptr, png_const_bytep buf);





extern void ( png_save_uint_32) (png_bytep buf, png_uint_32 i);


extern void ( png_save_int_32) (png_bytep buf, png_int_32 i);







extern void ( png_save_uint_16) (png_bytep buf, unsigned int i);
# 2795 "/usr/local/include/png.h" 3
typedef struct png_control *png_controlp;
typedef struct
{
   png_controlp opaque;
   png_uint_32 version;
   png_uint_32 width;
   png_uint_32 height;
   png_uint_32 format;
   png_uint_32 flags;
   png_uint_32 colormap_entries;
# 2829 "/usr/local/include/png.h" 3
   png_uint_32 warning_or_error;

   char message[64];
} png_image, *png_imagep;
# 3095 "/usr/local/include/png.h" 3
extern int ( png_image_begin_read_from_file) (png_imagep image, const char *file_name);





extern int ( png_image_begin_read_from_stdio) (png_imagep image, FILE* file);




extern int ( png_image_begin_read_from_memory) (png_imagep image, png_const_voidp memory, png_size_t size);



extern int ( png_image_finish_read) (png_imagep image, png_const_colorp background, void *buffer, png_int_32 row_stride, void *colormap);
# 3145 "/usr/local/include/png.h" 3
extern void ( png_image_free) (png_imagep image);
# 3169 "/usr/local/include/png.h" 3
extern int ( png_image_write_to_file) (png_imagep image, const char *file, int convert_to_8bit, const void *buffer, png_int_32 row_stride, const void *colormap);




extern int ( png_image_write_to_stdio) (png_imagep image, FILE *file, int convert_to_8_bit, const void *buffer, png_int_32 row_stride, const void *colormap);
# 3202 "/usr/local/include/png.h" 3
extern void ( png_set_check_for_invalid_index) (png_structrp png_ptr, int allowed);


extern int ( png_get_palette_max) (png_const_structp png_ptr, png_const_infop info_ptr);
# 3245 "/usr/local/include/png.h" 3
extern int ( png_set_option) (png_structrp png_ptr, int option, int onoff);
# 3266 "/usr/local/include/png.h" 3
}
# 3 "imagePNG.cpp" 2
# 1 "./ImagePNG.h" 1





class ImagePNG: public Image {
public:

    ImagePNG();
    ~ImagePNG();

 void Init(const char* base, const char* filename);

private:
};
# 4 "imagePNG.cpp" 2

FILE* file = __null;

void png_zip_read(png_structp png_ptr, png_bytep data, png_size_t length)
{
    fread(data,1, length,file);
}

ImagePNG::ImagePNG(){
}

void ImagePNG::Init(const char* base, const char* filename){


    fullPath[0] = '\0';
    strcat(fullPath, base);
    strcat(fullPath, filename);

    strncpy(this->filename, filename,512);

    file = fopen(fullPath, "rb");

    if (file == __null){
        printf("ImagePNG::Init => Unable to open image '%s'.\n",fullPath);
        return;
    }



    png_byte header[8];
    fread(header,1, 8,file);

 if (png_sig_cmp(header, 0, 8) != 0 ){
  printf("[read_png_file] File '%s' is not recognized as a PNG file.\n", fullPath);
        return;
    }


    png_structp png_ptr = __null;
 png_ptr = png_create_read_struct("1.6.13", __null, __null, __null);

 if (png_ptr == __null){
  printf("[read_png_file] png_create_read_struct failed");
        return;
    }

 png_infop info_ptr = png_create_info_struct(png_ptr);
    if (info_ptr == __null){
  printf("[read_png_file] png_create_info_struct failed");
        return;
    }

 if (setjmp((*png_set_longjmp_fn((png_ptr), longjmp, (sizeof (jmp_buf)))))){
  printf("[read_png_file] Error during init_io");
        return;
    }

 png_set_read_fn(png_ptr, __null, png_zip_read);
 png_set_sig_bytes(png_ptr, 8);

 png_read_info(png_ptr, info_ptr);


    int32_t bit_depth;
 int32_t color_type ;
    unsigned int pngWidth;
 unsigned int pngHeight;
 png_get_IHDR(png_ptr, info_ptr, &pngWidth, &pngHeight, &bit_depth, &color_type, __null, __null, __null);

 this->width = pngWidth;
 this->height = pngHeight;





 if (bit_depth > 8) {
  png_set_strip_16(png_ptr);
 }
 if (color_type == 0 ||
  color_type == (4)) {
  png_set_gray_to_rgb(png_ptr);
 }
 if (color_type == (2 | 1)) {
  png_set_palette_to_rgb(png_ptr);
 }


 png_read_update_info(png_ptr, info_ptr);


 this->bytesPerRow = png_get_rowbytes(png_ptr, info_ptr);

    bytesPerRow += 3 - ((bytesPerRow-1) % 4);


   this->bpp= bytesPerRow / width;

 printf("ImagePNG::Init: For '%s', bpp: %zu, color_type: %d, bit_depth: %d\n", filename, bpp, color_type, bit_depth);

    this->colorPixels = new uint8_t[bytesPerRow * height];


    png_bytep *row_pointers;
 row_pointers = (png_bytepp)malloc(height*sizeof(png_bytep)) ;





 for (size_t i = 0; i < height; ++i)

        row_pointers[ i] = this->colorPixels + i*bytesPerRow;



 png_read_image(png_ptr, row_pointers);


 png_destroy_read_struct(&png_ptr, &info_ptr, __null);


    free(row_pointers);

    this->location |= RAM ;

    fclose(file);
}

ImagePNG::~ImagePNG(){

 if ((this->location & RAM) == RAM){
        delete[] colorPixels;
  colorPixels = __null;
 }
}
