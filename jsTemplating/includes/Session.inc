<%
if session("Admin") = "" then
'development	
    response.redirect "/MPCH/admin/AdminLogin.asp?Redirect=" & request.servervariables("SCRIPT_NAME") & "?" & Request.ServerVariables("QUERY_STRING")
  
'production 	
  response.redirect "/MPCH/admin/AdminLogin.asp?Redirect=" & request.servervariables("SCRIPT_NAME") & "?" & Request.ServerVariables("QUERY_STRING")

    Response.Flush
    Response.End
	
end if %>