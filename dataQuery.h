#pragma once
#include "pch.h"
#include "DataManager.h"
#include "AccessData.h"

namespace OPO2SUMproject
{
	ref class DataQuery
	{
	private:
		AccessData^ Adata;
		DataManager^ Dmanager;

	public:
		DataQuery::DataQuery(void);
		System::Data::DataSet^ DataQuery::selectAllAccount();
		// toute les fonctions bouton
	};
}