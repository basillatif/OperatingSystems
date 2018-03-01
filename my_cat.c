#include <fcntl.h>
#include <unistd.h>


main(int argc, char **argv) {
int fd, nread;
char buffer[516];
fd = open(argv[1], O_RDONLY);
while ((nread = read(fd, buffer, sizeof(buffer))) > 0){
  write(1, buffer, nread);
}
return 0;
}
