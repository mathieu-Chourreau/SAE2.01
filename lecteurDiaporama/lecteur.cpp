#include "lecteur.h"

Lecteur::Lecteur()
{
    _numDiaporamaCourant = 0;   // =  le lecteur est vide
}

void Lecteur::avancer()
{
    if(_numDiaporamaCourant < nbImages())
    {
        _numDiaporamaCourant++;
    }
    else
    {
        _numDiaporamaCourant = 1;
    }
}

void Lecteur::reculer()
{
    if(_numDiaporamaCourant > 1 )
    {
        _numDiaporamaCourant--;
    }
    else
    {
        _numDiaporamaCourant = nbImages();
    }
}

void Lecteur::changerDiaporama(unsigned int pNumDiaporama)
{
    // s'il y a un diaporama courant, le vider, puis charger le nouveau Diaporama
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama;
    if (numDiaporamaCourant() > 0)
    {
        chargerDiaporama(); // charge le diaporama courant
    }

}

void Lecteur::chargerDiaporama()
{
    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    Image* imageACharger;
    imageACharger = new Image(3, "personne", "Blanche Neige", "C:\\cartesDisney\\carteDisney2.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(2, "personne", "Cendrillon", "C:\\cartesDisney\\carteDisney4.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(4, "animal", "Mickey", "C:\\cartesDisney\\carteDisney1.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(1, "personne", "Grincheux", "C:\\cartesDisney\\carteDisney1.gif");
    _diaporama.push_back(imageACharger);


     // trier le contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
	 // A FAIRE
/*
    // variable
    Image copieImage;

    //echange

    copieImage = imageCourante();
    x=y;
    y=copieX;


        void faireMonteeLaBulleIci(int tab[], unsigned short int bDeb , short unsigned int ici)
        {

            //Faire monter tri bulleIci
            bDeb=0;
            for (unsigned short int i = bDeb; i < ici; i++)
            {
                if (tab[i]>tab[i+1])
                {
                    echanger(tab[i],tab[i+1]);
                }
            }

        }
        void   triBulle (int tab[],
                         unsigned int nbTab)
        {
            short unsigned int bDeb;

            //TRAITEMENTS
            bDeb=0;
            for (unsigned short int ici = static_cast<short unsigned int>(nbTab-1) ; ici > bDeb+1; ici--)
            {
                faireMonteeLaBulleIci(tab,bDeb,ici);
            }

        }
*/

	 
     _posImageCourante = 0;

     cout << "Diaporama num. " << numDiaporamaCourant() << " selectionne. " << endl;
     cout << nbImages() << " images chargees dans le diaporama" << endl;

}

void Lecteur::viderDiaporama()
{
    if (nbImages () > 0)
    {
        unsigned int taille = nbImages();
        for (unsigned int i = 0; i < taille ; i++)
        {
            _diaporama.pop_back(); /* Removes the last element in the vector,
                                      effectively reducing the container size by one.
                                      AND deletes the removed element */
        }
     _posImageCourante = 0;
    }
    cout << nbImages() << " images restantes dans le diaporama." << endl;

}

void Lecteur::afficher()
{
    /* affiche les informations sur le lecteur :
     * 1) vide (si num. de diaporama = 0) OU BIEN  numéro de diaporama affiché
     * 2) Si un diaporama courant est chargé (num. de diaporama > 0), affiche l'image courante OU BIEN 'diaporama vide'
     *     si ce diaporama n'a aucun image */
    if (numDiaporamaCourant() == 0)
    {
        cout << "vide" << endl ;
    }
    else
    {
        cout << "le numero de diapo est : " << numDiaporamaCourant() << endl;
    }
    if (nbImages() > 0)
    {
        cout << imageCourante() << endl ;
    }
    else
    {
        cout << "diaporama vide" << endl ;
    }

}

unsigned int Lecteur::nbImages()
{
    return _diaporama.size();
}

Image *Lecteur::imageCourante()
{
    afficher();
}

unsigned int Lecteur::numDiaporamaCourant()
{
    return _numDiaporamaCourant;
}
