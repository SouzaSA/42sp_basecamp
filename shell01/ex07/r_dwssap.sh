#! /bin/sh
cat /etc/passwd | sed -e 's/\#.*//' -e 's/\:.*//' | sed -n '2~2p' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2"p | tr '\n' ',' | sed -e 's/,/,\ /g' | sed -e 's/,\ $/./'