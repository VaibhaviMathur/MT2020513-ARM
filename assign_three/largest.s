     AREA     factorial, CODE, READONLY
     EXPORT __main
	 IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
	 ENTRY 
__main  FUNCTION	
	  MOV R1,#0x15
	  MOV R2,#0x3
	  MOV R3,#0x10
	  
	  CMP R1,R2
	  ITE GT
	  MOVGT R0,R1
	  BLE l2
l1    CMP R1,R3
      ITE GT
	  MOVGT R0,R1
	  MOVLE R0,R3
	  B l3
l2	  CMP R2,R3
	  ITE GT
	  MOVGT R0,R2
	  MOVLE R0,R3
	  

	 
	  
	  
l3	  BL printMsg
	 
	 
      
	
		

stop    B stop ; stop program
     ENDFUNC
     END
