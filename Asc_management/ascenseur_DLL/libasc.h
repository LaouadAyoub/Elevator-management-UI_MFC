#pragma once

class CAscenseur
{
private:
	int ETAGES;
	int netage;
	bool enfonction;
	void monter(int);
	void descendre(int);
public:
	CAscenseur();
	CAscenseur(int nbr_eta);
	bool appel(int eta_dem);
	friend void interventionreparateur(CAscenseur* asc, bool etat_service);

};
