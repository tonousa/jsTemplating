				var theDate = new Date();
				var months = "January February March April May June July August September October Novemeber December";
				months = months.split(" ");
				var strDate = months[theDate.getMonth()] + " " + theDate.getDate() + ', ' + theDate.getFullYear();
				document.write (strDate);