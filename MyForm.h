#pragma once
#include "AccessData.h"
#include "DataManager.h"
#include <iostream>
#include <vector>

namespace OPO2SUMproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::VisualBasic;

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
	private: System::Windows::Forms::Panel^ loginPanel;
	private: System::Windows::Forms::Panel^ clientMPanel;
	private: System::Windows::Forms::Panel^ orderMPanel;
	private: System::Windows::Forms::Panel^ registerPanel;
	private: System::Windows::Forms::Panel^ stockMPanel;

	private: System::Windows::Forms::Panel^ addStockPanel;
	private: System::Windows::Forms::Panel^ loginUsernamePanel;
	private: System::Windows::Forms::Panel^ loginPasswordPanel;
	private: System::Windows::Forms::Panel^ menuButtonPanel;
	private: System::Windows::Forms::Panel^ menuLogoPanel;
	private: System::Windows::Forms::Panel^ titleBarPanel;
	private: System::Windows::Forms::Panel^ accountPanel;
	private: System::Windows::Forms::Panel^ hubPanel;
	private: System::Windows::Forms::Panel^ catalogCartPanel;
	private: System::Windows::Forms::Panel^ catalogOrderPanel;
	private: System::Windows::Forms::Panel^ statisticMPanel;
	private: System::Windows::Forms::TextBox^ loginPasswordTextBox;
	private: System::Windows::Forms::TextBox^ loginUsernameTextBox;
	private: System::Windows::Forms::Label^ loginLoginLabel;
	private: System::Windows::Forms::Button^ loginRegisterButton;
	private: System::Windows::Forms::DataGridView^ clientMDGV;
	private: System::Windows::Forms::Button^ clientMSearchButton;
	private: System::Windows::Forms::Label^ clientMCityLabel;
	private: System::Windows::Forms::Label^ clientMLNameLabel;
	private: System::Windows::Forms::Label^ clientMFNameLabel;
	private: System::Windows::Forms::TextBox^ clientMCityTextBox;
	private: System::Windows::Forms::TextBox^ clientMLNameTextBox;
	private: System::Windows::Forms::TextBox^ clientMFNameTextBox;
	private: System::Windows::Forms::Button^ clientMModifyButton;
	private: System::Windows::Forms::Button^ clientMDeleteButton;





	private: System::Windows::Forms::Button^ loginValidateButton;
	private: System::Windows::Forms::Button^ registerValidateButton;
	private: System::Windows::Forms::Button^ registerLoginButton;
	private: System::Windows::Forms::Label^ registerPasswordLabel;
	private: System::Windows::Forms::TextBox^ registerPasswordTextBox;
	private: System::Windows::Forms::TextBox^ registerUsernameTextBox;
	private: System::Windows::Forms::Label^ registerUsernameLabel;
	private: System::Windows::Forms::Label^ registerRegisterLabel;









	private: System::Windows::Forms::Button^ addStockValidateButton;
	private: System::Windows::Forms::TextBox^ addStockQuantityTextBox;
	private: System::Windows::Forms::TextBox^ addStockNameTextBox;
	private: System::Windows::Forms::Label^ addStockQuantityLabel;
	private: System::Windows::Forms::Label^ addStockNameLabel;
	private: System::Windows::Forms::Label^ addStockTitleLabel;
	private: System::Windows::Forms::Button^ addStockExitButton;

	private: System::Windows::Forms::Label^ stockMLabel;
	private: System::Windows::Forms::Label^ informationStockNameLabel;
	private: System::Windows::Forms::Label^ addStockStockLabel;
	private: System::Windows::Forms::Label^ addStockTVALabel;
	private: System::Windows::Forms::Label^ addStockMargeLabel;
	private: System::Windows::Forms::Label^ addStockCostLabel;
	private: System::Windows::Forms::TextBox^ addStockCostTextBox;
	private: System::Windows::Forms::Label^ addStockRestockingLabel;
	private: System::Windows::Forms::TextBox^ addStockStockTextBox;
	private: System::Windows::Forms::TextBox^ addStockTVATextBox;
	private: System::Windows::Forms::TextBox^ addStockMargeTextBox;
	private: System::Windows::Forms::TextBox^ addStockRestockingTextBox;
	private: System::Windows::Forms::DataGridView^ dataGridViewstat;
	private: System::Windows::Forms::Label^ registerErrorLabel;
	private: System::Windows::Forms::Label^ registerLastnameLabel;
	private: System::Windows::Forms::Label^ registerFirstnameLabel;
	private: System::Windows::Forms::TextBox^ registerLastnameTextBox;
	private: System::Windows::Forms::TextBox^ registerFirstnameTextBox;
	private: System::Windows::Forms::DateTimePicker^ registerDateTimePicker;
	private: System::Windows::Forms::Label^ registerBirthdayLabel;
	private: System::Windows::Forms::Label^ loginErrorLabel;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ menuClientButton;
	private: System::Windows::Forms::Button^ menuStatisticButton;
	private: System::Windows::Forms::Button^ menuStockButton;
	private: System::Windows::Forms::Button^ menuOrderButton;
	private: System::Windows::Forms::Label^ titleBarLabel;
	private: System::Windows::Forms::Label^ nameProjectLabel;
	private: System::Windows::Forms::Button^ menuAccountButton;
	private: System::Windows::Forms::TextBox^ accountAddressMoreTextBox;
	private: System::Windows::Forms::TextBox^ accountAddressCityTextBox;
	private: System::Windows::Forms::TextBox^ accountAddressNbTextBox;
	private: System::Windows::Forms::TextBox^ accountBirthdayTextBox;
	private: System::Windows::Forms::TextBox^ accountPasswordTextBox;
	private: System::Windows::Forms::TextBox^ accountLastnameTextBox;
	private: System::Windows::Forms::TextBox^ accountFirstnameTextBox;
	private: System::Windows::Forms::TextBox^ accountUsernameTextBox;
	private: System::Windows::Forms::Label^ accountAddressMoreLabel;
	private: System::Windows::Forms::Label^ accountPostalCodeLabel;
	private: System::Windows::Forms::Label^ accountCityLabel;
	private: System::Windows::Forms::Label^ accountStreetLabel;
	private: System::Windows::Forms::Label^ accountAddressLabel;
	private: System::Windows::Forms::Label^ accountBirthdayLabel;
	private: System::Windows::Forms::Label^ accountPasswordLabel;
	private: System::Windows::Forms::Label^ accountLastnameLabel;
	private: System::Windows::Forms::Label^ accountFirstnameLabel;
	private: System::Windows::Forms::Label^ accountUsernameLabel;
	private: System::Windows::Forms::Label^ accountTitleLabel;
	private: System::Windows::Forms::ComboBox^ accountAddressListComboBox;
	private: System::Windows::Forms::Button^ accountModifyButton;
	private: System::Windows::Forms::Button^ accountAddressAddButton;
	private: System::Windows::Forms::Button^ accountAddressDeleteButton;
	private: System::Windows::Forms::Button^ menuPersonnellManageButton;
	private: System::Windows::Forms::Button^ menuCatalogButton;
	private: System::Windows::Forms::Label^ accountErrorLabel;
	private: System::Windows::Forms::Label^ accountErrorAddAddressLabel;
	private: System::Windows::Forms::NumericUpDown^ accountAddressPostalNumericUpDown;
	private: System::Windows::Forms::Label^ accountSeparatorLabel;
	private: System::Windows::Forms::Button^ testToSupprButton;
	private: System::Windows::Forms::Button^ stockMAddButton;
	private: System::Windows::Forms::Button^ catalogCartButton;
	private: System::Windows::Forms::ListView^ catalogGlobalListView;
	private: System::Windows::Forms::TextBox^ catalogResearchTextBox;
	private: System::Windows::Forms::Label^ catalogOrderResearchLabel;
	private: System::Windows::Forms::Label^ catalogOrderTitleLabel;
	private: System::Windows::Forms::Label^ catalogCartTitleLabel;
	private: System::Windows::Forms::Label^ catalogAddressShippingLabel;
	private: System::Windows::Forms::Label^ catalogAddressBillingLabel;
	private: System::Windows::Forms::ComboBox^ catalogAddressShippingListComboBox;
	private: System::Windows::Forms::ComboBox^ catalogAddressBillingListComboBox;
	private: System::Windows::Forms::Button^ catalogCheckoutButton;
	private: System::Windows::Forms::Button^ catalogBackButton;
	private: System::Windows::Forms::ListView^ catalogSelectedListView;
	private: System::Windows::Forms::Button^ loginPasswordModButton;
	private: System::Windows::Forms::Button^ Purchase_Value_button;
	private: System::Windows::Forms::Button^ Commercial_Value_button;
	private: System::Windows::Forms::Button^ buys_down_button;
	private: System::Windows::Forms::Button^ top_buys_button;
	private: System::Windows::Forms::Button^ Amount_per_client_button;
	private: System::Windows::Forms::Button^ Prod_u_restocking_button;
	private: System::Windows::Forms::Button^ turnover_button;
	private: System::Windows::Forms::Button^ Panier_Poyen_Button;
	private: System::Windows::Forms::Label^ stat_label;


	private:
		Account^ connectedAccount;
		AddressManager^ addressManager = gcnew AddressManager();
		ContainManager^ containManager = gcnew ContainManager();
		ProductManager^ productManager = gcnew ProductManager();
		OrderManager^ orderManager = gcnew OrderManager();
		BillManager^ billManager = gcnew BillManager();
private: System::Windows::Forms::ListView^ listView1;
	   AccountManager^ accountManager = gcnew AccountManager();


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->loginPanel = (gcnew System::Windows::Forms::Panel());
			this->testToSupprButton = (gcnew System::Windows::Forms::Button());
			this->loginPasswordPanel = (gcnew System::Windows::Forms::Panel());
			this->loginPasswordModButton = (gcnew System::Windows::Forms::Button());
			this->loginPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginUsernamePanel = (gcnew System::Windows::Forms::Panel());
			this->loginUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginErrorLabel = (gcnew System::Windows::Forms::Label());
			this->loginValidateButton = (gcnew System::Windows::Forms::Button());
			this->loginRegisterButton = (gcnew System::Windows::Forms::Button());
			this->loginLoginLabel = (gcnew System::Windows::Forms::Label());
			this->registerPanel = (gcnew System::Windows::Forms::Panel());
			this->registerBirthdayLabel = (gcnew System::Windows::Forms::Label());
			this->registerDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->registerErrorLabel = (gcnew System::Windows::Forms::Label());
			this->registerLastnameLabel = (gcnew System::Windows::Forms::Label());
			this->registerFirstnameLabel = (gcnew System::Windows::Forms::Label());
			this->registerLastnameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->registerFirstnameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->registerValidateButton = (gcnew System::Windows::Forms::Button());
			this->registerLoginButton = (gcnew System::Windows::Forms::Button());
			this->registerPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->registerPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->registerUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->registerUsernameLabel = (gcnew System::Windows::Forms::Label());
			this->registerRegisterLabel = (gcnew System::Windows::Forms::Label());
			this->stockMPanel = (gcnew System::Windows::Forms::Panel());
			this->stockMAddButton = (gcnew System::Windows::Forms::Button());
			this->stockMLabel = (gcnew System::Windows::Forms::Label());
			this->addStockPanel = (gcnew System::Windows::Forms::Panel());
			this->addStockRestockingTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addStockStockTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addStockTVATextBox = (gcnew System::Windows::Forms::TextBox());
			this->addStockMargeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addStockCostTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addStockRestockingLabel = (gcnew System::Windows::Forms::Label());
			this->addStockStockLabel = (gcnew System::Windows::Forms::Label());
			this->addStockTVALabel = (gcnew System::Windows::Forms::Label());
			this->addStockMargeLabel = (gcnew System::Windows::Forms::Label());
			this->addStockCostLabel = (gcnew System::Windows::Forms::Label());
			this->addStockValidateButton = (gcnew System::Windows::Forms::Button());
			this->addStockQuantityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addStockNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addStockQuantityLabel = (gcnew System::Windows::Forms::Label());
			this->addStockNameLabel = (gcnew System::Windows::Forms::Label());
			this->addStockTitleLabel = (gcnew System::Windows::Forms::Label());
			this->addStockExitButton = (gcnew System::Windows::Forms::Button());
			this->orderMPanel = (gcnew System::Windows::Forms::Panel());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->clientMPanel = (gcnew System::Windows::Forms::Panel());
			this->clientMModifyButton = (gcnew System::Windows::Forms::Button());
			this->clientMDeleteButton = (gcnew System::Windows::Forms::Button());
			this->clientMFNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->clientMLNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->clientMCityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->clientMDGV = (gcnew System::Windows::Forms::DataGridView());
			this->clientMSearchButton = (gcnew System::Windows::Forms::Button());
			this->clientMCityLabel = (gcnew System::Windows::Forms::Label());
			this->clientMFNameLabel = (gcnew System::Windows::Forms::Label());
			this->clientMLNameLabel = (gcnew System::Windows::Forms::Label());
			this->menuButtonPanel = (gcnew System::Windows::Forms::Panel());
			this->menuPersonnellManageButton = (gcnew System::Windows::Forms::Button());
			this->menuCatalogButton = (gcnew System::Windows::Forms::Button());
			this->menuAccountButton = (gcnew System::Windows::Forms::Button());
			this->menuStatisticButton = (gcnew System::Windows::Forms::Button());
			this->menuStockButton = (gcnew System::Windows::Forms::Button());
			this->menuOrderButton = (gcnew System::Windows::Forms::Button());
			this->menuClientButton = (gcnew System::Windows::Forms::Button());
			this->menuLogoPanel = (gcnew System::Windows::Forms::Panel());
			this->nameProjectLabel = (gcnew System::Windows::Forms::Label());
			this->titleBarPanel = (gcnew System::Windows::Forms::Panel());
			this->titleBarLabel = (gcnew System::Windows::Forms::Label());
			this->accountPanel = (gcnew System::Windows::Forms::Panel());
			this->accountSeparatorLabel = (gcnew System::Windows::Forms::Label());
			this->accountAddressPostalNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->accountErrorAddAddressLabel = (gcnew System::Windows::Forms::Label());
			this->accountErrorLabel = (gcnew System::Windows::Forms::Label());
			this->accountAddressAddButton = (gcnew System::Windows::Forms::Button());
			this->accountAddressDeleteButton = (gcnew System::Windows::Forms::Button());
			this->accountModifyButton = (gcnew System::Windows::Forms::Button());
			this->accountAddressListComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->accountAddressMoreTextBox = (gcnew System::Windows::Forms::TextBox());
			this->accountAddressCityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->accountAddressNbTextBox = (gcnew System::Windows::Forms::TextBox());
			this->accountBirthdayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->accountPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->accountLastnameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->accountFirstnameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->accountUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->accountAddressMoreLabel = (gcnew System::Windows::Forms::Label());
			this->accountPostalCodeLabel = (gcnew System::Windows::Forms::Label());
			this->accountCityLabel = (gcnew System::Windows::Forms::Label());
			this->accountStreetLabel = (gcnew System::Windows::Forms::Label());
			this->accountAddressLabel = (gcnew System::Windows::Forms::Label());
			this->accountBirthdayLabel = (gcnew System::Windows::Forms::Label());
			this->accountPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->accountLastnameLabel = (gcnew System::Windows::Forms::Label());
			this->accountFirstnameLabel = (gcnew System::Windows::Forms::Label());
			this->accountUsernameLabel = (gcnew System::Windows::Forms::Label());
			this->accountTitleLabel = (gcnew System::Windows::Forms::Label());
			this->hubPanel = (gcnew System::Windows::Forms::Panel());
			this->catalogOrderPanel = (gcnew System::Windows::Forms::Panel());
			this->catalogCartButton = (gcnew System::Windows::Forms::Button());
			this->catalogGlobalListView = (gcnew System::Windows::Forms::ListView());
			this->catalogResearchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->catalogOrderResearchLabel = (gcnew System::Windows::Forms::Label());
			this->catalogOrderTitleLabel = (gcnew System::Windows::Forms::Label());
			this->catalogCartPanel = (gcnew System::Windows::Forms::Panel());
			this->catalogAddressShippingLabel = (gcnew System::Windows::Forms::Label());
			this->catalogAddressBillingLabel = (gcnew System::Windows::Forms::Label());
			this->catalogAddressShippingListComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->catalogAddressBillingListComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->catalogCheckoutButton = (gcnew System::Windows::Forms::Button());
			this->catalogBackButton = (gcnew System::Windows::Forms::Button());
			this->catalogSelectedListView = (gcnew System::Windows::Forms::ListView());
			this->catalogCartTitleLabel = (gcnew System::Windows::Forms::Label());
			this->statisticMPanel = (gcnew System::Windows::Forms::Panel());
			this->stat_label = (gcnew System::Windows::Forms::Label());
			this->Purchase_Value_button = (gcnew System::Windows::Forms::Button());
			this->Commercial_Value_button = (gcnew System::Windows::Forms::Button());
			this->buys_down_button = (gcnew System::Windows::Forms::Button());
			this->top_buys_button = (gcnew System::Windows::Forms::Button());
			this->Amount_per_client_button = (gcnew System::Windows::Forms::Button());
			this->Prod_u_restocking_button = (gcnew System::Windows::Forms::Button());
			this->turnover_button = (gcnew System::Windows::Forms::Button());
			this->Panier_Poyen_Button = (gcnew System::Windows::Forms::Button());
			this->dataGridViewstat = (gcnew System::Windows::Forms::DataGridView());
			this->loginPanel->SuspendLayout();
			this->loginPasswordPanel->SuspendLayout();
			this->loginUsernamePanel->SuspendLayout();
			this->registerPanel->SuspendLayout();
			this->stockMPanel->SuspendLayout();
			this->addStockPanel->SuspendLayout();
			this->orderMPanel->SuspendLayout();
			this->clientMPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientMDGV))->BeginInit();
			this->menuButtonPanel->SuspendLayout();
			this->menuLogoPanel->SuspendLayout();
			this->titleBarPanel->SuspendLayout();
			this->accountPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accountAddressPostalNumericUpDown))->BeginInit();
			this->hubPanel->SuspendLayout();
			this->catalogOrderPanel->SuspendLayout();
			this->catalogCartPanel->SuspendLayout();
			this->statisticMPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewstat))->BeginInit();
			this->SuspendLayout();
			// 
			// loginPanel
			// 
			this->loginPanel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->loginPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->loginPanel->Controls->Add(this->testToSupprButton);
			this->loginPanel->Controls->Add(this->loginPasswordPanel);
			this->loginPanel->Controls->Add(this->loginUsernamePanel);
			this->loginPanel->Controls->Add(this->loginErrorLabel);
			this->loginPanel->Controls->Add(this->loginValidateButton);
			this->loginPanel->Controls->Add(this->loginRegisterButton);
			this->loginPanel->Controls->Add(this->loginLoginLabel);
			this->loginPanel->Location = System::Drawing::Point(0, 0);
			this->loginPanel->Margin = System::Windows::Forms::Padding(0);
			this->loginPanel->Name = L"loginPanel";
			this->loginPanel->Size = System::Drawing::Size(1188, 687);
			this->loginPanel->TabIndex = 0;
			// 
			// testToSupprButton
			// 
			this->testToSupprButton->Location = System::Drawing::Point(1068, 632);
			this->testToSupprButton->Name = L"testToSupprButton";
			this->testToSupprButton->Size = System::Drawing::Size(108, 44);
			this->testToSupprButton->TabIndex = 21;
			this->testToSupprButton->Text = L"Hide Login";
			this->testToSupprButton->UseVisualStyleBackColor = true;
			this->testToSupprButton->Click += gcnew System::EventHandler(this, &MyForm::testToSupprButton_Click);
			// 
			// loginPasswordPanel
			// 
			this->loginPasswordPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->loginPasswordPanel->Controls->Add(this->loginPasswordModButton);
			this->loginPasswordPanel->Controls->Add(this->loginPasswordTextBox);
			this->loginPasswordPanel->Location = System::Drawing::Point(373, 317);
			this->loginPasswordPanel->Name = L"loginPasswordPanel";
			this->loginPasswordPanel->Size = System::Drawing::Size(445, 64);
			this->loginPasswordPanel->TabIndex = 20;
			// 
			// loginPasswordModButton
			// 
			this->loginPasswordModButton->Location = System::Drawing::Point(396, 13);
			this->loginPasswordModButton->Name = L"loginPasswordModButton";
			this->loginPasswordModButton->Size = System::Drawing::Size(36, 31);
			this->loginPasswordModButton->TabIndex = 4;
			this->loginPasswordModButton->Text = L"O";
			this->loginPasswordModButton->UseVisualStyleBackColor = true;
			this->loginPasswordModButton->Click += gcnew System::EventHandler(this, &MyForm::loginPasswordModButton_Click);
			// 
			// loginPasswordTextBox
			// 
			this->loginPasswordTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginPasswordTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->loginPasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->loginPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->loginPasswordTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->loginPasswordTextBox->Location = System::Drawing::Point(37, 13);
			this->loginPasswordTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->loginPasswordTextBox->Name = L"loginPasswordTextBox";
			this->loginPasswordTextBox->Size = System::Drawing::Size(323, 31);
			this->loginPasswordTextBox->TabIndex = 3;
			this->loginPasswordTextBox->Text = L"Password";
			this->loginPasswordTextBox->UseSystemPasswordChar = true;
			this->loginPasswordTextBox->Click += gcnew System::EventHandler(this, &MyForm::loginPasswordTextBox_Click);
			// 
			// loginUsernamePanel
			// 
			this->loginUsernamePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->loginUsernamePanel->Controls->Add(this->loginUsernameTextBox);
			this->loginUsernamePanel->Location = System::Drawing::Point(373, 230);
			this->loginUsernamePanel->Name = L"loginUsernamePanel";
			this->loginUsernamePanel->Size = System::Drawing::Size(445, 58);
			this->loginUsernamePanel->TabIndex = 19;
			// 
			// loginUsernameTextBox
			// 
			this->loginUsernameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->loginUsernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->loginUsernameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->loginUsernameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->loginUsernameTextBox->Location = System::Drawing::Point(37, 11);
			this->loginUsernameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->loginUsernameTextBox->Name = L"loginUsernameTextBox";
			this->loginUsernameTextBox->Size = System::Drawing::Size(371, 31);
			this->loginUsernameTextBox->TabIndex = 2;
			this->loginUsernameTextBox->Text = L"Username";
			this->loginUsernameTextBox->Click += gcnew System::EventHandler(this, &MyForm::loginUsernameTextBox_Click);
			// 
			// loginErrorLabel
			// 
			this->loginErrorLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginErrorLabel->BackColor = System::Drawing::Color::Transparent;
			this->loginErrorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginErrorLabel->ForeColor = System::Drawing::Color::Red;
			this->loginErrorLabel->Location = System::Drawing::Point(373, 414);
			this->loginErrorLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->loginErrorLabel->Name = L"loginErrorLabel";
			this->loginErrorLabel->Size = System::Drawing::Size(445, 68);
			this->loginErrorLabel->TabIndex = 18;
			this->loginErrorLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// loginValidateButton
			// 
			this->loginValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->loginValidateButton->BackColor = System::Drawing::Color::LimeGreen;
			this->loginValidateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->loginValidateButton->Location = System::Drawing::Point(373, 510);
			this->loginValidateButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->loginValidateButton->Name = L"loginValidateButton";
			this->loginValidateButton->Size = System::Drawing::Size(445, 64);
			this->loginValidateButton->TabIndex = 11;
			this->loginValidateButton->Text = L"Validate";
			this->loginValidateButton->UseVisualStyleBackColor = false;
			this->loginValidateButton->Click += gcnew System::EventHandler(this, &MyForm::loginValidateButton_Click);
			// 
			// loginRegisterButton
			// 
			this->loginRegisterButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->loginRegisterButton->BackColor = System::Drawing::Color::LimeGreen;
			this->loginRegisterButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->loginRegisterButton->Location = System::Drawing::Point(1051, 12);
			this->loginRegisterButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->loginRegisterButton->Name = L"loginRegisterButton";
			this->loginRegisterButton->Size = System::Drawing::Size(126, 64);
			this->loginRegisterButton->TabIndex = 5;
			this->loginRegisterButton->Text = L"Register";
			this->loginRegisterButton->UseVisualStyleBackColor = false;
			this->loginRegisterButton->Click += gcnew System::EventHandler(this, &MyForm::loginRegisterButton_Click);
			// 
			// loginLoginLabel
			// 
			this->loginLoginLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginLoginLabel->AutoSize = true;
			this->loginLoginLabel->BackColor = System::Drawing::Color::Transparent;
			this->loginLoginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginLoginLabel->ForeColor = System::Drawing::Color::LimeGreen;
			this->loginLoginLabel->Location = System::Drawing::Point(11, 9);
			this->loginLoginLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->loginLoginLabel->Name = L"loginLoginLabel";
			this->loginLoginLabel->Size = System::Drawing::Size(352, 135);
			this->loginLoginLabel->TabIndex = 0;
			this->loginLoginLabel->Text = L"Login";
			// 
			// registerPanel
			// 
			this->registerPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->registerPanel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->registerPanel->Controls->Add(this->registerBirthdayLabel);
			this->registerPanel->Controls->Add(this->registerDateTimePicker);
			this->registerPanel->Controls->Add(this->registerErrorLabel);
			this->registerPanel->Controls->Add(this->registerLastnameLabel);
			this->registerPanel->Controls->Add(this->registerFirstnameLabel);
			this->registerPanel->Controls->Add(this->registerLastnameTextBox);
			this->registerPanel->Controls->Add(this->registerFirstnameTextBox);
			this->registerPanel->Controls->Add(this->registerValidateButton);
			this->registerPanel->Controls->Add(this->registerLoginButton);
			this->registerPanel->Controls->Add(this->registerPasswordLabel);
			this->registerPanel->Controls->Add(this->registerPasswordTextBox);
			this->registerPanel->Controls->Add(this->registerUsernameTextBox);
			this->registerPanel->Controls->Add(this->registerUsernameLabel);
			this->registerPanel->Controls->Add(this->registerRegisterLabel);
			this->registerPanel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->registerPanel->Location = System::Drawing::Point(0, 0);
			this->registerPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerPanel->Name = L"registerPanel";
			this->registerPanel->Size = System::Drawing::Size(1188, 687);
			this->registerPanel->TabIndex = 12;
			// 
			// registerBirthdayLabel
			// 
			this->registerBirthdayLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerBirthdayLabel->AutoSize = true;
			this->registerBirthdayLabel->Location = System::Drawing::Point(515, 300);
			this->registerBirthdayLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerBirthdayLabel->Name = L"registerBirthdayLabel";
			this->registerBirthdayLabel->Size = System::Drawing::Size(60, 17);
			this->registerBirthdayLabel->TabIndex = 17;
			this->registerBirthdayLabel->Text = L"Birthday";
			// 
			// registerDateTimePicker
			// 
			this->registerDateTimePicker->Location = System::Drawing::Point(341, 338);
			this->registerDateTimePicker->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerDateTimePicker->Name = L"registerDateTimePicker";
			this->registerDateTimePicker->Size = System::Drawing::Size(223, 22);
			this->registerDateTimePicker->TabIndex = 9;
			// 
			// registerErrorLabel
			// 
			this->registerErrorLabel->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->registerErrorLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerErrorLabel->AutoSize = true;
			this->registerErrorLabel->ForeColor = System::Drawing::Color::Red;
			this->registerErrorLabel->Location = System::Drawing::Point(557, 397);
			this->registerErrorLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerErrorLabel->Name = L"registerErrorLabel";
			this->registerErrorLabel->Size = System::Drawing::Size(70, 17);
			this->registerErrorLabel->TabIndex = 16;
			this->registerErrorLabel->Text = L"Lastname";
			this->registerErrorLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// registerLastnameLabel
			// 
			this->registerLastnameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerLastnameLabel->AutoSize = true;
			this->registerLastnameLabel->Location = System::Drawing::Point(593, 189);
			this->registerLastnameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerLastnameLabel->Name = L"registerLastnameLabel";
			this->registerLastnameLabel->Size = System::Drawing::Size(70, 17);
			this->registerLastnameLabel->TabIndex = 15;
			this->registerLastnameLabel->Text = L"Lastname";
			// 
			// registerFirstnameLabel
			// 
			this->registerFirstnameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerFirstnameLabel->AutoSize = true;
			this->registerFirstnameLabel->Location = System::Drawing::Point(448, 186);
			this->registerFirstnameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerFirstnameLabel->Name = L"registerFirstnameLabel";
			this->registerFirstnameLabel->Size = System::Drawing::Size(70, 17);
			this->registerFirstnameLabel->TabIndex = 14;
			this->registerFirstnameLabel->Text = L"Firstname";
			// 
			// registerLastnameTextBox
			// 
			this->registerLastnameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerLastnameTextBox->Location = System::Drawing::Point(584, 208);
			this->registerLastnameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerLastnameTextBox->Name = L"registerLastnameTextBox";
			this->registerLastnameTextBox->Size = System::Drawing::Size(129, 22);
			this->registerLastnameTextBox->TabIndex = 13;
			// 
			// registerFirstnameTextBox
			// 
			this->registerFirstnameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerFirstnameTextBox->Location = System::Drawing::Point(439, 208);
			this->registerFirstnameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerFirstnameTextBox->Name = L"registerFirstnameTextBox";
			this->registerFirstnameTextBox->Size = System::Drawing::Size(129, 22);
			this->registerFirstnameTextBox->TabIndex = 12;
			// 
			// registerValidateButton
			// 
			this->registerValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->registerValidateButton->Location = System::Drawing::Point(439, 471);
			this->registerValidateButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerValidateButton->Name = L"registerValidateButton";
			this->registerValidateButton->Size = System::Drawing::Size(278, 36);
			this->registerValidateButton->TabIndex = 11;
			this->registerValidateButton->Text = L"Validate";
			this->registerValidateButton->UseVisualStyleBackColor = true;
			this->registerValidateButton->Click += gcnew System::EventHandler(this, &MyForm::registerValidateButton_Click);
			// 
			// registerLoginButton
			// 
			this->registerLoginButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->registerLoginButton->Location = System::Drawing::Point(1099, 3);
			this->registerLoginButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerLoginButton->Name = L"registerLoginButton";
			this->registerLoginButton->Size = System::Drawing::Size(87, 55);
			this->registerLoginButton->TabIndex = 5;
			this->registerLoginButton->Text = L"Login";
			this->registerLoginButton->UseVisualStyleBackColor = true;
			this->registerLoginButton->Click += gcnew System::EventHandler(this, &MyForm::registerLoginButton_Click);
			// 
			// registerPasswordLabel
			// 
			this->registerPasswordLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerPasswordLabel->AutoSize = true;
			this->registerPasswordLabel->Location = System::Drawing::Point(593, 118);
			this->registerPasswordLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerPasswordLabel->Name = L"registerPasswordLabel";
			this->registerPasswordLabel->Size = System::Drawing::Size(69, 17);
			this->registerPasswordLabel->TabIndex = 4;
			this->registerPasswordLabel->Text = L"Password";
			// 
			// registerPasswordTextBox
			// 
			this->registerPasswordTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerPasswordTextBox->Location = System::Drawing::Point(584, 140);
			this->registerPasswordTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerPasswordTextBox->Name = L"registerPasswordTextBox";
			this->registerPasswordTextBox->PasswordChar = '*';
			this->registerPasswordTextBox->Size = System::Drawing::Size(129, 22);
			this->registerPasswordTextBox->TabIndex = 3;
			// 
			// registerUsernameTextBox
			// 
			this->registerUsernameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerUsernameTextBox->Location = System::Drawing::Point(439, 140);
			this->registerUsernameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerUsernameTextBox->Name = L"registerUsernameTextBox";
			this->registerUsernameTextBox->Size = System::Drawing::Size(129, 22);
			this->registerUsernameTextBox->TabIndex = 2;
			// 
			// registerUsernameLabel
			// 
			this->registerUsernameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerUsernameLabel->AutoSize = true;
			this->registerUsernameLabel->Location = System::Drawing::Point(448, 118);
			this->registerUsernameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerUsernameLabel->Name = L"registerUsernameLabel";
			this->registerUsernameLabel->Size = System::Drawing::Size(73, 17);
			this->registerUsernameLabel->TabIndex = 1;
			this->registerUsernameLabel->Text = L"Username";
			// 
			// registerRegisterLabel
			// 
			this->registerRegisterLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerRegisterLabel->AutoSize = true;
			this->registerRegisterLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->registerRegisterLabel->Location = System::Drawing::Point(497, 41);
			this->registerRegisterLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerRegisterLabel->Name = L"registerRegisterLabel";
			this->registerRegisterLabel->Size = System::Drawing::Size(147, 38);
			this->registerRegisterLabel->TabIndex = 0;
			this->registerRegisterLabel->Text = L"Register";
			// 
			// stockMPanel
			// 
			this->stockMPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stockMPanel->Controls->Add(this->stockMAddButton);
			this->stockMPanel->Controls->Add(this->stockMLabel);
			this->stockMPanel->Location = System::Drawing::Point(220, 80);
			this->stockMPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->stockMPanel->Name = L"stockMPanel";
			this->stockMPanel->Size = System::Drawing::Size(968, 607);
			this->stockMPanel->TabIndex = 9;
			// 
			// stockMAddButton
			// 
			this->stockMAddButton->Location = System::Drawing::Point(831, 547);
			this->stockMAddButton->Name = L"stockMAddButton";
			this->stockMAddButton->Size = System::Drawing::Size(126, 49);
			this->stockMAddButton->TabIndex = 16;
			this->stockMAddButton->Text = L"Add new product";
			this->stockMAddButton->UseVisualStyleBackColor = true;
			this->stockMAddButton->Click += gcnew System::EventHandler(this, &MyForm::stockMAddButton_Click_1);
			// 
			// stockMLabel
			// 
			this->stockMLabel->AutoSize = true;
			this->stockMLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stockMLabel->Location = System::Drawing::Point(3, 3);
			this->stockMLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->stockMLabel->Name = L"stockMLabel";
			this->stockMLabel->Size = System::Drawing::Size(250, 38);
			this->stockMLabel->TabIndex = 15;
			this->stockMLabel->Text = L"Stock Manager";
			// 
			// addStockPanel
			// 
			this->addStockPanel->Controls->Add(this->addStockRestockingTextBox);
			this->addStockPanel->Controls->Add(this->addStockStockTextBox);
			this->addStockPanel->Controls->Add(this->addStockTVATextBox);
			this->addStockPanel->Controls->Add(this->addStockMargeTextBox);
			this->addStockPanel->Controls->Add(this->addStockCostTextBox);
			this->addStockPanel->Controls->Add(this->addStockRestockingLabel);
			this->addStockPanel->Controls->Add(this->addStockStockLabel);
			this->addStockPanel->Controls->Add(this->addStockTVALabel);
			this->addStockPanel->Controls->Add(this->addStockMargeLabel);
			this->addStockPanel->Controls->Add(this->addStockCostLabel);
			this->addStockPanel->Controls->Add(this->addStockValidateButton);
			this->addStockPanel->Controls->Add(this->addStockQuantityTextBox);
			this->addStockPanel->Controls->Add(this->addStockNameTextBox);
			this->addStockPanel->Controls->Add(this->addStockQuantityLabel);
			this->addStockPanel->Controls->Add(this->addStockNameLabel);
			this->addStockPanel->Controls->Add(this->addStockTitleLabel);
			this->addStockPanel->Controls->Add(this->addStockExitButton);
			this->addStockPanel->Location = System::Drawing::Point(220, 80);
			this->addStockPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockPanel->Name = L"addStockPanel";
			this->addStockPanel->Size = System::Drawing::Size(968, 607);
			this->addStockPanel->TabIndex = 9;
			// 
			// addStockRestockingTextBox
			// 
			this->addStockRestockingTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockRestockingTextBox->Location = System::Drawing::Point(2, 391);
			this->addStockRestockingTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockRestockingTextBox->Name = L"addStockRestockingTextBox";
			this->addStockRestockingTextBox->Size = System::Drawing::Size(363, 22);
			this->addStockRestockingTextBox->TabIndex = 16;
			// 
			// addStockStockTextBox
			// 
			this->addStockStockTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockStockTextBox->Location = System::Drawing::Point(2, 343);
			this->addStockStockTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockStockTextBox->Name = L"addStockStockTextBox";
			this->addStockStockTextBox->Size = System::Drawing::Size(363, 22);
			this->addStockStockTextBox->TabIndex = 17;
			// 
			// addStockTVATextBox
			// 
			this->addStockTVATextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockTVATextBox->Location = System::Drawing::Point(2, 295);
			this->addStockTVATextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockTVATextBox->Name = L"addStockTVATextBox";
			this->addStockTVATextBox->Size = System::Drawing::Size(363, 22);
			this->addStockTVATextBox->TabIndex = 16;
			// 
			// addStockMargeTextBox
			// 
			this->addStockMargeTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockMargeTextBox->Location = System::Drawing::Point(2, 248);
			this->addStockMargeTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockMargeTextBox->Name = L"addStockMargeTextBox";
			this->addStockMargeTextBox->Size = System::Drawing::Size(363, 22);
			this->addStockMargeTextBox->TabIndex = 15;
			// 
			// addStockCostTextBox
			// 
			this->addStockCostTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockCostTextBox->Location = System::Drawing::Point(2, 200);
			this->addStockCostTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockCostTextBox->Name = L"addStockCostTextBox";
			this->addStockCostTextBox->Size = System::Drawing::Size(363, 22);
			this->addStockCostTextBox->TabIndex = 14;
			// 
			// addStockRestockingLabel
			// 
			this->addStockRestockingLabel->AutoSize = true;
			this->addStockRestockingLabel->Location = System::Drawing::Point(2, 370);
			this->addStockRestockingLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockRestockingLabel->Name = L"addStockRestockingLabel";
			this->addStockRestockingLabel->Size = System::Drawing::Size(141, 17);
			this->addStockRestockingLabel->TabIndex = 13;
			this->addStockRestockingLabel->Text = L"Restocking threshold";
			// 
			// addStockStockLabel
			// 
			this->addStockStockLabel->AutoSize = true;
			this->addStockStockLabel->Location = System::Drawing::Point(2, 322);
			this->addStockStockLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockStockLabel->Name = L"addStockStockLabel";
			this->addStockStockLabel->Size = System::Drawing::Size(43, 17);
			this->addStockStockLabel->TabIndex = 12;
			this->addStockStockLabel->Text = L"Stock";
			// 
			// addStockTVALabel
			// 
			this->addStockTVALabel->AutoSize = true;
			this->addStockTVALabel->Location = System::Drawing::Point(2, 274);
			this->addStockTVALabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockTVALabel->Name = L"addStockTVALabel";
			this->addStockTVALabel->Size = System::Drawing::Size(35, 17);
			this->addStockTVALabel->TabIndex = 11;
			this->addStockTVALabel->Text = L"TVA";
			// 
			// addStockMargeLabel
			// 
			this->addStockMargeLabel->AutoSize = true;
			this->addStockMargeLabel->Location = System::Drawing::Point(2, 226);
			this->addStockMargeLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockMargeLabel->Name = L"addStockMargeLabel";
			this->addStockMargeLabel->Size = System::Drawing::Size(48, 17);
			this->addStockMargeLabel->TabIndex = 10;
			this->addStockMargeLabel->Text = L"Marge";
			// 
			// addStockCostLabel
			// 
			this->addStockCostLabel->AutoSize = true;
			this->addStockCostLabel->Location = System::Drawing::Point(2, 178);
			this->addStockCostLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockCostLabel->Name = L"addStockCostLabel";
			this->addStockCostLabel->Size = System::Drawing::Size(36, 17);
			this->addStockCostLabel->TabIndex = 9;
			this->addStockCostLabel->Text = L"Cost";
			// 
			// addStockValidateButton
			// 
			this->addStockValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->addStockValidateButton->Location = System::Drawing::Point(879, 555);
			this->addStockValidateButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockValidateButton->Name = L"addStockValidateButton";
			this->addStockValidateButton->Size = System::Drawing::Size(77, 39);
			this->addStockValidateButton->TabIndex = 8;
			this->addStockValidateButton->Text = L"Validate";
			this->addStockValidateButton->UseVisualStyleBackColor = true;
			this->addStockValidateButton->Click += gcnew System::EventHandler(this, &MyForm::addStockValidateButton_Click);
			// 
			// addStockQuantityTextBox
			// 
			this->addStockQuantityTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockQuantityTextBox->Location = System::Drawing::Point(2, 152);
			this->addStockQuantityTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockQuantityTextBox->Name = L"addStockQuantityTextBox";
			this->addStockQuantityTextBox->Size = System::Drawing::Size(363, 22);
			this->addStockQuantityTextBox->TabIndex = 7;
			// 
			// addStockNameTextBox
			// 
			this->addStockNameTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockNameTextBox->Location = System::Drawing::Point(2, 105);
			this->addStockNameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockNameTextBox->Name = L"addStockNameTextBox";
			this->addStockNameTextBox->Size = System::Drawing::Size(363, 22);
			this->addStockNameTextBox->TabIndex = 5;
			// 
			// addStockQuantityLabel
			// 
			this->addStockQuantityLabel->AutoSize = true;
			this->addStockQuantityLabel->Location = System::Drawing::Point(2, 131);
			this->addStockQuantityLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockQuantityLabel->Name = L"addStockQuantityLabel";
			this->addStockQuantityLabel->Size = System::Drawing::Size(61, 17);
			this->addStockQuantityLabel->TabIndex = 4;
			this->addStockQuantityLabel->Text = L"Quantity";
			// 
			// addStockNameLabel
			// 
			this->addStockNameLabel->AutoSize = true;
			this->addStockNameLabel->Location = System::Drawing::Point(2, 83);
			this->addStockNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockNameLabel->Name = L"addStockNameLabel";
			this->addStockNameLabel->Size = System::Drawing::Size(113, 17);
			this->addStockNameLabel->TabIndex = 2;
			this->addStockNameLabel->Text = L"Name of product";
			// 
			// addStockTitleLabel
			// 
			this->addStockTitleLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockTitleLabel->AutoSize = true;
			this->addStockTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addStockTitleLabel->Location = System::Drawing::Point(75, 20);
			this->addStockTitleLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockTitleLabel->Name = L"addStockTitleLabel";
			this->addStockTitleLabel->Size = System::Drawing::Size(262, 38);
			this->addStockTitleLabel->TabIndex = 1;
			this->addStockTitleLabel->Text = L"Add new product";
			// 
			// addStockExitButton
			// 
			this->addStockExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->addStockExitButton->Location = System::Drawing::Point(915, 10);
			this->addStockExitButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockExitButton->Name = L"addStockExitButton";
			this->addStockExitButton->Size = System::Drawing::Size(42, 40);
			this->addStockExitButton->TabIndex = 0;
			this->addStockExitButton->Text = L"X";
			this->addStockExitButton->UseVisualStyleBackColor = true;
			this->addStockExitButton->Click += gcnew System::EventHandler(this, &MyForm::addStockExitButton_Click);
			// 
			// orderMPanel
			// 
			this->orderMPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->orderMPanel->Controls->Add(this->listView1);
			this->orderMPanel->Location = System::Drawing::Point(220, 80);
			this->orderMPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->orderMPanel->Name = L"orderMPanel";
			this->orderMPanel->Size = System::Drawing::Size(968, 607);
			this->orderMPanel->TabIndex = 0;
			// 
			// listView1
			// 
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(21, 20);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(921, 563);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// clientMPanel
			// 
			this->clientMPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->clientMPanel->Controls->Add(this->clientMModifyButton);
			this->clientMPanel->Controls->Add(this->clientMDeleteButton);
			this->clientMPanel->Controls->Add(this->clientMFNameTextBox);
			this->clientMPanel->Controls->Add(this->clientMLNameTextBox);
			this->clientMPanel->Controls->Add(this->clientMCityTextBox);
			this->clientMPanel->Controls->Add(this->clientMDGV);
			this->clientMPanel->Controls->Add(this->clientMSearchButton);
			this->clientMPanel->Controls->Add(this->clientMCityLabel);
			this->clientMPanel->Controls->Add(this->clientMFNameLabel);
			this->clientMPanel->Controls->Add(this->clientMLNameLabel);
			this->clientMPanel->Location = System::Drawing::Point(220, 80);
			this->clientMPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMPanel->Name = L"clientMPanel";
			this->clientMPanel->Size = System::Drawing::Size(968, 607);
			this->clientMPanel->TabIndex = 4;
			// 
			// clientMModifyButton
			// 
			this->clientMModifyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMModifyButton->Location = System::Drawing::Point(829, 566);
			this->clientMModifyButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMModifyButton->Name = L"clientMModifyButton";
			this->clientMModifyButton->Size = System::Drawing::Size(66, 36);
			this->clientMModifyButton->TabIndex = 10;
			this->clientMModifyButton->Text = L"Modify";
			this->clientMModifyButton->UseVisualStyleBackColor = true;
			// 
			// clientMDeleteButton
			// 
			this->clientMDeleteButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMDeleteButton->Location = System::Drawing::Point(900, 566);
			this->clientMDeleteButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMDeleteButton->Name = L"clientMDeleteButton";
			this->clientMDeleteButton->Size = System::Drawing::Size(66, 36);
			this->clientMDeleteButton->TabIndex = 9;
			this->clientMDeleteButton->Text = L"Delete";
			this->clientMDeleteButton->UseVisualStyleBackColor = true;
			// 
			// clientMFNameTextBox
			// 
			this->clientMFNameTextBox->Location = System::Drawing::Point(80, 41);
			this->clientMFNameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMFNameTextBox->Name = L"clientMFNameTextBox";
			this->clientMFNameTextBox->Size = System::Drawing::Size(90, 22);
			this->clientMFNameTextBox->TabIndex = 6;
			// 
			// clientMLNameTextBox
			// 
			this->clientMLNameTextBox->Location = System::Drawing::Point(80, 73);
			this->clientMLNameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMLNameTextBox->Name = L"clientMLNameTextBox";
			this->clientMLNameTextBox->Size = System::Drawing::Size(90, 22);
			this->clientMLNameTextBox->TabIndex = 7;
			// 
			// clientMCityTextBox
			// 
			this->clientMCityTextBox->Location = System::Drawing::Point(80, 107);
			this->clientMCityTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMCityTextBox->Name = L"clientMCityTextBox";
			this->clientMCityTextBox->Size = System::Drawing::Size(90, 22);
			this->clientMCityTextBox->TabIndex = 8;
			// 
			// clientMDGV
			// 
			this->clientMDGV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->clientMDGV->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->clientMDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->clientMDGV->DefaultCellStyle = dataGridViewCellStyle2;
			this->clientMDGV->Location = System::Drawing::Point(2, 390);
			this->clientMDGV->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMDGV->Name = L"clientMDGV";
			this->clientMDGV->RowHeadersWidth = 51;
			this->clientMDGV->RowTemplate->Height = 24;
			this->clientMDGV->Size = System::Drawing::Size(963, 170);
			this->clientMDGV->TabIndex = 0;
			// 
			// clientMSearchButton
			// 
			this->clientMSearchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMSearchButton->Location = System::Drawing::Point(900, 347);
			this->clientMSearchButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMSearchButton->Name = L"clientMSearchButton";
			this->clientMSearchButton->Size = System::Drawing::Size(66, 36);
			this->clientMSearchButton->TabIndex = 1;
			this->clientMSearchButton->Text = L"Search";
			this->clientMSearchButton->UseVisualStyleBackColor = true;
			// 
			// clientMCityLabel
			// 
			this->clientMCityLabel->AutoSize = true;
			this->clientMCityLabel->Location = System::Drawing::Point(2, 110);
			this->clientMCityLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->clientMCityLabel->Name = L"clientMCityLabel";
			this->clientMCityLabel->Size = System::Drawing::Size(39, 17);
			this->clientMCityLabel->TabIndex = 5;
			this->clientMCityLabel->Text = L"City :";
			// 
			// clientMFNameLabel
			// 
			this->clientMFNameLabel->AutoSize = true;
			this->clientMFNameLabel->Location = System::Drawing::Point(2, 45);
			this->clientMFNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->clientMFNameLabel->Name = L"clientMFNameLabel";
			this->clientMFNameLabel->Size = System::Drawing::Size(82, 17);
			this->clientMFNameLabel->TabIndex = 3;
			this->clientMFNameLabel->Text = L"First name :";
			// 
			// clientMLNameLabel
			// 
			this->clientMLNameLabel->AutoSize = true;
			this->clientMLNameLabel->Location = System::Drawing::Point(2, 76);
			this->clientMLNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->clientMLNameLabel->Name = L"clientMLNameLabel";
			this->clientMLNameLabel->Size = System::Drawing::Size(82, 17);
			this->clientMLNameLabel->TabIndex = 4;
			this->clientMLNameLabel->Text = L"Last name :";
			// 
			// menuButtonPanel
			// 
			this->menuButtonPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->menuButtonPanel->Controls->Add(this->menuPersonnellManageButton);
			this->menuButtonPanel->Controls->Add(this->menuCatalogButton);
			this->menuButtonPanel->Controls->Add(this->menuAccountButton);
			this->menuButtonPanel->Controls->Add(this->menuStatisticButton);
			this->menuButtonPanel->Controls->Add(this->menuStockButton);
			this->menuButtonPanel->Controls->Add(this->menuOrderButton);
			this->menuButtonPanel->Controls->Add(this->menuClientButton);
			this->menuButtonPanel->Controls->Add(this->menuLogoPanel);
			this->menuButtonPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->menuButtonPanel->Location = System::Drawing::Point(0, 0);
			this->menuButtonPanel->Margin = System::Windows::Forms::Padding(0);
			this->menuButtonPanel->Name = L"menuButtonPanel";
			this->menuButtonPanel->Size = System::Drawing::Size(220, 687);
			this->menuButtonPanel->TabIndex = 13;
			// 
			// menuPersonnellManageButton
			// 
			this->menuPersonnellManageButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->menuPersonnellManageButton->FlatAppearance->BorderSize = 0;
			this->menuPersonnellManageButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->menuPersonnellManageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->menuPersonnellManageButton->ForeColor = System::Drawing::Color::White;
			this->menuPersonnellManageButton->Location = System::Drawing::Point(0, 380);
			this->menuPersonnellManageButton->Name = L"menuPersonnellManageButton";
			this->menuPersonnellManageButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->menuPersonnellManageButton->Size = System::Drawing::Size(220, 60);
			this->menuPersonnellManageButton->TabIndex = 7;
			this->menuPersonnellManageButton->Text = L"Personnel  Manage";
			this->menuPersonnellManageButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->menuPersonnellManageButton->UseVisualStyleBackColor = true;
			this->menuPersonnellManageButton->Visible = false;
			// 
			// menuCatalogButton
			// 
			this->menuCatalogButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->menuCatalogButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->menuCatalogButton->FlatAppearance->BorderSize = 0;
			this->menuCatalogButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->menuCatalogButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->menuCatalogButton->ForeColor = System::Drawing::Color::White;
			this->menuCatalogButton->Location = System::Drawing::Point(0, 80);
			this->menuCatalogButton->Name = L"menuCatalogButton";
			this->menuCatalogButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->menuCatalogButton->Size = System::Drawing::Size(220, 60);
			this->menuCatalogButton->TabIndex = 2;
			this->menuCatalogButton->Text = L"Catalog";
			this->menuCatalogButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->menuCatalogButton->UseVisualStyleBackColor = true;
			this->menuCatalogButton->Visible = false;
			this->menuCatalogButton->Click += gcnew System::EventHandler(this, &MyForm::menuCatalogButton_Click);
			// 
			// menuAccountButton
			// 
			this->menuAccountButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->menuAccountButton->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->menuAccountButton->FlatAppearance->BorderSize = 0;
			this->menuAccountButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->menuAccountButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->menuAccountButton->ForeColor = System::Drawing::Color::White;
			this->menuAccountButton->Location = System::Drawing::Point(0, 627);
			this->menuAccountButton->Name = L"menuAccountButton";
			this->menuAccountButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->menuAccountButton->Size = System::Drawing::Size(220, 60);
			this->menuAccountButton->TabIndex = 5;
			this->menuAccountButton->Text = L"My Account";
			this->menuAccountButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->menuAccountButton->UseVisualStyleBackColor = true;
			this->menuAccountButton->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::menuAccountButton_MouseDown);
			this->menuAccountButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::menuAccountButton_MouseEnter);
			this->menuAccountButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::menuAccountButton_MouseLeave);
			// 
			// menuStatisticButton
			// 
			this->menuStatisticButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->menuStatisticButton->FlatAppearance->BorderSize = 0;
			this->menuStatisticButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->menuStatisticButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->menuStatisticButton->ForeColor = System::Drawing::Color::White;
			this->menuStatisticButton->Location = System::Drawing::Point(0, 260);
			this->menuStatisticButton->Name = L"menuStatisticButton";
			this->menuStatisticButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->menuStatisticButton->Size = System::Drawing::Size(220, 60);
			this->menuStatisticButton->TabIndex = 4;
			this->menuStatisticButton->Text = L"Statistic";
			this->menuStatisticButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->menuStatisticButton->UseVisualStyleBackColor = true;
			this->menuStatisticButton->Visible = false;
			this->menuStatisticButton->Click += gcnew System::EventHandler(this, &MyForm::menuStatisticButton_Click);
			this->menuStatisticButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::menuStatisticButton_MouseEnter);
			this->menuStatisticButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::menuStatisticButton_MouseLeave);
			// 
			// menuStockButton
			// 
			this->menuStockButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->menuStockButton->FlatAppearance->BorderSize = 0;
			this->menuStockButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->menuStockButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStockButton->ForeColor = System::Drawing::Color::White;
			this->menuStockButton->Location = System::Drawing::Point(0, 200);
			this->menuStockButton->Name = L"menuStockButton";
			this->menuStockButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->menuStockButton->Size = System::Drawing::Size(220, 60);
			this->menuStockButton->TabIndex = 4;
			this->menuStockButton->Text = L"Stock";
			this->menuStockButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->menuStockButton->UseVisualStyleBackColor = true;
			this->menuStockButton->Visible = false;
			this->menuStockButton->Click += gcnew System::EventHandler(this, &MyForm::menuStockButton_Click);
			this->menuStockButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::menuStockButton_MouseEnter);
			this->menuStockButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::menuStockButton_MouseLeave);
			// 
			// menuOrderButton
			// 
			this->menuOrderButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->menuOrderButton->FlatAppearance->BorderSize = 0;
			this->menuOrderButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->menuOrderButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuOrderButton->ForeColor = System::Drawing::Color::White;
			this->menuOrderButton->Location = System::Drawing::Point(0, 140);
			this->menuOrderButton->Name = L"menuOrderButton";
			this->menuOrderButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->menuOrderButton->Size = System::Drawing::Size(220, 60);
			this->menuOrderButton->TabIndex = 3;
			this->menuOrderButton->Text = L"Order";
			this->menuOrderButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->menuOrderButton->UseVisualStyleBackColor = true;
			this->menuOrderButton->Visible = false;
			this->menuOrderButton->Click += gcnew System::EventHandler(this, &MyForm::menuOrderButton_Click);
			this->menuOrderButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::menuOrderButton_MouseEnter);
			this->menuOrderButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::menuOrderButton_MouseLeave);
			// 
			// menuClientButton
			// 
			this->menuClientButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->menuClientButton->FlatAppearance->BorderSize = 0;
			this->menuClientButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->menuClientButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuClientButton->ForeColor = System::Drawing::Color::White;
			this->menuClientButton->Location = System::Drawing::Point(-3, 321);
			this->menuClientButton->Name = L"menuClientButton";
			this->menuClientButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->menuClientButton->Size = System::Drawing::Size(220, 60);
			this->menuClientButton->TabIndex = 1;
			this->menuClientButton->Text = L" Client Manage";
			this->menuClientButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->menuClientButton->UseVisualStyleBackColor = true;
			this->menuClientButton->Visible = false;
			this->menuClientButton->Click += gcnew System::EventHandler(this, &MyForm::menuClientButton_Click);
			this->menuClientButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::menuClientButton_MouseEnter);
			this->menuClientButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::menuClientButton_MouseLeave);
			// 
			// menuLogoPanel
			// 
			this->menuLogoPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->menuLogoPanel->Controls->Add(this->nameProjectLabel);
			this->menuLogoPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->menuLogoPanel->Location = System::Drawing::Point(0, 0);
			this->menuLogoPanel->Name = L"menuLogoPanel";
			this->menuLogoPanel->Size = System::Drawing::Size(220, 80);
			this->menuLogoPanel->TabIndex = 0;
			// 
			// nameProjectLabel
			// 
			this->nameProjectLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameProjectLabel->ForeColor = System::Drawing::Color::LightGray;
			this->nameProjectLabel->Location = System::Drawing::Point(0, 0);
			this->nameProjectLabel->Margin = System::Windows::Forms::Padding(0);
			this->nameProjectLabel->Name = L"nameProjectLabel";
			this->nameProjectLabel->Size = System::Drawing::Size(220, 80);
			this->nameProjectLabel->TabIndex = 0;
			this->nameProjectLabel->Text = L"OPO2SUM";
			this->nameProjectLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// titleBarPanel
			// 
			this->titleBarPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->titleBarPanel->Controls->Add(this->titleBarLabel);
			this->titleBarPanel->Location = System::Drawing::Point(220, 0);
			this->titleBarPanel->Name = L"titleBarPanel";
			this->titleBarPanel->Size = System::Drawing::Size(968, 80);
			this->titleBarPanel->TabIndex = 14;
			// 
			// titleBarLabel
			// 
			this->titleBarLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->titleBarLabel->AutoSize = true;
			this->titleBarLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleBarLabel->ForeColor = System::Drawing::Color::White;
			this->titleBarLabel->Location = System::Drawing::Point(408, 26);
			this->titleBarLabel->Name = L"titleBarLabel";
			this->titleBarLabel->Size = System::Drawing::Size(99, 32);
			this->titleBarLabel->TabIndex = 0;
			this->titleBarLabel->Text = L"HOME";
			// 
			// accountPanel
			// 
			this->accountPanel->Controls->Add(this->accountSeparatorLabel);
			this->accountPanel->Controls->Add(this->accountAddressPostalNumericUpDown);
			this->accountPanel->Controls->Add(this->accountErrorAddAddressLabel);
			this->accountPanel->Controls->Add(this->accountErrorLabel);
			this->accountPanel->Controls->Add(this->accountAddressAddButton);
			this->accountPanel->Controls->Add(this->accountAddressDeleteButton);
			this->accountPanel->Controls->Add(this->accountModifyButton);
			this->accountPanel->Controls->Add(this->accountAddressListComboBox);
			this->accountPanel->Controls->Add(this->accountAddressMoreTextBox);
			this->accountPanel->Controls->Add(this->accountAddressCityTextBox);
			this->accountPanel->Controls->Add(this->accountAddressNbTextBox);
			this->accountPanel->Controls->Add(this->accountBirthdayTextBox);
			this->accountPanel->Controls->Add(this->accountPasswordTextBox);
			this->accountPanel->Controls->Add(this->accountLastnameTextBox);
			this->accountPanel->Controls->Add(this->accountFirstnameTextBox);
			this->accountPanel->Controls->Add(this->accountUsernameTextBox);
			this->accountPanel->Controls->Add(this->accountAddressMoreLabel);
			this->accountPanel->Controls->Add(this->accountPostalCodeLabel);
			this->accountPanel->Controls->Add(this->accountCityLabel);
			this->accountPanel->Controls->Add(this->accountStreetLabel);
			this->accountPanel->Controls->Add(this->accountAddressLabel);
			this->accountPanel->Controls->Add(this->accountBirthdayLabel);
			this->accountPanel->Controls->Add(this->accountPasswordLabel);
			this->accountPanel->Controls->Add(this->accountLastnameLabel);
			this->accountPanel->Controls->Add(this->accountFirstnameLabel);
			this->accountPanel->Controls->Add(this->accountUsernameLabel);
			this->accountPanel->Controls->Add(this->accountTitleLabel);
			this->accountPanel->Location = System::Drawing::Point(220, 80);
			this->accountPanel->Name = L"accountPanel";
			this->accountPanel->Size = System::Drawing::Size(968, 607);
			this->accountPanel->TabIndex = 15;
			// 
			// accountSeparatorLabel
			// 
			this->accountSeparatorLabel->AutoSize = true;
			this->accountSeparatorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->accountSeparatorLabel->Location = System::Drawing::Point(46, 229);
			this->accountSeparatorLabel->Name = L"accountSeparatorLabel";
			this->accountSeparatorLabel->Size = System::Drawing::Size(872, 38);
			this->accountSeparatorLabel->TabIndex = 28;
			this->accountSeparatorLabel->Text = L"_____________________________________________";
			// 
			// accountAddressPostalNumericUpDown
			// 
			this->accountAddressPostalNumericUpDown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->accountAddressPostalNumericUpDown->Location = System::Drawing::Point(446, 474);
			this->accountAddressPostalNumericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->accountAddressPostalNumericUpDown->Name = L"accountAddressPostalNumericUpDown";
			this->accountAddressPostalNumericUpDown->Size = System::Drawing::Size(108, 22);
			this->accountAddressPostalNumericUpDown->TabIndex = 27;
			// 
			// accountErrorAddAddressLabel
			// 
			this->accountErrorAddAddressLabel->BackColor = System::Drawing::Color::Transparent;
			this->accountErrorAddAddressLabel->ForeColor = System::Drawing::Color::Red;
			this->accountErrorAddAddressLabel->Location = System::Drawing::Point(713, 509);
			this->accountErrorAddAddressLabel->Name = L"accountErrorAddAddressLabel";
			this->accountErrorAddAddressLabel->Size = System::Drawing::Size(154, 40);
			this->accountErrorAddAddressLabel->TabIndex = 26;
			// 
			// accountErrorLabel
			// 
			this->accountErrorLabel->BackColor = System::Drawing::Color::Transparent;
			this->accountErrorLabel->ForeColor = System::Drawing::Color::Red;
			this->accountErrorLabel->Location = System::Drawing::Point(738, 212);
			this->accountErrorLabel->Name = L"accountErrorLabel";
			this->accountErrorLabel->Size = System::Drawing::Size(154, 40);
			this->accountErrorLabel->TabIndex = 24;
			// 
			// accountAddressAddButton
			// 
			this->accountAddressAddButton->Location = System::Drawing::Point(583, 524);
			this->accountAddressAddButton->Name = L"accountAddressAddButton";
			this->accountAddressAddButton->Size = System::Drawing::Size(118, 25);
			this->accountAddressAddButton->TabIndex = 23;
			this->accountAddressAddButton->Text = L"Add";
			this->accountAddressAddButton->UseVisualStyleBackColor = true;
			this->accountAddressAddButton->Click += gcnew System::EventHandler(this, &MyForm::accountAddressAddButton_Click);
			// 
			// accountAddressDeleteButton
			// 
			this->accountAddressDeleteButton->Location = System::Drawing::Point(583, 373);
			this->accountAddressDeleteButton->Name = L"accountAddressDeleteButton";
			this->accountAddressDeleteButton->Size = System::Drawing::Size(118, 25);
			this->accountAddressDeleteButton->TabIndex = 22;
			this->accountAddressDeleteButton->Text = L"Delete";
			this->accountAddressDeleteButton->UseVisualStyleBackColor = true;
			this->accountAddressDeleteButton->Click += gcnew System::EventHandler(this, &MyForm::accountAddressDeleteButton_Click);
			// 
			// accountModifyButton
			// 
			this->accountModifyButton->Enabled = false;
			this->accountModifyButton->Location = System::Drawing::Point(741, 180);
			this->accountModifyButton->Name = L"accountModifyButton";
			this->accountModifyButton->Size = System::Drawing::Size(136, 29);
			this->accountModifyButton->TabIndex = 21;
			this->accountModifyButton->Text = L"Modify account";
			this->accountModifyButton->UseVisualStyleBackColor = true;
			// 
			// accountAddressListComboBox
			// 
			this->accountAddressListComboBox->BackColor = System::Drawing::SystemColors::Window;
			this->accountAddressListComboBox->FormattingEnabled = true;
			this->accountAddressListComboBox->Location = System::Drawing::Point(88, 374);
			this->accountAddressListComboBox->Name = L"accountAddressListComboBox";
			this->accountAddressListComboBox->Size = System::Drawing::Size(466, 24);
			this->accountAddressListComboBox->TabIndex = 20;
			// 
			// accountAddressMoreTextBox
			// 
			this->accountAddressMoreTextBox->Location = System::Drawing::Point(88, 524);
			this->accountAddressMoreTextBox->Name = L"accountAddressMoreTextBox";
			this->accountAddressMoreTextBox->Size = System::Drawing::Size(466, 22);
			this->accountAddressMoreTextBox->TabIndex = 19;
			// 
			// accountAddressCityTextBox
			// 
			this->accountAddressCityTextBox->Location = System::Drawing::Point(276, 474);
			this->accountAddressCityTextBox->Name = L"accountAddressCityTextBox";
			this->accountAddressCityTextBox->Size = System::Drawing::Size(158, 22);
			this->accountAddressCityTextBox->TabIndex = 17;
			// 
			// accountAddressNbTextBox
			// 
			this->accountAddressNbTextBox->Location = System::Drawing::Point(88, 474);
			this->accountAddressNbTextBox->Name = L"accountAddressNbTextBox";
			this->accountAddressNbTextBox->Size = System::Drawing::Size(176, 22);
			this->accountAddressNbTextBox->TabIndex = 16;
			// 
			// accountBirthdayTextBox
			// 
			this->accountBirthdayTextBox->Enabled = false;
			this->accountBirthdayTextBox->Location = System::Drawing::Point(278, 187);
			this->accountBirthdayTextBox->Name = L"accountBirthdayTextBox";
			this->accountBirthdayTextBox->Size = System::Drawing::Size(158, 22);
			this->accountBirthdayTextBox->TabIndex = 15;
			// 
			// accountPasswordTextBox
			// 
			this->accountPasswordTextBox->Location = System::Drawing::Point(90, 187);
			this->accountPasswordTextBox->Name = L"accountPasswordTextBox";
			this->accountPasswordTextBox->Size = System::Drawing::Size(158, 22);
			this->accountPasswordTextBox->TabIndex = 14;
			this->accountPasswordTextBox->UseSystemPasswordChar = true;
			this->accountPasswordTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::enableAccountModifyButton);
			// 
			// accountLastnameTextBox
			// 
			this->accountLastnameTextBox->Location = System::Drawing::Point(461, 114);
			this->accountLastnameTextBox->Name = L"accountLastnameTextBox";
			this->accountLastnameTextBox->Size = System::Drawing::Size(158, 22);
			this->accountLastnameTextBox->TabIndex = 13;
			this->accountLastnameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::enableAccountModifyButton);
			// 
			// accountFirstnameTextBox
			// 
			this->accountFirstnameTextBox->Location = System::Drawing::Point(278, 114);
			this->accountFirstnameTextBox->Name = L"accountFirstnameTextBox";
			this->accountFirstnameTextBox->Size = System::Drawing::Size(158, 22);
			this->accountFirstnameTextBox->TabIndex = 12;
			this->accountFirstnameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::enableAccountModifyButton);
			// 
			// accountUsernameTextBox
			// 
			this->accountUsernameTextBox->Enabled = false;
			this->accountUsernameTextBox->Location = System::Drawing::Point(90, 114);
			this->accountUsernameTextBox->Name = L"accountUsernameTextBox";
			this->accountUsernameTextBox->Size = System::Drawing::Size(158, 22);
			this->accountUsernameTextBox->TabIndex = 11;
			// 
			// accountAddressMoreLabel
			// 
			this->accountAddressMoreLabel->AutoSize = true;
			this->accountAddressMoreLabel->Location = System::Drawing::Point(107, 502);
			this->accountAddressMoreLabel->Name = L"accountAddressMoreLabel";
			this->accountAddressMoreLabel->Size = System::Drawing::Size(182, 17);
			this->accountAddressMoreLabel->TabIndex = 10;
			this->accountAddressMoreLabel->Text = L"More information (ex : floor)";
			// 
			// accountPostalCodeLabel
			// 
			this->accountPostalCodeLabel->AutoSize = true;
			this->accountPostalCodeLabel->Location = System::Drawing::Point(456, 451);
			this->accountPostalCodeLabel->Name = L"accountPostalCodeLabel";
			this->accountPostalCodeLabel->Size = System::Drawing::Size(82, 17);
			this->accountPostalCodeLabel->TabIndex = 9;
			this->accountPostalCodeLabel->Text = L"Postal code";
			// 
			// accountCityLabel
			// 
			this->accountCityLabel->AutoSize = true;
			this->accountCityLabel->Location = System::Drawing::Point(290, 451);
			this->accountCityLabel->Name = L"accountCityLabel";
			this->accountCityLabel->Size = System::Drawing::Size(31, 17);
			this->accountCityLabel->TabIndex = 8;
			this->accountCityLabel->Text = L"City";
			// 
			// accountStreetLabel
			// 
			this->accountStreetLabel->AutoSize = true;
			this->accountStreetLabel->Location = System::Drawing::Point(105, 451);
			this->accountStreetLabel->Name = L"accountStreetLabel";
			this->accountStreetLabel->Size = System::Drawing::Size(128, 17);
			this->accountStreetLabel->TabIndex = 7;
			this->accountStreetLabel->Text = L"Number and Street";
			// 
			// accountAddressLabel
			// 
			this->accountAddressLabel->AutoSize = true;
			this->accountAddressLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->accountAddressLabel->Location = System::Drawing::Point(30, 300);
			this->accountAddressLabel->Name = L"accountAddressLabel";
			this->accountAddressLabel->Size = System::Drawing::Size(145, 38);
			this->accountAddressLabel->TabIndex = 6;
			this->accountAddressLabel->Text = L"Address";
			// 
			// accountBirthdayLabel
			// 
			this->accountBirthdayLabel->AutoSize = true;
			this->accountBirthdayLabel->Location = System::Drawing::Point(292, 165);
			this->accountBirthdayLabel->Name = L"accountBirthdayLabel";
			this->accountBirthdayLabel->Size = System::Drawing::Size(60, 17);
			this->accountBirthdayLabel->TabIndex = 5;
			this->accountBirthdayLabel->Text = L"Birthday";
			// 
			// accountPasswordLabel
			// 
			this->accountPasswordLabel->AutoSize = true;
			this->accountPasswordLabel->Location = System::Drawing::Point(107, 165);
			this->accountPasswordLabel->Name = L"accountPasswordLabel";
			this->accountPasswordLabel->Size = System::Drawing::Size(121, 17);
			this->accountPasswordLabel->TabIndex = 4;
			this->accountPasswordLabel->Text = L"Change password";
			// 
			// accountLastnameLabel
			// 
			this->accountLastnameLabel->AutoSize = true;
			this->accountLastnameLabel->Location = System::Drawing::Point(467, 92);
			this->accountLastnameLabel->Name = L"accountLastnameLabel";
			this->accountLastnameLabel->Size = System::Drawing::Size(70, 17);
			this->accountLastnameLabel->TabIndex = 3;
			this->accountLastnameLabel->Text = L"Lastname";
			// 
			// accountFirstnameLabel
			// 
			this->accountFirstnameLabel->AutoSize = true;
			this->accountFirstnameLabel->Location = System::Drawing::Point(292, 92);
			this->accountFirstnameLabel->Name = L"accountFirstnameLabel";
			this->accountFirstnameLabel->Size = System::Drawing::Size(70, 17);
			this->accountFirstnameLabel->TabIndex = 2;
			this->accountFirstnameLabel->Text = L"Firstname";
			// 
			// accountUsernameLabel
			// 
			this->accountUsernameLabel->AutoSize = true;
			this->accountUsernameLabel->Location = System::Drawing::Point(107, 92);
			this->accountUsernameLabel->Name = L"accountUsernameLabel";
			this->accountUsernameLabel->Size = System::Drawing::Size(73, 17);
			this->accountUsernameLabel->TabIndex = 1;
			this->accountUsernameLabel->Text = L"Username";
			// 
			// accountTitleLabel
			// 
			this->accountTitleLabel->AutoSize = true;
			this->accountTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accountTitleLabel->Location = System::Drawing::Point(22, 22);
			this->accountTitleLabel->Name = L"accountTitleLabel";
			this->accountTitleLabel->Size = System::Drawing::Size(199, 38);
			this->accountTitleLabel->TabIndex = 0;
			this->accountTitleLabel->Text = L"My Account";
			// 
			// hubPanel
			// 
			this->hubPanel->Controls->Add(this->menuButtonPanel);
			this->hubPanel->Controls->Add(this->titleBarPanel);
			this->hubPanel->Controls->Add(this->statisticMPanel);
			this->hubPanel->Controls->Add(this->orderMPanel);
			this->hubPanel->Controls->Add(this->accountPanel);
			this->hubPanel->Controls->Add(this->clientMPanel);
			this->hubPanel->Controls->Add(this->catalogOrderPanel);
			this->hubPanel->Controls->Add(this->catalogCartPanel);
			this->hubPanel->Controls->Add(this->addStockPanel);
			this->hubPanel->Controls->Add(this->stockMPanel);
			this->hubPanel->Location = System::Drawing::Point(0, 0);
			this->hubPanel->Name = L"hubPanel";
			this->hubPanel->Size = System::Drawing::Size(1188, 687);
			this->hubPanel->TabIndex = 29;
			// 
			// catalogOrderPanel
			// 
			this->catalogOrderPanel->Controls->Add(this->catalogCartButton);
			this->catalogOrderPanel->Controls->Add(this->catalogGlobalListView);
			this->catalogOrderPanel->Controls->Add(this->catalogResearchTextBox);
			this->catalogOrderPanel->Controls->Add(this->catalogOrderResearchLabel);
			this->catalogOrderPanel->Controls->Add(this->catalogOrderTitleLabel);
			this->catalogOrderPanel->Location = System::Drawing::Point(220, 80);
			this->catalogOrderPanel->Name = L"catalogOrderPanel";
			this->catalogOrderPanel->Size = System::Drawing::Size(968, 607);
			this->catalogOrderPanel->TabIndex = 18;
			// 
			// catalogCartButton
			// 
			this->catalogCartButton->Location = System::Drawing::Point(829, 538);
			this->catalogCartButton->Name = L"catalogCartButton";
			this->catalogCartButton->Size = System::Drawing::Size(102, 35);
			this->catalogCartButton->TabIndex = 4;
			this->catalogCartButton->Text = L"Cart";
			this->catalogCartButton->UseVisualStyleBackColor = true;
			this->catalogCartButton->Click += gcnew System::EventHandler(this, &MyForm::catalogCartButton_Click);
			// 
			// catalogGlobalListView
			// 
			this->catalogGlobalListView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->catalogGlobalListView->HideSelection = false;
			this->catalogGlobalListView->Location = System::Drawing::Point(21, 142);
			this->catalogGlobalListView->Name = L"catalogGlobalListView";
			this->catalogGlobalListView->Size = System::Drawing::Size(921, 377);
			this->catalogGlobalListView->TabIndex = 3;
			this->catalogGlobalListView->UseCompatibleStateImageBehavior = false;
			this->catalogGlobalListView->View = System::Windows::Forms::View::List;
			this->catalogGlobalListView->DoubleClick += gcnew System::EventHandler(this, &MyForm::catalogGlobalListView_DoubleClick);
			// 
			// catalogResearchTextBox
			// 
			this->catalogResearchTextBox->Location = System::Drawing::Point(48, 104);
			this->catalogResearchTextBox->Name = L"catalogResearchTextBox";
			this->catalogResearchTextBox->Size = System::Drawing::Size(273, 22);
			this->catalogResearchTextBox->TabIndex = 2;
			this->catalogResearchTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::catalogResearchTextBox_TextChanged);
			// 
			// catalogOrderResearchLabel
			// 
			this->catalogOrderResearchLabel->AutoSize = true;
			this->catalogOrderResearchLabel->Location = System::Drawing::Point(73, 82);
			this->catalogOrderResearchLabel->Name = L"catalogOrderResearchLabel";
			this->catalogOrderResearchLabel->Size = System::Drawing::Size(69, 17);
			this->catalogOrderResearchLabel->TabIndex = 1;
			this->catalogOrderResearchLabel->Text = L"Research";
			// 
			// catalogOrderTitleLabel
			// 
			this->catalogOrderTitleLabel->AutoSize = true;
			this->catalogOrderTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->catalogOrderTitleLabel->Location = System::Drawing::Point(6, 6);
			this->catalogOrderTitleLabel->Name = L"catalogOrderTitleLabel";
			this->catalogOrderTitleLabel->Size = System::Drawing::Size(136, 38);
			this->catalogOrderTitleLabel->TabIndex = 0;
			this->catalogOrderTitleLabel->Text = L"Catalog";
			// 
			// catalogCartPanel
			// 
			this->catalogCartPanel->Controls->Add(this->catalogAddressShippingLabel);
			this->catalogCartPanel->Controls->Add(this->catalogAddressBillingLabel);
			this->catalogCartPanel->Controls->Add(this->catalogAddressShippingListComboBox);
			this->catalogCartPanel->Controls->Add(this->catalogAddressBillingListComboBox);
			this->catalogCartPanel->Controls->Add(this->catalogCheckoutButton);
			this->catalogCartPanel->Controls->Add(this->catalogBackButton);
			this->catalogCartPanel->Controls->Add(this->catalogSelectedListView);
			this->catalogCartPanel->Controls->Add(this->catalogCartTitleLabel);
			this->catalogCartPanel->Location = System::Drawing::Point(220, 80);
			this->catalogCartPanel->Name = L"catalogCartPanel";
			this->catalogCartPanel->Size = System::Drawing::Size(968, 607);
			this->catalogCartPanel->TabIndex = 19;
			// 
			// catalogAddressShippingLabel
			// 
			this->catalogAddressShippingLabel->AutoSize = true;
			this->catalogAddressShippingLabel->Location = System::Drawing::Point(659, 172);
			this->catalogAddressShippingLabel->Name = L"catalogAddressShippingLabel";
			this->catalogAddressShippingLabel->Size = System::Drawing::Size(117, 17);
			this->catalogAddressShippingLabel->TabIndex = 7;
			this->catalogAddressShippingLabel->Text = L"Address shipping";
			// 
			// catalogAddressBillingLabel
			// 
			this->catalogAddressBillingLabel->AutoSize = true;
			this->catalogAddressBillingLabel->Location = System::Drawing::Point(659, 83);
			this->catalogAddressBillingLabel->Name = L"catalogAddressBillingLabel";
			this->catalogAddressBillingLabel->Size = System::Drawing::Size(100, 17);
			this->catalogAddressBillingLabel->TabIndex = 6;
			this->catalogAddressBillingLabel->Text = L"Address billing";
			// 
			// catalogAddressShippingListComboBox
			// 
			this->catalogAddressShippingListComboBox->FormattingEnabled = true;
			this->catalogAddressShippingListComboBox->Location = System::Drawing::Point(649, 197);
			this->catalogAddressShippingListComboBox->Name = L"catalogAddressShippingListComboBox";
			this->catalogAddressShippingListComboBox->Size = System::Drawing::Size(246, 24);
			this->catalogAddressShippingListComboBox->TabIndex = 5;
			// 
			// catalogAddressBillingListComboBox
			// 
			this->catalogAddressBillingListComboBox->FormattingEnabled = true;
			this->catalogAddressBillingListComboBox->Location = System::Drawing::Point(649, 112);
			this->catalogAddressBillingListComboBox->Name = L"catalogAddressBillingListComboBox";
			this->catalogAddressBillingListComboBox->Size = System::Drawing::Size(246, 24);
			this->catalogAddressBillingListComboBox->TabIndex = 4;
			// 
			// catalogCheckoutButton
			// 
			this->catalogCheckoutButton->Location = System::Drawing::Point(763, 300);
			this->catalogCheckoutButton->Name = L"catalogCheckoutButton";
			this->catalogCheckoutButton->Size = System::Drawing::Size(122, 40);
			this->catalogCheckoutButton->TabIndex = 3;
			this->catalogCheckoutButton->Text = L"Checkout";
			this->catalogCheckoutButton->UseVisualStyleBackColor = true;
			this->catalogCheckoutButton->Click += gcnew System::EventHandler(this, &MyForm::catalogCheckoutButton_Click);
			// 
			// catalogBackButton
			// 
			this->catalogBackButton->Location = System::Drawing::Point(662, 300);
			this->catalogBackButton->Name = L"catalogBackButton";
			this->catalogBackButton->Size = System::Drawing::Size(85, 40);
			this->catalogBackButton->TabIndex = 2;
			this->catalogBackButton->Text = L"Back";
			this->catalogBackButton->UseVisualStyleBackColor = true;
			this->catalogBackButton->Click += gcnew System::EventHandler(this, &MyForm::menuCatalogButton_Click);
			// 
			// catalogSelectedListView
			// 
			this->catalogSelectedListView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->catalogSelectedListView->HideSelection = false;
			this->catalogSelectedListView->Location = System::Drawing::Point(37, 77);
			this->catalogSelectedListView->Name = L"catalogSelectedListView";
			this->catalogSelectedListView->Size = System::Drawing::Size(571, 496);
			this->catalogSelectedListView->TabIndex = 1;
			this->catalogSelectedListView->UseCompatibleStateImageBehavior = false;
			this->catalogSelectedListView->View = System::Windows::Forms::View::List;
			this->catalogSelectedListView->DoubleClick += gcnew System::EventHandler(this, &MyForm::catalogSelectedListView_DoubleClick);
			// 
			// catalogCartTitleLabel
			// 
			this->catalogCartTitleLabel->AutoSize = true;
			this->catalogCartTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->catalogCartTitleLabel->Location = System::Drawing::Point(7, 12);
			this->catalogCartTitleLabel->Name = L"catalogCartTitleLabel";
			this->catalogCartTitleLabel->Size = System::Drawing::Size(83, 38);
			this->catalogCartTitleLabel->TabIndex = 0;
			this->catalogCartTitleLabel->Text = L"Cart";
			// 
			// statisticMPanel
			// 
			this->statisticMPanel->Controls->Add(this->stat_label);
			this->statisticMPanel->Controls->Add(this->Purchase_Value_button);
			this->statisticMPanel->Controls->Add(this->Commercial_Value_button);
			this->statisticMPanel->Controls->Add(this->buys_down_button);
			this->statisticMPanel->Controls->Add(this->top_buys_button);
			this->statisticMPanel->Controls->Add(this->Amount_per_client_button);
			this->statisticMPanel->Controls->Add(this->Prod_u_restocking_button);
			this->statisticMPanel->Controls->Add(this->turnover_button);
			this->statisticMPanel->Controls->Add(this->Panier_Poyen_Button);
			this->statisticMPanel->Controls->Add(this->dataGridViewstat);
			this->statisticMPanel->Location = System::Drawing::Point(220, 80);
			this->statisticMPanel->Name = L"statisticMPanel";
			this->statisticMPanel->Size = System::Drawing::Size(968, 607);
			this->statisticMPanel->TabIndex = 10;
			// 
			// stat_label
			// 
			this->stat_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stat_label->Location = System::Drawing::Point(83, 4);
			this->stat_label->Name = L"stat_label";
			this->stat_label->Size = System::Drawing::Size(783, 40);
			this->stat_label->TabIndex = 9;
			this->stat_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Purchase_Value_button
			// 
			this->Purchase_Value_button->Location = System::Drawing::Point(730, 524);
			this->Purchase_Value_button->Name = L"Purchase_Value_button";
			this->Purchase_Value_button->Size = System::Drawing::Size(164, 50);
			this->Purchase_Value_button->TabIndex = 8;
			this->Purchase_Value_button->UseVisualStyleBackColor = true;
			this->Purchase_Value_button->Click += gcnew System::EventHandler(this, &MyForm::Purchase_Value_button_Click);
			// 
			// Commercial_Value_button
			// 
			this->Commercial_Value_button->Location = System::Drawing::Point(730, 460);
			this->Commercial_Value_button->Name = L"Commercial_Value_button";
			this->Commercial_Value_button->Size = System::Drawing::Size(164, 50);
			this->Commercial_Value_button->TabIndex = 7;
			this->Commercial_Value_button->Text = L"Commercial value of stock";
			this->Commercial_Value_button->UseVisualStyleBackColor = true;
			this->Commercial_Value_button->Click += gcnew System::EventHandler(this, &MyForm::Commercial_Value_button_Click);
			// 
			// buys_down_button
			// 
			this->buys_down_button->Location = System::Drawing::Point(502, 523);
			this->buys_down_button->Name = L"buys_down_button";
			this->buys_down_button->Size = System::Drawing::Size(164, 50);
			this->buys_down_button->TabIndex = 6;
			this->buys_down_button->Text = L"10 - buy";
			this->buys_down_button->UseVisualStyleBackColor = true;
			this->buys_down_button->Click += gcnew System::EventHandler(this, &MyForm::buys_down_button_Click);
			// 
			// top_buys_button
			// 
			this->top_buys_button->Location = System::Drawing::Point(502, 460);
			this->top_buys_button->Name = L"top_buys_button";
			this->top_buys_button->Size = System::Drawing::Size(164, 50);
			this->top_buys_button->TabIndex = 5;
			this->top_buys_button->Text = L"10 + buy";
			this->top_buys_button->UseVisualStyleBackColor = true;
			this->top_buys_button->Click += gcnew System::EventHandler(this, &MyForm::top_buys_button_Click);
			// 
			// Amount_per_client_button
			// 
			this->Amount_per_client_button->Location = System::Drawing::Point(279, 523);
			this->Amount_per_client_button->Name = L"Amount_per_client_button";
			this->Amount_per_client_button->Size = System::Drawing::Size(164, 50);
			this->Amount_per_client_button->TabIndex = 4;
			this->Amount_per_client_button->Text = L"Total amount of a client";
			this->Amount_per_client_button->UseVisualStyleBackColor = true;
			this->Amount_per_client_button->Click += gcnew System::EventHandler(this, &MyForm::Amount_per_client_button_Click);
			// 
			// Prod_u_restocking_button
			// 
			this->Prod_u_restocking_button->Location = System::Drawing::Point(279, 460);
			this->Prod_u_restocking_button->Name = L"Prod_u_restocking_button";
			this->Prod_u_restocking_button->Size = System::Drawing::Size(164, 50);
			this->Prod_u_restocking_button->TabIndex = 3;
			this->Prod_u_restocking_button->Text = L"Products under restocking threshold";
			this->Prod_u_restocking_button->UseVisualStyleBackColor = true;
			this->Prod_u_restocking_button->Click += gcnew System::EventHandler(this, &MyForm::Prod_u_restocking_button_Click);
			// 
			// turnover_button
			// 
			this->turnover_button->Location = System::Drawing::Point(57, 524);
			this->turnover_button->Name = L"turnover_button";
			this->turnover_button->Size = System::Drawing::Size(164, 50);
			this->turnover_button->TabIndex = 2;
			this->turnover_button->Text = L"Turnover per month";
			this->turnover_button->UseVisualStyleBackColor = true;
			this->turnover_button->Click += gcnew System::EventHandler(this, &MyForm::turnover_button_Click);
			// 
			// Panier_Poyen_Button
			// 
			this->Panier_Poyen_Button->Location = System::Drawing::Point(57, 460);
			this->Panier_Poyen_Button->Name = L"Panier_Poyen_Button";
			this->Panier_Poyen_Button->Size = System::Drawing::Size(164, 50);
			this->Panier_Poyen_Button->TabIndex = 1;
			this->Panier_Poyen_Button->Text = L"Average basket";
			this->Panier_Poyen_Button->UseVisualStyleBackColor = true;
			this->Panier_Poyen_Button->Click += gcnew System::EventHandler(this, &MyForm::Panier_Poyen_Button_Click);
			// 
			// dataGridViewstat
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewstat->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridViewstat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewstat->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridViewstat->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewstat->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridViewstat->ColumnHeadersHeight = 29;
			this->dataGridViewstat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewstat->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridViewstat->Location = System::Drawing::Point(24, 56);
			this->dataGridViewstat->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dataGridViewstat->Name = L"dataGridViewstat";
			this->dataGridViewstat->ReadOnly = true;
			this->dataGridViewstat->RowHeadersWidth = 51;
			this->dataGridViewstat->RowTemplate->Height = 24;
			this->dataGridViewstat->Size = System::Drawing::Size(918, 371);
			this->dataGridViewstat->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1188, 687);
			this->Controls->Add(this->hubPanel);
			this->Controls->Add(this->registerPanel);
			this->Controls->Add(this->loginPanel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Opo2suM";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->loginPanel->ResumeLayout(false);
			this->loginPanel->PerformLayout();
			this->loginPasswordPanel->ResumeLayout(false);
			this->loginPasswordPanel->PerformLayout();
			this->loginUsernamePanel->ResumeLayout(false);
			this->loginUsernamePanel->PerformLayout();
			this->registerPanel->ResumeLayout(false);
			this->registerPanel->PerformLayout();
			this->stockMPanel->ResumeLayout(false);
			this->stockMPanel->PerformLayout();
			this->addStockPanel->ResumeLayout(false);
			this->addStockPanel->PerformLayout();
			this->orderMPanel->ResumeLayout(false);
			this->clientMPanel->ResumeLayout(false);
			this->clientMPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientMDGV))->EndInit();
			this->menuButtonPanel->ResumeLayout(false);
			this->menuLogoPanel->ResumeLayout(false);
			this->titleBarPanel->ResumeLayout(false);
			this->titleBarPanel->PerformLayout();
			this->accountPanel->ResumeLayout(false);
			this->accountPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accountAddressPostalNumericUpDown))->EndInit();
			this->hubPanel->ResumeLayout(false);
			this->catalogOrderPanel->ResumeLayout(false);
			this->catalogOrderPanel->PerformLayout();
			this->catalogCartPanel->ResumeLayout(false);
			this->catalogCartPanel->PerformLayout();
			this->statisticMPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewstat))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void resetHubButton() {
		menuAccountButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuAccountButton->ForeColor = System::Drawing::Color::White;
		menuAccountButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		menuCatalogButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuCatalogButton->ForeColor = System::Drawing::Color::White;
		menuCatalogButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		menuAccountButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuAccountButton->ForeColor = System::Drawing::Color::White;
		menuAccountButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		menuStatisticButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuStatisticButton->ForeColor = System::Drawing::Color::White;
		menuStatisticButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		menuStockButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuStockButton->ForeColor = System::Drawing::Color::White;
		menuStockButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		menuOrderButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuOrderButton->ForeColor = System::Drawing::Color::White;
		menuOrderButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		menuClientButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuClientButton->ForeColor = System::Drawing::Color::White;
		menuClientButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
	}
	private: System::Void hideAllPanel() {
		registerPanel->Visible = false;
		loginPanel->Visible = false;
		accountPanel->Visible = false;
		clientMPanel->Visible = false;
		orderMPanel->Visible = false;
		accountPanel->Visible = false;
		clientMPanel->Visible = false;
		addStockPanel->Visible = false;
		stockMPanel->Visible = false;
		statisticMPanel->Visible = false;
		catalogCartPanel->Visible = false;
		catalogOrderPanel->Visible = false;
	}
	private: System::Void clearAddStockTextBox() {
		addStockNameTextBox->Text = "";
		addStockQuantityTextBox->Text = "";
		addStockCostTextBox->Text = "";
		addStockTVATextBox->Text = "";
		addStockMargeTextBox->Text = "";
		addStockStockTextBox->Text = "";
		addStockRestockingTextBox->Text = "";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		loginPanel->Visible = true;
		loginPanel->BringToFront();
	}
	private: System::Void loginRegisterButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		registerPanel->Visible = true;
		registerPanel->BringToFront();
	}
	private: System::Void registerLoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		loginPanel->Visible = true;
		loginPanel->BringToFront();
	}
	private: System::Void addOrderExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		orderMPanel->Visible = true;
	}
	private: System::Void stockMAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		addStockPanel->Visible = true;
	}
	private: System::Void addStockExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		stockMPanel->Visible = true;
		clearAddStockTextBox();
	}
	private: System::Void loginUsernameTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (loginUsernameTextBox->Text == "Username") {
			loginUsernameTextBox->Text = "";
		}
	}
	private: System::Void loginPasswordTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (loginPasswordTextBox->Text == "Password") {
			loginPasswordTextBox->Text = "";
		}
	}
	private: System::Void otherclick_Click(System::Object^ sender, System::EventArgs^ e) {
		if (loginPasswordTextBox->Text == "") {
			loginPasswordTextBox->Text = "Password";
		}
		if (loginUsernameTextBox->Text == "") {
			loginUsernameTextBox->Text = "Username";
		}
	}
	private: System::Void menuAccountButton_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		hideAllPanel();
		accountPanel->Visible = true;
	}
	private: System::Void menuClientButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		clientMPanel->Visible = true;
	}
	private: System::Void enableAccountModifyButton(System::Object^ sender, System::EventArgs^ e) {
		this->accountModifyButton->Enabled = true;
	}
	private: System::Void registerValidateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;

		System::Data::DataSet^ alreadyExist = Adata->getRows("IF EXISTS (SELECT id_account FROM account WHERE account_name = '" + this->registerUsernameTextBox->Text + "') BEGIN SELECT 1 END ELSE BEGIN SELECT 0 END;", "Temp");
		System::Data::DataTableReader^ DataTableReaderTest = alreadyExist->CreateDataReader();
		DataTableReaderTest->Read();

		if (this->registerUsernameTextBox->Text == "" || this->registerFirstnameTextBox->Text == "" || this->registerLastnameTextBox->Text == "" || this->registerPasswordTextBox->Text == "") {
			this->registerErrorLabel->Text = "Please, fill all field.";
		}
		else if (DataTableReaderTest->GetInt32(0)) {
			this->registerErrorLabel->Text = "This username is already used.";
		}
		else if (this->registerPasswordTextBox->Text->Length < 8) {
			this->registerErrorLabel->Text = "Password too short. (8 characters)";
		}
		else {
			AccountManager^ createAccount = gcnew AccountManager();
			createAccount->insert(registerUsernameTextBox->Text, registerPasswordTextBox->Text->GetHashCode().ToString(),
				this->registerFirstnameTextBox->Text, this->registerLastnameTextBox->Text, registerDateTimePicker->Value.ToString(), 0);
			registerLoginButton_Click(sender, e);
			this->loginUsernameTextBox->Text = registerUsernameTextBox->Text;
			this->registerUsernameTextBox->Text = "";
			this->registerFirstnameTextBox->Text = "";
			this->registerLastnameTextBox->Text = "";
			this->registerPasswordTextBox->Text = "";
			this->loginErrorLabel->Text = "Account has been successfully created. Please login.";
			this->loginErrorLabel->ForeColor = System::Drawing::Color::Green;
		}
		DataTableReaderTest->Close();
	}
	private: System::Void refreshAddressList() {
		AccessData^ Adata = gcnew AccessData;
		System::Data::DataSet^ listAddress = Adata->getRows("SELECT * FROM address WHERE id_account = " + connectedAccount->get_id() + ";", "Temp");
		this->accountAddressListComboBox->DataSource = listAddress->Tables[0];
		this->accountAddressDeleteButton->Enabled = (accountAddressListComboBox->Items->Count > 0);
	}
	private: System::Void loginValidateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;

		System::Data::DataSet^ rightLogin = Adata->getRows("IF EXISTS (SELECT id_account FROM account WHERE account_name = '" + this->loginUsernameTextBox->Text + "' AND password_account = '" + loginPasswordTextBox->Text->GetHashCode().ToString() + "') BEGIN SELECT 0 END ELSE BEGIN SELECT 1 END;", "Temp");
		System::Data::DataTableReader^ DataTableReaderTest = rightLogin->CreateDataReader();
		DataTableReaderTest->Read();

		if (this->loginUsernameTextBox->Text == "" || this->loginPasswordTextBox->Text == "") {
			this->loginErrorLabel->ForeColor = System::Drawing::Color::Red;
			this->loginErrorLabel->Text = "Please, fill all field.";
		}
		else if (DataTableReaderTest->GetInt32(0)) {
			this->loginErrorLabel->ForeColor = System::Drawing::Color::Red;
			this->loginErrorLabel->Text = "Wrong username or password.";
		}
		else {
			DataTableReaderTest->Close();
			AccessData^ Adata1 = gcnew AccessData;
			rightLogin = Adata1->getRows("SELECT id_account FROM account WHERE account_name = '" + this->loginUsernameTextBox->Text + "' AND password_account = '" + loginPasswordTextBox->Text->GetHashCode().ToString() + "';", "Temp");
			DataTableReaderTest = rightLogin->CreateDataReader();
			DataTableReaderTest->Read();
			connectedAccount = gcnew Account(DataTableReaderTest->GetInt32(0));
			this->loginErrorLabel->ForeColor = System::Drawing::Color::Green;
			catalogResearchTextBox_TextChanged(sender, e);

			this->accountUsernameTextBox->Text = connectedAccount->get_account_name();
			this->accountFirstnameTextBox->Text = connectedAccount->get_firstname_account();
			this->accountLastnameTextBox->Text = connectedAccount->get_lastname_account();
			this->accountBirthdayTextBox->Text = connectedAccount->get_birthday_account()->Substring(0, 10);
			this->accountModifyButton->Enabled = false;
			this->loginErrorLabel->Text = "";
			this->accountErrorLabel->Text = "";

			refreshAddressList();
			this->accountAddressListComboBox->ValueMember = "id_address";
			this->accountAddressListComboBox->DisplayMember = "street";

			hideAllPanel();
			if (connectedAccount->get_permission_lv_account() == 0) {
				menuCatalogButton->Visible = true;
				menuOrderButton->Visible = true;
			}
			else if (connectedAccount->get_permission_lv_account() == 1)
			{
				menuCatalogButton->Visible = true;
				menuOrderButton->Visible = true;
				menuStockButton->Visible = true;
				menuClientButton->Visible = true;
				menuStatisticButton->Visible = true;
			}
			else if (connectedAccount->get_permission_lv_account() == 2)
			{
				menuCatalogButton->Visible = true;
				menuOrderButton->Visible = true;
				menuStockButton->Visible = true;
				menuClientButton->Visible = true;
				menuStatisticButton->Visible = true;
				menuPersonnellManageButton->Visible = true;
			}
		}
		DataTableReaderTest->Close();
	}
	private: System::Void accountModifyButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;

		if (this->accountFirstnameTextBox->Text == "" || this->accountLastnameTextBox->Text == "") {
			this->accountErrorLabel->Text = "Firstname and Lastname cannot be empty.";
		}
		else if (this->accountPasswordTextBox->Text->Length < 8 && this->accountPasswordTextBox->Text->Length > 0) {
			this->accountErrorLabel->Text = "Password too short. (8 characters)";
		}
		else {
			connectedAccount->set_firstname_account(accountFirstnameTextBox->Text);
			connectedAccount->set_lastname_account(accountLastnameTextBox->Text);

			if (this->accountPasswordTextBox->Text->Length >= 8) {
				connectedAccount->set_password_account(accountPasswordTextBox->Text->GetHashCode().ToString());
			}

			AccountManager^ updateAccount = gcnew AccountManager();
			updateAccount->update(connectedAccount);

			this->accountErrorLabel->Text = "Account updated.";
			this->accountErrorLabel->ForeColor = System::Drawing::Color::Green;
			this->accountModifyButton->Enabled = false;
		}
	}
	private: System::Void accountAddressAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->accountAddressNbTextBox->Text == "" || this->accountAddressPostalNumericUpDown->Text == "" || this->accountAddressCityTextBox->Text == "") {
			this->accountErrorAddAddressLabel->ForeColor = System::Drawing::Color::Red;
			this->accountErrorAddAddressLabel->Text = "First three fields are required.";
		}
		else {
			addressManager->insert(accountAddressNbTextBox->Text, accountAddressPostalNumericUpDown->Text, accountAddressCityTextBox->Text, accountAddressMoreTextBox->Text, connectedAccount->get_id());
			accountAddressNbTextBox->Text = "";
			accountAddressPostalNumericUpDown->Text = "";
			accountAddressCityTextBox->Text = "";
			accountAddressMoreTextBox->Text = "";
			this->accountErrorAddAddressLabel->ForeColor = System::Drawing::Color::Green;
			this->accountErrorAddAddressLabel->Text = "Address added.";

			refreshAddressList();
		}
	}

	private: System::Void accountAddressDeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		System::Data::DataSet^ alreadyExist = Adata->getRows("IF EXISTS (SELECT id_account FROM account WHERE account_name = 'trashcan') BEGIN SELECT 0 END ELSE BEGIN SELECT 1 END;", "Temp");
		System::Data::DataTableReader^ DataTableReaderTest = alreadyExist->CreateDataReader();
		DataTableReaderTest->Read();
		if (DataTableReaderTest->GetInt32(0)) {
			accountManager->insert("trashcan", "", "", "", "2000-01-01", 4);
		}
		DataTableReaderTest->Close();

		AccessData^ Adata_1 = gcnew AccessData;
		alreadyExist = Adata_1->getRows("SELECT id_account FROM account WHERE account_name = 'trashcan';", "Temp");
		DataTableReaderTest = alreadyExist->CreateDataReader();
		DataTableReaderTest->Read();

		Account^ selectedAccount = gcnew Account(DataTableReaderTest->GetInt32(0));

		Address^ selectedAddress = gcnew Address(int::Parse(this->accountAddressListComboBox->SelectedValue->ToString()));
		selectedAddress->set_account(selectedAccount);
		addressManager->update(selectedAddress);

		refreshAddressList();
	}
	private: System::Void testToSupprButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		menuCatalogButton->Visible = true;
		menuOrderButton->Visible = true;
		menuStockButton->Visible = true;
		menuClientButton->Visible = true;
		menuStatisticButton->Visible = true;
		menuPersonnellManageButton->Visible = true;
	}
	private: System::Void menuOrderButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		orderMPanel->Visible = true;
	}
	private: System::Void menuStockButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		stockMPanel->Visible = true;
	}
	private: System::Void menuStatisticButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		statisticMPanel->Visible = true;
	}
	private: System::Void stockMAddButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		addStockPanel->Visible = true;
	}
	private: System::Void addStockValidateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
	}
	private: System::Void loginPasswordModButton_Click(System::Object^ sender, System::EventArgs^ e) {
		loginPasswordTextBox->UseSystemPasswordChar = !loginPasswordTextBox->UseSystemPasswordChar;
	}
	private: System::Void menuClientButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		menuClientButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuClientButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
			static_cast<System::Int32>(static_cast<System::Byte>(251)));
		menuClientButton->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void menuClientButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		resetHubButton();
	}
	private: System::Void menuOrderButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		menuOrderButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuOrderButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
			static_cast<System::Int32>(static_cast<System::Byte>(214)));
		menuOrderButton->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void menuOrderButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		resetHubButton();
	}
	private: System::Void menuStockButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		menuStockButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuStockButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
			static_cast<System::Int32>(static_cast<System::Byte>(143)));
		menuStockButton->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void menuStockButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		resetHubButton();
	}
	private: System::Void menuStatisticButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		menuStatisticButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuStatisticButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
			static_cast<System::Int32>(static_cast<System::Byte>(59)));
		menuStatisticButton->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void menuStatisticButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		resetHubButton();
	}
	private: System::Void menuAccountButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		menuAccountButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		menuAccountButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(32)));
		menuAccountButton->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void menuAccountButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		resetHubButton();
	}

		   // Catalog --------------------------------------------------------------------

	private: System::Void menuCatalogButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideAllPanel();
		catalogOrderPanel->Visible = true;
	}
	private: System::Void catalogCartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		System::Data::DataSet^ listAddress = Adata->getRows("SELECT * FROM address WHERE id_account = " + connectedAccount->get_id() + ";", "Temp");
		AccessData^ Adata2 = gcnew AccessData;
		System::Data::DataSet^ listAddress2 = Adata2->getRows("SELECT * FROM address WHERE id_account = " + connectedAccount->get_id() + ";", "Temp");
		this->catalogAddressBillingListComboBox->DataSource = listAddress->Tables[0];
		this->catalogAddressBillingListComboBox->ValueMember = "id_address";
		this->catalogAddressBillingListComboBox->DisplayMember = "street";
		this->catalogAddressShippingListComboBox->DataSource = listAddress2->Tables[0];
		this->catalogAddressShippingListComboBox->ValueMember = "id_address";
		this->catalogAddressShippingListComboBox->DisplayMember = "street";

		hideAllPanel();
		catalogCartPanel->Visible = true;
	}
	private: System::Void catalogGlobalListView_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ selectedProduct = catalogGlobalListView->SelectedItems[0]->Text;

			bool noDouble = true;
			for (int i = 0; i < catalogSelectedListView->Items->Count; i++) {
				noDouble = selectedProduct->Substring(0, selectedProduct->LastIndexOf("$") - 2) ==
					catalogSelectedListView->Items[i]->Text->Substring(catalogSelectedListView->Items[i]->Text->IndexOf("\"") + 1, catalogSelectedListView->Items[i]->Text->LastIndexOf("$") - catalogSelectedListView->Items[i]->Text->IndexOf("\"") - 4) ? false : noDouble;
			}

			if (!noDouble) { MessageBox::Show("This article is already in your cart."); return; }

			String^ countProduct = Microsoft::VisualBasic::Interaction::InputBox("How many \"" + selectedProduct->Substring(selectedProduct->IndexOf(" ") + 1, selectedProduct->LastIndexOf("$") - selectedProduct->IndexOf(" ") - 3) + "\" do you want?", "Confirm", "1", 500, 500);
			float cost = float::Parse(selectedProduct->Substring(selectedProduct->LastIndexOf("$") + 1));

			if (!(countProduct == "" || countProduct == "0")) {
				try {
					if (int::Parse(countProduct) < 1) {
						MessageBox::Show("Invalide Value");
						return;
					}
					catalogSelectedListView->Items->Add(countProduct + "x \"" + selectedProduct->Substring(0, selectedProduct->LastIndexOf("$") - 2) + "\"  $" + (cost * float::Parse(countProduct)));
				}
				catch (...) {
					MessageBox::Show("Invalide Value");
				}
			}
		}
		catch (...) {}
	}
	private: System::Void catalogResearchTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ listProduct = Adata->getRows("SELECT * FROM product WHERE stock_product > 0 AND enable_product = 1 AND (name_product LIKE '%" + catalogResearchTextBox->Text + "%' OR id_product LIKE '%" + catalogResearchTextBox->Text + "%');", "Temp");
		DataTable^ products = listProduct->Tables[0];

		catalogGlobalListView->Items->Clear();
		for (int i = 0; i < products->Rows->Count; i++)
		{
			DataRow^ drow = products->Rows[i];
			float cost = float::Parse(drow[3]->ToString()) + float::Parse(drow[4]->ToString());
			catalogGlobalListView->Items->Add("#" + drow[0]->ToString() + " " + drow[1]->ToString() + "  $" + (cost * (1 + float::Parse(drow[5]->ToString()))));
		}
	}
	private: System::Void catalogSelectedListView_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (MessageBox::Show("Do you want remove this article?", "Remove article", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
				catalogSelectedListView->Items->RemoveAt(catalogSelectedListView->SelectedIndices[0]);
			}
		}
		catch (...) {}
	}
	private: System::Void catalogCheckoutButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->catalogAddressBillingListComboBox->SelectedIndex == -1 || this->catalogAddressShippingListComboBox->SelectedIndex == -1) {
			MessageBox::Show("No address selected.");
			return;
		}
		if (this->catalogSelectedListView->Items->Count == 0) {
			MessageBox::Show("Cart empty.");
			return;
		}

		String^ summaryOrder;
		std::vector<int> idList(catalogSelectedListView->Items->Count);
		std::vector<int> nbList(catalogSelectedListView->Items->Count);
		std::vector<float> costList(catalogSelectedListView->Items->Count);
		float tempCost = 0;
		float tempCostHT = 0;

		for (int i = 0; i < catalogSelectedListView->Items->Count; i++)
		{
			String^ tempProduct = catalogSelectedListView->Items[i]->Text;

			int tempNb = int::Parse(tempProduct->Substring(0, tempProduct->IndexOf(" ") - 1));
			int tempId = int::Parse(tempProduct->Substring(tempProduct->IndexOf("#") + 1, tempProduct->Substring(0, tempProduct->IndexOf("#") + 1)->IndexOf(" ")));

			Product^ currentProduct = gcnew Product(tempId);
			if (currentProduct->get_stock_product() - tempNb < 0) {
				if (MessageBox::Show("Due to some stock problems, you can only have " + currentProduct->get_stock_product() + "x \"" + currentProduct->get_name_product() + "\"", "Warning", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
					tempNb = currentProduct->get_stock_product();
				}
				else { return; }
			}
			nbList[i] = tempNb;
			idList[i] = tempId;

			tempCostHT += (currentProduct->get_cost_product() + currentProduct->get_marge_product()) * tempNb;
			tempCost += (currentProduct->get_cost_product() + currentProduct->get_marge_product()) * (1 + currentProduct->get_tva_product()) * tempNb;
			summaryOrder += "\n" + nbList[i] + "x   " + currentProduct->get_name_product();
		}
		summaryOrder += "\n\n      $" + tempCost;

		if (MessageBox::Show("Summary :\n" + summaryOrder, "Confirm", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {

			orderManager->insert(DateTime::Now.ToString(), DateTime::Now.ToString(), connectedAccount->get_id(),
				int::Parse(this->catalogAddressBillingListComboBox->SelectedValue->ToString()),
				int::Parse(this->catalogAddressShippingListComboBox->SelectedValue->ToString()));

			AccessData^ Adata = gcnew AccessData;
			System::Data::DataSet^ lastOrder = Adata->getRows("SELECT TOP (1) id_order FROM orderTab ORDER BY id_order DESC", "Temp");
			System::Data::DataTableReader^ DataTableReaderTest = lastOrder->CreateDataReader();
			DataTableReaderTest->Read();
			int id_selectedOrder = DataTableReaderTest->GetInt32(0);
			DataTableReaderTest->Close();

			for (int i = 0; i < catalogSelectedListView->Items->Count; i++)
			{
				Product^ selectedProduct = gcnew Product(idList[i]);
				selectedProduct->set_stock_product(selectedProduct->get_stock_product() - nbList[i]);
				productManager->update(selectedProduct);
				containManager->insert(id_selectedOrder, idList[i], nbList[i]);
			}

			billManager->insert(tempCost, (tempCost / tempCostHT) - 1, id_selectedOrder);

			MessageBox::Show("Order successfully created!");
			catalogResearchTextBox_TextChanged(sender, e);
			menuCatalogButton_Click(sender, e);
			catalogSelectedListView->Items->Clear();
		}
	}

		   // Statistics ---------------------------------------

	private: System::Void Panier_Poyen_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ panier = Adata->getRows("SELECT  SUM(total_bill)/count(id_bill) AS 'Average Cart' FROM bill", "temp");
		stat_label->Text = "Average cart";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = panier; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void turnover_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ turnover = Adata->getRows("select sum(c.nb_element * p.marge_product) AS Tunrover, YEAR(issue_date) AS Year, MONTH(issue_date) AS Month from orderTab o inner join contain c ON o.id_order = c.id_order inner join product p ON c.id_product = p.id_product group by YEAR(issue_date), MONTH(issue_date)", "temp");
		stat_label->Text = "Turnover per month";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = turnover; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void Prod_u_restocking_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ restocking = Adata->getRows("SELECT p.id_product, p.name_product, p.stock_product, p.restocking_threshold_product FROM opo2sum.dbo.product p WHERE((([stock_product]) <= [restocking_threshold_product])); ", "temp");
		stat_label->Text = "Products under restocking threshold";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = restocking; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void Amount_per_client_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ Amount_per_client = Adata->getRows("SELECT a.account_name, SUM(total_bill) AS total_per_client FROM opo2sum.dbo.bill b inner join orderTab o ON o.id_order = b.id_order inner join account a ON o.id_account = a.id_account GROUP BY a.account_name;", "temp");
		stat_label->Text = "Amount per client";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = Amount_per_client; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void top_buys_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ top10_buys = Adata->getRows(" SELECT TOP 10 id_product, SUM(nb_element) Quantity FROM opo2sum.dbo.contain GROUP BY[id_product] ORDER BY Quantity DESC", "temp");
		stat_label->Text = "Top10 buys";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = top10_buys; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void buys_down_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ down10_buys = Adata->getRows("  SELECT TOP 10 id_product, SUM(nb_element) Quantity FROM opo2sum.dbo.contain GROUP BY[id_product] ORDER BY Quantity ASC	", "temp");
		stat_label->Text = "Bottom10 buys";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = down10_buys; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void Commercial_Value_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ Commercial_Value_of_Stock = Adata->getRows(" Select sum(cost_product) as 'Commercial Value', sum((cost_product+marge_product)*(1+tva_product)) AS 'Buy Value', sum(marge_product) as 'Marge Value' from  opo2sum.dbo.product", "temp");
		stat_label->Text = "Commercial Value of Stock";
		//dataGridViewstat->AutoGenerateColumns = true;
		dataGridViewstat->DataSource = Commercial_Value_of_Stock; // dataset
		dataGridViewstat->DataMember = "Temp";
	}
	private: System::Void Purchase_Value_button_Click(System::Object^ sender, System::EventArgs^ e) {
		stat_label->Text = "";
	}

	// Client Manager -------------------------------------------------
	
	// Personnel Manager -------------------------------------------------

		   //(pense à remettre ton login dans le AccessData pour avoir ta bdd)

	};
}