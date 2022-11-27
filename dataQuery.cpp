#include "pch.h"
#include "dataQuery.h"


OPO2SUMproject::DataQuery::DataQuery(void)
{
	this->Adata = gcnew AccessData();
	this->Dmanager = gcnew DataManager();
}

System::Data::DataSet OPO2SUMproject::DataQuery::selectAllManager(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->Dmanager->select();
	return this->Adata->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}