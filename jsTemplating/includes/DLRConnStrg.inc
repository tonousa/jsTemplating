<%
'this is used to set up the connection object and its connection string

dim cnOffice
set cnOffice = Server.CreateObject("ADODB.Connection")
cnOffice.ConnectionString = "Driver={SQL Server}; Server=InetDev; Database=DLRolodex; UID=INET_DLROLODEX; PWD=lucky;"

'cnOffice.ConnectionString = "PROVIDER=SQLOLEDB; DATA SOURCE=192.168.17.101; INITIAL CATALOG=DL; USER ID=131xedolor474; PASSWORD=rem465lig321; NETWORK LIBRARY=dbmssocn;"


	'Immediate if function to support it in ASP
Function IIf(i,j,k)
    If i Then IIf = j Else IIf = k
End Function

%>