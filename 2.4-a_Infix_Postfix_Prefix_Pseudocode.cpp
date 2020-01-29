/* 2.4-a Infix, Postfix, Prefix:*/

/*pseudocode to evaluate Postfix expression:*/

EvaluatePostfix(exp){
	create a stack S
	for i<-0 to length(exp)-1
		{
			if(exp[i] is operand)
                                         push(exp[i])
			else if(exp[i] is operator)
			{
				op2<-pop()
				op1<-pop()
				res<-perform(exp[i],op1,op2)
				push(res)
			} //end of else if
		} //end of for loop
return top of stack
}


