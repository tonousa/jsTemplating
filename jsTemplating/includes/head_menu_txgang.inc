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
    onlineMenu.addMenuItem("Driver License Renewal", "location='http://texasonline.state.tx.us/NASApp/rap/apps/dpsdl/jsp/eng/welcome.jsp'");
    onlineMenu.addMenuItem("Conviction Records", "location='http://records.txdps.state.tx.us'");
    onlineMenu.addMenuItem("Sex Offender", "location='http://records.txdps.state.tx.us/soSearch/default.cfm'");
    onlineMenu.addMenuItem("Concealed Handgun", "location='http://www.texasonline.state.tx.us/NASApp/txdps/chl/common/jsp/welcome.jsp'");
    onlineMenu.addMenuItem("T.R.I.P.", "location='http://records.txdps.state.tx.us/mvt/default.cfm'");
    onlineMenu.addMenuItem("Downloadable Forms", "location='/forms/'");

    window.geninfo1SubMenu = new Menu("Complaint Process");
    geninfo1SubMenu.addMenuItem("English Version", "location='/director_staff/internal_affairs/complaint.htm'");
    geninfo1SubMenu.addMenuItem("En Espanol", "location='/director_staff/internal_affairs/complaint-esp.htm'");

    window.geninfo2SubMenu = new Menu("Crime Records");
    geninfo2SubMenu.addMenuItem("CCH Redesign Project", "location='/cchproject/'");
    geninfo2SubMenu.addMenuItem("Concealed Handgun", "location='/rsd/chl/index'");
    geninfo2SubMenu.addMenuItem("Crime Statistics", "location='/crimereports/'");

    window.geninfoMenu = new Menu("General Information");
    geninfoMenu.addMenuItem(window.geninfo2SubMenu);
    geninfoMenu.addMenuItem("Driver License", "location='/administration/driver_licensing_control/dlindex.htm'");
    geninfoMenu.addMenuItem("Parent Taught Driver Education", "location='/administration/driver_licensing_control/license_issuance/parenttaught.html'");
    geninfoMenu.addMenuItem("Concealed Handgun", "location='/rsd/chl/index.htm'");
    geninfoMenu.addMenuItem("Vehicle Inspection", "location='/rsd/vi/'");
    geninfoMenu.addMenuItem("Law Enforcement Training", "location='/trainingacademy/police_training/'");
    geninfoMenu.addMenuItem("Emergency Management", "location='/dem/'");
    geninfoMenu.addMenuItem("Controlled Substances Reg.", "location='/criminal_law_enforcement/narcotics/Controlled_Substances/'");
    geninfoMenu.addMenuItem("Motorcycle Safety", "location='/msb/'");
    geninfoMenu.addMenuItem("Occupant Restraint Laws", "location='/director_staff/public_information/seatbelt.htm'");
    geninfoMenu.addMenuItem("H.E.A.T. (Help End Auto Theft)", "location='http://records.txdps.state.tx.us/heat/'");
    geninfoMenu.addMenuItem("Computer Crime Information", "location='/ccrime.htm'");
    geninfoMenu.addMenuItem("Psychological Services", "location='/administration/index.htm#Psychological Services Bureau'");
    geninfoMenu.addMenuItem("Texas Gangs", "location='/txgangs/'");
    geninfoMenu.addMenuItem("School Bus", "location='/schoolbus/'");
    geninfoMenu.addMenuItem("CODIS DNA Database Program", "location='/codis/'");
    geninfoMenu.addMenuItem("DPS Museum", "location='http://txdpsmuseum.org'");
    geninfoMenu.addMenuItem("Crime Statistics", "location='/crimereports/'");
    geninfoMenu.addMenuItem("CCH Redesign Project", "location='/cchproject/'");
    geninfoMenu.addMenuItem("Austin HQ Map", "location='/hqmap_austin.htm'");
    geninfoMenu.addMenuItem(window.geninfo1SubMenu);

    window.about1SubMenu = new Menu("General Information");
    about1SubMenu.addMenuItem("Mission Statement", "location='/mission.htm'");
    about1SubMenu.addMenuItem("Motto", "location='/motto.htm'");
    about1SubMenu.addMenuItem("Directors", "location='/directors.htm'");

    window.about2SubMenu = new Menu("DPS Structure");
    about2SubMenu.addMenuItem("Commissioners", "location='/public_safety_commission/'");
    about2SubMenu.addMenuItem("Organization Structure", "location='/overview/'");
    about2SubMenu.addMenuItem("Annual Report", "location='/director_staff/accounting/'");

    window.about3SubMenu = new Menu("Mandates");
    about3SubMenu.addMenuItem("Strategic Plan", "location='/oai/'");
    about3SubMenu.addMenuItem("Enabling Legislation", "location='http://www.capitol.state.tx.us/statutes/go/go0041100toc.html'");
    about3SubMenu.addMenuItem("Administrative Rules", "location='http://info.sos.state.tx.us/pub/plsql/readtac$ext.ViewTAC?tac_view=3&ti=37&pt=1'");

    window.about4SubMenu = new Menu("Doing Business with DPS");
    about4SubMenu.addMenuItem("HUB", "location='/director_staff/accounting/hub.htm'");
    about4SubMenu.addMenuItem("Contracts", "location='/director_staff/accounting/contract_listing.html'");

    window.aboutMenu = new Menu("About DPS");
    aboutMenu.addMenuItem(window.about1SubMenu);
    aboutMenu.addMenuItem("Inside DPS", "location='/inside.htm'");
    aboutMenu.addMenuItem(window.about2SubMenu);
    aboutMenu.addMenuItem(window.about3SubMenu);
    aboutMenu.addMenuItem("DL Locations", "location='/administration/driver_licensing_control/rolodex/search.asp'");
    aboutMenu.addMenuItem(window.about4SubMenu)
    aboutMenu.addMenuItem("Tribute to Fallen Officers", "location='/memorial/'");
    
    window.newsMenu = new Menu("News");
    newsMenu.addMenuItem("Press Releases", "location='/director_staff/public_information/press.htm'");
    newsMenu.addMenuItem("Public Information Office", "location='/director_staff/public_information/'");
    newsMenu.addMenuItem("Emergency Management", "location='/dem/'");
    newsMenu.addMenuItem("Missing Persons", "location='/mpch/'");
    newsMenu.addMenuItem("Texas Top 10 Most Wanted", "location='/wanted/'");
    newsMenu.addMenuItem("Fugitive Sex Offenders", "location='/criminal_law_enforcement/special_crimes/fugitives/0introduction.htm'");
    newsMenu.addMenuItem("Capitol News", "location='/Capitol_News/capnews.htm'");
    newsMenu.addMenuItem("Chaparral", "location='/director_staff/public_information/publications/chaparral/chaplist.htm'");
    newsMenu.addMenuItem("Calendar Events", "location='/calendar/index.htm'");
    newsMenu.addMenuItem("Fleet Auctions", "location='/administration/staff_support/fleet/auction.htm'");

    window.jobsMenu = new Menu("Employment");
    jobsMenu.addMenuItem("Employment Listings", "location='/administration/staff_support/human_resources/jobs/jobsearch.asp'");
    jobsMenu.addMenuItem("Become a State Trooper", "location='/trainingacademy/recruiting/traineelinks.htm'");

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