#ifndef E2TOOLS_WRITE_H
#define E2TOOLS_WRITE_H

#include <stdbool.h>

long
put_symlink(ext2_filsys fs, ext2_ino_t cwd, char *dest, char *outfile,
         ext2_ino_t *outfile_ino);

long
put_file(ext2_filsys fs, ext2_ino_t cwd, char *infile, char *outfile,
         ext2_ino_t *outfile_ino, int keep, struct stat *def_stat);

long
put_file_or_symlink(ext2_filsys fs, ext2_ino_t cwd, char *infile, char *outfile,
         ext2_ino_t *outfile_ino, int keep, struct stat *def_stat, bool symlink);

#endif /* !E2TOOLS_WRITE_H */
