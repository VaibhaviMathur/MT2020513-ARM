     AREA     factorial, CODE, READONLY
     EXPORT __main
	 IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
	 ENTRY 
__main  FUNCTION	
	  MOV R3,#0x20000000
	  MOV R1,#0x0
	  MOV R2,#0x1
	  MOV R8,#0x0
l1   STR R1,[R3]           ;Series is stored in array whose base address is in R3
      ADD R3,R3,#0x5
	  ADD R8,R8,#0x1
	  CMP R8,#0xA
	  BEQ l2
	  ADD R4,R1,R2
	  MOV R1,R2
	  MOV R2,R4
	  B l1
l2    BL printMsg
	 
	 
      
	
		

stop    B stop ; stop program
     ENDFUNC
     END
