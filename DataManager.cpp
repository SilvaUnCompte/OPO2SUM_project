#include "pch.h"
#include "DataManager.h"

System::String^ OPO2SUMproject::DataManager::Select(void) { return ""; }
System::String^ OPO2SUMproject::DataManager::Select(int id) { return ""; }
System::String^ OPO2SUMproject::DataManager::Insert(void) { return ""; }
System::String^ OPO2SUMproject::DataManager::Delete(void) { return ""; }
System::String^ OPO2SUMproject::DataManager::Update(void) { return ""; }

System::String^ OPO2SUMproject::personnelManager::Select(void)
{
	return "SELECT * FROM DB_prosit6.dbo.Clients";
}
System::String^ OPO2SUMproject::personnelManager::Select(int id)
{
	return "SELECT * FROM DB_prosit6.dbo.Clients";
}
System::String^ OPO2SUMproject::personnelManager::Insert(void)
{
	return "INSERT INTO Clients (nom, prenom) VALUES('');";
}
System::String^ OPO2SUMproject::personnelManager::Delete(void)
{
	return "";
}
System::String^ OPO2SUMproject::personnelManager::Update(void)
{
	return "";
}