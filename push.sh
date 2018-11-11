#!/bin/bash
make clean
git status
read -p "Do you want to continue? (y/n) " option
if [ "$option" = "y" ]; then
	read -p "Enter your commit message: " msg
	git add -A
	git commit -m $msg
	git push
	fi
