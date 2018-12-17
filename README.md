# work_18
## Named Pipes
### Also known as FIFOs.
### Same as unnamed pipes except FIFOs have a name that can be used to identify them via different programs.
### Like unnamed pipes, FIFOS are unidirectional
''' 
mkfifo 
'''
## Shell command to make a FIFO

### Terminal A: $ cat mario
### Terminal B: $ cat > mario
### 	type stuff in TB + enter
### 	Quit one end the other end also quit
###		write end will wait for stdin
###		last message is not received
###		FIFO not exist on disk, size always 0
###   FIFO can write from 2 end but if you try to read from 2 end the read is scheduled by OS
### Remove FIFO during process it just becomes an unnamed pipe
### 	If you recreate the FIFO the unfinished process will not be interupted

## C FIFO function call
### mkfifo - <sys/types.h> <sys/stat.h>
### c function to create a FIFO
### returns 0 on sucess and -1 on failure
### Once created the FIFO acts like a * file












































