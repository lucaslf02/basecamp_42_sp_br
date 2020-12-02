#!/bin/sh
ifconfig | grep Ethernet | sed 's/[[:blank:]]*ether //'


