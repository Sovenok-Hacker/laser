#ifndef LASER_COLORS_H
#define LASER_COLORS_H

#ifdef LASER_NF_SYMBOLS

#define RESET_COLOR "\x1b[0m"
#define DIR_COLOR "\x1b[34m "
#define SYMLINK_COLOR "\x1b[36m "
#define FILE_COLOR "\x1b[38m "
#define HIDDEN_COLOR "\x1b[90m "

#else

#define RESET_COLOR "\x1b[0m"
#define DIR_COLOR "\x1b[34m"
#define SYMLINK_COLOR "\x1b[36m"
#define FILE_COLOR "\x1b[38m"
#define HIDDEN_COLOR "\x1b[90m"

#endif

#endif
