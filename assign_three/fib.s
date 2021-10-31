         AREA     factorial, CODE, READONLY
     EXPORT __main
	 IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
	 ENTRY 
__main  FUNCTION	
	  MOV R11,#0x20000000
	  MOV R10,#0x0
	  MOV R9,#0x1
	  MOV R8,#0x0
l1    STR R10,[R11]           ;Series is stored in array whose base address is in R3
      MOV R0,R10
	  BL printMsg
   	  ADD R11,R11,#0x5
	  ADD R8,R8,#0x1
	  CMP R8,#0xA
	  BEQ stop
	  ADD R4,R10,R9
	  MOV R10,R9
	  MOV R9,R4
	  B l1

stop    B stop ; stop program
     ENDFUNC
     END
