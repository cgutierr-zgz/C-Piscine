#!/bin/bash
#export FT_LINE1=3
#export FT_LINE2=16

grep -v "#" /etc/passwd | awk 'NR % 2 == 0' | cut -d: -f1 | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | sed 's/$/, /' | tr -d '\n' | sed 's/, *$/\./' | tr -d '\n' ;


