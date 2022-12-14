#include "pch.h"
#include "AccessData.h"


OPO2SUMproject::AccessData::AccessData(void)
{
	// Enzo : DESKTOP-1P8UTCD | Selyan : BOBLÉPONGE | Nezar : 
	this->sCnx = "Data Source=DESKTOP-1P8UTCD;Initial Catalog=OPO2SUM;Integrated Security=True";

	this->sSql = "";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}

System::Data::DataSet^ OPO2SUMproject::AccessData::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();
	this->oCmd->CommandText = sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oDA->Fill(this->oDs, sDataTableName);
	this->oCnx->Close();

	return this->oDs;
}

void OPO2SUMproject::AccessData::actionRows(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}