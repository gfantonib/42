#!/bin/sh
# o git log mostra os commits feitos.
# o --format=%H especifica o formato que os commits devem ser mostrados, no caso, com o formato hash. 
# o -n5 implica em mostrar os ultimos 5 commits
git log --format=%H -n5
