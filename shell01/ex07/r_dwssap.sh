#!/bin/sh
sed 's/:.*//' /etc/passwd | sed -n 'n;p' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed -e 's/,/, /g' | sed 's/, $/./'




