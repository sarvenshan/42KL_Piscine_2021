cat /etc/passwd | awk '!/#/' | awk 'NR%2==0' | awk -F':*:' '{print $1}' | rev | sort -r | awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' | xargs | tr ' ' ',' |sed "s/,/& /g" | tr '\n' '.'
