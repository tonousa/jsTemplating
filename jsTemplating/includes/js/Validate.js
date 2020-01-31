//**************************************************************************************************
//these functions were created by Toby Steele from 10/1/01 - 11/6/01
//
//updates:
//
//	11/5/01
//	Added return true to almost all functions. Some functions only returned false, which works on most
//  browsers except the old ones.
//*****************************************************************************************************


function checkString(e){

	if(window.RegExp){
	
		if (e.value != ""){			//You must make sure that something was first entered
			trim(e);
			if(e.value.match(/^[a-z\s]+$/i)==null){	//Then you make sure its not numeric & prompt if its not
				alert("This value can only contain letters and spaces");
				e.select();			//then highlight and set focus to it
				e.focus();
				return false;		//fail test
			}	
			else{
				return true;		//pass test
			}			
		}	
		else{
			return true;		//added for old browser compatibility
		}
	}
	else{return true;
	}
}
   
//This function is used for all validation-send in the whole element as a parameter
function checkNumeric(o){
	if (o.value != ""){			//You must make sure that something was first entered
		
		if (isNaN(o.value)){	//Then you make sure its numeric & prompt if its not
			alert("This value must be numeric");
			o.select();			//then highlight and set focus to it
			o.focus();
			return false;		//fail test
		}	
		else{
			return true;		//pass test
		}			
	}	
	else{
		return true;		//added for old browser compatibility
	}
}

	//this validates a year
function isValidYear(e){
	if(e.value != ""){
		trim(e);	//remove leading and trailing spaces
		if(e.value.match(/^[12]\d{3}$/) != null){
			return true;
		}else{
			alert("Please enter a valid year");
			e.select();
			e.focus();
			return false;
		}
	}else{return true;}
}

//This function is used for all validation-send in the whole element as a parameter
function validateNumIntegers(o,strSize){
	if (o.value != ""){					//You must make sure that something was first entered
		if(checkNumeric(o)){
			if(o.value.length != strSize){	//Then you make sure its the proper length
				alert("This must be " + strSize + " numbers long");
				o.select();					//then highlight and set focus to it
				o.focus();
				return false;				//fail test
			}		
		}
		else{return false;
		}	
	}	
	else{return true;		//added for old browser compatibility
	}
}

		//this validates password to make sure it conforms to standards
function validatePassword(oElement){
	var checkOK = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	var strNumericDigits = 0;
	if(oElement.value != ""){
		if(oElement.value.length < 6 || oElement.value.length > 8){
			alert("Passwords must be between 6 and 8 characters long");
			oElement.focus();oElement.select();
			return false;
		}
		for(i=0;i<oElement.value.length;i++){
			if(checkOK.indexOf(oElement.value.charAt(i)) == -1){
				alert("Passwords must contain only numbers and letters");
				oElement.select();oElement.focus();
				return false;
			}
			if(!isNaN(oElement.value.charAt(i))){		//if any of the digits of the value of the text box
				strNumericDigits += 1;					//are numeric, keep a count becuase there must be
			}											//at least 2 numeric digits
		}
		if(strNumericDigits < 2){
			alert("Password must contain at lest 2 numeric characters");
			oElement.focus();oElement.select();	
			return false;		
		}		
	}
	else{return true;		//added for old browser compatibility
	}
}	
	
function checkZip(e){	
	if(e.value !=""){
		e.value=e.value.replace(/\s*/g,"");		//remove all blank spaces
		if(e.value.match(/^\d{5}(\-\d{4})?$/i) == null){
			alert("The zip code is not in a valid format, please correct.");
			e.focus();e.select();
			return false;		
		}
		else{return true;}
	}
	else{return true;}
}
	
	//this uses a regular expression to see if email is valid
function checkEmail(e){
	if(e.value !=""){
		trim(e);
		if(e.value.match(/^[a-z0-9._-]+@([a-z0-9.-]+\.)+[A-Z0-9.-]{2,4}$/i) == null){
			alert("The email is not in a valid format, please correct.");
			e.focus();e.select();
			return false;		
		}
		else{return true;}
	}
	else{return true;}
}
	
	//This validates the time in the standard form of hh:mm (doesn't allow military time)
function checkTime(e){  
	if(e.value != ""){
		trim(e);
		if(e.value.match(/^((([1][0-2])?)|((0?[0-9])?)){1}\:([0-5][0-9]){1}$/) == null){
			alert("The time entered is not in the specified standard format, please correct.");
			e.focus();e.select();
			return false;		
		}
		else if(RegExp.$1=="00"){
			alert("The hour must be between 1 and 12");
			e.focus();e.select();
			return false;		
		}		
		else{return true;}
		
	}
	else{return true;}
}
		   
				//this validates the date to make sure it is valid enough to go into the DB
				//it takes in the element, and the element's value as parameters to work with
				//If anything isn't valid, it sends a message to fix, and highlights and puts 
				//focus on the date box

function isValidDate(strBox, dateStr){
//debugger;
  if(dateStr != ""){	
	var datePat = /^(\d{1,2})(\/|-)(\d{1,2})\2(\d{4})$/;
	var matchArray = dateStr.match(datePat); // is the format ok?
	if (matchArray == null) {
		alert("Date is not in a valid format.")
		if(typeof strBox == "text"){strBox.select();}			
		strBox.focus();		
		return false;
	}
	month = matchArray[1]; // parse date into variables
	day = matchArray[3];
	year = matchArray[4];
	if (month < 1 || month > 12) { // check month range
		alert("Month must be between 1 and 12.");
		if(typeof strBox == "text"){strBox.select();}			
		strBox.focus();				
		return false;
	}
	if (day < 1 || day > 31) {
		alert("Day must be between 1 and 31.");
		if(typeof strBox == "text"){strBox.select();}			
		strBox.focus();		
		return false;
	}
	if ((month==4 || month==6 || month==9 || month==11) && day==31) {
		alert("Month "+month+" doesn't have 31 days!")
		if(typeof strBox == "text"){strBox.select();}			
		strBox.focus();		
		return false
	}
	if (month == 2) { // check for february 29th
		var isleap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		if (day>29 || (day==29 && !isleap)) {
			alert("February " + year + " doesn't have " + day + " days!");
			if(typeof strBox == "text"){strBox.select();}			
			strBox.focus();		
			return false;
		}
	}
	if (year<1890){
		alert("Please enter a valid year!");
		if(typeof strBox == "text"){strBox.select();}			
		strBox.focus();		
		return false;
	}
	
return true; // date is valid
}					
}	  			   
		   
	//this function checks every element on the form to make sure it is not empty, except the pager textboxes
function IsFormComplete(o){

	trimAll(o)		
	
		//note the form.elements array is not accessible to older browsers
				
 	for(i=0; i<o.elements.length;i++){
 		if(o.elements[i].value==""){		
 			if(o.elements[i].name.indexOf("pager") != -1){
 				if(o.pager1.value != "" || o.pager2.value != "" || o.pager3.value != ""){
 					if(o.pager1.value == ""){alert("Please fill in pager area code");o.pager1.focus();return false;}
 					if(o.pager2.value == ""){alert("Please fill in pager numbers");o.pager2.focus();return false;}
 					if(o.pager3.value == ""){alert("Please fill in pager numbers");o.pager3.focus();return false;}
 	           }
 	        } 
	
				//added so you don't have to enter anything in the extension field of the telephone, or Section, or Secondary Email
 	        else if(o.elements[i].name.indexOf("T4") != -1  || o.elements[i].name.indexOf("section") != -1 || o.elements[i].name.indexOf("email2") != -1){		
 				continue;
 			}
 
				//added so you don't have to enter anything in the Secondary Email
 	        else if(o.elements[i].type == "hidden"){		
 				continue;
 			}
 	        
 	        else{
 				alert("You Must enter appropriate data for All fields");
 				o.elements[i].focus();   
 				return false;
 	        } 
 	    } 
 	}
 	return true;	//added for old browser compatibility
}   

function checkSearch(e){
	trim(e);
	if(e.value==""){
		alert("To search, please enter search word(s) in search text box.");
		e.focus();
		return false;
	}
	else{return true;}
}

		//this is basically the same function as above, but it checks for the url to be the only one that can be empty
function checkArticleMaint(o){
	trimAll(o)		
 	for(i=0; i<o.elements.length;i++){
 		if(o.elements[i].value==""){		
 			if(o.elements[i].name.indexOf("URL") != -1){
				continue;		//do nothing - this textbox can be empty
 	        } 
 	        else{	//since I did all the invisibility and dynamic html, this IF statment got real long. 
 					//the first part of the if statement checks to see if there is an associated sub type for the selected value in the type combo box,
 					//if so, and it has not had an item selected in it, alert error
 					//the rest checks to see if the element is one of the standard required fields
 						 								
 				if(o.elements[i].id==document.getElementById("fldType").value+"2" || 
 						o.elements[i].name.match(/fldSubject/i)!=null ||
 						o.elements[i].name.match(/fldDesc/i)!=null ||
 						o.elements[i].name.match(/fldType/i)!=null ||
 						o.elements[i].name.match(/fldCATType/i)!=null){
 					alert("You Must enter appropriate data for All fields");
 					o.elements[i].focus();
 					return false;
 				}else{continue;}
 	        } 
 	    } 
 	}
 	return true;	//added for old browser compatibility 	
 	
	
///just some examples that follow here, not associated with the above function, but had to put
//inside becuase netscape 3.0 would bonk.!!!!

//alert(escape('&'))	//use this to check what the url encoded value is
		   
//window.open(strLocation, target="_self",true)
	//these are other ways to do the same thing:
    	//document.location="LoginOld.asp";
		//document.write('<META HTTP-EQUIV="REFRESH" CONTENT="0\; URL=http://cleo/LoginOld.asp">');


}   
		   