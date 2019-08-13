cat /etc/passwd | sed "1,10d" | cut -d: -f1 | sed -n 'n;p' | rev | sort -r | sed "$FT_LINE1,$FT_LINE2!d" | awk 1 ORS=', ' | rev | sed "s/ ,/./" | rev | tr -d "\n"
