<div style="float:left; margin-left:40px;" id="google_translate_element"></div>
<script>
	function googleTranslateElementInit() {
	  new google.translate.TranslateElement({pageLanguage: 'en', includedLanguages: 'en,es'}, 'google_translate_element');
	}
</script>
<script src="//translate.google.com/translate_a/element.js?cb=googleTranslateElementInit">
</script>

<div id="nowrapDiv" style="white-space: nowrap;">
<form id="searchForm" style="margin-top:3px;" method="get" action="/spSearch/">

<!-- <label for="Search" style="font-size:6pt; color:#ffffff;">Enter Text Below</label><br /> -->
<input 
	type="text"
	title="Input Search Text" 
	style="font-size:12px; 
	font-weight:600; 
	color:#08497B; 
	height:13px; 
	margin-top:0px;	
	margin-bottom:0px;
	margin-left:-5px;	
	padding-bottom:2px;
	padding-left:2px; 
	border:solid 1px #6B92B5;"
	name="q"  
	size="18" 
	maxlength="150" 
	id="Search" 
	value="Search DPS" 
	onfocus="if (this.value=='Search DPS'){this.value='';};return false;" onblur="if (this.value==''){this.value='Enter text here';return false;}"  tabindex="0"/>

<input type="image" style="margin-left:-2px; margin-top:0px; margin-right:10px; vertical-align:middle; cursor:pointer;" name="btnG" src="/images/searchBtn.png" alt="Search DPS" id="Image1"  title="Search Button" tabindex="0"/>

     
    <input type="hidden" name="site" value="DPSInternet" /> <!--value="ER" />-->
    <input type="hidden" name="client" value="DPSInternet" /> 
    <input type="hidden" name="proxystylesheet" value="DPSInternet" /> 
    <input type="hidden" name="output" value="xml_no_dtd" /> 
    <input type="hidden" name="getfields" value="title.keywords" />
    <!--<input type="hidden" name="getfields" value="" />-->
    <!--<input type="hidden" name="restrict" value="ER"/>-->
    
</form>
</div>