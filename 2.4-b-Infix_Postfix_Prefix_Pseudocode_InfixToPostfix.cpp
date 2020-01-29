/* 2.4-b Infix, Postfix, Prefix:*/

/* Pseudocode for Infix to Postfix*/

InfixToPostfix(exp){
   create a stack S
   res<- empty string
   for(i<- 0 to length(exp)-1){
	if(exp[i] is operand){
		res<- res + exp[i]
	}
	else if(exp[i] is operator ){
		while(!s.empty() && HasHigherPreced(S.top(),exp[i]) ){
			res<- res + S.top()
			S.pop()
		}	// end of while
	S.push(exp[i])	
	}//end of else if
}//end of for loop

while(!S.empty()){
	res<-res+S.top()
	S.pop()
} //end of while
return res
}//EOF




