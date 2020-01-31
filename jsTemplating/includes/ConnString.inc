<%
'this is used to set up the connection object and its connection string

dim ConMP
set conMP = Server.CreateObject("ADODB.Connection")

'Development Connection string
'conMP.ConnectionString = "Driver={SQL Server}; Server=IMS_g51_51; Database=MPCH; UID=mp; PWD=mp;"

'test string
conMP.ConnectionString = "PROVIDER=SQLOLEDB; DATA SOURCE=TSTSQLCLUS01E; INITIAL CATALOG=MPCH; USER ID=9GE41V27; PASSWORD=nu+ra3He;"


%>