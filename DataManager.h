#pragma once

namespace OPO2SUMproject
{
	ref class DataManager
	{
	public:
		DataManager();
		/*virtual void insert(System::Data::DataSet dataInsert) = 0;
		virtual void deleteElement(int id) = 0;
		virtual void update(int id) = 0;*/
	};

	ref class Account
	{
	private:
		int id_account;
		System::String^ account_name;
		System::String^ password_account;
		System::String^ firstname_account;
		System::String^ lastname_account;
		System::String^ birthday_account;
		int permission_lv_account;
	public:
		Account(int id);
		// add les getters et setters
	};

	ref class AccountManager : DataManager
	{
	public:
		Account^ select(int id);
		void insert(Account^);
		void deleteElement(Account^);
		void update(Account^);
	};

	ref class Personnel
	{
	private:
		int id_personnel;
		System::String^ hire_date;
		bool is_manager;
		Account^ account;

	public:
		Personnel(int id);
		int get_id_personnel() { return id_personnel; }
		System::String^ get_hire_date() { return hire_date; }
		bool get_is_manager() { return is_manager; }
		Account^ get_account() { return account; }
		int set_id_personnel() { return id_personnel; }
		System::String^ set_hire_date() { return hire_date; }
		bool set_is_manager() { return is_manager; }
		Account^ set_account() { return account; }
	};

	ref class PersonnelManager : DataManager
	{
	public:
		Personnel^ select(int id);
		void insert(Personnel^);
		void deleteElement(Personnel^);
		void update(Personnel^);
	};

	/*ref class Order {};

	ref class OrderManager : DataManager
	{
	public:
		Order^ select(int id);
		void insert(Order^);
		void deleteElement(Order^);
		void update(Order^);
	};

	ref class Address {};

	ref class AddressManager : DataManager
	{
	public:
		Address^ select(int id);
		void insert(Address^);
		void deleteElement(Address^);
		void update(Address^);
	};

	ref class Product {};

	ref class ProductManager : DataManager
	{
	public:
		Product^ select(int id);
		void insert(Product^);
		void deleteElement(Product^);
		void update(Product^);
	};

	ref class Payment {};

	ref class PaymentManager : DataManager
	{
	public:
		Payment^ select(int id);
		void insert(Payment^);
		void deleteElement(Payment^);
		void update(Payment^);
	};

	ref class Bill {};

	ref class BillManager : DataManager
	{
	public:
		Bill^ select(int id);
		void insert(Bill^);
		void deleteElement(Bill^);
		void update(Bill^);
	};

	ref class Living {};

	ref class LivingManager : DataManager
	{
	public:
		Living^ select(int id);
		void insert(Living^);
		void deleteElement(Living^);
		void update(Living^);
	};

	ref class Billing {};

	ref class BillingManager : DataManager
	{
	public:
		Billing^ select(int id);
		void insert(Billing^);
		void deleteElement(Billing^);
		void update(Billing^);
	};

	ref class Contain {};

	ref class ContainManager : DataManager
	{
	public:
		Contain^ select(int id);
		void insert(Contain^);
		void deleteElement(Contain^);
		void update(Contain^);
	};*/
}

