#ifndef DIRENT_H
#define DIRENT_H

typedef struct DIR DIR;

#define DT_UNKNOWN 0
#define DT_DIR     1
#define DT_REG     2
#define DT_LNK     3

#ifndef PATH_MAX_LONG
#define PATH_MAX_LONG 4096
#endif

struct dirent {
#if ENABLE_FEATURE_EXTRA_FILE_DATA
	unsigned char d_type;
#endif
	char d_name[PATH_MAX_LONG];	// file name
};

DIR *opendir(const char *dirname);
struct dirent *readdir(DIR *dir);
int closedir(DIR *dir);

#endif /* DIRENT_H */
