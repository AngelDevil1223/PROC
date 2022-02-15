# PROC
--- TUps project ---

Command line program similar to ps command.
  
  Usage example: 
  ./TUps -p 1234 -s -U -S -v -c
  
  -p <pid>
   display the process information for JUST process <PID> 
  -s
   display single character state of the process
  -U
   DO NOT display the amount of user time consumed
  -S
   display the amount of system time
  -v
   display the amount of virtual memory currently used (in pages
  -c
   DO NOT display the command-line that started the program, otherwise, include the command line information

  options.c: Responsible for parsing the users input. 

  list.c:    Responsible for reading the directory and storing a list of
             of valid pids owned by the user. 

  parser.c:  Responsible for reading the individual files and storing the
             important data within. 

  main.c:    Driver class. 
