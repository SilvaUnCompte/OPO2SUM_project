#pragma once

namespace OPO2SUMproject
{
	ref class ClassTable
	{
	protected:
		int id;
		AccessData^ Adata = gcnew AccessData;

	public:
		ClassTable();

		int get_id() { return this->id; };
		//void setId(int newId) { this->id = newId; };
	};

	ref class ClassTableManager
	{
	protected:
		AccessData^ Adata = gcnew AccessData;
	};


	ref class Account : ClassTable
	{
	private:
		System::String^ account_name;
		System::String^ password_account;
		System::String^ firstname_account;
		System::String^ lastname_account;
		System::String^ birthday_account;
		int permission_lv_account;

	public:
		Account(int id);

		System::String^ get_account_name() { return account_name; };
		System::String^ get_password_account() { return password_account; };
		System::String^ get_firstname_account() { return firstname_account; };
		System::String^ get_lastname_account() { return lastname_account; };
		System::String^ get_birthday_account() { return birthday_account; };
		int get_permission_lv_account() { return permission_lv_account; };

		void set_account_name(System::String^ new_account_name) { account_name = new_account_name; };
		void set_password_account(System::String^ new_password_account) { password_account = new_password_account; };
		void set_firstname_account(System::String^ new_firstname_account) { firstname_account = new_firstname_account; };
		void set_lastname_account(System::String^ new_lastname_account) { lastname_account = new_lastname_account; };
		void set_birthday_account(System::String^ new_birthday_account) { birthday_account = new_birthday_account; };
		void set_permission_lv_account(int new_permission_lv_account) { permission_lv_account = new_permission_lv_account; };
	};

	ref class AccountManager : ClassTableManager
	{
	public:
		Account^ select(int id);
		void insert(System::String^ account_name, System::String^ password_account, System::String^ firstname_account, System::String^ lastname_account, System::String^ birthday_account, int permission_lv_account);
		void deleteElement(int id);
		void deleteElement(Account^);
		void update(Account^);
	};


	ref class Personnel : ClassTable
	{
	private:
		System::String^ hire_date;
		int is_manager;
		Account^ account;

	public:
		Personnel(int id);

		System::String^ get_hire_date() { return hire_date; }
		int get_is_manager() { return is_manager; }
		Account^ get_account() { return account; }

		void set_hire_date(System::String^ date) { hire_date = date; }
		void set_is_manager(int b) { is_manager = b; }
		void set_account(Account^ currentAccount) { account = currentAccount; }
	};

	ref class PersonnelManager : ClassTableManager
	{
	public:
		Personnel^ select(int id);
		void insert(System::String^ hire_date, int is_manager, int id_account);
		void deleteElement(int id);
		void deleteElement(Personnel^);
		void update(Personnel^);
	};

	ref class Address : ClassTable {
	private:
		System::String^ street;
		int postal_code;
		System::String^ city;
		System::String^ address_complement;
		Account^ id_account;

	public:
		Address(int id);

		System::String^ get_street() { return street; }
		int get_postal_code() { return postal_code; }
		System::String^ get_city() { return city; }
		System::String^ get_address_complement() { return address_complement; }
		Account^ get_id_account() { return id_account; }

		void set_street(System::String^ st) { this->street = st; }
		void set_postal_code(int zip) { this->postal_code = zip; }
		void set_city(System::String^ city) { this->city = city; }
		void set_address_complement(System::String^ address) { this->address_complement = address; }
		void set_account(Account^ currentAccount) { id_account = currentAccount; };
	};

	ref class AddressManager : ClassTableManager
	{
	public:
		Address^ select(int id);
		void insert(System::String^ street, System::String^ postal_code, System::String^ city, System::String^ address_complement, int id_account);
		void deleteElement(int id);
		void deleteElement(Address^);
		void update(Address^);
	};

	ref class Order : ClassTable {
	private:
		System::String^ delivery_date;
		System::String^ issue_date;
		Account^ account;
		Address^ billing_adderess;
		Address^ shipping_adderess;

	public:
		Order(int id);

		System::String^ get_delivery_date() { return delivery_date; }
		System::String^ get_issue_date() { return issue_date; }
		Account^ get_account() { return account; }
		Address^ get_billing_address() { return billing_adderess; }
		Address^ get_shipping_address() { return shipping_adderess; }

		void set_delivery_date(System::String^ date) { delivery_date = date; }
		void set_issue_date(System::String^ date) { issue_date = date; }
		void set_account(Account^ currentAccount) { account = currentAccount; }
		void set_billing_address(Address^ setAddress) { billing_adderess = setAddress; }
		void set_shipping_address(Address^ setAddress) { shipping_adderess = setAddress; }
	};

	ref class OrderManager : ClassTableManager
	{
	public:
		Order^ select(int id);
		void insert(System::String^ delivery_date, System::String^ issue_date, int id_account, int id_billing_adderess, int id_shipping_adderess);
		void deleteElement(int id);
		void deleteElement(Order^);
		void update(Order^);
	};

	ref class Product : ClassTable {
	private:
		System::String^ name_product;
		int element_per_unit_product;
		float cost_product;
		float marge_product;
		float tva_product;
		int stock_product;
		int restocking_threshold_product;
		int enable_product;

	public:
		Product(int id);

		System::String^ get_name_product() { return name_product; }
		int get_element_per_unit_product() { return element_per_unit_product; }
		float get_cost_product() { return cost_product; }
		float get_marge_product() { return marge_product; }
		float get_tva_product() { return tva_product; }
		int get_stock_product() { return stock_product; }
		int get_restocking_threshold_product() { return restocking_threshold_product; }
		int get_enable_product() { return enable_product; }

		void set_name_product(System::String^ name) { this->name_product = name; }
		void set_element_per_unit_product(int elementperunit) { this->element_per_unit_product = elementperunit; }
		void set_cost_product(float cost) { this->cost_product = cost; }
		void set_marge_product(float marge) { this->marge_product = marge; }
		void set_tva_product(float tva) { this->tva_product = tva; }
		void set_stock_product(int stock) { this->stock_product = stock; }
		void set_restocking_threshold_product(int restocking) { this->restocking_threshold_product = restocking; }
		void set_enable_product(int set_enable_product) { this->enable_product = set_enable_product; }
	};

	ref class ProductManager : ClassTableManager
	{
	public:
		Product^ select(int id);
		void insert(System::String^ name_product, int element_per_unit_product, float cost_product, float marge_product, float tva_product, int stock_product, int restocking_threshold_product, int enable_product);
		void deleteElement(int id);
		void deleteElement(Product^);
		void update(Product^);
	};


	ref class Payment : ClassTable {
	private:
		System::String^ date_payment;
		int method_payment;
		int balance_payment;
		Order^ order;

	public:
		Payment(int id);

		System::String^ get_date_payment() { return date_payment; }
		int get_method_payment() { return method_payment; }
		int get_balance_payment() { return balance_payment; }
		Order^ get_order() { return order; }

		void set_date_payment(System::String^ setDate_payment) { this->date_payment = setDate_payment; }
		void set_method_payment(int setMethod_payment) { this->method_payment = setMethod_payment; }
		void set_balance_payment(int setBalance_payment) { this->balance_payment = setBalance_payment; }
		void set_order(Order^ setOrder) { this->order = setOrder; }
	};

	ref class PaymentManager : ClassTableManager
	{
	public:
		Payment^ select(int id);
		void insert(System::String^ date_payment, int method_payment, int balance_payment, int order);
		void deleteElement(int id);
		void deleteElement(Payment^);
		void update(Payment^);
	};


	ref class Bill : ClassTable {
	private:
		float total_bill;
		float total_tva;
		Order^ order;


	public:
		Bill(int id);

		float get_total_bill() { return total_bill; }
		float get_total_tva() { return total_tva; }
		Order^ get_order() { return order; }

		void set_total_bill(float bill) { this->total_bill = bill; }
		void set_total_tva(float tva) { this->total_tva = tva; }
		void set_id_order(Order^ currentOrder) { this->order = currentOrder; }


	};

	ref class BillManager : ClassTableManager
	{
	public:
		Bill^ select(int id);
		void insert(float total_bill, float total_tva, int id_order);
		void deleteElement(int id);
		void deleteElement(Bill^);
		void update(Bill^);
	};


	ref class Contain : ClassTable {
	private:
		Order^ id_order;
		Product^ id_product;
		int nb_element;
		AccessData^ Adata = gcnew AccessData;

	public:
		Contain(int id_order, int id_product, int nb);

		Order^ get_id_order() { return id_order; }
		Product^ get_id_product() { return id_product; }
		int get_nb_element() { return nb_element; }

		void set_id_order(Order^ order) { this->id_order = order; }
		void set_id_product(Product^ product) { this->id_product = product; }
		void set_nb_element(int number) { this->nb_element = number; }
	};


	ref class ContainManager : ClassTableManager
	{
	public:
		void insert(Order^ id_order, Product^ id_product, int nb_element);
		void update(Contain^);
	};
};