# Cours 6

## Fork vs Exec

Fork ne lance pas de nouveau programme. Il duplique le programme existant et ensuite le lance.

## Descripteur de fichier ouvert

Utilisation de la fonction `open()` en C -> appel système

Le système va chercher le fichier sur le disque.

Il place des pointeurs vers le contenu du fichier dans la table des fichiers ouverts. Les indices de ce tableau correspondent
aux pointeurs. Les premiers indices correspondent à des fichiers spéciaux comme par exemple STDERR (indice 2, d'où la redirection 2> en shell)
