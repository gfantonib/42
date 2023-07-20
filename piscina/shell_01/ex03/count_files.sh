#!/bin/sh
# wc = print newline, word, and byte counts for each file.
# -l = print the newline counts.
# aqui estamos fazendo a contagem dos arquivos e dos diretórios e levando o numero de linhas da listagem em consideração para a contagem.
find . | wc -l