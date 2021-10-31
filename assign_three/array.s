     AREA     factorial, CODE, READONLY
     EXPORT __main
	 IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
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
	 
	 MOV R4,#0x64
     STR R4,[R3,#0x2D]
     MOV R1,#0x0                     
	                               
     LDR R0,[R3]
l1	 LDR R5,[R3,#0x5]
     ADD R3,R3,#0x5
	 ADD R1,R1,#0x1
	 CMP R1,0xA            ;No of elements in array
	 BEQ l2
	 CMP R0,R5
	 BGT l1
	 MOV R0,R5
	 B l1
l2	 BL printMsg
	 
      
	
		

stop    B stop ; stop program
     ENDFUNC
     END
