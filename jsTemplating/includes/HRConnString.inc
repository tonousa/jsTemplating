<%
'this is used to set up the connection object and its connection string

Dim cn
Dim rs

Set cn = Server.CreateObject("ADODB.Connection")
Set rs = Server.CreateObject("ADODB.Recordset")

'---------------------------------------
' Connection string
'--------------------------------------- 
cn.ConnectionString = "PROVIDER=SQLOLEDB; DATA SOURCE=192.168.17.101; INITIAL CATALOG=JOBPROCESS; User ID=!n3t_HR; Password=c00l!0; NETWORK LIBRARY=dbmssocn;"
'cn.ConnectionString = "PROVIDER=SQLOLEDB; DATA SOURCE=192.168.17.101; INITIAL CATALOG=JOBPROCESS; User ID=INET_HR; Password=lucky; NETWORK LIBRARY=dbmssocn;"
'cn.ConnectionString = "Provider=SQLOLEDB; Data Source=IMS_G51_51; User ID=INET_HR; Password=lucky;"
'Immediate if function to support it in ASP
Function IIf(i,j,k)
    If i Then IIf = j Else IIf = k
End Function

%>