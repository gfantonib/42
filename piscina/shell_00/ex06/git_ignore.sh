#!/bin/sh
# o codigo abaixo mostra no terminal todos os arquivos adicionados a pasta .gitignore, que são ignorados nas operações git.
# o -i esta concatenado com o --exclude-standard, indicando que os excluidos serão mostrados.
# o -o indica que será incluso na operação os arquivos não rastreaveis "." ou ".."
git ls-files -io --exclude-standard
