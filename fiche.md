# Bash

## Variables

```bash
var=bonjour
echo $var # Affiche bonjour
echo '$var' # Affiche $var


fichiers="a b c"
cat $fichiers # Affiche le contenu des fichiers a, b et c
cat "$fichiers" # Affiche le contenu du fichier "a b c" (avec les espaces dans le nom)
```

## Métacaractères

`*` : tous les fichiers

`?` : fichiers d'un caractère

`#` : commentaire

`commande1 | commande2` (pipe) : redirige la sortie standard de la commande à gauche du `|` dans l'entrée standard de la commande à droite.

`commande > nom_de_fichier` : redirige la sortie standard de la commande dans le fichier (l'écrase)

`commande 2> nom_de_fichier` : redirige l'erreur standard de la commande dans le fichier (l'écrase)

`commande >> nom_de_fichier` : redirige la sortie standard de la commande dans le fichier (ajoute au fichier)

`commande 2>> nom_de_fichier` : redirige l'erreur standard de la commande dans le fichier (ajoute au fichier)

`commande < fichier` : utilise le contenu du fichier en tant qu'entrée standard de la commande

`$(commande)` : devient la sortie standard de la commande (pour la mettre dans une variable par exemple)

`$((opération))` : devient le résultat de l'opération mathématique

`mot{a,b,c}` : devient mota motb motc

`mot{1..5}` : devient mot1 mot2 mot3 mot4 mot5

`commande &` : redonne la main sur le shell après le lancement de la commande

`commande1;commande2` : permet d'enchainer des commandes à la suite

`$$` : PID du processus courant

`$#` : nombre d'arguments passés à la commande

`$1`, `$2`, etc... : arguments 1, 2 etc...

`$0` : nom de la commande

## Scripts

Fichier `.sh` avec une liste de commandes.

Pour l'executer, soit lancer `bash fichier.sh`, soit ajouter la ligne `#!/bin/bash` au
début du fichier et le rendre executable avec la commande `chmod +x fichier.sh`. Le lancer ensuite
avec `./fichier.sh` (ou le chemin du fichier selon où on est placé)

## `if`

`[]` est un raccourci pour la commande test.

```bash
if [ condition ]; then
	# commandes
fi
```

- Sur les fichiers:
  - `-f` : si le fichier existe
  - `-d` : si le fichier est un répertoire
  - `-r` : si le fichier est lisible
  - `-w` : si on peut écrire dans le fichier
- Sur les entiers:
  - `-eq` `-lt` `-le` `-gt` `-ge` (nom explicite)
- Sur deux expressions booleennes:
  - `-o` (or) -a (and)

Renvoie `1` si vrai, `0` si faux

## `for`

```bash
for x in a b c; do
	# commandes
done
```

La variable x prendra les valeurs "a", ensuite "b" et ensuite "c"

## `read`

```bash
while read a b c; do
	# commmandes
done < fichier
```

Lis les lignes du fichier, en séparant les valeurs par un séparateur défini
dans la variable `IFS`

# Commandes

## `echo -n "Hello"`

- `-n` : pas de retour à la ligne

## `export`

exporte la variable dans l'environnement des
commandes executées dans l'environnement courant

## `head`

`-n` nombre de lignes (ou -[nombre de lignes] pour afficher tout sauf les n premières lignes)

## `tail`

`-n` nombre de lignes (ou +[nombre de lignes] pour afficher en commençant par la n-ème ligne)

## `wc`

`-l` compte le nombre de lignes

`-w` compte le nombre de mots

`-c` compte le nombre de caractères

## `tr`

Remplace les caractères de la liste en premier paramètre avec ceux de la liste
en deuxième paramètre

`-s` remplace la répétition du caractère donné par une seule fois ce caractère
(utile pour supprimer plusieurs espaces de suite)

## `sort`

Trie par ordre alphabétique (par défaut)

`-n` trie par ordre numérique

## `uniq`

Supprime les répétitions.

## `cut`

Coupe chaque ligne du stdin.

`-c [n-m]` du caractère n au caractère m

`-d [delimiteur] -f [n]` en utilisant un délimiteur personnalisé, garde le n-ème morceau

## `grep`

Cherche les lignes correspondant à la recherche donnée, soit dans le stdin, soit dans un fichier.

`-E` utilise une expression régulière
