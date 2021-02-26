#!/bin/sh
ifconfig -a | sed '/ether/!d' | sed 's/ether//' | sed 's/^         //'
