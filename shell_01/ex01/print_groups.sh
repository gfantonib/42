#!/bin/sh
# id = print real and effective user and group IDs
# -G = print all group IDs
# -n = print a name instead of a number
# $FT_USER = $ implica na informação contida na variável FT_USER
# | = anuncia um outro comando que usará a informação logo anterior.
# tr = translate or delete characters.
# ' ' ',' = explicitando que o espaço será substituido pela vírgula.
# -d "\n" = deleta a quebra de linha.
id -Gn $FT_USER | tr ' ' ',' | tr -d '\n'