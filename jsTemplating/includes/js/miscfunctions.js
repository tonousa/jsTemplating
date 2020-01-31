//**************************************************************************************************
//these functions were created by Toby Steele from 10/1/01 - 11/6/01
//
//updates:
//
//	11/5/01
//	Added return true to almost all functions. Some functions only returned false, which works on most
//  browsers except the old ones.
//*****************************************************************************************************

	//this is to suppress any unexpected errors becuase of diff. platforms--only use after you 
	//have completely debugged the app.
//function stopError(){return true;}

//window.onerror = stopError;


function trimAll(form){
	for(i=0; i<form.elements.length;i++){	
		if(form.elements[i].type == "text"){
			if(form.elements[i].value!=""){trim(form.elements[i]);}
		}
	} 	
}		

	//trims blank spaces on left and right
function trim(e){
	e.value=e.value.replace(/^\s*/g,"").replace(/\s*$/g,"");
}

	//this moves the cursor to the next box if the required # of digits were entered
			//this depends on the next element being the same name
			//except for the last character being a digit 1 greater x1, x2, x3...
function tabNextLessScalableButFaster(e,num){		
	if(e.value.length==num){
		var idLength = e.id.length;
			
			//Get the Name of the element minus the last character(which will be a number)
		var ExtractedIdName = e.id.substr(0,idLength-1);
		
			//Get last character of the id of the element, then turn it into a number
		var lastNumberInId = parseInt(e.id.charAt(idLength-1));   
			
			//Add 1 to the lastNumberInID then concatenate it with the rest of the name and 
			//with quotes so that it will be recognized as a string--Using the eval function
		var NextElementID = eval("'"+ExtractedIdName+(lastNumberInId+1)+"'");
			//move to next element or envoke tab key
		document.getElementById(NextElementID).focus();
	}
	return true;
}
				//Will it make a diff. on slow machine to run the one below?
				
	//this moves the cursor to the next box if the required # of digits were entered	
function tabNext(eArray,e,num){	
	if(e.value.length==num){	
		var position;
		for(i=0;i<eArray.length;i++){
			if(eArray[i].value == e.value && eArray[i].id == e.id){
				position = i; break;
			}
		}  
			//move focus to the next textbox or select box
		for(i=position+1;i<eArray.length;i++){
			if(eArray[i].type == "text"||eArray[i].type == "select-one"||eArray[i].type == "select-multiple"){
				eArray[i].focus(); break;
			}
		}
	}
	return true;
}

//this either checks or unchecks all checkboxes on form
function checkAll(form,box){
	for(x=0; x<form.elements.length;x++){
		//if element is a checkbox
		if(form.elements[x].type == "checkbox"){
			form.elements[x].checked = box.checked==true ? true:false;
		}
	}	
}
	//this builds a mailto: list of recipients based on the checkboxes that are checked
function buildEmails(form){
	var strRecipients="";
	for(x=0;x<form.elements.length;x++){
		if(form.elements[x].checked == true){
			strRecipients += form.elements["txt"+form.elements[x].name].value + "\;"; 
		}
	}	
		//remove dbl semi's which are created if there isn't a secondary email		
	document.getElementById("mailer").href="mailto:"+ strRecipients.replace(/\;\;/g,"\;");
	return true;		
}							

	//this function makes a certain row visible depending on the selected value of the first
	//select box. It makes all others invisible and resets them to default
function setSubCombo(box,typeValue){	//need to make the "" option selected before making invisible
	if(typeValue!=""){
			//make all others invisible
		for(i=0;i<box.options.length;i++){
			if(box.options[i].value==typeValue){	//if this option is the one that was selected
				if(document.getElementById(typeValue)){	//make sure this option has a related subType
					document.getElementById(typeValue).style.display="";
				}
			}
			else{		//this isn't the option that was selected
				if(document.getElementById(box.options[i].value)){
						//need to reset select box to default then make it invisible
					document.getElementById(box.options[i].value+"2").selectedIndex=0;
					document.getElementById(box.options[i].value).style.display="none";
				}
			}
		}
			//need to hide the default select box which only appears if this is an update, not an add new
		if(document.getElementById("default")){document.getElementById("default").style.display="none";}
	}
	else{    //else make all invisible
		for(i=0;i<box.options.length;i++){
			if(document.getElementById(box.options[i].value)){	//make sure this option has a related subType
					//need to reset select box to default then make it invisible
				document.getElementById(box.options[i].value+"2").selectedIndex=0;
				document.getElementById(box.options[i].value).style.display="none";
			}
		}
			//need to hide the default select box which only appears if this is an update, not an add new
		if(document.getElementById("default")){document.getElementById("default").style.display="none";}
	}
}	
		//this removes all options in Select box
function remOptions(box){
	var arryLength = box.options.length;
    for(i=0;i<arryLength;i++){
		box.options.remove(0);
	}
}
		//this adds an option to a Select tag that were sent in as parameters
function makeOptions(box,text,value){
	var option = new Option(text,value);
	box.options.add(option);
}
	
	//this confirms a deletion
function confirmDelete(){
	var blnConfirm = confirm("Are you sure you want to delete this record?");
	return blnConfirm;
}

    //used to set the action to the query string generated by looping
	//every value and appending it to the query string--I did it like this
	//becuase you can't use request.form when setting the encrypt type
	//to allow file uploads---Toby STeele (the man of steel)
	
function setAction(form,file){	
	var strQryString = file + "?x=1";	//this x=1 is a dummy variable so all the rest can just use & and name value pair
	for (i=0; i<form.elements.length; i++){				//url encode any ampersands and # signs, or it will mess up the query string
		strQryString += "&" + form.elements[i].name + "=" + escape(form.elements[i].value);
		}
	form.action = strQryString;
//	alert(strQryString);		//Use this is check what is being sent
	return true;		//added for old browser compatibility
}			
		   
//this function sets the focus to the first textbox on the form that is sent in as a parameter (o).
function Focus1stBox(o){   //alert("hi");
 	for(i=0; i<o.elements.length;i++){    
		if((o.elements[i].type == "text" || o.elements[i].type == "select-one") && o.elements[i].style.visibility!="hidden" && o.elements[i].style.display!="none"){
			o.elements[i].focus(); 
			return true;
		}
	}
	return true;
}

//this is used for development purposes -  it populates each textbox and drop down box so that you
//don't have to enter data manually each time--which could get time consuming if there were a lot of 
//textboxes
function testData(o){
	var x=1;
 	for(i=0; i<o.elements.length;i++){
		if (o.elements[i].type == "submit" || o.elements[i].type == "reset" || o.elements[i].disabled==true){
			continue;
		}else{
			if(o.elements[i].type == "select-one"){
				o.elements[i].selectedIndex = 1;
			}
			else if(o.elements[i].type == "checkbox"){
				o.elements[i].checked = true;
			}
			else if(o.elements[i].name.match(/date/i)){
				o.elements[i].value = "5/5/2000";
			}
			else{	
				o.elements[i].value = x; x += 1;
			}
		}	
	}
}
		   
	//this will toggly the display from visible to hidden
function toggle(o1,oElement){
	if(o1.style.display == ""){
		o1.style.display = "none";
	}				//NEED TO CHECK TO SEE IF ITS SUBMIT1 OR 2 AND CHANGE THE ONSUBMIT EVENT
	else
	{	
		o1.style.display = "";
		oElement.focus();
	}
	return true;		//added for old browser compatibility
}
		   