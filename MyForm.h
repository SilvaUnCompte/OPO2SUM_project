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
	private: System::Windows::Forms::Panel^ loginPanel;
	protected:

	private: System::Windows::Forms::TextBox^ loginPasswordTextBox;
	private: System::Windows::Forms::TextBox^ loginUsernameTextBox;

	private: System::Windows::Forms::Label^ loginLoginLabel;

	private: System::Windows::Forms::Button^ loginRegisterButton;
	private: System::Windows::Forms::Panel^ managerTablePanel;
	private: System::Windows::Forms::TabControl^ managerTabControl;
	private: System::Windows::Forms::TabPage^ clientMTabPage;
	private: System::Windows::Forms::TabPage^ orderMTabPage;
	private: System::Windows::Forms::TabPage^ stockMTabPage;
	private: System::Windows::Forms::TabPage^ statisticMTabPage;
	private: System::Windows::Forms::DataGridView^ clientMDGV;
	private: System::Windows::Forms::Button^ clientMSearchButton;













	private: System::Windows::Forms::Label^ clientMCityLabel;
	private: System::Windows::Forms::Label^ clientMLNameLabel;
	private: System::Windows::Forms::Label^ clientMFNameLabel;
	private: System::Windows::Forms::TextBox^ clientMCityTextBox;
	private: System::Windows::Forms::TextBox^ clientMLNameTextBox;
	private: System::Windows::Forms::TextBox^ clientMFNameTextBox;
	private: System::Windows::Forms::Panel^ clientMPanel;
	private: System::Windows::Forms::Button^ clientMModifyButton;
	private: System::Windows::Forms::Button^ clientMDeleteButton;
	private: System::Windows::Forms::Panel^ orderMPanel;
	private: System::Windows::Forms::Button^ orderMModifyButton;

	private: System::Windows::Forms::Button^ orderMDeleteButton;
	private: System::Windows::Forms::DataGridView^ orderMDGV;
	private: System::Windows::Forms::Button^ orderMSearchButton;
	private: System::Windows::Forms::Button^ orderMAddButton;
	private: System::Windows::Forms::Button^ loginValidateButton;


	private: System::Windows::Forms::Panel^ registerPanel;
	private: System::Windows::Forms::Button^ registerValidateButton;
	private: System::Windows::Forms::Button^ registerLoginButton;
	private: System::Windows::Forms::Label^ registerPasswordLabel;
	private: System::Windows::Forms::TextBox^ registerPasswordTextBox;
	private: System::Windows::Forms::TextBox^ registerUsernameTextBox;
	private: System::Windows::Forms::Label^ registerUsernameLabel;
	private: System::Windows::Forms::Label^ registerRegisterLabel;
	private: System::Windows::Forms::Panel^ stockMPanel;

	private: System::Windows::Forms::Button^ stockMAddButton;
	private: System::Windows::Forms::Button^ informationStockModifyButton;

	private: System::Windows::Forms::Button^ informationStockDeleteButton;

	private: System::Windows::Forms::DataGridView^ stockMDGV;
	private: System::Windows::Forms::Panel^ addOrderPanel;

	private: System::Windows::Forms::Button^ addOrderValidateButton;
	private: System::Windows::Forms::TextBox^ addOrderDateTextBox;
	private: System::Windows::Forms::TextBox^ addOrderLNameTextBox;
	private: System::Windows::Forms::TextBox^ addOrderFNameTextBox;
	private: System::Windows::Forms::Label^ addOrderDateLabe;
	private: System::Windows::Forms::Label^ addOrderLNameLabel;
	private: System::Windows::Forms::Label^ addOrderFNameLabel;
	private: System::Windows::Forms::Label^ addOrderTitleLabel;
	private: System::Windows::Forms::Button^ addOrderExitButton;
	private: System::Windows::Forms::Panel^ addStockPanel;
	private: System::Windows::Forms::Button^ addStockValidateButton;
	private: System::Windows::Forms::TextBox^ addStockQuantityTextBox;

	private: System::Windows::Forms::TextBox^ addStockNameTextBox;
	private: System::Windows::Forms::Label^ addStockQuantityLabel;

	private: System::Windows::Forms::Label^ addStockNameLabel;
	private: System::Windows::Forms::Label^ addStockTitleLabel;
	private: System::Windows::Forms::Button^ addStockExitButton;

	private: System::Windows::Forms::Button^ orderMFilterButton;
	private: System::Windows::Forms::Button^ stockMFilterButton;
	private: System::Windows::Forms::Label^ stockMLabel;
	private: System::Windows::Forms::Panel^ informationStockPanel;
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
private: System::Windows::Forms::DataGridView^ statisticMDGV;



	private: System::Windows::Forms::Button^ statisticMStatisticButton;
private: System::Windows::Forms::ComboBox^ statisticMComboBox;



	private: System::Windows::Forms::Label^ registerErrorLabel;
	private: System::Windows::Forms::Label^ registerLastnameLabel;
	private: System::Windows::Forms::Label^ registerFirstnameLabel;
	private: System::Windows::Forms::TextBox^ registerLastnameTextBox;
	private: System::Windows::Forms::TextBox^ registerFirstnameTextBox;
	private: System::Windows::Forms::DateTimePicker^ registerDateTimePicker;
	private: System::Windows::Forms::Label^ registerBirthdayLabel;
  private: System::Windows::Forms::Label^ loginErrorLabel;
	private: System::ComponentModel::IContainer^ components;
private: System::Windows::Forms::Panel^ loginUsernamePanel;
private: System::Windows::Forms::Panel^ loginPasswordPanel;


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
			this->loginPanel = (gcnew System::Windows::Forms::Panel());
			this->loginUsernamePanel = (gcnew System::Windows::Forms::Panel());
			this->loginUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginErrorLabel = (gcnew System::Windows::Forms::Label());
			this->loginValidateButton = (gcnew System::Windows::Forms::Button());
			this->loginRegisterButton = (gcnew System::Windows::Forms::Button());
			this->loginPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
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
			this->managerTablePanel = (gcnew System::Windows::Forms::Panel());
			this->managerTabControl = (gcnew System::Windows::Forms::TabControl());
			this->clientMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->orderMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->addOrderPanel = (gcnew System::Windows::Forms::Panel());
			this->addOrderValidateButton = (gcnew System::Windows::Forms::Button());
			this->addOrderDateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addOrderLNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addOrderFNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addOrderDateLabe = (gcnew System::Windows::Forms::Label());
			this->addOrderLNameLabel = (gcnew System::Windows::Forms::Label());
			this->addOrderFNameLabel = (gcnew System::Windows::Forms::Label());
			this->addOrderTitleLabel = (gcnew System::Windows::Forms::Label());
			this->addOrderExitButton = (gcnew System::Windows::Forms::Button());
			this->orderMPanel = (gcnew System::Windows::Forms::Panel());
			this->orderMSearchButton = (gcnew System::Windows::Forms::Button());
			this->orderMFilterButton = (gcnew System::Windows::Forms::Button());
			this->orderMAddButton = (gcnew System::Windows::Forms::Button());
			this->orderMModifyButton = (gcnew System::Windows::Forms::Button());
			this->orderMDeleteButton = (gcnew System::Windows::Forms::Button());
			this->orderMDGV = (gcnew System::Windows::Forms::DataGridView());
			this->stockMTabPage = (gcnew System::Windows::Forms::TabPage());
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
			this->informationStockPanel = (gcnew System::Windows::Forms::Panel());
			this->informationStockModifyButton = (gcnew System::Windows::Forms::Button());
			this->informationStockDeleteButton = (gcnew System::Windows::Forms::Button());
			this->stockMPanel = (gcnew System::Windows::Forms::Panel());
			this->stockMLabel = (gcnew System::Windows::Forms::Label());
			this->stockMFilterButton = (gcnew System::Windows::Forms::Button());
			this->stockMAddButton = (gcnew System::Windows::Forms::Button());
			this->stockMDGV = (gcnew System::Windows::Forms::DataGridView());
			this->statisticMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->statisticMStatisticButton = (gcnew System::Windows::Forms::Button());
			this->statisticMComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->statisticMDGV = (gcnew System::Windows::Forms::DataGridView());
			this->loginPasswordPanel = (gcnew System::Windows::Forms::Panel());
			this->loginPanel->SuspendLayout();
			this->loginUsernamePanel->SuspendLayout();
			this->registerPanel->SuspendLayout();
			this->clientMPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientMDGV))->BeginInit();
			this->managerTablePanel->SuspendLayout();
			this->managerTabControl->SuspendLayout();
			this->clientMTabPage->SuspendLayout();
			this->orderMTabPage->SuspendLayout();
			this->addOrderPanel->SuspendLayout();
			this->orderMPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderMDGV))->BeginInit();
			this->stockMTabPage->SuspendLayout();
			this->addStockPanel->SuspendLayout();
			this->informationStockPanel->SuspendLayout();
			this->stockMPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stockMDGV))->BeginInit();
			this->statisticMTabPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statisticMDGV))->BeginInit();
			this->loginPasswordPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// loginPanel
			// 
			this->loginPanel->Controls->Add(this->loginPasswordPanel);
			this->loginPanel->Controls->Add(this->loginUsernamePanel);
			this->loginPanel->Controls->Add(this->loginErrorLabel);
			this->loginPanel->Controls->Add(this->loginValidateButton);
			this->loginPanel->Controls->Add(this->loginRegisterButton);
			this->loginPanel->Controls->Add(this->loginLoginLabel);
			this->loginPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->loginPanel->Location = System::Drawing::Point(0, 0);
			this->loginPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->loginPanel->Name = L"loginPanel";
			this->loginPanel->Size = System::Drawing::Size(1186, 714);
			this->loginPanel->TabIndex = 0;
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
			this->loginUsernameTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->loginUsernameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->loginUsernameTextBox->Location = System::Drawing::Point(37, 11);
			this->loginUsernameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->loginUsernameTextBox->Name = L"loginUsernameTextBox";
			this->loginUsernameTextBox->Size = System::Drawing::Size(371, 36);
			this->loginUsernameTextBox->TabIndex = 2;
			this->loginUsernameTextBox->Text = L"Username";
			this->loginUsernameTextBox->Click += gcnew System::EventHandler(this, &MyForm::loginUsernameTextBox_Click);
			// 
			// loginErrorLabel
			// 
			this->loginErrorLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginErrorLabel->AutoSize = true;
			this->loginErrorLabel->ForeColor = System::Drawing::Color::Red;
			this->loginErrorLabel->Location = System::Drawing::Point(532, 428);
			this->loginErrorLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->loginErrorLabel->Name = L"loginErrorLabel";
			this->loginErrorLabel->Size = System::Drawing::Size(67, 19);
			this->loginErrorLabel->TabIndex = 18;
			this->loginErrorLabel->Text = L"Lastname";
			this->loginErrorLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// loginValidateButton
			// 
			this->loginValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->loginValidateButton->BackColor = System::Drawing::Color::LimeGreen;
			this->loginValidateButton->Location = System::Drawing::Point(373, 499);
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
			this->loginRegisterButton->Location = System::Drawing::Point(1078, 3);
			this->loginRegisterButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->loginRegisterButton->Name = L"loginRegisterButton";
			this->loginRegisterButton->Size = System::Drawing::Size(106, 36);
			this->loginRegisterButton->TabIndex = 5;
			this->loginRegisterButton->Text = L"Register";
			this->loginRegisterButton->UseVisualStyleBackColor = true;
			this->loginRegisterButton->Click += gcnew System::EventHandler(this, &MyForm::loginRegisterButton_Click);
			// 
			// loginPasswordTextBox
			// 
			this->loginPasswordTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginPasswordTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->loginPasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->loginPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->loginPasswordTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->loginPasswordTextBox->Location = System::Drawing::Point(31, 15);
			this->loginPasswordTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->loginPasswordTextBox->Name = L"loginPasswordTextBox";
			this->loginPasswordTextBox->Size = System::Drawing::Size(398, 36);
			this->loginPasswordTextBox->TabIndex = 3;
			this->loginPasswordTextBox->Text = L"Password";
			this->loginPasswordTextBox->UseSystemPasswordChar = true;
			this->loginPasswordTextBox->Click += gcnew System::EventHandler(this, &MyForm::loginPasswordTextBox_Click);
			// 
			// loginLoginLabel
			// 
			this->loginLoginLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->loginLoginLabel->AutoSize = true;
			this->loginLoginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginLoginLabel->Location = System::Drawing::Point(396, 73);
			this->loginLoginLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->loginLoginLabel->Name = L"loginLoginLabel";
			this->loginLoginLabel->Size = System::Drawing::Size(96, 38);
			this->loginLoginLabel->TabIndex = 0;
			this->loginLoginLabel->Text = L"Login";
			// 
			// registerPanel
			// 
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
			this->registerPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->registerPanel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->registerPanel->Location = System::Drawing::Point(0, 0);
			this->registerPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerPanel->Name = L"registerPanel";
			this->registerPanel->Size = System::Drawing::Size(1186, 714);
			this->registerPanel->TabIndex = 12;
			// 
			// registerBirthdayLabel
			// 
			this->registerBirthdayLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerBirthdayLabel->AutoSize = true;
			this->registerBirthdayLabel->Location = System::Drawing::Point(515, 257);
			this->registerBirthdayLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerBirthdayLabel->Name = L"registerBirthdayLabel";
			this->registerBirthdayLabel->Size = System::Drawing::Size(60, 19);
			this->registerBirthdayLabel->TabIndex = 17;
			this->registerBirthdayLabel->Text = L"Birthday";
			// 
			// registerDateTimePicker
			// 
			this->registerDateTimePicker->Location = System::Drawing::Point(497, 319);
			this->registerDateTimePicker->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerDateTimePicker->Name = L"registerDateTimePicker";
			this->registerDateTimePicker->Size = System::Drawing::Size(156, 25);
			this->registerDateTimePicker->TabIndex = 9;
			// 
			// registerErrorLabel
			// 
			this->registerErrorLabel->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->registerErrorLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerErrorLabel->AutoSize = true;
			this->registerErrorLabel->ForeColor = System::Drawing::Color::Red;
			this->registerErrorLabel->Location = System::Drawing::Point(556, 397);
			this->registerErrorLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerErrorLabel->Name = L"registerErrorLabel";
			this->registerErrorLabel->Size = System::Drawing::Size(67, 19);
			this->registerErrorLabel->TabIndex = 16;
			this->registerErrorLabel->Text = L"Lastname";
			this->registerErrorLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// registerLastnameLabel
			// 
			this->registerLastnameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerLastnameLabel->AutoSize = true;
			this->registerLastnameLabel->Location = System::Drawing::Point(592, 189);
			this->registerLastnameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerLastnameLabel->Name = L"registerLastnameLabel";
			this->registerLastnameLabel->Size = System::Drawing::Size(67, 19);
			this->registerLastnameLabel->TabIndex = 15;
			this->registerLastnameLabel->Text = L"Lastname";
			// 
			// registerFirstnameLabel
			// 
			this->registerFirstnameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerFirstnameLabel->AutoSize = true;
			this->registerFirstnameLabel->Location = System::Drawing::Point(447, 186);
			this->registerFirstnameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerFirstnameLabel->Name = L"registerFirstnameLabel";
			this->registerFirstnameLabel->Size = System::Drawing::Size(69, 19);
			this->registerFirstnameLabel->TabIndex = 14;
			this->registerFirstnameLabel->Text = L"Firstname";
			// 
			// registerLastnameTextBox
			// 
			this->registerLastnameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerLastnameTextBox->Location = System::Drawing::Point(583, 208);
			this->registerLastnameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerLastnameTextBox->Name = L"registerLastnameTextBox";
			this->registerLastnameTextBox->Size = System::Drawing::Size(129, 25);
			this->registerLastnameTextBox->TabIndex = 13;
			// 
			// registerFirstnameTextBox
			// 
			this->registerFirstnameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerFirstnameTextBox->Location = System::Drawing::Point(438, 208);
			this->registerFirstnameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerFirstnameTextBox->Name = L"registerFirstnameTextBox";
			this->registerFirstnameTextBox->Size = System::Drawing::Size(129, 25);
			this->registerFirstnameTextBox->TabIndex = 12;
			// 
			// registerValidateButton
			// 
			this->registerValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->registerValidateButton->Location = System::Drawing::Point(898, 591);
			this->registerValidateButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerValidateButton->Name = L"registerValidateButton";
			this->registerValidateButton->Size = System::Drawing::Size(68, 36);
			this->registerValidateButton->TabIndex = 11;
			this->registerValidateButton->Text = L"Validate";
			this->registerValidateButton->UseVisualStyleBackColor = true;
			this->registerValidateButton->Click += gcnew System::EventHandler(this, &MyForm::registerValidateButton_Click);
			// 
			// registerLoginButton
			// 
			this->registerLoginButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->registerLoginButton->Location = System::Drawing::Point(1133, 3);
			this->registerLoginButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerLoginButton->Name = L"registerLoginButton";
			this->registerLoginButton->Size = System::Drawing::Size(51, 36);
			this->registerLoginButton->TabIndex = 5;
			this->registerLoginButton->Text = L"Login";
			this->registerLoginButton->UseVisualStyleBackColor = true;
			this->registerLoginButton->Click += gcnew System::EventHandler(this, &MyForm::registerLoginButton_Click);
			// 
			// registerPasswordLabel
			// 
			this->registerPasswordLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerPasswordLabel->AutoSize = true;
			this->registerPasswordLabel->Location = System::Drawing::Point(592, 118);
			this->registerPasswordLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerPasswordLabel->Name = L"registerPasswordLabel";
			this->registerPasswordLabel->Size = System::Drawing::Size(67, 19);
			this->registerPasswordLabel->TabIndex = 4;
			this->registerPasswordLabel->Text = L"Password";
			// 
			// registerPasswordTextBox
			// 
			this->registerPasswordTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerPasswordTextBox->Location = System::Drawing::Point(583, 140);
			this->registerPasswordTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerPasswordTextBox->Name = L"registerPasswordTextBox";
			this->registerPasswordTextBox->PasswordChar = '*';
			this->registerPasswordTextBox->Size = System::Drawing::Size(129, 25);
			this->registerPasswordTextBox->TabIndex = 3;
			// 
			// registerUsernameTextBox
			// 
			this->registerUsernameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerUsernameTextBox->Location = System::Drawing::Point(438, 140);
			this->registerUsernameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerUsernameTextBox->Name = L"registerUsernameTextBox";
			this->registerUsernameTextBox->Size = System::Drawing::Size(129, 25);
			this->registerUsernameTextBox->TabIndex = 2;
			// 
			// registerUsernameLabel
			// 
			this->registerUsernameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerUsernameLabel->AutoSize = true;
			this->registerUsernameLabel->Location = System::Drawing::Point(447, 118);
			this->registerUsernameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerUsernameLabel->Name = L"registerUsernameLabel";
			this->registerUsernameLabel->Size = System::Drawing::Size(70, 19);
			this->registerUsernameLabel->TabIndex = 1;
			this->registerUsernameLabel->Text = L"Username";
			// 
			// registerRegisterLabel
			// 
			this->registerRegisterLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerRegisterLabel->AutoSize = true;
			this->registerRegisterLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->registerRegisterLabel->Location = System::Drawing::Point(496, 41);
			this->registerRegisterLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->registerRegisterLabel->Name = L"registerRegisterLabel";
			this->registerRegisterLabel->Size = System::Drawing::Size(147, 38);
			this->registerRegisterLabel->TabIndex = 0;
			this->registerRegisterLabel->Text = L"Register";
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
			this->clientMPanel->Location = System::Drawing::Point(5, 6);
			this->clientMPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMPanel->Name = L"clientMPanel";
			this->clientMPanel->Size = System::Drawing::Size(367, 521);
			this->clientMPanel->TabIndex = 4;
			// 
			// clientMModifyButton
			// 
			this->clientMModifyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMModifyButton->Location = System::Drawing::Point(228, 480);
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
			this->clientMDeleteButton->Location = System::Drawing::Point(299, 480);
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
			this->clientMFNameTextBox->Size = System::Drawing::Size(90, 25);
			this->clientMFNameTextBox->TabIndex = 6;
			// 
			// clientMLNameTextBox
			// 
			this->clientMLNameTextBox->Location = System::Drawing::Point(80, 73);
			this->clientMLNameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMLNameTextBox->Name = L"clientMLNameTextBox";
			this->clientMLNameTextBox->Size = System::Drawing::Size(90, 25);
			this->clientMLNameTextBox->TabIndex = 7;
			// 
			// clientMCityTextBox
			// 
			this->clientMCityTextBox->Location = System::Drawing::Point(80, 107);
			this->clientMCityTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMCityTextBox->Name = L"clientMCityTextBox";
			this->clientMCityTextBox->Size = System::Drawing::Size(90, 25);
			this->clientMCityTextBox->TabIndex = 8;
			// 
			// clientMDGV
			// 
			this->clientMDGV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->clientMDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->clientMDGV->Location = System::Drawing::Point(2, 304);
			this->clientMDGV->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMDGV->Name = L"clientMDGV";
			this->clientMDGV->RowHeadersWidth = 51;
			this->clientMDGV->RowTemplate->Height = 24;
			this->clientMDGV->Size = System::Drawing::Size(362, 170);
			this->clientMDGV->TabIndex = 0;
			// 
			// clientMSearchButton
			// 
			this->clientMSearchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMSearchButton->Location = System::Drawing::Point(299, 261);
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
			this->clientMCityLabel->Size = System::Drawing::Size(40, 19);
			this->clientMCityLabel->TabIndex = 5;
			this->clientMCityLabel->Text = L"City :";
			// 
			// clientMFNameLabel
			// 
			this->clientMFNameLabel->AutoSize = true;
			this->clientMFNameLabel->Location = System::Drawing::Point(2, 45);
			this->clientMFNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->clientMFNameLabel->Name = L"clientMFNameLabel";
			this->clientMFNameLabel->Size = System::Drawing::Size(78, 19);
			this->clientMFNameLabel->TabIndex = 3;
			this->clientMFNameLabel->Text = L"First name :";
			// 
			// clientMLNameLabel
			// 
			this->clientMLNameLabel->AutoSize = true;
			this->clientMLNameLabel->Location = System::Drawing::Point(2, 76);
			this->clientMLNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->clientMLNameLabel->Name = L"clientMLNameLabel";
			this->clientMLNameLabel->Size = System::Drawing::Size(76, 19);
			this->clientMLNameLabel->TabIndex = 4;
			this->clientMLNameLabel->Text = L"Last name :";
			// 
			// managerTablePanel
			// 
			this->managerTablePanel->Controls->Add(this->managerTabControl);
			this->managerTablePanel->Location = System::Drawing::Point(117, 12);
			this->managerTablePanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->managerTablePanel->Name = L"managerTablePanel";
			this->managerTablePanel->Size = System::Drawing::Size(387, 572);
			this->managerTablePanel->TabIndex = 2;
			// 
			// managerTabControl
			// 
			this->managerTabControl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->managerTabControl->Controls->Add(this->clientMTabPage);
			this->managerTabControl->Controls->Add(this->orderMTabPage);
			this->managerTabControl->Controls->Add(this->stockMTabPage);
			this->managerTabControl->Controls->Add(this->statisticMTabPage);
			this->managerTabControl->Location = System::Drawing::Point(2, 3);
			this->managerTabControl->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->managerTabControl->Name = L"managerTabControl";
			this->managerTabControl->SelectedIndex = 0;
			this->managerTabControl->Size = System::Drawing::Size(383, 565);
			this->managerTabControl->TabIndex = 0;
			// 
			// clientMTabPage
			// 
			this->clientMTabPage->Controls->Add(this->clientMPanel);
			this->clientMTabPage->Location = System::Drawing::Point(4, 26);
			this->clientMTabPage->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMTabPage->Name = L"clientMTabPage";
			this->clientMTabPage->Padding = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->clientMTabPage->Size = System::Drawing::Size(375, 535);
			this->clientMTabPage->TabIndex = 0;
			this->clientMTabPage->Text = L"Client";
			this->clientMTabPage->UseVisualStyleBackColor = true;
			// 
			// orderMTabPage
			// 
			this->orderMTabPage->Controls->Add(this->addOrderPanel);
			this->orderMTabPage->Controls->Add(this->orderMPanel);
			this->orderMTabPage->Location = System::Drawing::Point(4, 26);
			this->orderMTabPage->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->orderMTabPage->Name = L"orderMTabPage";
			this->orderMTabPage->Padding = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->orderMTabPage->Size = System::Drawing::Size(375, 535);
			this->orderMTabPage->TabIndex = 1;
			this->orderMTabPage->Text = L"Order";
			this->orderMTabPage->UseVisualStyleBackColor = true;
			// 
			// addOrderPanel
			// 
			this->addOrderPanel->Controls->Add(this->addOrderValidateButton);
			this->addOrderPanel->Controls->Add(this->addOrderDateTextBox);
			this->addOrderPanel->Controls->Add(this->addOrderLNameTextBox);
			this->addOrderPanel->Controls->Add(this->addOrderFNameTextBox);
			this->addOrderPanel->Controls->Add(this->addOrderDateLabe);
			this->addOrderPanel->Controls->Add(this->addOrderLNameLabel);
			this->addOrderPanel->Controls->Add(this->addOrderFNameLabel);
			this->addOrderPanel->Controls->Add(this->addOrderTitleLabel);
			this->addOrderPanel->Controls->Add(this->addOrderExitButton);
			this->addOrderPanel->Location = System::Drawing::Point(5, 6);
			this->addOrderPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addOrderPanel->Name = L"addOrderPanel";
			this->addOrderPanel->Size = System::Drawing::Size(367, 522);
			this->addOrderPanel->TabIndex = 9;
			// 
			// addOrderValidateButton
			// 
			this->addOrderValidateButton->Location = System::Drawing::Point(180, 307);
			this->addOrderValidateButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addOrderValidateButton->Name = L"addOrderValidateButton";
			this->addOrderValidateButton->Size = System::Drawing::Size(77, 39);
			this->addOrderValidateButton->TabIndex = 8;
			this->addOrderValidateButton->Text = L"Validate";
			this->addOrderValidateButton->UseVisualStyleBackColor = true;
			// 
			// addOrderDateTextBox
			// 
			this->addOrderDateTextBox->Location = System::Drawing::Point(5, 187);
			this->addOrderDateTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addOrderDateTextBox->Name = L"addOrderDateTextBox";
			this->addOrderDateTextBox->Size = System::Drawing::Size(92, 25);
			this->addOrderDateTextBox->TabIndex = 7;
			// 
			// addOrderLNameTextBox
			// 
			this->addOrderLNameTextBox->Location = System::Drawing::Point(5, 136);
			this->addOrderLNameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addOrderLNameTextBox->Name = L"addOrderLNameTextBox";
			this->addOrderLNameTextBox->Size = System::Drawing::Size(92, 25);
			this->addOrderLNameTextBox->TabIndex = 6;
			// 
			// addOrderFNameTextBox
			// 
			this->addOrderFNameTextBox->Location = System::Drawing::Point(5, 84);
			this->addOrderFNameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addOrderFNameTextBox->Name = L"addOrderFNameTextBox";
			this->addOrderFNameTextBox->Size = System::Drawing::Size(92, 25);
			this->addOrderFNameTextBox->TabIndex = 5;
			// 
			// addOrderDateLabe
			// 
			this->addOrderDateLabe->AutoSize = true;
			this->addOrderDateLabe->Location = System::Drawing::Point(2, 164);
			this->addOrderDateLabe->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addOrderDateLabe->Name = L"addOrderDateLabe";
			this->addOrderDateLabe->Size = System::Drawing::Size(38, 19);
			this->addOrderDateLabe->TabIndex = 4;
			this->addOrderDateLabe->Text = L"Date";
			// 
			// addOrderLNameLabel
			// 
			this->addOrderLNameLabel->AutoSize = true;
			this->addOrderLNameLabel->Location = System::Drawing::Point(2, 112);
			this->addOrderLNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addOrderLNameLabel->Name = L"addOrderLNameLabel";
			this->addOrderLNameLabel->Size = System::Drawing::Size(72, 19);
			this->addOrderLNameLabel->TabIndex = 3;
			this->addOrderLNameLabel->Text = L"Last Name";
			// 
			// addOrderFNameLabel
			// 
			this->addOrderFNameLabel->AutoSize = true;
			this->addOrderFNameLabel->Location = System::Drawing::Point(2, 61);
			this->addOrderFNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addOrderFNameLabel->Name = L"addOrderFNameLabel";
			this->addOrderFNameLabel->Size = System::Drawing::Size(74, 19);
			this->addOrderFNameLabel->TabIndex = 2;
			this->addOrderFNameLabel->Text = L"First Name";
			// 
			// addOrderTitleLabel
			// 
			this->addOrderTitleLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addOrderTitleLabel->AutoSize = true;
			this->addOrderTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addOrderTitleLabel->Location = System::Drawing::Point(81, 3);
			this->addOrderTitleLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addOrderTitleLabel->Name = L"addOrderTitleLabel";
			this->addOrderTitleLabel->Size = System::Drawing::Size(177, 38);
			this->addOrderTitleLabel->TabIndex = 1;
			this->addOrderTitleLabel->Text = L"Add Order";
			// 
			// addOrderExitButton
			// 
			this->addOrderExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->addOrderExitButton->Location = System::Drawing::Point(348, 3);
			this->addOrderExitButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addOrderExitButton->Name = L"addOrderExitButton";
			this->addOrderExitButton->Size = System::Drawing::Size(17, 26);
			this->addOrderExitButton->TabIndex = 0;
			this->addOrderExitButton->Text = L"X";
			this->addOrderExitButton->UseVisualStyleBackColor = true;
			this->addOrderExitButton->Click += gcnew System::EventHandler(this, &MyForm::addOrderExitButton_Click);
			// 
			// orderMPanel
			// 
			this->orderMPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->orderMPanel->Controls->Add(this->orderMSearchButton);
			this->orderMPanel->Controls->Add(this->orderMFilterButton);
			this->orderMPanel->Controls->Add(this->orderMAddButton);
			this->orderMPanel->Controls->Add(this->orderMModifyButton);
			this->orderMPanel->Controls->Add(this->orderMDeleteButton);
			this->orderMPanel->Controls->Add(this->orderMDGV);
			this->orderMPanel->Location = System::Drawing::Point(5, 6);
			this->orderMPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->orderMPanel->Name = L"orderMPanel";
			this->orderMPanel->Size = System::Drawing::Size(367, 522);
			this->orderMPanel->TabIndex = 0;
			// 
			// orderMSearchButton
			// 
			this->orderMSearchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->orderMSearchButton->Location = System::Drawing::Point(306, 3);
			this->orderMSearchButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->orderMSearchButton->Name = L"orderMSearchButton";
			this->orderMSearchButton->Size = System::Drawing::Size(59, 36);
			this->orderMSearchButton->TabIndex = 8;
			this->orderMSearchButton->Text = L"Search";
			this->orderMSearchButton->UseVisualStyleBackColor = true;
			// 
			// orderMFilterButton
			// 
			this->orderMFilterButton->Location = System::Drawing::Point(2, 3);
			this->orderMFilterButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->orderMFilterButton->Name = L"orderMFilterButton";
			this->orderMFilterButton->Size = System::Drawing::Size(58, 36);
			this->orderMFilterButton->TabIndex = 9;
			this->orderMFilterButton->Text = L"Filter";
			this->orderMFilterButton->UseVisualStyleBackColor = true;
			// 
			// orderMAddButton
			// 
			this->orderMAddButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->orderMAddButton->Location = System::Drawing::Point(201, 482);
			this->orderMAddButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->orderMAddButton->Name = L"orderMAddButton";
			this->orderMAddButton->Size = System::Drawing::Size(51, 36);
			this->orderMAddButton->TabIndex = 7;
			this->orderMAddButton->Text = L"Add";
			this->orderMAddButton->UseVisualStyleBackColor = true;
			this->orderMAddButton->Click += gcnew System::EventHandler(this, &MyForm::orderMAddButton_Click);
			// 
			// orderMModifyButton
			// 
			this->orderMModifyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->orderMModifyButton->Location = System::Drawing::Point(257, 482);
			this->orderMModifyButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->orderMModifyButton->Name = L"orderMModifyButton";
			this->orderMModifyButton->Size = System::Drawing::Size(51, 36);
			this->orderMModifyButton->TabIndex = 6;
			this->orderMModifyButton->Text = L"Modify";
			this->orderMModifyButton->UseVisualStyleBackColor = true;
			// 
			// orderMDeleteButton
			// 
			this->orderMDeleteButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->orderMDeleteButton->Location = System::Drawing::Point(313, 482);
			this->orderMDeleteButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->orderMDeleteButton->Name = L"orderMDeleteButton";
			this->orderMDeleteButton->Size = System::Drawing::Size(51, 36);
			this->orderMDeleteButton->TabIndex = 1;
			this->orderMDeleteButton->Text = L"Delete";
			this->orderMDeleteButton->UseVisualStyleBackColor = true;
			// 
			// orderMDGV
			// 
			this->orderMDGV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->orderMDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->orderMDGV->Location = System::Drawing::Point(2, 126);
			this->orderMDGV->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->orderMDGV->Name = L"orderMDGV";
			this->orderMDGV->RowHeadersWidth = 51;
			this->orderMDGV->RowTemplate->Height = 24;
			this->orderMDGV->Size = System::Drawing::Size(362, 350);
			this->orderMDGV->TabIndex = 0;
			// 
			// stockMTabPage
			// 
			this->stockMTabPage->Controls->Add(this->addStockPanel);
			this->stockMTabPage->Controls->Add(this->informationStockPanel);
			this->stockMTabPage->Controls->Add(this->stockMPanel);
			this->stockMTabPage->Location = System::Drawing::Point(4, 26);
			this->stockMTabPage->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->stockMTabPage->Name = L"stockMTabPage";
			this->stockMTabPage->Padding = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->stockMTabPage->Size = System::Drawing::Size(375, 535);
			this->stockMTabPage->TabIndex = 2;
			this->stockMTabPage->Text = L"Stock";
			this->stockMTabPage->UseVisualStyleBackColor = true;
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
			this->addStockPanel->Location = System::Drawing::Point(5, 6);
			this->addStockPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockPanel->Name = L"addStockPanel";
			this->addStockPanel->Size = System::Drawing::Size(367, 522);
			this->addStockPanel->TabIndex = 9;
			// 
			// addStockRestockingTextBox
			// 
			this->addStockRestockingTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockRestockingTextBox->Location = System::Drawing::Point(2, 391);
			this->addStockRestockingTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockRestockingTextBox->Name = L"addStockRestockingTextBox";
			this->addStockRestockingTextBox->Size = System::Drawing::Size(363, 25);
			this->addStockRestockingTextBox->TabIndex = 16;
			// 
			// addStockStockTextBox
			// 
			this->addStockStockTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockStockTextBox->Location = System::Drawing::Point(2, 343);
			this->addStockStockTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockStockTextBox->Name = L"addStockStockTextBox";
			this->addStockStockTextBox->Size = System::Drawing::Size(363, 25);
			this->addStockStockTextBox->TabIndex = 17;
			// 
			// addStockTVATextBox
			// 
			this->addStockTVATextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockTVATextBox->Location = System::Drawing::Point(2, 295);
			this->addStockTVATextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockTVATextBox->Name = L"addStockTVATextBox";
			this->addStockTVATextBox->Size = System::Drawing::Size(363, 25);
			this->addStockTVATextBox->TabIndex = 16;
			// 
			// addStockMargeTextBox
			// 
			this->addStockMargeTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockMargeTextBox->Location = System::Drawing::Point(2, 248);
			this->addStockMargeTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockMargeTextBox->Name = L"addStockMargeTextBox";
			this->addStockMargeTextBox->Size = System::Drawing::Size(363, 25);
			this->addStockMargeTextBox->TabIndex = 15;
			// 
			// addStockCostTextBox
			// 
			this->addStockCostTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockCostTextBox->Location = System::Drawing::Point(2, 200);
			this->addStockCostTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockCostTextBox->Name = L"addStockCostTextBox";
			this->addStockCostTextBox->Size = System::Drawing::Size(363, 25);
			this->addStockCostTextBox->TabIndex = 14;
			// 
			// addStockRestockingLabel
			// 
			this->addStockRestockingLabel->AutoSize = true;
			this->addStockRestockingLabel->Location = System::Drawing::Point(2, 370);
			this->addStockRestockingLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockRestockingLabel->Name = L"addStockRestockingLabel";
			this->addStockRestockingLabel->Size = System::Drawing::Size(137, 19);
			this->addStockRestockingLabel->TabIndex = 13;
			this->addStockRestockingLabel->Text = L"Restocking threshold";
			// 
			// addStockStockLabel
			// 
			this->addStockStockLabel->AutoSize = true;
			this->addStockStockLabel->Location = System::Drawing::Point(2, 322);
			this->addStockStockLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockStockLabel->Name = L"addStockStockLabel";
			this->addStockStockLabel->Size = System::Drawing::Size(44, 19);
			this->addStockStockLabel->TabIndex = 12;
			this->addStockStockLabel->Text = L"Stock";
			// 
			// addStockTVALabel
			// 
			this->addStockTVALabel->AutoSize = true;
			this->addStockTVALabel->Location = System::Drawing::Point(2, 274);
			this->addStockTVALabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockTVALabel->Name = L"addStockTVALabel";
			this->addStockTVALabel->Size = System::Drawing::Size(33, 19);
			this->addStockTVALabel->TabIndex = 11;
			this->addStockTVALabel->Text = L"TVA";
			// 
			// addStockMargeLabel
			// 
			this->addStockMargeLabel->AutoSize = true;
			this->addStockMargeLabel->Location = System::Drawing::Point(2, 226);
			this->addStockMargeLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockMargeLabel->Name = L"addStockMargeLabel";
			this->addStockMargeLabel->Size = System::Drawing::Size(48, 19);
			this->addStockMargeLabel->TabIndex = 10;
			this->addStockMargeLabel->Text = L"Marge";
			// 
			// addStockCostLabel
			// 
			this->addStockCostLabel->AutoSize = true;
			this->addStockCostLabel->Location = System::Drawing::Point(2, 178);
			this->addStockCostLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockCostLabel->Name = L"addStockCostLabel";
			this->addStockCostLabel->Size = System::Drawing::Size(38, 19);
			this->addStockCostLabel->TabIndex = 9;
			this->addStockCostLabel->Text = L"Cost";
			// 
			// addStockValidateButton
			// 
			this->addStockValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->addStockValidateButton->Location = System::Drawing::Point(288, 476);
			this->addStockValidateButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockValidateButton->Name = L"addStockValidateButton";
			this->addStockValidateButton->Size = System::Drawing::Size(77, 39);
			this->addStockValidateButton->TabIndex = 8;
			this->addStockValidateButton->Text = L"Validate";
			this->addStockValidateButton->UseVisualStyleBackColor = true;
			// 
			// addStockQuantityTextBox
			// 
			this->addStockQuantityTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockQuantityTextBox->Location = System::Drawing::Point(2, 152);
			this->addStockQuantityTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockQuantityTextBox->Name = L"addStockQuantityTextBox";
			this->addStockQuantityTextBox->Size = System::Drawing::Size(363, 25);
			this->addStockQuantityTextBox->TabIndex = 7;
			// 
			// addStockNameTextBox
			// 
			this->addStockNameTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockNameTextBox->Location = System::Drawing::Point(2, 104);
			this->addStockNameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockNameTextBox->Name = L"addStockNameTextBox";
			this->addStockNameTextBox->Size = System::Drawing::Size(363, 25);
			this->addStockNameTextBox->TabIndex = 5;
			// 
			// addStockQuantityLabel
			// 
			this->addStockQuantityLabel->AutoSize = true;
			this->addStockQuantityLabel->Location = System::Drawing::Point(2, 131);
			this->addStockQuantityLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockQuantityLabel->Name = L"addStockQuantityLabel";
			this->addStockQuantityLabel->Size = System::Drawing::Size(62, 19);
			this->addStockQuantityLabel->TabIndex = 4;
			this->addStockQuantityLabel->Text = L"Quantity";
			// 
			// addStockNameLabel
			// 
			this->addStockNameLabel->AutoSize = true;
			this->addStockNameLabel->Location = System::Drawing::Point(2, 83);
			this->addStockNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->addStockNameLabel->Name = L"addStockNameLabel";
			this->addStockNameLabel->Size = System::Drawing::Size(112, 19);
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
			this->addStockExitButton->Location = System::Drawing::Point(348, 3);
			this->addStockExitButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addStockExitButton->Name = L"addStockExitButton";
			this->addStockExitButton->Size = System::Drawing::Size(17, 26);
			this->addStockExitButton->TabIndex = 0;
			this->addStockExitButton->Text = L"X";
			this->addStockExitButton->UseVisualStyleBackColor = true;
			this->addStockExitButton->Click += gcnew System::EventHandler(this, &MyForm::addStockExitButton_Click);
			// 
			// informationStockPanel
			// 
			this->informationStockPanel->Controls->Add(this->informationStockModifyButton);
			this->informationStockPanel->Controls->Add(this->informationStockDeleteButton);
			this->informationStockPanel->Location = System::Drawing::Point(5, 6);
			this->informationStockPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->informationStockPanel->Name = L"informationStockPanel";
			this->informationStockPanel->Size = System::Drawing::Size(367, 522);
			this->informationStockPanel->TabIndex = 15;
			// 
			// informationStockModifyButton
			// 
			this->informationStockModifyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->informationStockModifyButton->Location = System::Drawing::Point(242, 482);
			this->informationStockModifyButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->informationStockModifyButton->Name = L"informationStockModifyButton";
			this->informationStockModifyButton->Size = System::Drawing::Size(59, 36);
			this->informationStockModifyButton->TabIndex = 6;
			this->informationStockModifyButton->Text = L"Modify";
			this->informationStockModifyButton->UseVisualStyleBackColor = true;
			// 
			// informationStockDeleteButton
			// 
			this->informationStockDeleteButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->informationStockDeleteButton->Location = System::Drawing::Point(306, 482);
			this->informationStockDeleteButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->informationStockDeleteButton->Name = L"informationStockDeleteButton";
			this->informationStockDeleteButton->Size = System::Drawing::Size(59, 36);
			this->informationStockDeleteButton->TabIndex = 1;
			this->informationStockDeleteButton->Text = L"Delete";
			this->informationStockDeleteButton->UseVisualStyleBackColor = true;
			// 
			// stockMPanel
			// 
			this->stockMPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stockMPanel->Controls->Add(this->stockMLabel);
			this->stockMPanel->Controls->Add(this->stockMFilterButton);
			this->stockMPanel->Controls->Add(this->stockMAddButton);
			this->stockMPanel->Controls->Add(this->stockMDGV);
			this->stockMPanel->Location = System::Drawing::Point(5, 6);
			this->stockMPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->stockMPanel->Name = L"stockMPanel";
			this->stockMPanel->Size = System::Drawing::Size(367, 522);
			this->stockMPanel->TabIndex = 9;
			// 
			// stockMLabel
			// 
			this->stockMLabel->AutoSize = true;
			this->stockMLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stockMLabel->Location = System::Drawing::Point(68, 3);
			this->stockMLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->stockMLabel->Name = L"stockMLabel";
			this->stockMLabel->Size = System::Drawing::Size(250, 38);
			this->stockMLabel->TabIndex = 15;
			this->stockMLabel->Text = L"Stock Manager";
			// 
			// stockMFilterButton
			// 
			this->stockMFilterButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->stockMFilterButton->Location = System::Drawing::Point(242, 482);
			this->stockMFilterButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->stockMFilterButton->Name = L"stockMFilterButton";
			this->stockMFilterButton->Size = System::Drawing::Size(59, 36);
			this->stockMFilterButton->TabIndex = 9;
			this->stockMFilterButton->Text = L"Filter";
			this->stockMFilterButton->UseVisualStyleBackColor = true;
			// 
			// stockMAddButton
			// 
			this->stockMAddButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->stockMAddButton->Location = System::Drawing::Point(306, 482);
			this->stockMAddButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->stockMAddButton->Name = L"stockMAddButton";
			this->stockMAddButton->Size = System::Drawing::Size(59, 36);
			this->stockMAddButton->TabIndex = 7;
			this->stockMAddButton->Text = L"Add";
			this->stockMAddButton->UseVisualStyleBackColor = true;
			this->stockMAddButton->Click += gcnew System::EventHandler(this, &MyForm::stockMAddButton_Click);
			// 
			// stockMDGV
			// 
			this->stockMDGV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stockMDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->stockMDGV->Location = System::Drawing::Point(2, 129);
			this->stockMDGV->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->stockMDGV->Name = L"stockMDGV";
			this->stockMDGV->RowHeadersWidth = 51;
			this->stockMDGV->RowTemplate->Height = 24;
			this->stockMDGV->Size = System::Drawing::Size(362, 347);
			this->stockMDGV->TabIndex = 0;
			// 
			// statisticMTabPage
			// 
			this->statisticMTabPage->Controls->Add(this->statisticMStatisticButton);
			this->statisticMTabPage->Controls->Add(this->statisticMComboBox);
			this->statisticMTabPage->Controls->Add(this->statisticMDGV);
			this->statisticMTabPage->Location = System::Drawing::Point(4, 26);
			this->statisticMTabPage->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->statisticMTabPage->Name = L"statisticMTabPage";
			this->statisticMTabPage->Padding = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->statisticMTabPage->Size = System::Drawing::Size(375, 535);
			this->statisticMTabPage->TabIndex = 3;
			this->statisticMTabPage->Text = L"Statistic";
			this->statisticMTabPage->UseVisualStyleBackColor = true;
			// 
			// statisticMStatisticButton
			// 
			this->statisticMStatisticButton->Location = System::Drawing::Point(182, 503);
			this->statisticMStatisticButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->statisticMStatisticButton->Name = L"statisticMStatisticButton";
			this->statisticMStatisticButton->Size = System::Drawing::Size(91, 26);
			this->statisticMStatisticButton->TabIndex = 16;
			this->statisticMStatisticButton->Text = L"Statistique";
			this->statisticMStatisticButton->UseVisualStyleBackColor = true;
			// 
			// statisticMComboBox
			// 
			this->statisticMComboBox->FormattingEnabled = true;
			this->statisticMComboBox->Location = System::Drawing::Point(278, 503);
			this->statisticMComboBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->statisticMComboBox->Name = L"statisticMComboBox";
			this->statisticMComboBox->Size = System::Drawing::Size(95, 25);
			this->statisticMComboBox->TabIndex = 15;
			// 
			// statisticMDGV
			// 
			this->statisticMDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->statisticMDGV->Location = System::Drawing::Point(5, 6);
			this->statisticMDGV->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->statisticMDGV->Name = L"statisticMDGV";
			this->statisticMDGV->RowHeadersWidth = 51;
			this->statisticMDGV->RowTemplate->Height = 24;
			this->statisticMDGV->Size = System::Drawing::Size(367, 490);
			this->statisticMDGV->TabIndex = 0;
			// 
			// loginPasswordPanel
			// 
			this->loginPasswordPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->loginPasswordPanel->Controls->Add(this->loginPasswordTextBox);
			this->loginPasswordPanel->Location = System::Drawing::Point(373, 317);
			this->loginPasswordPanel->Name = L"loginPasswordPanel";
			this->loginPasswordPanel->Size = System::Drawing::Size(445, 64);
			this->loginPasswordPanel->TabIndex = 20;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1186, 714);
			this->Controls->Add(this->loginPanel);
			this->Controls->Add(this->managerTablePanel);
			this->Controls->Add(this->registerPanel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Opo2suM";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->loginPanel->ResumeLayout(false);
			this->loginPanel->PerformLayout();
			this->loginUsernamePanel->ResumeLayout(false);
			this->loginUsernamePanel->PerformLayout();
			this->registerPanel->ResumeLayout(false);
			this->registerPanel->PerformLayout();
			this->clientMPanel->ResumeLayout(false);
			this->clientMPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientMDGV))->EndInit();
			this->managerTablePanel->ResumeLayout(false);
			this->managerTabControl->ResumeLayout(false);
			this->clientMTabPage->ResumeLayout(false);
			this->orderMTabPage->ResumeLayout(false);
			this->addOrderPanel->ResumeLayout(false);
			this->addOrderPanel->PerformLayout();
			this->orderMPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderMDGV))->EndInit();
			this->stockMTabPage->ResumeLayout(false);
			this->addStockPanel->ResumeLayout(false);
			this->addStockPanel->PerformLayout();
			this->informationStockPanel->ResumeLayout(false);
			this->stockMPanel->ResumeLayout(false);
			this->stockMPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stockMDGV))->EndInit();
			this->statisticMTabPage->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statisticMDGV))->EndInit();
			this->loginPasswordPanel->ResumeLayout(false);
			this->loginPasswordPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		managerTablePanel->Visible = false;
	}
	private: System::Void loginRegisterButton_Click(System::Object^ sender, System::EventArgs^ e) {
		registerPanel->Visible = true;
		loginPanel->Visible = false;
	}
	private: System::Void registerLoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		loginPanel->Visible = true;
		registerPanel->Visible = false;
	}
	private: System::Void addOrderExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		orderMPanel->Visible = true;
		addOrderPanel->Visible = false;
	}
	private: System::Void orderMAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		orderMPanel->Visible = false;
		addOrderPanel->Visible = true;
	}
	private: System::Void stockMAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		addStockPanel->Visible = true;
		stockMPanel->Visible = false;
	}
	private: System::Void addStockExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		addStockPanel->Visible = false;
		stockMPanel->Visible = true;
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
			this->loginErrorLabel->Text = "Afficher la page suivante...";
		}
		DataTableReaderTest->Close();
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
};
}