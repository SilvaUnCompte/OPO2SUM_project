#include "pch.h"
#include "DataManager.h"
#include "AccessData.h"


System::String^ OPO2SUMproject::personnelManager::select(void)
{
	AccessData::getRows(System::String ^ sSql, System::String ^ sDataTableName)
	return "SELECT * FROM opo2sum.dbo.personnel";
}
System::String^ OPO2SUMproject::personnelManager::select(int id)
{
	return "SELECT * FROM opo2sum.dbo.personnel where id = '"+id+"'";
}
System::String^ OPO2SUMproject::personnelManager::insert(System::Data::DataSet dataInsert)
{
	return "INSERT INTO personnel (nom, prenom) VALUES('');";
}
System::String^ OPO2SUMproject::personnelManager::deleteElement(int id)
{
	return "";
}
System::String^ OPO2SUMproject::personnelManager::update(int id)
{
	return "";
}