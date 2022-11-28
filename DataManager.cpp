#include "pch.h"
#include "AccessData.h"
#include "DataManager.h"

// Constructor Classe-Tab
OPO2SUMproject::ClassTable::ClassTable() {}

OPO2SUMproject::Account::Account(int selectedId) {
	System::Data::DataSet^ dataSetAccount = Adata->getRows("SELECT * FROM opo2sum.dbo.Account WHERE id_account = " + selectedId, "Temp");
	System::Data::DataTableReader^ DataTableReaderAccount = dataSetAccount->CreateDataReader();
	DataTableReaderAccount->Read();

	this->id = DataTableReaderAccount->GetInt32(0);
	this->account_name = DataTableReaderAccount[1]->ToString();
	this->password_account = DataTableReaderAccount[2]->ToString();
	this->firstname_account = DataTableReaderAccount[3]->ToString();
	this->lastname_account = DataTableReaderAccount[4]->ToString();
	this->birthday_account = DataTableReaderAccount[5]->ToString();
	this->permission_lv_account = DataTableReaderAccount->GetInt32(6);

	DataTableReaderAccount->Close();
}

OPO2SUMproject::Personnel::Personnel(int selectedId) {
	System::Data::DataSet^ dataSetPersonnel = Adata->getRows("SELECT * FROM opo2sum.dbo.Personnel WHERE id_personnel = " + selectedId, "Temp");
	System::Data::DataTableReader^ DataTableReaderPersonnel = dataSetPersonnel->CreateDataReader();
	DataTableReaderPersonnel->Read();

	this->id = DataTableReaderPersonnel->GetInt32(0);
	this->hire_date = DataTableReaderPersonnel[1]->ToString();
	this->is_manager = DataTableReaderPersonnel->GetInt32(2);
	this->account = gcnew Account(DataTableReaderPersonnel->GetInt32(3));

	DataTableReaderPersonnel->Close();
}

OPO2SUMproject::Order::Order(int selectedId) {
	System::Data::DataSet^ dataSetAccount = Adata->getRows("SELECT * FROM opo2sum.dbo.Order WHERE id_order = " + selectedId, "Temp");
	System::Data::DataTableReader^ DataTableReaderAccount = dataSetAccount->CreateDataReader();
	DataTableReaderAccount->Read();

	this->id = DataTableReaderAccount->GetInt32(0);
	this->delevery_date = DataTableReaderAccount[1]->ToString();
	this->issue_date = DataTableReaderAccount[2]->ToString();
	this->account = gcnew Account(DataTableReaderAccount->GetInt32(3));

	DataTableReaderAccount->Close();
}

OPO2SUMproject::Address::Address(int selectedId) {
	System::Data::DataSet^ dataSetAddress = Adata->getRows("SELECT * FROM opo2sum.dbo.Address WHERE id_address = " + selectedId, "Temp");
	System::Data::DataTableReader^ DataTableReaderAddress = dataSetAddress->CreateDataReader();
	DataTableReaderAddress->Read();

	this->id = DataTableReaderAddress->GetInt32(0);
	this->street = DataTableReaderAddress[1]->ToString();
	this->postal_code = DataTableReaderAddress->GetInt32(2);
	this->city = DataTableReaderAddress[3]->ToString();
	this->address_complement = DataTableReaderAddress[4]->ToString();

	DataTableReaderAddress->Close();
}

// Account Manager ----------------------------------------------------------------------

OPO2SUMproject::Account^ OPO2SUMproject::AccountManager::select(int id) {
	return gcnew Account(id);
}
void OPO2SUMproject::AccountManager::insert(System::String^ account_name, System::String^ password_account, System::String^ firstname_account, System::String^ lastname_account, System::String^ birthday_account, int permission_lv_account) {
	Adata->actionRows("INSERT INTO Account " +
		"(account_name, password_account, firstname_account, lastname_account, birthday_account, permission_lv_account) " +
		"VALUES('" + account_name + "', '" + password_account + "', '" + firstname_account + "', '" + lastname_account + "', '" + birthday_account + "', '" + permission_lv_account + "');");
}
void OPO2SUMproject::AccountManager::deleteElement(int selectedId) {
	Adata->actionRows("DELETE FROM Personnel WHERE id_account = " + selectedId);
	Adata->actionRows("DELETE FROM Account WHERE id_account = " + selectedId);
}
void OPO2SUMproject::AccountManager::deleteElement(Account^ obj) {
	AccountManager::deleteElement(obj->get_id());
}
void OPO2SUMproject::AccountManager::update(Account^ obj) {
	Adata->actionRows("UPDATE Account SET account_name = '" + obj->get_account_name() + "', password_account = '" + obj->get_password_account() + "', firstname_account = '" + 	obj->get_firstname_account() + "', lastname_account ='" + obj->get_lastname_account() +	"', birthday_account = '" + obj->get_birthday_account() + "', permission_lv_account = '" + obj->get_permission_lv_account() + "' WHERE id_account = " + obj->get_id() + ";");
}

// Personnel Manager ---------------------------------------------------------------------

OPO2SUMproject::Personnel^ OPO2SUMproject::PersonnelManager::select(int id) {
	return gcnew Personnel(id);
}
void OPO2SUMproject::PersonnelManager::insert(System::String^ hire_date, int is_manager, int id_account) {
	AccessData^ Adata = gcnew AccessData;
	Adata->actionRows("INSERT INTO Personnel " +
		"(hire_date, is_manager, id_account) " +
		"VALUES('" + hire_date + "', " + is_manager + ", " + id_account + ");");
}
void OPO2SUMproject::PersonnelManager::deleteElement(int selectedId) {
	Adata->actionRows("DELETE FROM Account WHERE id_personnel = " + selectedId);
}
void OPO2SUMproject::PersonnelManager::deleteElement(Personnel^ obj) {
	PersonnelManager::deleteElement(obj->get_id());
}
void OPO2SUMproject::PersonnelManager::update(Personnel^ obj) {
	Adata->actionRows("UPDATE Personnel SET hire_date = '" + obj->get_hire_date() + "', is_manager = " + obj->get_is_manager() + ", id_account = " + obj->get_account()->get_id() + ";");
	
}

//Address Manager----------------------------------------------------------------------

OPO2SUMproject::Address^ OPO2SUMproject::AddressManager::select(int id) {
	return gcnew Address(id);
}
void OPO2SUMproject::AddressManager::insert(System::String^ street, int postal_code, System::String^ city, System::String^ address_complement) {
	AccessData^ Adata = gcnew AccessData;
	Adata->actionRows("INSERT INTO Address " +
		"(street, postal_code, city, address_complement) " +
		"VALUES('" + street + "', " + postal_code + ", '" + city + "', '" + address_complement + "');");
}
void OPO2SUMproject::AddressManager::deleteElement(int selectedId) {
	Adata->actionRows("DELETE FROM Address WHERE id_address = " + selectedId);
}
void OPO2SUMproject::AddressManager::deleteElement(Address^ obj) {
	AddressManager::deleteElement(obj->get_id());
}
void OPO2SUMproject::AddressManager::update(Address^ obj) {
	Adata->actionRows("UPDATE Address SET street = '" + obj->get_street() + "', postal_code = '" + obj->get_postal_code() + "', city = '" + obj->get_city() + "', address_complement = '" + obj->get_address_complement() + "';");

}