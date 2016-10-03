#!/bin/bash
#
#	Programme qui va supprimer tous le fichier finnissant par un ~  dans le repertoire courant et c'est sous repertoire
#
#	Exemple de commande : sh SuppFauxFich.sh
#

#Verification du nombre d'arguments :
if [ $# -ne 0 ]; then
	echo "Erreur : Le nombre d'argument de la commande doit être égal à 0 !"
	exit 1
fi

#afficher les sous-repertoires du repertoire courant :
find . -name '*~' | xargs rm

# Sortie normal du programme
exit 0
