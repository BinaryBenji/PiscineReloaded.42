ifconfig | grep ether | sed 's/^[[:blank:]]*//;s/[[:blank:]]*$//' | cut -c 7-
