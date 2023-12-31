#!/bin/bash
printf "welcome to my site scrapper |____0000____|
|-------------------------------------------------------------------------------------------|
|--------------------These are the available tools for site scrapping-----------------------|
| *whois                                                                                    |
| *nmap                                                                                     | 
| *ping                                                                                     |
| *nslookup                                                                                 |
|-------------------------------------------------------------------------------------------|
"
printf "input the tool name: "
read tools

check=("whois" "nmap" "ping" "nslookup")
if [[ " ${check[@]} " =~ " ${tools} " ]]; then
	printf "enter name of site: "
	read sites
	printf "How would you like to save the information scrapped for the target: 
	1. print to screen
	2. save to a file 
	choose from the above options: " 
	read output 
	we="$tools $sites" 
	case $output in
		1)
			$we
			;;
		2)
			$tools $sites > $sites
			;;
		*)
			printf "invalid option"
			;;
	esac





else

	printf "input a valid tool"
fi
