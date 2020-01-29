/* 2.4-c Infix, Postfix, Prefix:*/

//Infix to Postfix with Paranthesis:

InfixToPostfix(exp){
   create a stack S
   res<- empty string
   for(i<- 0 to length(exp)-1){
	if(exp[i] is operand){
		res<- res + exp[i]
	}
	else if(exp[i] is operator ){
		while(!S.empty() && HasHigherPreced(S.top(),exp[i]) && !IsOpenParanth(S.top()) ){
			res<- res + S.top()
			S.pop()
		}	// end of while
	S.push(exp[i])	
	}//end of else if
else if(IsOpenParanth(exp[i])){    /* elseif(exp[i]==’(’)    */
	S.push(exp[i])
}//end of elseif
elseif(IsClosingParanth(exp[i])){   /*elseif(exp[i]==’)’)   */
	while(!S.empty() && IsOpen)
}//end of elseif
}//end of for loop

while(!S.empty()   &&  !IsOpenParanth(S.top())){
	res<-res+S.top()
	S.pop()
} //end of while
S.pop()
}//end of elseif

while(! S.empty()){
	res<-res+ S.top()
	S.pop()
} //end of while
return res
}//EOF





