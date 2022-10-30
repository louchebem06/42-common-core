# Philosophers
[![bledda's 42Project Score](https://badge42.herokuapp.com/api/project/bledda/philosophers)](https://github.com/JaeSeoKim/badge42)

## Le points de philosophers

> Dans ce projet, vous apprendrez les bases des threads d'un processus.
> Vous apprendrez à créer des threads.
> Vous découvrirez le mutex.
>
> ## 📝 PDF
>
> - [**`FICHIER ORIGINAL`**](https://github.com/louchebem06/Docs-42/blob/master/en.philosophers.pdf)

## 🚀 Contenu

### 🚩 Partie obligatoire

Vous devrez rédiger un programme pour la partie obligatoire et un pour la partie bonus
mais ils auront les mêmes règles de base :

- Ce projet est à coder en C, suivant la Norme. Toute leak, crash, indéfini
  comportement, ou erreur de norme signifie 0 pour le projet.
- Plusieurs philosophes sont assis à une table ronde et font l'une des trois choses suivantes: manger,
   penser ou dormir.
- En mangeant, ils ne pensent pas ou ne dorment pas, en dormant, ils ne mangent pas
   ou pensant et bien sûr, en pensant, ils ne mangent ni ne dorment.
- Les philosophes sont assis à une table circulaire avec un grand bol de spaghettis au centre.
- Il y a des fourchettes sur la table.
- Comme les spaghettis sont difficiles à servir et à manger avec une seule fourchette, on suppose qu'un
   philosophe doit manger avec deux fourchettes, une pour chaque main.
- Les philosophes ne doivent jamais mourir de faim.
- Tout philosophe a besoin de manger.
- Les philosophes ne se parlent pas.
- Les philosophes ne savent pas quand un autre philosophe est sur le point de mourir.
- Chaque fois qu'un philosophe a fini de manger, il lâchera ses fourchettes et commencera à dormir.
- Quand un philosophe aura fini de dormir, il commencera à réfléchir.
- La simulation s'arrête à la mort d'un philosophe.
- Chaque programme doit avoir les mêmes options : number_of_philosophers time_to_die
  time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]
  - number_of_philosophers : est le nombre de philosophes et aussi le nombre
    de fourchettes
  - time_to_die : est en millisecondes, si un philosophe ne commence pas à manger 'time_to_die'
    millisecondes après avoir commencé son dernier repas ou le début de la simulation, il
    meurt
  - time_to_eat : est en millisecondes et est le temps qu'il faut à un philosophe pour
    manger. Pendant ce temps, il devra garder les deux fourches.
  - time_to_sleep : est en millisecondes et est le temps que le philosophe passera
    en train de dormir.
  - number_of_times_each_philosopher_must_eat : l'argument est facultatif, si tout
    les philosophes mangent au moins 'number_of_time_each_philosopher_must_eat' le
    la simulation s'arrêtera. Si non précisé, la simulation ne s'arrêtera qu'au décès
    d'un philosophe.
- Chaque philosophe doit recevoir un numéro de 1 à «nombre_de_philosophes».
- Le philosophe numéro 1 est à côté du numéro de philosophe 'number_of_philosophers'.
  Tout autre philosophe portant le nombre N est assis entre le philosophe N - 1 et
  philosophe N+1
- Tout changement de statut d'un philosophe doit s'écrire comme suit (avec X remplacé
  avec le numéro de philosophe et timestamp_in_ms l'horodatage actuel en millisecondes)
  - timestamp_in_ms X has taken a fork 	// fourchette
  - timestamp_in_ms X is eating 		// mange
  - timestamp_in_ms X is sleeping 		// dort
  - timestamp_in_ms X is thinking 		// pense
  - timestamp_in_ms X died 				// mort
- Le statut imprimé ne doit pas être brouillé ou entrelacé avec le statut d'un autre philosophe.
- Vous ne pouvez pas avoir plus de 10 ms entre la mort d'un philosophe et le moment où il imprimera sa mort.
- Encore une fois, les philosophes devraient éviter de mourir !

| Program name     | philo                                                                                                                                                                                        |
| :--------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Turn in files    | philo/                                                                                                                                                                                       |
| Makefile         | Yes                                                                                                                                                                                          |
| Arguments        | number_of_philosophers time_to_die time_to_eat \| time_to_sleep [number_of_times_each_philosopher_must_eat]                                                                                  |
| External functs. | memset, printf, malloc, free, write, usleep, gettimeofday, pthread_create, pthread_detach, pthread_join, pthread_mutex_init, pthread_mutex_destroy, pthread_mutex_lock, pthread_mutex_unlock |
| Libft authorized | No                                                                                                                                                                                           |
| Description      | philosophe avec threads et mutex                                                                                                                                                           |

Dans cette version, les règles spécifiques sont :

- Une fourchette entre chaque philosophe, donc si ce sont plusieurs philosophes, il y aura une fourchette à droite et à gauche de chaque philosophe.
- Pour éviter que les philosophes ne dupliquent les fourchettes, vous devez protéger l'état des fourchettes avec un mutex pour chacun d'eux.
- Chaque philosophe doit être un thread

### 🚩 Bonus part

| Program name     | philo_bonus                                                                                                                                                                             |
| :--------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Turn in files    | philo_bonus/                                                                                                                                                                            |
| Makefile         | Yes                                                                                                                                                                                     |
| Arguments        | number_of_philosophers time_to_die time_to_eat time_to_sleep  [number_of_times_each_philosopher_must_eat]                                                                               |
| External functs. | memset, printf, malloc, free, write, fork, kill, exit, pthread_create, pthread_detach, pthread_join, usleep, gettimeofday, waitpid, sem_open, sem_close, sem_post, sem_wait, sem_unlink |
| Libft authorized | No                                                                                                                                                                                      |
| Description      | philosophe avec processus et semaphore                                                                                                                                               |

Dans cette version, les règles spécifiques sont :

- Toutes les fourchettes sont au milieu de la table.
- Ils n'ont pas d'états en mémoire mais le nombre de forks disponibles est représenté par un semaphore.
- Chaque philosophe doit être un processus et le processus principal ne doit pas être un philosophe.
