     AREA     factorial, CODE, READONLY
	 IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     EXPORT __main
	 ENTRY 
__main  FUNCTION	
	  MOV R3,#0x20000000
      MOV R4,#0x10
      STR R4,[R3]
	  
      MOV R4,#0x30
     STR R4,[R3,#0x5]
	 
	 MOV R4,#0x22
     STR R4,[R3,#0xA]
	 
	 MOV R4,#0xC
     STR R4,[R3,#0xF]
	 
	 MOV R4,#0x2C
     STR R4,[R3,#0x14]
	 
	 MOV R4,#0x9
     STR R4,[R3,#0x19]
	 
	 MOV R4,#0xB
     STR R4,[R3,#0x1E]
	 
	 MOV R4,#0x32
     STR R4,[R3,#0x23]
	 
	 MOV R4,#0x5A
     STR R4,[R3,#0x28]
	 
	 MOV R4,#0xF
     STR R4,[R3,#0x2D]
	 MOV R0,#0x0
	 MOV R9,#0x0
	 MOV R7,#0x2
l1   LDR R1,[R3]
      ADD R3,R3,#0x5
      ADD R9,R9,#0x1
	  CMP R9,#0xA                ;No of elements in array
	  BEQ l2
      udiv R5,R1,R7
	  mls R5,R5,R7,R1
	  CMP R5,#0x0
	  BNE l1
	  ADD R0,R0,#0x1
	  B l1
l2	  BL printMsg
	  
	 
	 
      
	
		

stop    B stop ; stop program
     ENDFUNC
     END
