# Makefile
# makefile for the maintenance of the git repository

pull:
	git pull origin master

add:
	git add -A

commit: add
	git commit -a

push: commit
	git push origin master

