<style>
<!--
P { 	font-size: 10pt;
	color: black; 
	font-family: Verdana, Arial, Helvetica, sans-serif; }
TD { 	font-size: 10pt;
	color: black; 
	font-family: Verdana, Arial, Helvetica, sans-serif; }

.link { font-size: 10px;
        text-decoration: none;
	font-family: Verdana, Arial, Helvetica, sans-serif; }
-->
</STYLE>

<!-- link rel="stylesheet" type="text/css" href="/includes/styles/dpsnetstyles.css" -->
<!-- link rel="stylesheet" type="text/css" href="/includes/styles/hstyle.css" -->

<SCRIPT LANGUAGE="JavaScript1.2" SRC="/includes/menu.js"></SCRIPT>
<SCRIPT LANGUAGE="JavaScript1.2">
<!--
function onLoad() {
    if (document.layers) {
        loadMenus();
    }
}

function loadMenus() {
    //Dynamic Menus

    window.onlineMenu = new Menu("Online Services");
	onlineMenu.addMenuItem("Private Security Bureau", "location='/psb/licenses.aspx'");
    onlineMenu.addMenuItem("TX DL/ID Card Renewal", "location='http://texasonline.state.tx.us/NASApp/rap/apps/dpsdl/jsp/eng/welcome.jsp'");
    onlineMenu.addMenuItem("TX DL/ID Card Address Change", "location='http://texasonline.state.tx.us/NASApp/rap/apps/dpsdl/jsp/eng/welcome.jsp'");
    onlineMenu.addMenuItem("Conviction Records", "location='http://records.txdps.state.tx.us'");
    onlineMenu.addMenuItem("Sex Offender", "location='http://records.txdps.state.tx.us/soSearch/default.cfm'");
    onlineMenu.addMenuItem("Concealed Handgun", "location='http://www.texasonline.state.tx.us/NASApp/txdps/chl/common/jsp/welcome.jsp'");
    onlineMenu.addMenuItem("Arrest Titles", "location='/director_staff/ogc/titlesindex.htm'");
    onlineMenu.addMenuItem("T.R.I.P.", "location='http://records.txdps.state.tx.us/mvt/default.cfm'");
    onlineMenu.addMenuItem("Downloadable Information", "location='/forms/'");

    window.geninfo1SubMenu = new Menu("Complaint Process");
    geninfo1SubMenu.addMenuItem("English Version", "location='/director_staff/internal_affairs/complaint.htm'");
    geninfo1SubMenu.addMenuItem("En Espanol", "location='/director_staff/internal_affairs/complaint-esp.htm'");

    window.geninfo2SubMenu = new Menu("Crime Records");
    geninfo2SubMenu.addMenuItem("Crime Statistics", "location='/crimereports/citindex.htm'");
    geninfo2SubMenu.addMenuItem("Data Sharing Initiatives", "location='/administration/crime_records/sajicc/index.htm'");
	geninfo2SubMenu.addMenuItem("Applicant Fingerprint Services", "location='/administration/crime_records/applicantfingerprintservices.htm'");


    window.geninfoMenu = new Menu("General Information");
    geninfoMenu.addMenuItem(window.geninfo2SubMenu);
    geninfoMenu.addMenuItem("Driver License", "location='/administration/driver_licensing_control/dlindex.htm'");
	geninfoMenu.addMenuItem("UCR Redesign Project", "location='/UCRProject.htm'");
    geninfoMenu.addMenuItem("Parent Taught Driver Education", "location='/administration/driver_licensing_control/parenttaught.htm'");
    geninfoMenu.addMenuItem("Failure to Appear", "location='/administration/driver_licensing_control/license_issuance/fta.htm'");
    geninfoMenu.addMenuItem("Concealed Handgun", "location='/administration/crime_records/chl/chlsindex.htm'");
    geninfoMenu.addMenuItem("Vehicle Inspection", "location='/vi/'");
	geninfoMenu.addMenuItem("Private Security Bureau", "location='/psb/'");
    geninfoMenu.addMenuItem("Law Enforcement Training", "location='/trainingacademy/police_training/'");
    geninfoMenu.addMenuItem("Emergency Management", "location='/dem/'");
    geninfoMenu.addMenuItem("Controlled Substances Reg.", "location='/criminal_law_enforcement/narcotics/pages/regulatory.htm'");
    geninfoMenu.addMenuItem("Motorcycle Safety", "location='/msb/'");
    geninfoMenu.addMenuItem("Occupant Restraint Laws", "location='/director_staff/public_information/seatbelt.htm'");
    geninfoMenu.addMenuItem("Computer Crime Information", "location='/ccrime.htm'");
    geninfoMenu.addMenuItem("Fast Facts", "location='/director_staff/public_information/Fast_facts/index.htm'");
    geninfoMenu.addMenuItem("Psychological Services", "location='/administration/index.htm#Psychological Services Bureau'");
    geninfoMenu.addMenuItem("Texas Gangs", "location='/txgangs/'");
    geninfoMenu.addMenuItem("School Bus", "location='/schoolbus/'");
    geninfoMenu.addMenuItem("CODIS DNA Database Program", "location='/codis/'");
	geninfoMenu.addMenuItem("DPS Laboratory Accreditation", "location='/CrimeLaboratory/labindex.htm'");
    geninfoMenu.addMenuItem("DPS Museum", "location='http://texasdpsmuseum.com/'");
    geninfoMenu.addMenuItem("Crime Statistics", "location='/crimereports/citindex.htm'");
	geninfoMenu.addMenuItem("H.E.A.T. (Help End Auto Theft)", "location='http://records.txdps.state.tx.us/heat/'");
    geninfoMenu.addMenuItem("T.R.I.P.", "location='http://records.txdps.state.tx.us/mvt/default.cfm'");
	geninfoMenu.addMenuItem("Austin HQ Map", "location='/hqmap_austin.htm'");
    geninfoMenu.addMenuItem(window.geninfo1SubMenu);

    window.about1SubMenu = new Menu("General Information");
    about1SubMenu.addMenuItem("Mission Statement", "location='/mission.htm'");
    about1SubMenu.addMenuItem("Motto", "location='/motto.htm'");
    about1SubMenu.addMenuItem("Directors", "location='/directors.htm'");

    window.about2SubMenu = new Menu("DPS Structure");
    about2SubMenu.addMenuItem("Commissioners", "location='/public_safety_commission/'");
    about2SubMenu.addMenuItem("Organization Structure", "location='/overview/'");
    about2SubMenu.addMenuItem("Annual Report", "location='/director_staff/public_information/reports.htm'");

    window.about3SubMenu = new Menu("Mandates");
    about3SubMenu.addMenuItem("Agency Strategic Plan", "location='/oai/'");
    about3SubMenu.addMenuItem("Enabling Legislation", "location='http://www.capitol.state.tx.us/statutes/docs/GV/content/word/gv.004.00.000411.00.doc'");
    about3SubMenu.addMenuItem("Administrative Rules", "location='http://info.sos.state.tx.us/pls/pub/readtac$ext.ViewTAC?tac_view=3&ti=37&pt=1'");

    window.about4SubMenu = new Menu("Doing Business with DPS");
    about4SubMenu.addMenuItem("HUB", "location='/director_staff/accounting/hub.htm'");
    about4SubMenu.addMenuItem("Contracts", "location='/director_staff/accounting/contract_listing.pdf'");
    
    window.aboutMenu = new Menu("About DPS");
    aboutMenu.addMenuItem(window.about1SubMenu);
    aboutMenu.addMenuItem("Inside DPS", "location='/inside.htm'");
    aboutMenu.addMenuItem(window.about2SubMenu);
    aboutMenu.addMenuItem(window.about3SubMenu);
    aboutMenu.addMenuItem("Agency Strategic Plan", "location='/oai/'");
	aboutMenu.addMenuItem("Leg. App. Request (16mb-.pdf)", "location='/director_staff/accounting/lar0607.pdf'");
	aboutMenu.addMenuItem("DL Locations", "location='/administration/driver_licensing_control/rolodex/search.asp'");
    aboutMenu.addMenuItem(window.about4SubMenu)
    aboutMenu.addMenuItem("Tribute to Fallen Officers", "location='/memorial/'");
	
    
    window.newsMenu = new Menu("News");
    newsMenu.addMenuItem("Press Releases", "location='/director_staff/public_information/press.htm'");
    newsMenu.addMenuItem("Public Information Office", "location='/director_staff/public_information/'");
    newsMenu.addMenuItem("Emergency Management", "location='/dem/'");
    newsMenu.addMenuItem("Missing Persons", "location='/mpch/'");
    newsMenu.addMenuItem("Texas Top 10 Most Wanted", "location='/wanted/'");
    newsMenu.addMenuItem("Capitol News", "location='/Capitol_News/capnews.htm'");
    newsMenu.addMenuItem("Chaparral", "location='/director_staff/public_information/publications/chaparral/chaplist.htm'");
    newsMenu.addMenuItem("Calendar Events", "location='/calendar/index.htm'");
    newsMenu.addMenuItem("Fleet Auctions", "location='/administration/staff_support/fleet/auction.htm'");

    window.jobsMenu = new Menu("Employment");
    jobsMenu.addMenuItem("Employment Listings", "location='/administration/staff_support/human_resources/jobs/jobsearch.asp'");
    jobsMenu.addMenuItem("Become a State Trooper", "location='/trainingacademy/Trooper_Trainee/traineelinks.htm'");

    onlineMenu.menuItemBgColor = "#CC0000";
    onlineMenu.menuHiliteBgColor = "#FFFFFF";
    onlineMenu.bgColor = "#AAAAAA";
    onlineMenu.fontWeight = "bold";
    onlineMenu.childMenuIcon = "/includes/images/arrow.gif";
    
    onlineMenu.disableDrag = true;
    geninfoMenu.disableDrag = true;
    about1SubMenu.disableDrag = true;
    about2SubMenu.disableDrag = true;
    about3SubMenu.disableDrag = true;
    about4SubMenu.disableDrag = true;
    aboutMenu.disableDrag = true;
    newsMenu.disableDrag = true;
    jobsMenu.disableDrag = true;

    onlineMenu.prototypeStyles = onlineMenu;

    onlineMenu.writeMenus();
}

//-->
</SCRIPT>