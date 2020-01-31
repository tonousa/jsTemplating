<%

'get category job types checked by user
Dim aryJobCategory(8)
Dim iCategoryValue
Dim iCount
Dim iCount2
Dim sSQLCatType


'sJobCategory=Request.Form("chkTypeOfJob")
'Response.Write sJobCategory
'If IsNull(sJobCategory) Then
	'no job catgory was selected
'	blnNoJobCategory = "True"
'End If

'find out number of selections
sStrLen = Len(sJobCategory)
'put first selection in first array element
aryJobCategory(1) = Left(sJobCategory, 1)

For iCount = 1 to sStrLen
	If Mid(sJobCategory, iCount, 1) = "," Then
		'put the rest of selections in array if it finds a comma
		iCategoryValue = mid(sJobCategory, iCount + 2, 1)
		aryJobCategory(iCount) = iCategoryValue
		iCount2 = iCount2 + 2
	End If
Next

If Not IsNull(aryJobCategory(1)) And sStrLen = 1 Then
	'if only one job category is selected add the value of 1 to variable iCount2
	iCount2 = 1
End If

'initialize variables
iCount = 0
sSQLCatType = ""

For iCount = 1 to iCount2
	'assign array element value to variable iCategoryValue
	iCategoryValue = aryJobCategory(iCount)
	Select Case iCategoryValue
		Case 1
			'iCategoryValue equals to 1
			sSQLCatType = sSQLCatType + "an_class_title like '%' "
		Case 2
			'iCategoryValue equals to 2
			If iCount2 > 1 And iCount <> iCount2 Then
				'the total job category selected is greater than one and the current element value does not equal total job category selected
				'this means there are more job category query criteria to append
				sSQLCatType = sSQLCatType + "an_class_title like '%account%' OR an_class_title like '%book%' OR an_class_title like '%budget%' OR "
			Else
				'no more job category query criteria to append, the logical OR operator is missing at the end of the string
				sSQLCatType = sSQLCatType + "an_class_title like '%account%' OR an_class_title like '%book%' OR an_class_title like '%budget%' "
			End If
		Case 3
			If iCount2 > 1 And iCount <> iCount2 Then
				sSQLCatType = sSQLCatType + "an_class_title like '%cler%' OR an_class_title like '%admini%' OR "
			Else
				sSQLCatType = sSQLCatType + "an_class_title like '%cler%' OR an_class_title like '%admini%' "
			End If
		Case 4
			If iCount2 > 1 And iCount <> iCount2 Then
				sSQLCatType = sSQLCatType + "an_class_title like '%law enf%' OR an_class_title like '%police%' OR an_class_title like '%trooper%' OR "
			Else
				sSQLCatType = sSQLCatType + "an_class_title like '%law enf%' OR an_class_title like '%police%' OR an_class_title like '%trooper%' "
			End If
		Case 5
			If iCount2 > 1 And iCount <> iCount2 Then
				sSQLCatType = sSQLCatType + "an_class_title like '%attorney%' OR an_class_title like '%legal%' OR "
			Else
				sSQLCatType = sSQLCatType + "an_class_title like '%attorney%' OR an_class_title like '%legal%' "
			End If
		Case 6
			If iCount2 > 1 And iCount <> iCount2 Then
				sSQLCatType = sSQLCatType + "an_class_title like '%manage%' OR an_class_title like '%director%' OR "
			Else
				sSQLCatType = sSQLCatType + "an_class_title like '%manage%' OR an_class_title like '%director%' "
			End If
		Case 7
			If iCount2 > 1 And iCount <> iCount2 Then
				sSQLCatType = sSQLCatType + "an_class_title like '%service%' OR an_class_title like '%maint%' OR "
			Else
				sSQLCatType = sSQLCatType + "an_class_title like '%service%' OR an_class_title like '%maint%' "
			End If
		Case 8
			If iCount2 > 1 And iCount <> iCount2 Then
				sSQLCatType = sSQLCatType + "an_class_title like '%tech%' OR an_class_title like '%computer%' OR "
			Else				
				sSQLCatType = sSQLCatType + "an_class_title like '%tech%' OR an_class_title like '%computer%' "
			End If
		Case Else
			'no job category was selected
			sSQLCatType = ""
	End Select
								
Next
'response.write sSQLCatType

%>