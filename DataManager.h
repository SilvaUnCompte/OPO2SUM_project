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

	ref class Order : ClassTable {
	private:
		System::String^ delevery_date;
		System::String^ issue_date;
		Account^ account;

	public:
		Order(int id);

		System::String^ get_delevery_date() { return delevery_date; }
		System::String^ get_issue_date() { return issue_date; }
		Account^ get_account() { return account; }

		void set_delevery_date(System::String^ date) { delevery_date = date; }
		void set_issue_date(System::String^ date) { issue_date = date; }
		void set_account(Account^ currentAccount) { account = currentAccount; }
	};

	/*ref class OrderManager : ClassTableManager
	{
	public:
		Order^ select(int id);
		void insert(System::String^ delevery_date, System::String^ issue_date, int id_account);
		void deleteElement(int id);
		void deleteElement(Order^);
		void update(Order^);
	};*/

	/*ref class Address : ClassTable {};

	ref class AddressManager : ClassTableManager
	{
	public:
		Address^ select(int id);
		void insert(Address^);
		void deleteElement(int id);
		void deleteElement(Address^);
		void update(Address^);
	};

	ref class Product : ClassTable {};

	ref class ProductManager : ClassTableManager
	{
	public:
		Product^ select(int id);
		void insert(Product^);
		void deleteElement(int id);
		void deleteElement(Product^);
		void update(Product^);
	};

	ref class Payment : ClassTable {};

	ref class PaymentManager : ClassTableManager
	{
	public:
		Payment^ select(int id);
		void insert(Payment^);
		void deleteElement(int id);
		void deleteElement(Payment^);
		void update(Payment^);
	};

	ref class Bill : ClassTable {};

	ref class BillManager : ClassTableManager
	{
	public:
		Bill^ select(int id);
		void insert(Bill^);
		void deleteElement(int id);
		void deleteElement(Bill^);
		void update(Bill^);
	};

	ref class Living : ClassTable {};

	ref class LivingManager : ClassTableManager
	{
	public:
		Living^ select(int id);
		void insert(Living^);
		void deleteElement(Living^);
		void update(Living^);
	};

	ref class Billing : ClassTable {};

	ref class BillingManager : ClassTableManager
	{
	public:
		Billing^ select(int id);
		void insert(Billing^);
		void deleteElement(Billing^);
		void update(Billing^);
	};

	ref class Contain : ClassTable {};

	ref class ContainManager : ClassTableManager
	{
	public:
		Contain^ select(int id);
		void insert(Contain^);
		void deleteElement(Contain^);
		void update(Contain^);
	};*/
}

