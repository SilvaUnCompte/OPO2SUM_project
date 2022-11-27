#include "pch.h"
#include "AccessData.h"
#include "DataManager.h"
#include "DataQuery.h"


OPO2SUMproject::DataQuery::DataQuery(void)
{
	this->Adata = gcnew AccessData();
	//this->Dmanager = gcnew DataManager();
}

System::Data::DataSet^ OPO2SUMproject::DataQuery::selectAllAccount()
{
	PersonnelManager^ manager = gcnew PersonnelManager;
	System::String^ sql;

	return this->Adata->getRows("", sql);
}

//void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom)
//{
//	System::String^ sql;
//
//	this->oMappTB->setNom(nom);
//	this->oMappTB->setPrenom(prenom);
//	sql = this->oMappTB->Insert();
//
//	this->oCad->actionRows(sql);
//}