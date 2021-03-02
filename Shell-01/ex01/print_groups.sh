#!/bin/sh
#FT_USER=cgutierr
groups $FT_USER | tr ' ' ',' | tr -d '\n' ;
