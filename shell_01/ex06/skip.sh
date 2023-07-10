#!/bin/sh
# ls -l = lista conteudos do diretório atual mostrando informações extras.
# awk = pattern scanning and processing language.
# 'NR % 2 == 1' = esta conta é interpretada pelo comando awk para definir um padrão de listagem.
# no caso, o padrão é definido pelo remainder (sobra da divisão) por dois igual a 1.
# NR = are the record number of the current input line, starting at 1 for the first line.
ls -l | awk 'NR % 2 == 1'