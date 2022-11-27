#include "pch.h"
#include "AccessData.h"
#include "DataManager.h"


OPO2SUMproject::DataManager::DataManager() {}
OPO2SUMproject::Account::Account(int id) {}
OPO2SUMproject::Personnel::Personnel(int id) {}

OPO2SUMproject::Account^ OPO2SUMproject::AccountManager::select(int id) {
	return gcnew Account(id);
}
void OPO2SUMproject::AccountManager::insert(Account^ obj) {
	return;
}
void OPO2SUMproject::AccountManager::deleteElement(Account^ obj) {
	return;
}
void OPO2SUMproject::AccountManager::update(Account^ obj) {
	return;
}

OPO2SUMproject::Personnel^ OPO2SUMproject::PersonnelManager::select(int id) {
	return gcnew Personnel(id);
}
void OPO2SUMproject::PersonnelManager::insert(Personnel^ obj) {
	return;
}
void OPO2SUMproject::PersonnelManager::deleteElement(Personnel^ obj) {
	return;
}
void OPO2SUMproject::PersonnelManager::update(Personnel^ obj) {
	return;
}