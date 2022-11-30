#include "pch.h"
#include "AccessData.h"
#include "DataManager.h"

// Constructor Classe-Tab

OPO2SUMproject::ClassTable::ClassTable() {}

// Constructor Account

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

// Constructor Personnel

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

// Constructor Order

OPO2SUMproject::Order::Order(int selectedId) {
	System::Data::DataSet^ dataSetAccount = Adata->getRows("SELECT * FROM opo2sum.dbo.orderTab WHERE id_order = " + selectedId, "Temp");
	System::Data::DataTableReader^ DataTableReaderAccount = dataSetAccount->CreateDataReader();
	DataTableReaderAccount->Read();

	this->id = DataTableReaderAccount->GetInt32(0);
	this->delivery_date = DataTableReaderAccount[1]->ToString();
	this->issue_date = DataTableReaderAccount[2]->ToString();
	this->account = gcnew Account(DataTableReaderAccount->GetInt32(3));
	this->billing_adderess = gcnew Address(DataTableReaderAccount->GetInt32(4));
	this->shipping_adderess = gcnew Address(DataTableReaderAccount->GetInt32(5));

	DataTableReaderAccount->Close();
}

// Constructor Address

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

// Constructor Product

OPO2SUMproject::Product::Product(int selectedId) {
	System::Data::DataSet^ dataSetProduct = Adata->getRows("SELECT * FROM opo2sum.dbo.product WHERE id_product = " + selectedId, "Temp");
	System::Data::DataTableReader^ DataTableReaderProduct = dataSetProduct->CreateDataReader();
	DataTableReaderProduct->Read();

	this->id = DataTableReaderProduct->GetInt32(0);
	this->name_product = DataTableReaderProduct[1]->ToString();
	this->element_per_unit_product = DataTableReaderProduct->GetInt32(2);
	this->cost_product = (float)DataTableReaderProduct->GetDouble(3);
	this->marge_product = (float)DataTableReaderProduct->GetDouble(4);
	this->tva_product = (float)DataTableReaderProduct->GetDouble(5);
	this->stock_product = DataTableReaderProduct->GetInt32(6);
	this->restocking_threshold_product = DataTableReaderProduct->GetInt32(7);

	DataTableReaderProduct->Close();
}

// Constructor Payment

OPO2SUMproject::Payment::Payment(int selectedId) {
	System::Data::DataSet^ dataSetPayment = Adata->getRows("SELECT * FROM opo2sum.dbo.Payment WHERE id_payment = " + selectedId, "Temp");
	System::Data::DataTableReader^ DataTableReaderPayment = dataSetPayment->CreateDataReader();
	DataTableReaderPayment->Read();

	this->id = DataTableReaderPayment->GetInt32(0);
	this->date_payment = DataTableReaderPayment[1]->ToString();
	this->method_payment = DataTableReaderPayment->GetInt32(2);
	this->method_payment = DataTableReaderPayment->GetInt32(3);
	this->order = gcnew Order(DataTableReaderPayment->GetInt32(4));

	DataTableReaderPayment->Close();
}

// Constructor Bill

OPO2SUMproject::Bill::Bill(int selectedId) {
	System::Data::DataSet^ dataSetBill = Adata->getRows("SELECT * FROM opo2sum.dbo.bill WHERE id_bill = " + selectedId, "Temp");
	System::Data::DataTableReader^ DataTableReaderBill = dataSetBill->CreateDataReader();
	DataTableReaderBill->Read();

	this->id = DataTableReaderBill->GetInt32(0);
	this->total_bill = (float)DataTableReaderBill->GetDouble(1);
	this->total_tva = (float)DataTableReaderBill->GetDouble(2);
	this->order = gcnew Order(DataTableReaderBill->GetInt32(3));

	DataTableReaderBill->Close();
}

// Constructor Living

OPO2SUMproject::Living::Living(int id_account, int id_address) {
	Account^ address = gcnew Account(id_address);
	Address^ account = gcnew Address(id_account);
}
//Constructor Contain

OPO2SUMproject::Contain::Contain(int id_order, int id_product, int nb) {

	Order^ order = gcnew Order(id_order);
	Product^ product = gcnew Product(id_product);
	this->nb_element = nb;
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
	Adata->actionRows("UPDATE Account SET account_name = '" + obj->get_account_name() + "', password_account = '" + obj->get_password_account() + "', firstname_account = '" + obj->get_firstname_account() + "', lastname_account ='" + obj->get_lastname_account() + "', birthday_account = '" + obj->get_birthday_account() + "', permission_lv_account = '" + obj->get_permission_lv_account() + "' WHERE id_account = " + obj->get_id() + ";");
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
	Adata->actionRows("UPDATE Personnel SET hire_date = '" + obj->get_hire_date() + "', is_manager = " + obj->get_is_manager() + ", id_account = " + obj->get_account()->get_id() + " WHERE id_personnel = " + obj->get_id() + ";");
}

// Order Manager ---------------------------------------------------------------------

OPO2SUMproject::Order^ OPO2SUMproject::OrderManager::select(int id) {
	return gcnew Order(id);
}
void OPO2SUMproject::OrderManager::insert(System::String^ delivery_date, System::String^ issue_date, int id_account, int id_billing_address, int id_shipping_address) {
	AccessData^ Adata = gcnew AccessData;
	Adata->actionRows("INSERT INTO orderTab " +
		"(delivery_date, issue_date, id_account, id_billing_address, id_shipping_address) " +
		"VALUES('" + delivery_date + "', '" + issue_date + "', " + id_account + ", " + id_billing_address + ", " + id_shipping_address + ");");
}
void OPO2SUMproject::OrderManager::deleteElement(int selectedId) {
	Adata->actionRows("DELETE FROM orderTab WHERE id_order = " + selectedId);
}
void OPO2SUMproject::OrderManager::deleteElement(Order^ obj) {
	OrderManager::deleteElement(obj->get_id());
}
void OPO2SUMproject::OrderManager::update(Order^ obj) {
	Adata->actionRows("UPDATE orderTab SET delivery_date = '" + obj->get_delivery_date() + "', issue_date = '" + obj->get_issue_date() + "', id_account = " + obj->get_account()->get_id() + ", id_account = " + obj->get_billing_address()->get_id() + ", id_account = " + obj->get_shipping_address()->get_id() + " WHERE id_order = " + obj->get_id() + ";");
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
	Adata->actionRows("UPDATE Address SET street = '" + obj->get_street() + "', postal_code = '" + obj->get_postal_code() + "', city = '" + obj->get_city() + "', address_complement = '" + obj->get_address_complement() + "' WHERE id_address = " + obj->get_id() + ";");
}

//Product Manager--------------------------------------------------------------------------

OPO2SUMproject::Product^ OPO2SUMproject::ProductManager::select(int id) {
	return gcnew Product(id);
}
void OPO2SUMproject::ProductManager::insert(System::String^ name_product, int element_per_unit_product, float cost_product, float marge_product, float tva_product, int stock_product, int restocking_threshold_product) {
	AccessData^ Adata = gcnew AccessData;
	Adata->actionRows("INSERT INTO Product " +
		"(name_product, element_per_unit_product, cost_product, marge_product, tva_product, stock_product, restocking_threshold_product) " +
		"VALUES('" + name_product + "', " + element_per_unit_product + ", " + cost_product + ", " + marge_product + ", " + tva_product + ", " + stock_product + ", " + restocking_threshold_product + ");");
}
void OPO2SUMproject::ProductManager::deleteElement(int selectedId) {
	Adata->actionRows("DELETE FROM Product WHERE id_product = " + selectedId);
}
void OPO2SUMproject::ProductManager::deleteElement(Product^ obj) {
	ProductManager::deleteElement(obj->get_id());
}
void OPO2SUMproject::ProductManager::update(Product^ obj) {
	Adata->actionRows("UPDATE Product SET name_product = '" + obj->get_name_product() + "', element_per_unit_product = " + obj->get_element_per_unit_product() + ", cost_product = " + obj->get_cost_product() + ", marge_product = " + obj->get_marge_product() + ", tva_product = " + obj->get_tva_product() + ", stock_product = " + obj->get_stock_product() + ", restocking_threshold_product = " + obj->get_restocking_threshold_product() + " WHERE id_product = " + obj->get_id() + ";");
}

//Payment Manager----------------------------------------------------------------------

OPO2SUMproject::Payment^ OPO2SUMproject::PaymentManager::select(int id) {
	return gcnew Payment(id);
}
void OPO2SUMproject::PaymentManager::insert(System::String^ date_payment, int method_payment, int balance_payment, int order) {
	AccessData^ Adata = gcnew AccessData;
	Adata->actionRows("INSERT INTO Payment " +
		"(date_payment, method_payment, balance_payment, id_order) " +
		"VALUES('" + date_payment + "', " + method_payment + ", " + balance_payment + ", " + order + ");");
}
void OPO2SUMproject::PaymentManager::deleteElement(int selectedId) {
	Adata->actionRows("DELETE FROM Payment WHERE id_payment = " + selectedId);
}
void OPO2SUMproject::PaymentManager::deleteElement(Payment^ obj) {
	PaymentManager::deleteElement(obj->get_id());
}
void OPO2SUMproject::PaymentManager::update(Payment^ obj) {
	Adata->actionRows("UPDATE Payment SET date_payment = '" + obj->get_date_payment() + "', method_payment = " + obj->get_method_payment() + ", balance_payment = " + obj->get_balance_payment() + ", id_order = " + obj->get_order()->get_id() + " WHERE id_payment = " + obj->get_id() + ";");
}


//Bill Manager------------------------------------------------------------------------------

OPO2SUMproject::Bill^ OPO2SUMproject::BillManager::select(int id) {
	return gcnew Bill(id);
}
void OPO2SUMproject::BillManager::insert(float total_bill, float total_tva, int id_order) {
	AccessData^ Adata = gcnew AccessData;
	Adata->actionRows("INSERT INTO Bill " +
		"(total_bill, total_tva, id_order)" +
		"VALUES(" + total_bill + ", " + total_tva + ", " + id_order + ");");
}
void OPO2SUMproject::BillManager::deleteElement(int selectedId) {
	Adata->actionRows("DELETE FROM Bill WHERE id_bill = " + selectedId);
}
void OPO2SUMproject::BillManager::deleteElement(Bill^ obj) {
	BillManager::deleteElement(obj->get_id());
}
void OPO2SUMproject::BillManager::update(Bill^ obj) {
	Adata->actionRows("UPDATE Bill SET total_bill = " + obj->get_total_bill() + ", total_tva = " + obj->get_total_tva() + ", id_order= " + obj->get_order()->get_id() + " WHERE id_bill = " + obj->get_id() + ";");

}

//Living Manager--------------------------------------------------------------------------

void OPO2SUMproject::LivingManager::insert(int id_account, int id_address) {
	AccessData^ Adata = gcnew AccessData;
	Adata->actionRows("INSERT INTO Living " +
		"(id_account, id_address)" +
		"VALUES(" + id_account + ", " + id_address + ");");
}

//Contain Manager----------------------------------------------------------------------------

void OPO2SUMproject::ContainManager::insert(Order^ id_order, Product^ id_product, int nb_element) {
	AccessData^ Adata = gcnew AccessData;
	Adata->actionRows("INSERT INTO Contain " +
		"(id_order, id_product, nb_element)" +
		"VALUES(" + id_order + ", " + id_product+ ", " + nb_element + ");");
}
void OPO2SUMproject::ContainManager::update(Contain^ obj) {
	Adata->actionRows("UPDATE Contain SET nb_element = " + obj->get_nb_element() + " WHERE id_product = " + obj->get_id_product() + "OR id_order = " + obj->get_id_order() + ";");

}
