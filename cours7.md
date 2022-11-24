# Cours 7

Lorsqu'une commande `cmd` lance un processus :

![](./images/chronogramme1.png)

Le processus `cmd` fait un `fork()` puis un `exec()`.

![](./images/forkexec.png)

En C:

```c
if (fork() == 0)
  // ...
  exec();
  // ...
```

![](./images/types_exec.png)

Lorsque l'on utilise `&&`, l'évaluation se fait de façon progressive. La première commande
est évaluée, et si elle retourne `0` (vrai) alors on lance la duxième. Ainsi, on peut utiliser
le `&&` comme uun `if`.

```bash
if [ cmd1 ]; then
  cmd2
fi

# Equivalent à

[ cmd1 ] && cmd2
```

![](./images/and_and.png)

`source script` ou `. script` execute les commandes du script dans le processus actuel (comme si les commandes
avaient été tappées une par une)

![](./images/source_script.png)

`exec cmd` remplace le processus du shell par celui de la commande

![](./images/exec_cmd.png)

`cd` est un builtin

![](./images/cd_chrono.png)

![](./images/pipe_chrono.png)

![](./images/while_chrono.png)

Bug rencontré pendant un TME :

![](./images/cmd_pipe_while.png)
