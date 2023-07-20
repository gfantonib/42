#!/bin/sh
# ifconfig = configure a network interface
# -a = display all interfaces which are currently available, even if down
# grep = print lines matching a pattern, ou seja, imprima apenas o conteudo da linha que seja identificada por um padrão.
# "ether" = argumento do comando grep, padrão objetificado. 
# tr -s ' ' '\t' = substituindo espaços por tabs, ou seja, preparando o código em sessões para ser posteriormente cortado.
# cut -f 3 = removendo sessões de uma dada linha e especificando que será a sessão 3.
ifconfig | grep "ether" | tr -s ' ' '\t' | cut -f 3