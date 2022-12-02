#pragma once
#include "AccessData.h"
#include "DataManager.h"
#include <iostream>
#include <ctime>

namespace OPO2SUMproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ informationStockNameLabel;


	private: System::ComponentModel::IContainer^ components;

	private: System::Windows::Forms::Button^ Purchase_Value_button;

	private: System::Windows::Forms::Button^ Commercial_Value_button;

	private: System::Windows::Forms::Button^ buys_down_button;

	private: System::Windows::Forms::Button^ top_buys_button;

	private: System::Windows::Forms::Button^ Amount_per_client_button;

	private: System::Windows::Forms::Button^ Prod_u_restocking_button;
	private: System::Windows::Forms::Button^ turnover_button;
	private: System::Windows::Forms::Button^ Panier_Poyen_Button;

	private: System::Windows::Forms::Label^ stat_label;
	private: System::Windows::Forms::DataGridView^ dataGridViewstat;






	protected:


	private:
		Account^ connectedAccount;
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Purchase_Value_button = (gcnew System::Windows::Forms::Button());
			this->Commercial_Value_button = (gcnew System::Windows::Forms::Button());
			this->buys_down_button = (gcnew System::Windows::Forms::Button());
			this->top_buys_button = (gcnew System::Windows::Forms::Button());
			this->Amount_per_client_button = (gcnew System::Windows::Forms::Button());
			this->Prod_u_restocking_button = (gcnew System::Windows::Forms::Button());
			this->turnover_button = (gcnew System::Windows::Forms::Button());
			this->Panier_Poyen_Button = (gcnew System::Windows::Forms::Button());
			this->stat_label = (gcnew System::Windows::Forms::Label());
			this->dataGridViewstat = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewstat))->BeginInit();
			this->SuspendLayout();
			// 
			// Purchase_Value_button
			// 
			this->Purchase_Value_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Purchase_Value_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->Purchase_Value_button->Location = System::Drawing::Point(877, 355);
			this->Purchase_Value_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Purchase_Value_button->Name = L"Purchase_Value_button";
			this->Purchase_Value_button->Size = System::Drawing::Size(293, 38);
			this->Purchase_Value_button->TabIndex = 25;
			this->Purchase_Value_button->Text = L"Purchase Value of Stock";
			this->Purchase_Value_button->UseVisualStyleBackColor = true;
			this->Purchase_Value_button->Click += gcnew System::EventHandler(this, &MyForm::Purchase_Value_button_Click);
			// 
			// Commercial_Value_button
			// 
			this->Commercial_Value_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Commercial_Value_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->Commercial_Value_button->Location = System::Drawing::Point(877, 312);
			this->Commercial_Value_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Commercial_Value_button->Name = L"Commercial_Value_button";
			this->Commercial_Value_button->Size = System::Drawing::Size(293, 38);
			this->Commercial_Value_button->TabIndex = 24;
			this->Commercial_Value_button->Text = L"Commercial Value of Stock";
			this->Commercial_Value_button->UseVisualStyleBackColor = true;
			this->Commercial_Value_button->Click += gcnew System::EventHandler(this, &MyForm::Commercial_Value_button_Click);
			// 
			// buys_down_button
			// 
			this->buys_down_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buys_down_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->buys_down_button->Location = System::Drawing::Point(877, 268);
			this->buys_down_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buys_down_button->Name = L"buys_down_button";
			this->buys_down_button->Size = System::Drawing::Size(293, 38);
			this->buys_down_button->TabIndex = 23;
			this->buys_down_button->Text = L"10 - buys";
			this->buys_down_button->UseVisualStyleBackColor = true;
			this->buys_down_button->Click += gcnew System::EventHandler(this, &MyForm::buys_down_button_Click);
			// 
			// top_buys_button
			// 
			this->top_buys_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->top_buys_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->top_buys_button->Location = System::Drawing::Point(877, 225);
			this->top_buys_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->top_buys_button->Name = L"top_buys_button";
			this->top_buys_button->Size = System::Drawing::Size(293, 38);
			this->top_buys_button->TabIndex = 22;
			this->top_buys_button->Text = L"10 + buys";
			this->top_buys_button->UseVisualStyleBackColor = true;
			this->top_buys_button->Click += gcnew System::EventHandler(this, &MyForm::top_buys_button_Click);
			// 
			// Amount_per_client_button
			// 
			this->Amount_per_client_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Amount_per_client_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->Amount_per_client_button->Location = System::Drawing::Point(877, 182);
			this->Amount_per_client_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Amount_per_client_button->Name = L"Amount_per_client_button";
			this->Amount_per_client_button->Size = System::Drawing::Size(293, 38);
			this->Amount_per_client_button->TabIndex = 21;
			this->Amount_per_client_button->Text = L"Total Amount of a Client";
			this->Amount_per_client_button->UseVisualStyleBackColor = true;
			this->Amount_per_client_button->Click += gcnew System::EventHandler(this, &MyForm::Amount_per_client_button_Click);
			// 
			// Prod_u_restocking_button
			// 
			this->Prod_u_restocking_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Prod_u_restocking_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->Prod_u_restocking_button->Location = System::Drawing::Point(877, 139);
			this->Prod_u_restocking_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Prod_u_restocking_button->Name = L"Prod_u_restocking_button";
			this->Prod_u_restocking_button->Size = System::Drawing::Size(293, 38);
			this->Prod_u_restocking_button->TabIndex = 20;
			this->Prod_u_restocking_button->Text = L"Products under restocking threshold";
			this->Prod_u_restocking_button->UseVisualStyleBackColor = true;
			this->Prod_u_restocking_button->Click += gcnew System::EventHandler(this, &MyForm::Prod_u_restocking_button_Click);
			// 
			// turnover_button
			// 
			this->turnover_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->turnover_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->turnover_button->Location = System::Drawing::Point(877, 96);
			this->turnover_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->turnover_button->Name = L"turnover_button";
			this->turnover_button->Size = System::Drawing::Size(293, 38);
			this->turnover_button->TabIndex = 19;
			this->turnover_button->Text = L"turnover per month";
			this->turnover_button->UseVisualStyleBackColor = true;
			this->turnover_button->Click += gcnew System::EventHandler(this, &MyForm::turnover_button_Click);
			// 
			// Panier_Poyen_Button
			// 
			this->Panier_Poyen_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Panier_Poyen_Button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->Panier_Poyen_Button->Location = System::Drawing::Point(877, 53);
			this->Panier_Poyen_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Panier_Poyen_Button->Name = L"Panier_Poyen_Button";
			this->Panier_Poyen_Button->Size = System::Drawing::Size(293, 38);
			this->Panier_Poyen_Button->TabIndex = 18;
			this->Panier_Poyen_Button->Text = L"Average basket";
			this->Panier_Poyen_Button->UseVisualStyleBackColor = true;
			this->Panier_Poyen_Button->Click += gcnew System::EventHandler(this, &MyForm::Panier_Poyen_Button_Click);
			// 
			// stat_label
			// 
			this->stat_label->AutoSize = true;
			this->stat_label->Location = System::Drawing::Point(520, 34);
			this->stat_label->Name = L"stat_label";
			this->stat_label->Size = System::Drawing::Size(7, 16);
			this->stat_label->TabIndex = 28;
			this->stat_label->Text = L"\r\n";
			this->stat_label->Click += gcnew System::EventHandler(this, &MyForm::stat_label_Click);
			// 
			// dataGridViewstat
			// 
			this->dataGridViewstat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewstat->Location = System::Drawing::Point(264, 53);
			this->dataGridViewstat->Name = L"dataGridViewstat";
			this->dataGridViewstat->RowHeadersWidth = 51;
			this->dataGridViewstat->RowTemplate->Height = 24;
			this->dataGridViewstat->Size = System::Drawing::Size(607, 340);
			this->dataGridViewstat->TabIndex = 29;
			this->dataGridViewstat->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1239, 517);
			this->Controls->Add(this->dataGridViewstat);
			this->Controls->Add(this->stat_label);
			this->Controls->Add(this->Purchase_Value_button);
			this->Controls->Add(this->Commercial_Value_button);
			this->Controls->Add(this->buys_down_button);
			this->Controls->Add(this->top_buys_button);
			this->Controls->Add(this->Amount_per_client_button);
			this->Controls->Add(this->Prod_u_restocking_button);
			this->Controls->Add(this->turnover_button);
			this->Controls->Add(this->Panier_Poyen_Button);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Opo2suM";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewstat))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void liststat_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}	
private: System::Void Panier_Poyen_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	AccessData^ Adata = gcnew AccessData;	
	DataSet^ panier = Adata->getRows("SELECT  SUM(total_bill)/count(id_bill) AS panier FROM bill", "temp");
	stat_label->Text = "Average basket";
	dataGridViewstat->AutoGenerateColumns = true;
	dataGridViewstat->DataSource = panier; // dataset
	dataGridViewstat->DataMember = "Temp";

}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void turnover_button_Click(System::Object^ sender, System::EventArgs^ e) {
	AccessData^ Adata = gcnew AccessData;
	DataSet^ turnover = Adata->getRows("Select sum(c.nb_element *  p.marge_product) AS CHIFFRE_D_AFFARE from opo2sum.dbo.contain c , opo2sum.dbo.product p  where c.id_product = p.id_product", "temp");
	stat_label->Text = "turnover per month";
	dataGridViewstat->AutoGenerateColumns = true;
	dataGridViewstat->DataSource = turnover; // dataset
	dataGridViewstat->DataMember = "Temp";
}

private: System::Void Prod_u_restocking_button_Click(System::Object^ sender, System::EventArgs^ e) {
	AccessData^ Adata = gcnew AccessData;
	DataSet^ restocking = Adata->getRows("SELECT p.name_product, p.stock_product, p.restocking_threshold_product FROM opo2sum.dbo.product p WHERE((([stock_product]) <= [restocking_threshold_product])); ", "temp");
	stat_label->Text = "Products under restocking threshold";
	dataGridViewstat->AutoGenerateColumns = true;
	dataGridViewstat->DataSource = restocking; // dataset
	dataGridViewstat->DataMember = "Temp";
}

private: System::Void Amount_per_client_button_Click(System::Object^ sender, System::EventArgs^ e) {
	AccessData^ Adata = gcnew AccessData;
	DataSet^ Amount_per_client = Adata->getRows(" SELECT id_order, SUM(total_bill) AS total_per_client FROM opo2sum.dbo.bill GROUP BY id_order", "temp");
	stat_label->Text = "Amount_per_client";
	dataGridViewstat->AutoGenerateColumns = true;
	dataGridViewstat->DataSource = Amount_per_client; // dataset
	dataGridViewstat->DataMember = "Temp";
}

private: System::Void top_buys_button_Click(System::Object^ sender, System::EventArgs^ e) {
	AccessData^ Adata = gcnew AccessData;
	DataSet^ top10_buys = Adata->getRows(" SELECT TOP 10 [id_product], SUM(nb_element) Qte_top FROM opo2sum.dbo.contain GROUP BY[id_product] ORDER BY Qte_top DESC", "temp");
	stat_label->Text = "top10_buys";
	dataGridViewstat->AutoGenerateColumns = true;
	dataGridViewstat->DataSource = top10_buys; // dataset
	dataGridViewstat->DataMember = "Temp";
}

private: System::Void buys_down_button_Click(System::Object^ sender, System::EventArgs^ e) {
	AccessData^ Adata = gcnew AccessData;
	DataSet^ down10_buys = Adata->getRows("  SELECT  [id_product], SUM(nb_element) Qte_down FROM opo2sum.dbo.contain GROUP BY[id_product] ORDER BY Qte_down DESC", "temp");
	stat_label->Text = "bottom10_buys";
	dataGridViewstat->AutoGenerateColumns = true;
	dataGridViewstat->DataSource = down10_buys; // dataset
	dataGridViewstat->DataMember = "Temp";
}

private: System::Void Commercial_Value_button_Click(System::Object^ sender, System::EventArgs^ e) {
	AccessData^ Adata = gcnew AccessData;
	DataSet^ Commercial_Value_of_Stock = Adata->getRows(" Select sum(cost_product+marge_product) AS buy_value_commercial from  opo2sum.dbo.product  where id_product = id_product", "temp");
	stat_label->Text = "Commercial_Value_of_Stock";
	dataGridViewstat->AutoGenerateColumns = true;
	dataGridViewstat->DataSource = Commercial_Value_of_Stock; // dataset
	dataGridViewstat->DataMember = "Temp";
}
private: System::Void Purchase_Value_button_Click(System::Object^ sender, System::EventArgs^ e) {
	AccessData^ Adata = gcnew AccessData;
	DataSet^ Purchase_Value_of_Stock = Adata->getRows("Select sum((cost_product+marge_product)*(1+tva_product)) AS buy_value from  opo2sum.dbo.product  where id_product = id_product", "temp");
	stat_label->Text = "Purchase_Value_of_Stock";
	dataGridViewstat->AutoGenerateColumns = true;
	dataGridViewstat->DataSource = Purchase_Value_of_Stock; // dataset
	dataGridViewstat->DataMember = "Temp";
}


private: System::Void stat_label_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}