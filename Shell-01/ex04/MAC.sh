#!/bin/sh
ifconfig | awk '/ether/{print $2}' | sed '2d'
