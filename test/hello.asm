Data Segment
monmsg db "Hello"
Data ends
Code segment
Assume Cs:Code, Ds: Data
start:
mov Ah, 09h 
mov Dx, Offset monmsg 
Int 21h
mov Ah, 4Ch 
Int 21h
Code ends
end start
