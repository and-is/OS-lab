echo program for performing KILL operations
ps -e
echo enter the pid
read pid
kill -9 $pid
echo finishd
