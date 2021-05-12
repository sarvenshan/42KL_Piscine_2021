ifconfig | grep -w "ether" | awk '{print $NF}'
