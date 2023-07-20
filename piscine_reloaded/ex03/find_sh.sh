#!/bin/sh
# find = procura por arquivos nos diretórios.
# . = procura por arquivos no diretório atual e nos subsequentes.
# -type f = procura por arquivos regulares.
# -name "*.sh" = especifca arquivos que devem ter o nome terminhando em .sh
# -execdir = executa arquivos no diretório e nos subdiretórios 
# - basename = argumento do comando execdir. "strip directory and suffix from filenames" 
# - s = remove um sufixo a direita. Necessário explicitar de novo o sufixo ".sh"
# \; = stopa o camando execdir.
find . -type f -name "*.sh" -execdir basename -s ".sh" {} \;