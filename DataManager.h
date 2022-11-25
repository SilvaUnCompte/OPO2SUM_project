#pragma once

namespace OPO2SUMproject
{
	ref class DataManager
	{
	private:
		System::Data::DataSet data;

	public:
		virtual System::String^ Select(void);
		virtual System::String^ Select(int);
		virtual System::String^ Insert(void);
		virtual System::String^ Delete(void);
		virtual System::String^ Update(void);
	};

	ref class personnelManager : DataManager
	{
	public:
		System::String^ Select(void) override;
		System::String^ Select(int id) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;
	};
}

