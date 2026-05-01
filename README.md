# Mini Amazon C++

Projet de simulation d’une plateforme e-commerce développé en C++ en utilisant la Programmation Orientée Objet (POO).

## Fonctionnalités
- Gestion des produits (électronique, etc.)
- Panier (ajout et calcul du total avec TVA)
- Gestion des commandes
- Système de login (client)
- Historique des commandes
- Suivi du stock avec alertes
- Système de recommandation (polymorphisme)
- Remise automatique

## Concepts utilisés
- Héritage (Product → ElectronicProduct…)
- Polymorphisme (système de recommandation)

## Lancer le projet
Compiler avec :
g++ main.cpp Product.cpp Cart.cpp Customer.cpp Order.cpp -o app

Puis exécuter :
./app
