<%

'get category job types checked by user
Dim aryJobCategory(20)
Dim iCategoryValue
Dim iCount
Dim iCount2
Dim sSQLCatType
Dim iTotalRecs
Dim blnFoundComma

iCount2 = 1
'Set rst = Server.CreateObject("ADODB.Recordset")
'find out number of selections
sStrLen = Trim(Len(sJobCategory))

If sStrLen = 1 Then
	'put first selection in first array element
	aryJobCategory(1) = Left(sJobCategory, 1)
	iCount2 = 1
ElseIf sStrLen = 2 Then
	'put first selection in first array element
	aryJobCategory(1) = Left(sJobCategory, 2)
	'response.write ":::" & aryJobCategory(1)
	iCount2 = 1
Else	
	'create an array on all Job Categories selected
	sJobCategory = sJobCategory + "," '*put comma to gather last number

	iCount2 = 0
	For iCount = 1 to sStrLen + 1
		If Mid(sJobCategory, iCount, 1) <> "," Then
			If Mid(sJobCategory, iCount, 1) <> " " Then
				'put the rest of selections in array if it finds a comma
				iCategoryValue = iCategoryValue + mid(sJobCategory, iCount, 1)
				'response.write iCategoryValue
			End If						
		Else
			'*
			If Mid(sJobCategory, iCount, 1) = "," Then		
				iCount2 = iCount2 + 1
				aryJobCategory(iCount2) = iCategoryValue
				
				iCategoryValue = ""
			End If
		End If
	Next
	
End If	

'if only on Job Category was selected
'If Not IsNull(aryJobCategory(1)) And sStrLen = 1 Then
'	'if only one job category is selected add the value of 1 to variable iCount2
'	iCount2 = 1
'End If

'initialize variables
iCount = 0
'create query to find job announcement numbers from the Job Categories selected
sSQLCatType = "SELECT DISTINCT AN_ANNOUNCEMENT_DATA_ENTITY.AN_ANNOUNCE_NUM, AN_ANNOUNCEMENT_DATA_ENTITY.AN_CITY "
sSQLCatType = sSQLCatType & "FROM LU_CATEGORY INNER JOIN "
sSQLCatType = sSQLCatType & "JC_Job_Category_XREF ON LU_CATEGORY.i_unique = JC_Job_Category_XREF.JC_ID "
sSQLCatType = sSQLCatType & "RIGHT OUTER JOIN AN_ANNOUNCEMENT_DATA_ENTITY ON "
sSQLCatType = sSQLCatType & "JC_Job_Category_XREF.JC_ANNOUNCE_NUM = AN_ANNOUNCEMENT_DATA_ENTITY.AN_ANNOUNCE_NUM " 
sSQLCatType = sSQLCatType & "WHERE "

'create WHERE criteria -- using values from the Job Category check boxes
For iCount = 1 to iCount2
	'assign array element value to variable iCategoryValue
	iCategoryValue = aryJobCategory(iCount)
	'response.write iCategoryValue & "<br>"
	Select Case iCategoryValue
		'Case 0
		'	'all categories - iCategoryValue equals to 0		
		'	sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID <> 0"
		Case 1
			'-------------------------------------------------------------------------------------------------------
			' iCategoryValue equals to 1
			' iCount2 equals to 1 means only one checkbox was selected, only one record found
			' iCount equals to iCount2 means the counter matches the last record found, so we don't want another 'OR'
			'--------------------------------------------------------------------------------------------------------
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 1 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 1 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 1 OR "
			End If						
		Case 2
			'iCategoryValue equals to 2
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 2 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 2 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 2 OR "
			End If						
		Case 3
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 3 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 3 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 3 OR "
			End If						
		Case 4
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 4 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 4 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 4 OR "
			End If						
		Case 5
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 5 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 5 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 5 OR "
			End If						
		Case 6
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 6 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 6 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 6 OR "
			End If						
		Case 7
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 7 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 7 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 7 OR "
			End If						
		Case 8
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 8 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 8 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 8 OR "
			End If						
		Case 9
			'iCategoryValue equals to 9
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 9 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 9 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 9 OR "
			End If						
		Case 10
			'iCategoryValue equals to 10
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 10 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 10 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 10 OR "
			End If						
		Case 11
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 11 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 11 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 11 OR "
			End If						
		Case 12
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 12 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 12 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 12 OR "
			End If						
		Case 13
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 13 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 13 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 13 OR "
			End If						
		Case 14
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 14 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 14 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 14 OR "
			End If						
		Case 15
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 15 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 15 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 15 OR "
			End If						
		Case 16
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 16 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 16 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 16 OR "
			End If						
		Case 17
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 17 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 17 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 17 OR "
			End If						
		Case 18
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 18 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 18 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 18 OR "
			End If						
		Case 19
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 19 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 19 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 19 OR "
			End If						
		Case 20
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 20 "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 20 "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = 20 OR "
			End If						
		Case Else
			If iCount2 = 1 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = '' "
			ElseIf iCount = iCount2 Then
					sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = '' "
			Else
				sSQLCatType = sSQLCatType + "JC_Job_Category_XREF.JC_ID = '' OR "
			End If						
	End Select
Next
'austin jobs
sSQLCatTypeA = sSQLCatType & " AND an_announcement_data_entity.an_city like '%austin%'"	
'statewide jobs
sSQLCatTypeS = sSQLCatType & " AND an_announcement_data_entity.an_city not like '%austin%'"	
''test:
''Response.Write sSQLCatTypeA
'---------------------------------------
' open connection to database
'--------------------------------------- 
Set cn = Server.CreateObject("ADODB.Connection")
Set rst = Server.CreateObject("ADODB.Recordset")

cn.ConnectionString = "PROVIDER=SQLOLEDB; DATA SOURCE=192.168.17.101; INITIAL CATALOG=JOBPROCESS; User ID=!n3t_HR; Password=c00l!0; NETWORK LIBRARY=dbmssocn;"
'cn.ConnectionString = "PROVIDER=SQLOLEDB; DATA SOURCE=192.168.17.101; INITIAL CATALOG=JOBPROCESS; User ID=INET_HR; Password=lucky; NETWORK LIBRARY=dbmssocn;"
cn.Open
'run query
'Response.Write "<br>sSQLCatTypeA:<br>" & sSQLCatTypeA 
rst.Open sSQLCatTypeA, cn, 3, 1 '3 = adOpenKeyset, 1 = adLockOptimistic

sJobCategory = ""
sJobCatAustin = ""
sJobCatState = ""
iCounter = 0
sTotalRecsA = rst.RecordCount
If sTotalRecsA > 0 Then
'create sJobCategory for sSQL query in jobresults.asp
'uses results (an_announce_num ) from query sSQLCatType to create sJobCategory
With rst
	While Not .EOF
			iCounter = iCounter + 1
			If sTotalRecsA = 1 Then
				sJobCategory = "an_announcement_data_entity.an_announce_num = '" & .Fields("an_announce_num") & "' "
			ElseIf sTotalRecsA <> iCounter Then
				If iCounter >= 1 Then
					sJobCategory = sJobCategory & "an_announcement_data_entity.an_announce_num = '" & .Fields("an_announce_num") & "' OR "
				End If
			ElseIf sTotalRecsA = iCounter Then
				sJobCategory = sJobCategory & "an_announcement_data_entity.an_announce_num = '" & .Fields("an_announce_num") & "' "
			End If		
		.MoveNext
	Wend
End With
	sJobCatAustin = sJobCategory
End If

rst.Close
sJobCategory = ""
'Response.Write "<br>sSQLCatTypeS:<br>" & sSQLCatTypeS
rst.Open sSQLCatTypeS, cn, 3, 1 '3 = adOpenKeyset, 1 = adLockOptimistic
iCounter = 0
sTotalRecsS = rst.RecordCount
If sTotalRecsS > 0 Then
'create sJobCategory for sSQL query in jobresults.asp
'uses results (an_announce_num ) from query sSQLCatType to create sJobCategory
With rst
	While Not .EOF
			iCounter = iCounter + 1
			If sTotalRecsS = 1 Then
				sJobCategory = "an_announcement_data_entity.an_announce_num = '" & .Fields("an_announce_num") & "' "
			ElseIf sTotalRecsS <> iCounter Then
				If iCounter >= 1 Then
					sJobCategory = sJobCategory & "an_announcement_data_entity.an_announce_num = '" & .Fields("an_announce_num") & "' OR "
				End If
			ElseIf sTotalRecsS = iCounter Then
				sJobCategory = sJobCategory & "an_announcement_data_entity.an_announce_num = '" & .Fields("an_announce_num") & "' "
			End If		
		.MoveNext
	Wend
End With
	sJobCatState = sJobCategory
End If
			
sSQLCatType = ""

%>