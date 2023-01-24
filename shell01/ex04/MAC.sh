ifconfig -a | grep 'ether ' | tr -d [:blank:] | sed 's/^ether//'
