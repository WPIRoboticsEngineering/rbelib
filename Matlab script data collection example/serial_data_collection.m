%Written by joest
%creates serial object s on com 59
s= serial('COM59');
%Sets up the buadrate for 115200
set(s,'BaudRate',115200);
% opens the serial port
fopen(s);
%prints an A over serial 
fprintf(s,'A');
%Scans the serial port filling its buffer unit /n/r
out = fscanf(s);
%prints string
out
%splits up the serial string using the , as a delimiter
C = strsplit(out,',');
% Prints C
C
%closes serial port
fclose(s);
%Delets serial object
delete(s);
clear s;