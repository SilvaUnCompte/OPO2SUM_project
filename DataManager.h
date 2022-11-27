#pragma once

namespace OPO2SUMproject
{
	ref class DataManager
	{
	private:
		System::Data::DataSet data;
		
	public:
		virtual System::Data::DataSet select() = 0;
		virtual System::Data::DataSet select() = 0;
		virtual void insert() = 0;
		virtual void deleteElement() = 0;
		virtual void update() = 0;
	};

	ref class PersonnelManager : DataManager
	{
	public:
		System::Data::DataSet select(void) override;
		System::Data::DataSet select(int) override;
		void insert(System::Data::DataSet dataInsert) override;
		void deleteElement(int id) override;
		void update(int id) override;
	};

	ref class OrderManager : DataManager
	{
	public:
		System::Data::DataSet select(void) override;
		System::Data::DataSet select(int) override;
		void insert(System::Data::DataSet dataInsert) override;
		void deleteElement(int id) override;
		void update(int id) override;
	};

	ref class AddressManager : DataManager
	{
	public:
		System::Data::DataSet select(void) override;
		System::Data::DataSet select(int) override;
		void insert(System::Data::DataSet dataInsert) override;
		void deleteElement(int id) override;
		void update(int id) override;
	};

	ref class AccountManager : DataManager
	{
	public:
		System::Data::DataSet select(void) override;
		System::Data::DataSet select(int) override;
		void insert(System::Data::DataSet dataInsert) override;
		void deleteElement(int id) override;
		void update(int id) override;
	};

	ref class ProductManager : DataManager
	{
	public:
		System::Data::DataSet select(void) override;
		System::Data::DataSet select(int) override;
		void insert(System::Data::DataSet dataInsert) override;
		void deleteElement(int id) override;
		void update(int id) override;
	};

	ref class PaymentManager : DataManager
	{
	public:
		System::Data::DataSet select(void) override;
		System::Data::DataSet select(int) override;
		void insert(System::Data::DataSet dataInsert) override;
		void deleteElement(int id) override;
		void update(int id) override;
	};

	ref class BillManager : DataManager
	{
	public:
		System::Data::DataSet select(void) override;
		System::Data::DataSet select(int) override;
		void insert(System::Data::DataSet dataInsert) override;
		void deleteElement(int id) override;
		void update(int id) override;
	};

	ref class LivingManager : DataManager
	{
	public:
		System::Data::DataSet select(void) override;
		System::Data::DataSet select(int) override;
		void insert(System::Data::DataSet dataInsert) override;
		void deleteElement(int id) override;
		void update(int id) override;
	};

	ref class BillingManager : DataManager
	{
	public:
		System::Data::DataSet select(void) override;
		System::Data::DataSet select(int) override;
		void insert(System::Data::DataSet dataInsert) override;
		void deleteElement(int id) override;
		void update(int id) override;
	};

	ref class ContainManager : DataManager
	{
	public:
		System::Data::DataSet select(void) override;
		System::Data::DataSet select(int) override;
		void insert(System::Data::DataSet dataInsert) override;
		void deleteElement(int id) override;
		void update(int id) override;
	};
}

