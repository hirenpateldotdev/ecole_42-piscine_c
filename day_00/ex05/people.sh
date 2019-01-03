#!/bin/sh
ldapsearch -LLL -Q "uid=z*" | grep "cn:" | sort --ignore-case -r | cut -c5-
