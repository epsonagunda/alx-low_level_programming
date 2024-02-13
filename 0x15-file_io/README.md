 - File I/O
What happens if you try to write “Best” to the standard input on Ubuntu 14.04 LTS?
-The text will be printed on the terminal on the standard output

What is the unistd symbolic constant for the standard input?
-STDIN_FILENO

What is the correct combination of oflags used to open a file with the mode write only, create it if it doesn’t exist and append new content at the end if it already exists?
-O_WRONLY | O_CREAT | O_APPEND

why? #AlwaysAskWhy
-Because most of the time, I will already have stdin (value 0), stdout (value 1) and stderr (value 2) opened when my program starts executing.

What is the oflag used to open a file with the mode read only?

O_RDONLY


Which of these answers are the equivalent of O_RDWR on Ubuntu 14.04 LTS? (select all correct answers

(O_WRONLY << 1)

2

3 & 2


1 << 1

When I am using O_WRONLY | O_CREAT | O_APPEND -> the | are bitwise operators.
-True

What is the oflag used to open a file in mode read + write?

-O_RDWR

Most of the time, on a classic, modern Linux system, what will be the value of the first file descriptor you will get after opening a new file with open (if open succeeds of course):

3

What is the return value of the system call open if it fails?
-1

Without context, on Ubuntu 14.04 LTS, write is a … (please select all correct answers):

-system call
-executable

What is the unistd symbolic constant for the standard output?
-STDOUT_FILENO

is open a function or a system call? (select all valid answers)
-it’s a system call
-it’s a function provided by the kernel
-it’s a function

What system call would you use to write to a file descriptor? (select all correct answers)
-write

What is the unistd symbolic constant for the Standard error?
-STDERR_FILENO





Operations on file descriptors
The following lists typical operations on file descriptors on modern Unix-like systems. Most of these functions are declared in the <unistd.h> header, but some are in the <fcntl.h> header instead.

Creating file descriptors
open()
creat()[5]
socket()
accept()
socketpair()
pipe()
epoll_create() (Linux)
signalfd() (Linux)
eventfd() (Linux)
timerfd_create() (Linux)
memfd_create() (Linux)
userfaultfd() (Linux)
fanotify_init() (Linux)
inotify_init() (Linux)
clone() (with flag CLONE_PIDFD, Linux)
pidfd_open() (Linux)
open_by_handle_at() (Linux)
kqueue() (BSD)
pdfork() (kFreeBSD)
Deriving file descriptors
dirfd()
fileno()
Operations on a single file descriptor
read(), write()
readv(), writev()
pread(), pwrite()
recv(), send()
recvfrom(), sendto()
recvmsg(), sendmsg() (also used for sending FDs to other processes over a Unix domain socket)
recvmmsg(), sendmmsg()
lseek(), llseek()
fstat()
fstatvfs()
fchmod()
fchown()
ftruncate()
fsync()
fdatasync()
fdopendir()
fgetxattr(), fsetxattr() (Linux)
flistxattr(), fremovexattr() (Linux)
statx (Linux)
setns (Linux)
vmsplice() (Linux)
pidfd_send_signal() (Linux)
pdkill() (kFreeBSD)
waitid() (with P_PIDFD ID type, Linux)
fdopen() (stdio function:converts file descriptor to FILE*)
dprintf() (stdio function: prints to file descriptor)
Operations on multiple file descriptors
select(), pselect()
poll(), ppoll()
epoll_wait(), epoll_pwait(), epoll_pwait2() (Linux, takes a single epoll filedescriptor to wait on many other file descriptors)
epoll_ctl() (for Linux)
kqueue() (for BSD-based systems).
sendfile()
splice(), tee() (for Linux)
copy_file_range() (for Linux)
Operations on the file descriptor table
The fcntl() function is used to perform various operations on a file descriptor, depending on the command argument passed to it. There are commands to get and set attributes associated with a file descriptor, including F_GETFD, F_SETFD, F_GETFL and F_SETFL.

close()
closefrom() (BSD and Solaris only; deletes all file descriptors greater than or equal to specified number)
close_range() (for Linux)[6]
dup() (duplicates an existing file descriptor guaranteeing to be the lowest number available file descriptor)
dup2(), dup3() (Close fd1 if necessary, and make file descriptor fd1 point to the open file of fd2)
fcntl (F_DUPFD)
Operations that modify process state
fchdir() (sets the process's current working directory based on a directory file descriptor)
mmap() (maps ranges of a file into the process's address space)
File locking
flock()
fcntl() (F_GETLK, F_SETLK and F_SETLKW)
lockf()
Sockets
See also: Berkeley sockets
connect()
bind()
listen()
accept() (creates a new file descriptor for an incoming connection)
getsockname()
getpeername()
getsockopt()
setsockopt()
shutdown() (shuts down one or both halves of a full duplex connection)
Miscellaneous
ioctl() (a large collection of miscellaneous operations on a single file descriptor, often associated with a device)
Upcoming operations
A series of new operations on file descriptors has been added to many modern Unix-like systems, as well as numerous C libraries, to be standardized in a future version of POSIX.[7] The at suffix signifies that the function takes an additional first argument supplying a file descriptor from which relative paths are resolved, the forms lacking the at suffix thus becoming equivalent to passing a file descriptor corresponding to the current working directory. The purpose of these new operations is to defend against a certain class of TOCTOU attacks.

openat()
faccessat()
fchmodat()
fchownat()
fstatat()
futimesat()
linkat()
mkdirat()
mknodat()
readlinkat()
renameat()
symlinkat()
unlinkat()
mkfifoat()
fdopendir()
File descriptors as capabilities
Unix file descriptors behave in many ways as capabilities. They can be passed between processes across Unix domain sockets using the sendmsg() system call. Note, however, that what is actually passed is a reference to an "open file description" that has mutable state (the file offset, and the file status and access flags). This complicates the secure use of file descriptors as capabilities, since when programs share access to the same open file description, they can interfere with each other's use of it by changing its offset or whether it is blocking or non-blocking, for example.[8][9] In operating systems that are specifically designed as capability systems, there is very rarely any mutable state associated with a capability itself.

A Unix process' file descriptor table is an example of a C-list.

See also
fuser (Unix)
lsof
File Control Block (FCB) - an alternative scheme in CP/M and early versions of DOSi
