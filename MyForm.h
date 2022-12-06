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
	private: System::Windows::Forms::Label^ loginPasswordLabel;
	private: System::Windows::Forms::TextBox^ loginPasswordTextBox;
	private: System::Windows::Forms::TextBox^ loginUsernameTextBox;
	private: System::Windows::Forms::Label^ loginUsernameLabel;
	private: System::Windows::Forms::Label^ loginLoginLabel;
	private: System::Windows::Forms::Button^ loginRegisterButton;
	private: System::Windows::Forms::Button^ loginValidateButton;
	private: System::Windows::Forms::Panel^ registerPanel;
	private: System::Windows::Forms::Button^ registerValidateButton;
	private: System::Windows::Forms::Button^ registerLoginButton;
	private: System::Windows::Forms::Label^ registerPasswordLabel;
	private: System::Windows::Forms::TextBox^ registerPasswordTextBox;
	private: System::Windows::Forms::TextBox^ registerUsernameTextBox;
	private: System::Windows::Forms::Label^ registerUsernameLabel;
	private: System::Windows::Forms::Label^ registerRegisterLabel;
	private: System::Windows::Forms::Label^ informationStockNameLabel;
	private: System::Windows::Forms::Label^ registerErrorLabel;
	private: System::Windows::Forms::Label^ registerLastnameLabel;
	private: System::Windows::Forms::Label^ registerFirstnameLabel;
	private: System::Windows::Forms::TextBox^ registerLastnameTextBox;
	private: System::Windows::Forms::TextBox^ registerFirstnameTextBox;
	private: System::Windows::Forms::DateTimePicker^ registerDateTimePicker;
	private: System::Windows::Forms::Label^ registerBirthdayLabel;
	private: System::Windows::Forms::Label^ loginErrorLabel;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::ListView^ clientListView;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ clientModifyInformationsLabel;
	private: System::Windows::Forms::Button^ clientModifyApplyModifButton;



	private: System::Windows::Forms::Label^ clientMoreInfoLabel;

	private: System::Windows::Forms::Label^ clientModifyPostalCodeLabel;


	private: System::Windows::Forms::Label^ clientModifyCityLabel;


	private: System::Windows::Forms::Label^ clientModifyAddressStreetLabel;


	private: System::Windows::Forms::Label^ clientModifyAddressPickerLabel;
	private: System::Windows::Forms::TextBox^ clientModifyMoreInfoTextBox;
	private: System::Windows::Forms::TextBox^ clientModifyCityTextBox;
	private: System::Windows::Forms::TextBox^ clientModifyAddressStreetTextBox;
	private: System::Windows::Forms::ComboBox^ clientModifyAddressPickerComboBox;




















	private: System::Windows::Forms::Label^ clientModifyAddressLabel;
	private: System::Windows::Forms::Label^ clientModifyBirthdayLabel;

	private: System::Windows::Forms::Label^ clientModifyLastnameLabel;

	private: System::Windows::Forms::Label^ clientModifyFirstnameLabel;



	private: System::Windows::Forms::Label^ clientModifyUsernameLabel;
	private: System::Windows::Forms::TextBox^ clientModifyBirthdayTextBox;
	private: System::Windows::Forms::TextBox^ clientModifyLastnameTextBox;
	private: System::Windows::Forms::TextBox^ clientModifyFirstnameTextBox;
	private: System::Windows::Forms::TextBox^ clientModifyUsernameTextBox;










	private: System::Windows::Forms::NumericUpDown^ clientModifyPostalCodeNumericUpDown;






	private: System::Windows::Forms::Label^ clientModifyErrorBoxLabel;
	private: System::Windows::Forms::Button^ clientModifyDeleteAddressButton;






	protected:
	private:
		Account^ connectedAccount;
		Account^ connectedClient;
		Account^ connectedEmployee;
		Address^ connectedClientAddress;
	private: System::Windows::Forms::Button^ clientModifyAddAddressButton;
	private: System::Windows::Forms::Button^ employeeAddNewEmployeeButton;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ employeeModifyAddAddressButton;
	private: System::Windows::Forms::Label^ employeeModifyErrorBoxLabel;
	private: System::Windows::Forms::NumericUpDown^ employeeModifyPostalCodeNumericUpDown;
	private: System::Windows::Forms::Button^ employeeModifyApplyModifButton;
	private: System::Windows::Forms::Label^ employeeModifyMoreInfoLabel;
	private: System::Windows::Forms::Label^ employeeModifyPostalCodeLabel;
	private: System::Windows::Forms::Label^ employeeModifyCityLabel;
	private: System::Windows::Forms::Label^ employeeModifyAddressStreetLabel;
	private: System::Windows::Forms::TextBox^ employeeModifyMoreInfoTextBox;
	private: System::Windows::Forms::TextBox^ employeeModifyCityTextBox;
	private: System::Windows::Forms::TextBox^ employeeModifyAddressStreetTextBox;
	private: System::Windows::Forms::Label^ employeeModifyAddressLabel;
	private: System::Windows::Forms::Label^ employeeModifyBirthdayLabel;
	private: System::Windows::Forms::Label^ employeeModifyLastnameLabel;
	private: System::Windows::Forms::Label^ employeeModifyFirstnameLabel;
	private: System::Windows::Forms::Label^ employeeModifyUsernameLabel;
	private: System::Windows::Forms::TextBox^ employeeModifyHireDateTextBox;
	private: System::Windows::Forms::TextBox^ employeeModifyLastnameTextBox;
	private: System::Windows::Forms::TextBox^ employeeModifyFirstnameTextBox;
	private: System::Windows::Forms::TextBox^ employeeModifyUsernameTextBox;
	private: System::Windows::Forms::Label^ employeeModifyInformationsLabel;
	private: System::Windows::Forms::Label^ employeeModifyHireDateLabel;
	private: System::Windows::Forms::Button^ employeeModifyDeleteAddressButton;
	private: System::Windows::Forms::Label^ employeeModifyAddressPickerLabel;
	private: System::Windows::Forms::ComboBox^ employeeModifyAddressPickerComboBox;
	private: System::Windows::Forms::ListView^ employeeListView;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::TextBox^ employeeModifyBirthdayTextBox;
	private: System::Windows::Forms::Label^ employeeAddEmployeeLabel;
	private: System::Windows::Forms::DateTimePicker^ employeeAddEmployeeHireDateDateTimePicker;
	private: System::Windows::Forms::DateTimePicker^ employeeAddEmployeeBirthdayDateTimePicker;
	private: System::Windows::Forms::Label^ employeeAddEmployeeHireDateLabel;
	private: System::Windows::Forms::Label^ employeeAddEmployeeUsernameLabel;
	private: System::Windows::Forms::TextBox^ employeeAddEmployeeUsernameTextBox;
	private: System::Windows::Forms::Label^ employeeAddEmployeeBirthdayLabel;
	private: System::Windows::Forms::TextBox^ employeeAddEmployeeFirstnameTextBox;
	private: System::Windows::Forms::Label^ employeeAddEmployeeLastnameLabel;
	private: System::Windows::Forms::TextBox^ employeeAddEmployeeLastnameTextbox;
	private: System::Windows::Forms::Label^ employeeAddEmployeeFirstnameLabel;
	private: System::Windows::Forms::Button^ employeeAddEmployeeAddButton;


	private: System::Windows::Forms::CheckBox^ employeeAddEmployeeManagerCheckBox;

		   AddressManager^ addressManager = gcnew AddressManager();
		   PersonnelManager^ personnelManager = gcnew PersonnelManager();
private: System::Windows::Forms::Label^ employeeAddEmployeePasswordLabel;
private: System::Windows::Forms::TextBox^ employeeAddEmployeePasswordTextBox;
private: System::Windows::Forms::Label^ employeeAddEmployeeErrorBoxLabel;
private: System::Windows::Forms::Button^ employeeAddEmployeeCancelButton;
	   AccountManager^ accountManager = gcnew AccountManager();

		   /// <summary>
		   /// Variable nécessaire au concepteur.
		   /// </summary>
		   /// 
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		   void InitializeComponent(void)
		   {
			   this->loginPanel = (gcnew System::Windows::Forms::Panel());
			   this->loginErrorLabel = (gcnew System::Windows::Forms::Label());
			   this->loginValidateButton = (gcnew System::Windows::Forms::Button());
			   this->loginRegisterButton = (gcnew System::Windows::Forms::Button());
			   this->loginPasswordLabel = (gcnew System::Windows::Forms::Label());
			   this->loginPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->loginUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->loginUsernameLabel = (gcnew System::Windows::Forms::Label());
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
			   this->clientListView = (gcnew System::Windows::Forms::ListView());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->clientModifyAddAddressButton = (gcnew System::Windows::Forms::Button());
			   this->clientModifyDeleteAddressButton = (gcnew System::Windows::Forms::Button());
			   this->clientModifyErrorBoxLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyPostalCodeNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			   this->clientModifyApplyModifButton = (gcnew System::Windows::Forms::Button());
			   this->clientMoreInfoLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyPostalCodeLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyCityLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyAddressStreetLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyAddressPickerLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyMoreInfoTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientModifyCityTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientModifyAddressStreetTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientModifyAddressPickerComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->clientModifyAddressLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyBirthdayLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyLastnameLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyFirstnameLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyUsernameLabel = (gcnew System::Windows::Forms::Label());
			   this->clientModifyBirthdayTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientModifyLastnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientModifyFirstnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientModifyUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->clientModifyInformationsLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddNewEmployeeButton = (gcnew System::Windows::Forms::Button());
			   this->panel3 = (gcnew System::Windows::Forms::Panel());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			   this->employeeModifyDeleteAddressButton = (gcnew System::Windows::Forms::Button());
			   this->employeeModifyAddressPickerLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyHireDateLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyBirthdayTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyAddressPickerComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->employeeModifyAddAddressButton = (gcnew System::Windows::Forms::Button());
			   this->employeeModifyErrorBoxLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyPostalCodeNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			   this->employeeModifyApplyModifButton = (gcnew System::Windows::Forms::Button());
			   this->employeeModifyMoreInfoLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyPostalCodeLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyCityLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyAddressStreetLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyMoreInfoTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyCityTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyAddressStreetTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyAddressLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyBirthdayLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyLastnameLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyFirstnameLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyUsernameLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeModifyHireDateTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyLastnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyFirstnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeModifyInformationsLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeListView = (gcnew System::Windows::Forms::ListView());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->employeeAddEmployeeCancelButton = (gcnew System::Windows::Forms::Button());
			   this->employeeAddEmployeeErrorBoxLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeePasswordLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeePasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeAddEmployeeAddButton = (gcnew System::Windows::Forms::Button());
			   this->employeeAddEmployeeManagerCheckBox = (gcnew System::Windows::Forms::CheckBox());
			   this->employeeAddEmployeeLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeeHireDateDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			   this->employeeAddEmployeeBirthdayDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			   this->employeeAddEmployeeHireDateLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeeUsernameLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeeUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeAddEmployeeBirthdayLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeeFirstnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeAddEmployeeLastnameLabel = (gcnew System::Windows::Forms::Label());
			   this->employeeAddEmployeeLastnameTextbox = (gcnew System::Windows::Forms::TextBox());
			   this->employeeAddEmployeeFirstnameLabel = (gcnew System::Windows::Forms::Label());
			   this->loginPanel->SuspendLayout();
			   this->registerPanel->SuspendLayout();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientModifyPostalCodeNumericUpDown))->BeginInit();
			   this->panel3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeModifyPostalCodeNumericUpDown))->BeginInit();
			   this->panel2->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // loginPanel
			   // 
			   this->loginPanel->Controls->Add(this->loginErrorLabel);
			   this->loginPanel->Controls->Add(this->loginValidateButton);
			   this->loginPanel->Controls->Add(this->loginRegisterButton);
			   this->loginPanel->Controls->Add(this->loginPasswordLabel);
			   this->loginPanel->Controls->Add(this->loginPasswordTextBox);
			   this->loginPanel->Controls->Add(this->loginUsernameTextBox);
			   this->loginPanel->Controls->Add(this->loginUsernameLabel);
			   this->loginPanel->Controls->Add(this->loginLoginLabel);
			   this->loginPanel->Location = System::Drawing::Point(10, 13);
			   this->loginPanel->Name = L"loginPanel";
			   this->loginPanel->Size = System::Drawing::Size(419, 462);
			   this->loginPanel->TabIndex = 0;
			   // 
			   // loginErrorLabel
			   // 
			   this->loginErrorLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->loginErrorLabel->AutoSize = true;
			   this->loginErrorLabel->ForeColor = System::Drawing::Color::Red;
			   this->loginErrorLabel->Location = System::Drawing::Point(176, 409);
			   this->loginErrorLabel->Name = L"loginErrorLabel";
			   this->loginErrorLabel->Size = System::Drawing::Size(78, 17);
			   this->loginErrorLabel->TabIndex = 18;
			   this->loginErrorLabel->Text = L"Lastname";
			   this->loginErrorLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // loginValidateButton
			   // 
			   this->loginValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->loginValidateButton->Location = System::Drawing::Point(164, 358);
			   this->loginValidateButton->Name = L"loginValidateButton";
			   this->loginValidateButton->Size = System::Drawing::Size(87, 34);
			   this->loginValidateButton->TabIndex = 11;
			   this->loginValidateButton->Text = L"Validate";
			   this->loginValidateButton->UseVisualStyleBackColor = true;
			   this->loginValidateButton->Click += gcnew System::EventHandler(this, &MyForm::loginValidateButton_Click);
			   // 
			   // loginRegisterButton
			   // 
			   this->loginRegisterButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->loginRegisterButton->Location = System::Drawing::Point(350, 3);
			   this->loginRegisterButton->Name = L"loginRegisterButton";
			   this->loginRegisterButton->Size = System::Drawing::Size(66, 34);
			   this->loginRegisterButton->TabIndex = 5;
			   this->loginRegisterButton->Text = L"Register";
			   this->loginRegisterButton->UseVisualStyleBackColor = true;
			   this->loginRegisterButton->Click += gcnew System::EventHandler(this, &MyForm::loginRegisterButton_Click);
			   // 
			   // loginPasswordLabel
			   // 
			   this->loginPasswordLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->loginPasswordLabel->AutoSize = true;
			   this->loginPasswordLabel->Location = System::Drawing::Point(176, 233);
			   this->loginPasswordLabel->Name = L"loginPasswordLabel";
			   this->loginPasswordLabel->Size = System::Drawing::Size(77, 17);
			   this->loginPasswordLabel->TabIndex = 4;
			   this->loginPasswordLabel->Text = L"Password";
			   // 
			   // loginPasswordTextBox
			   // 
			   this->loginPasswordTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->loginPasswordTextBox->Location = System::Drawing::Point(164, 254);
			   this->loginPasswordTextBox->Name = L"loginPasswordTextBox";
			   this->loginPasswordTextBox->PasswordChar = '*';
			   this->loginPasswordTextBox->Size = System::Drawing::Size(89, 22);
			   this->loginPasswordTextBox->TabIndex = 3;
			   // 
			   // loginUsernameTextBox
			   // 
			   this->loginUsernameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->loginUsernameTextBox->Location = System::Drawing::Point(164, 172);
			   this->loginUsernameTextBox->Name = L"loginUsernameTextBox";
			   this->loginUsernameTextBox->Size = System::Drawing::Size(89, 22);
			   this->loginUsernameTextBox->TabIndex = 2;
			   // 
			   // loginUsernameLabel
			   // 
			   this->loginUsernameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->loginUsernameLabel->AutoSize = true;
			   this->loginUsernameLabel->Location = System::Drawing::Point(176, 151);
			   this->loginUsernameLabel->Name = L"loginUsernameLabel";
			   this->loginUsernameLabel->Size = System::Drawing::Size(81, 17);
			   this->loginUsernameLabel->TabIndex = 1;
			   this->loginUsernameLabel->Text = L"Username";
			   // 
			   // loginLoginLabel
			   // 
			   this->loginLoginLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->loginLoginLabel->AutoSize = true;
			   this->loginLoginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->loginLoginLabel->Location = System::Drawing::Point(164, 54);
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
			   this->registerPanel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->registerPanel->Location = System::Drawing::Point(9, 10);
			   this->registerPanel->Name = L"registerPanel";
			   this->registerPanel->Size = System::Drawing::Size(419, 462);
			   this->registerPanel->TabIndex = 12;
			   // 
			   // registerBirthdayLabel
			   // 
			   this->registerBirthdayLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerBirthdayLabel->AutoSize = true;
			   this->registerBirthdayLabel->Location = System::Drawing::Point(108, 242);
			   this->registerBirthdayLabel->Name = L"registerBirthdayLabel";
			   this->registerBirthdayLabel->Size = System::Drawing::Size(68, 17);
			   this->registerBirthdayLabel->TabIndex = 17;
			   this->registerBirthdayLabel->Text = L"Birthday";
			   // 
			   // registerDateTimePicker
			   // 
			   this->registerDateTimePicker->Location = System::Drawing::Point(86, 269);
			   this->registerDateTimePicker->Name = L"registerDateTimePicker";
			   this->registerDateTimePicker->Size = System::Drawing::Size(200, 22);
			   this->registerDateTimePicker->TabIndex = 9;
			   // 
			   // registerErrorLabel
			   // 
			   this->registerErrorLabel->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			   this->registerErrorLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerErrorLabel->AutoSize = true;
			   this->registerErrorLabel->ForeColor = System::Drawing::Color::Red;
			   this->registerErrorLabel->Location = System::Drawing::Point(161, 374);
			   this->registerErrorLabel->Name = L"registerErrorLabel";
			   this->registerErrorLabel->Size = System::Drawing::Size(78, 17);
			   this->registerErrorLabel->TabIndex = 16;
			   this->registerErrorLabel->Text = L"Lastname";
			   this->registerErrorLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // registerLastnameLabel
			   // 
			   this->registerLastnameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerLastnameLabel->AutoSize = true;
			   this->registerLastnameLabel->Location = System::Drawing::Point(208, 178);
			   this->registerLastnameLabel->Name = L"registerLastnameLabel";
			   this->registerLastnameLabel->Size = System::Drawing::Size(78, 17);
			   this->registerLastnameLabel->TabIndex = 15;
			   this->registerLastnameLabel->Text = L"Lastname";
			   // 
			   // registerFirstnameLabel
			   // 
			   this->registerFirstnameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerFirstnameLabel->AutoSize = true;
			   this->registerFirstnameLabel->Location = System::Drawing::Point(21, 175);
			   this->registerFirstnameLabel->Name = L"registerFirstnameLabel";
			   this->registerFirstnameLabel->Size = System::Drawing::Size(79, 17);
			   this->registerFirstnameLabel->TabIndex = 14;
			   this->registerFirstnameLabel->Text = L"Firstname";
			   // 
			   // registerLastnameTextBox
			   // 
			   this->registerLastnameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerLastnameTextBox->Location = System::Drawing::Point(196, 196);
			   this->registerLastnameTextBox->Name = L"registerLastnameTextBox";
			   this->registerLastnameTextBox->Size = System::Drawing::Size(165, 22);
			   this->registerLastnameTextBox->TabIndex = 13;
			   // 
			   // registerFirstnameTextBox
			   // 
			   this->registerFirstnameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerFirstnameTextBox->Location = System::Drawing::Point(10, 196);
			   this->registerFirstnameTextBox->Name = L"registerFirstnameTextBox";
			   this->registerFirstnameTextBox->Size = System::Drawing::Size(165, 22);
			   this->registerFirstnameTextBox->TabIndex = 12;
			   // 
			   // registerValidateButton
			   // 
			   this->registerValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->registerValidateButton->Location = System::Drawing::Point(164, 327);
			   this->registerValidateButton->Name = L"registerValidateButton";
			   this->registerValidateButton->Size = System::Drawing::Size(87, 34);
			   this->registerValidateButton->TabIndex = 11;
			   this->registerValidateButton->Text = L"Validate";
			   this->registerValidateButton->UseVisualStyleBackColor = true;
			   this->registerValidateButton->Click += gcnew System::EventHandler(this, &MyForm::registerValidateButton_Click);
			   // 
			   // registerLoginButton
			   // 
			   this->registerLoginButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->registerLoginButton->Location = System::Drawing::Point(350, 3);
			   this->registerLoginButton->Name = L"registerLoginButton";
			   this->registerLoginButton->Size = System::Drawing::Size(66, 34);
			   this->registerLoginButton->TabIndex = 5;
			   this->registerLoginButton->Text = L"Login";
			   this->registerLoginButton->UseVisualStyleBackColor = true;
			   this->registerLoginButton->Click += gcnew System::EventHandler(this, &MyForm::registerLoginButton_Click);
			   // 
			   // registerPasswordLabel
			   // 
			   this->registerPasswordLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerPasswordLabel->AutoSize = true;
			   this->registerPasswordLabel->Location = System::Drawing::Point(208, 111);
			   this->registerPasswordLabel->Name = L"registerPasswordLabel";
			   this->registerPasswordLabel->Size = System::Drawing::Size(77, 17);
			   this->registerPasswordLabel->TabIndex = 4;
			   this->registerPasswordLabel->Text = L"Password";
			   // 
			   // registerPasswordTextBox
			   // 
			   this->registerPasswordTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerPasswordTextBox->Location = System::Drawing::Point(196, 132);
			   this->registerPasswordTextBox->Name = L"registerPasswordTextBox";
			   this->registerPasswordTextBox->PasswordChar = '*';
			   this->registerPasswordTextBox->Size = System::Drawing::Size(165, 22);
			   this->registerPasswordTextBox->TabIndex = 3;
			   // 
			   // registerUsernameTextBox
			   // 
			   this->registerUsernameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerUsernameTextBox->Location = System::Drawing::Point(10, 132);
			   this->registerUsernameTextBox->Name = L"registerUsernameTextBox";
			   this->registerUsernameTextBox->Size = System::Drawing::Size(165, 22);
			   this->registerUsernameTextBox->TabIndex = 2;
			   // 
			   // registerUsernameLabel
			   // 
			   this->registerUsernameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerUsernameLabel->AutoSize = true;
			   this->registerUsernameLabel->Location = System::Drawing::Point(21, 111);
			   this->registerUsernameLabel->Name = L"registerUsernameLabel";
			   this->registerUsernameLabel->Size = System::Drawing::Size(81, 17);
			   this->registerUsernameLabel->TabIndex = 1;
			   this->registerUsernameLabel->Text = L"Username";
			   // 
			   // registerRegisterLabel
			   // 
			   this->registerRegisterLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerRegisterLabel->AutoSize = true;
			   this->registerRegisterLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registerRegisterLabel->Location = System::Drawing::Point(146, 53);
			   this->registerRegisterLabel->Name = L"registerRegisterLabel";
			   this->registerRegisterLabel->Size = System::Drawing::Size(147, 38);
			   this->registerRegisterLabel->TabIndex = 0;
			   this->registerRegisterLabel->Text = L"Register";
			   // 
			   // clientListView
			   // 
			   this->clientListView->HideSelection = false;
			   this->clientListView->Location = System::Drawing::Point(708, 553);
			   this->clientListView->Name = L"clientListView";
			   this->clientListView->Size = System::Drawing::Size(359, 333);
			   this->clientListView->TabIndex = 13;
			   this->clientListView->UseCompatibleStateImageBehavior = false;
			   this->clientListView->View = System::Windows::Forms::View::List;
			   this->clientListView->Click += gcnew System::EventHandler(this, &MyForm::clientListView_Click);
			   // 
			   // panel1
			   // 
			   this->panel1->Controls->Add(this->clientModifyAddAddressButton);
			   this->panel1->Controls->Add(this->clientModifyDeleteAddressButton);
			   this->panel1->Controls->Add(this->clientModifyErrorBoxLabel);
			   this->panel1->Controls->Add(this->clientModifyPostalCodeNumericUpDown);
			   this->panel1->Controls->Add(this->clientModifyApplyModifButton);
			   this->panel1->Controls->Add(this->clientMoreInfoLabel);
			   this->panel1->Controls->Add(this->clientModifyPostalCodeLabel);
			   this->panel1->Controls->Add(this->clientModifyCityLabel);
			   this->panel1->Controls->Add(this->clientModifyAddressStreetLabel);
			   this->panel1->Controls->Add(this->clientModifyAddressPickerLabel);
			   this->panel1->Controls->Add(this->clientModifyMoreInfoTextBox);
			   this->panel1->Controls->Add(this->clientModifyCityTextBox);
			   this->panel1->Controls->Add(this->clientModifyAddressStreetTextBox);
			   this->panel1->Controls->Add(this->clientModifyAddressPickerComboBox);
			   this->panel1->Controls->Add(this->clientModifyAddressLabel);
			   this->panel1->Controls->Add(this->clientModifyBirthdayLabel);
			   this->panel1->Controls->Add(this->clientModifyLastnameLabel);
			   this->panel1->Controls->Add(this->clientModifyFirstnameLabel);
			   this->panel1->Controls->Add(this->clientModifyUsernameLabel);
			   this->panel1->Controls->Add(this->clientModifyBirthdayTextBox);
			   this->panel1->Controls->Add(this->clientModifyLastnameTextBox);
			   this->panel1->Controls->Add(this->clientModifyFirstnameTextBox);
			   this->panel1->Controls->Add(this->clientModifyUsernameTextBox);
			   this->panel1->Controls->Add(this->clientModifyInformationsLabel);
			   this->panel1->Location = System::Drawing::Point(19, 527);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(683, 429);
			   this->panel1->TabIndex = 15;
			   // 
			   // clientModifyAddAddressButton
			   // 
			   this->clientModifyAddAddressButton->Location = System::Drawing::Point(450, 306);
			   this->clientModifyAddAddressButton->Name = L"clientModifyAddAddressButton";
			   this->clientModifyAddAddressButton->Size = System::Drawing::Size(130, 23);
			   this->clientModifyAddAddressButton->TabIndex = 27;
			   this->clientModifyAddAddressButton->Text = L"Add address";
			   this->clientModifyAddAddressButton->UseVisualStyleBackColor = true;
			   this->clientModifyAddAddressButton->Click += gcnew System::EventHandler(this, &MyForm::clientModifyAddAddressButton_Click);
			   // 
			   // clientModifyDeleteAddressButton
			   // 
			   this->clientModifyDeleteAddressButton->Location = System::Drawing::Point(450, 254);
			   this->clientModifyDeleteAddressButton->Name = L"clientModifyDeleteAddressButton";
			   this->clientModifyDeleteAddressButton->Size = System::Drawing::Size(144, 23);
			   this->clientModifyDeleteAddressButton->TabIndex = 26;
			   this->clientModifyDeleteAddressButton->Text = L"Delete Address";
			   this->clientModifyDeleteAddressButton->UseVisualStyleBackColor = true;
			   this->clientModifyDeleteAddressButton->Click += gcnew System::EventHandler(this, &MyForm::clientModifyDeleteAddressButton_Click);
			   // 
			   // clientModifyErrorBoxLabel
			   // 
			   this->clientModifyErrorBoxLabel->AutoSize = true;
			   this->clientModifyErrorBoxLabel->Location = System::Drawing::Point(416, 391);
			   this->clientModifyErrorBoxLabel->Name = L"clientModifyErrorBoxLabel";
			   this->clientModifyErrorBoxLabel->Size = System::Drawing::Size(43, 17);
			   this->clientModifyErrorBoxLabel->TabIndex = 25;
			   this->clientModifyErrorBoxLabel->Text = L"temp";
			   // 
			   // clientModifyPostalCodeNumericUpDown
			   // 
			   this->clientModifyPostalCodeNumericUpDown->Location = System::Drawing::Point(354, 306);
			   this->clientModifyPostalCodeNumericUpDown->Name = L"clientModifyPostalCodeNumericUpDown";
			   this->clientModifyPostalCodeNumericUpDown->Size = System::Drawing::Size(90, 22);
			   this->clientModifyPostalCodeNumericUpDown->TabIndex = 24;
			   // 
			   // clientModifyApplyModifButton
			   // 
			   this->clientModifyApplyModifButton->Enabled = false;
			   this->clientModifyApplyModifButton->Location = System::Drawing::Point(480, 361);
			   this->clientModifyApplyModifButton->Name = L"clientModifyApplyModifButton";
			   this->clientModifyApplyModifButton->Size = System::Drawing::Size(167, 24);
			   this->clientModifyApplyModifButton->TabIndex = 23;
			   this->clientModifyApplyModifButton->Text = L"Apply Modifications";
			   this->clientModifyApplyModifButton->UseVisualStyleBackColor = true;
			   this->clientModifyApplyModifButton->Click += gcnew System::EventHandler(this, &MyForm::clientModifyApplyModifButton_Click);
			   // 
			   // clientMoreInfoLabel
			   // 
			   this->clientMoreInfoLabel->AutoSize = true;
			   this->clientMoreInfoLabel->Location = System::Drawing::Point(61, 342);
			   this->clientMoreInfoLabel->Name = L"clientMoreInfoLabel";
			   this->clientMoreInfoLabel->Size = System::Drawing::Size(135, 17);
			   this->clientMoreInfoLabel->TabIndex = 22;
			   this->clientMoreInfoLabel->Text = L"More Information ";
			   // 
			   // clientModifyPostalCodeLabel
			   // 
			   this->clientModifyPostalCodeLabel->AutoSize = true;
			   this->clientModifyPostalCodeLabel->Location = System::Drawing::Point(351, 287);
			   this->clientModifyPostalCodeLabel->Name = L"clientModifyPostalCodeLabel";
			   this->clientModifyPostalCodeLabel->Size = System::Drawing::Size(95, 17);
			   this->clientModifyPostalCodeLabel->TabIndex = 21;
			   this->clientModifyPostalCodeLabel->Text = L"Postal Code";
			   // 
			   // clientModifyCityLabel
			   // 
			   this->clientModifyCityLabel->AutoSize = true;
			   this->clientModifyCityLabel->Location = System::Drawing::Point(254, 287);
			   this->clientModifyCityLabel->Name = L"clientModifyCityLabel";
			   this->clientModifyCityLabel->Size = System::Drawing::Size(35, 17);
			   this->clientModifyCityLabel->TabIndex = 20;
			   this->clientModifyCityLabel->Text = L"City";
			   // 
			   // clientModifyAddressStreetLabel
			   // 
			   this->clientModifyAddressStreetLabel->AutoSize = true;
			   this->clientModifyAddressStreetLabel->Location = System::Drawing::Point(61, 287);
			   this->clientModifyAddressStreetLabel->Name = L"clientModifyAddressStreetLabel";
			   this->clientModifyAddressStreetLabel->Size = System::Drawing::Size(67, 17);
			   this->clientModifyAddressStreetLabel->TabIndex = 19;
			   this->clientModifyAddressStreetLabel->Text = L"Address";
			   // 
			   // clientModifyAddressPickerLabel
			   // 
			   this->clientModifyAddressPickerLabel->AutoSize = true;
			   this->clientModifyAddressPickerLabel->Location = System::Drawing::Point(61, 233);
			   this->clientModifyAddressPickerLabel->Name = L"clientModifyAddressPickerLabel";
			   this->clientModifyAddressPickerLabel->Size = System::Drawing::Size(117, 17);
			   this->clientModifyAddressPickerLabel->TabIndex = 18;
			   this->clientModifyAddressPickerLabel->Text = L"Address Picker";
			   // 
			   // clientModifyMoreInfoTextBox
			   // 
			   this->clientModifyMoreInfoTextBox->Location = System::Drawing::Point(64, 362);
			   this->clientModifyMoreInfoTextBox->Name = L"clientModifyMoreInfoTextBox";
			   this->clientModifyMoreInfoTextBox->Size = System::Drawing::Size(319, 22);
			   this->clientModifyMoreInfoTextBox->TabIndex = 17;
			   // 
			   // clientModifyCityTextBox
			   // 
			   this->clientModifyCityTextBox->Location = System::Drawing::Point(257, 307);
			   this->clientModifyCityTextBox->Name = L"clientModifyCityTextBox";
			   this->clientModifyCityTextBox->Size = System::Drawing::Size(90, 22);
			   this->clientModifyCityTextBox->TabIndex = 14;
			   // 
			   // clientModifyAddressStreetTextBox
			   // 
			   this->clientModifyAddressStreetTextBox->Location = System::Drawing::Point(64, 307);
			   this->clientModifyAddressStreetTextBox->Name = L"clientModifyAddressStreetTextBox";
			   this->clientModifyAddressStreetTextBox->Size = System::Drawing::Size(187, 22);
			   this->clientModifyAddressStreetTextBox->TabIndex = 13;
			   // 
			   // clientModifyAddressPickerComboBox
			   // 
			   this->clientModifyAddressPickerComboBox->FormattingEnabled = true;
			   this->clientModifyAddressPickerComboBox->Location = System::Drawing::Point(64, 254);
			   this->clientModifyAddressPickerComboBox->Name = L"clientModifyAddressPickerComboBox";
			   this->clientModifyAddressPickerComboBox->Size = System::Drawing::Size(380, 24);
			   this->clientModifyAddressPickerComboBox->TabIndex = 11;
			   // 
			   // clientModifyAddressLabel
			   // 
			   this->clientModifyAddressLabel->AutoSize = true;
			   this->clientModifyAddressLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->clientModifyAddressLabel->Location = System::Drawing::Point(57, 178);
			   this->clientModifyAddressLabel->Name = L"clientModifyAddressLabel";
			   this->clientModifyAddressLabel->Size = System::Drawing::Size(145, 38);
			   this->clientModifyAddressLabel->TabIndex = 10;
			   this->clientModifyAddressLabel->Text = L"Address";
			   // 
			   // clientModifyBirthdayLabel
			   // 
			   this->clientModifyBirthdayLabel->AutoSize = true;
			   this->clientModifyBirthdayLabel->Location = System::Drawing::Point(73, 114);
			   this->clientModifyBirthdayLabel->Name = L"clientModifyBirthdayLabel";
			   this->clientModifyBirthdayLabel->Size = System::Drawing::Size(68, 17);
			   this->clientModifyBirthdayLabel->TabIndex = 9;
			   this->clientModifyBirthdayLabel->Text = L"Birthday";
			   // 
			   // clientModifyLastnameLabel
			   // 
			   this->clientModifyLastnameLabel->AutoSize = true;
			   this->clientModifyLastnameLabel->Location = System::Drawing::Point(442, 54);
			   this->clientModifyLastnameLabel->Name = L"clientModifyLastnameLabel";
			   this->clientModifyLastnameLabel->Size = System::Drawing::Size(80, 17);
			   this->clientModifyLastnameLabel->TabIndex = 8;
			   this->clientModifyLastnameLabel->Text = L"LastName";
			   // 
			   // clientModifyFirstnameLabel
			   // 
			   this->clientModifyFirstnameLabel->AutoSize = true;
			   this->clientModifyFirstnameLabel->Location = System::Drawing::Point(268, 54);
			   this->clientModifyFirstnameLabel->Name = L"clientModifyFirstnameLabel";
			   this->clientModifyFirstnameLabel->Size = System::Drawing::Size(79, 17);
			   this->clientModifyFirstnameLabel->TabIndex = 7;
			   this->clientModifyFirstnameLabel->Text = L"Firstname";
			   // 
			   // clientModifyUsernameLabel
			   // 
			   this->clientModifyUsernameLabel->AutoSize = true;
			   this->clientModifyUsernameLabel->Location = System::Drawing::Point(70, 55);
			   this->clientModifyUsernameLabel->Name = L"clientModifyUsernameLabel";
			   this->clientModifyUsernameLabel->Size = System::Drawing::Size(81, 17);
			   this->clientModifyUsernameLabel->TabIndex = 6;
			   this->clientModifyUsernameLabel->Text = L"Username";
			   // 
			   // clientModifyBirthdayTextBox
			   // 
			   this->clientModifyBirthdayTextBox->Location = System::Drawing::Point(64, 136);
			   this->clientModifyBirthdayTextBox->Name = L"clientModifyBirthdayTextBox";
			   this->clientModifyBirthdayTextBox->Size = System::Drawing::Size(196, 22);
			   this->clientModifyBirthdayTextBox->TabIndex = 5;
			   this->clientModifyBirthdayTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::enableclientModifyApplyModifButton);
			   // 
			   // clientModifyLastnameTextBox
			   // 
			   this->clientModifyLastnameTextBox->Location = System::Drawing::Point(435, 75);
			   this->clientModifyLastnameTextBox->Name = L"clientModifyLastnameTextBox";
			   this->clientModifyLastnameTextBox->Size = System::Drawing::Size(171, 22);
			   this->clientModifyLastnameTextBox->TabIndex = 3;
			   this->clientModifyLastnameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::enableclientModifyApplyModifButton);
			   // 
			   // clientModifyFirstnameTextBox
			   // 
			   this->clientModifyFirstnameTextBox->Location = System::Drawing::Point(257, 75);
			   this->clientModifyFirstnameTextBox->Name = L"clientModifyFirstnameTextBox";
			   this->clientModifyFirstnameTextBox->Size = System::Drawing::Size(158, 22);
			   this->clientModifyFirstnameTextBox->TabIndex = 2;
			   this->clientModifyFirstnameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::enableclientModifyApplyModifButton);
			   // 
			   // clientModifyUsernameTextBox
			   // 
			   this->clientModifyUsernameTextBox->Enabled = false;
			   this->clientModifyUsernameTextBox->Location = System::Drawing::Point(64, 75);
			   this->clientModifyUsernameTextBox->Name = L"clientModifyUsernameTextBox";
			   this->clientModifyUsernameTextBox->Size = System::Drawing::Size(174, 22);
			   this->clientModifyUsernameTextBox->TabIndex = 1;
			   // 
			   // clientModifyInformationsLabel
			   // 
			   this->clientModifyInformationsLabel->AutoSize = true;
			   this->clientModifyInformationsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->clientModifyInformationsLabel->Location = System::Drawing::Point(57, 4);
			   this->clientModifyInformationsLabel->Name = L"clientModifyInformationsLabel";
			   this->clientModifyInformationsLabel->Size = System::Drawing::Size(207, 38);
			   this->clientModifyInformationsLabel->TabIndex = 0;
			   this->clientModifyInformationsLabel->Text = L"Informations";
			   // 
			   // employeeAddNewEmployeeButton
			   // 
			   this->employeeAddNewEmployeeButton->Location = System::Drawing::Point(622, 107);
			   this->employeeAddNewEmployeeButton->Name = L"employeeAddNewEmployeeButton";
			   this->employeeAddNewEmployeeButton->Size = System::Drawing::Size(126, 23);
			   this->employeeAddNewEmployeeButton->TabIndex = 16;
			   this->employeeAddNewEmployeeButton->Text = L"Add Employee";
			   this->employeeAddNewEmployeeButton->UseVisualStyleBackColor = true;
			   this->employeeAddNewEmployeeButton->Click += gcnew System::EventHandler(this, &MyForm::employeeAddNewEmployeeButton_Click);
			   // 
			   // panel3
			   // 
			   this->panel3->Controls->Add(this->checkBox1);
			   this->panel3->Controls->Add(this->dateTimePicker3);
			   this->panel3->Controls->Add(this->employeeModifyDeleteAddressButton);
			   this->panel3->Controls->Add(this->employeeModifyAddressPickerLabel);
			   this->panel3->Controls->Add(this->employeeModifyHireDateLabel);
			   this->panel3->Controls->Add(this->employeeModifyBirthdayTextBox);
			   this->panel3->Controls->Add(this->employeeModifyAddressPickerComboBox);
			   this->panel3->Controls->Add(this->employeeModifyAddAddressButton);
			   this->panel3->Controls->Add(this->employeeModifyErrorBoxLabel);
			   this->panel3->Controls->Add(this->employeeModifyPostalCodeNumericUpDown);
			   this->panel3->Controls->Add(this->employeeModifyApplyModifButton);
			   this->panel3->Controls->Add(this->employeeModifyMoreInfoLabel);
			   this->panel3->Controls->Add(this->employeeModifyPostalCodeLabel);
			   this->panel3->Controls->Add(this->employeeModifyCityLabel);
			   this->panel3->Controls->Add(this->employeeModifyAddressStreetLabel);
			   this->panel3->Controls->Add(this->employeeModifyMoreInfoTextBox);
			   this->panel3->Controls->Add(this->employeeModifyCityTextBox);
			   this->panel3->Controls->Add(this->employeeModifyAddressStreetTextBox);
			   this->panel3->Controls->Add(this->employeeModifyAddressLabel);
			   this->panel3->Controls->Add(this->employeeModifyBirthdayLabel);
			   this->panel3->Controls->Add(this->employeeModifyLastnameLabel);
			   this->panel3->Controls->Add(this->employeeModifyFirstnameLabel);
			   this->panel3->Controls->Add(this->employeeModifyUsernameLabel);
			   this->panel3->Controls->Add(this->employeeModifyHireDateTextBox);
			   this->panel3->Controls->Add(this->employeeModifyLastnameTextBox);
			   this->panel3->Controls->Add(this->employeeModifyFirstnameTextBox);
			   this->panel3->Controls->Add(this->employeeModifyUsernameTextBox);
			   this->panel3->Controls->Add(this->employeeModifyInformationsLabel);
			   this->panel3->Location = System::Drawing::Point(754, 31);
			   this->panel3->Name = L"panel3";
			   this->panel3->Size = System::Drawing::Size(683, 478);
			   this->panel3->TabIndex = 28;
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->Location = System::Drawing::Point(513, 170);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(93, 21);
			   this->checkBox1->TabIndex = 32;
			   this->checkBox1->Text = L"Manager";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   // 
			   // dateTimePicker3
			   // 
			   this->dateTimePicker3->Location = System::Drawing::Point(279, 198);
			   this->dateTimePicker3->Name = L"dateTimePicker3";
			   this->dateTimePicker3->Size = System::Drawing::Size(200, 22);
			   this->dateTimePicker3->TabIndex = 31;
			   // 
			   // employeeModifyDeleteAddressButton
			   // 
			   this->employeeModifyDeleteAddressButton->Location = System::Drawing::Point(445, 286);
			   this->employeeModifyDeleteAddressButton->Name = L"employeeModifyDeleteAddressButton";
			   this->employeeModifyDeleteAddressButton->Size = System::Drawing::Size(144, 23);
			   this->employeeModifyDeleteAddressButton->TabIndex = 30;
			   this->employeeModifyDeleteAddressButton->Text = L"Delete Address";
			   this->employeeModifyDeleteAddressButton->UseVisualStyleBackColor = true;
			   this->employeeModifyDeleteAddressButton->Click += gcnew System::EventHandler(this, &MyForm::employeeModifyDeleteAddressButton_Click);
			   // 
			   // employeeModifyAddressPickerLabel
			   // 
			   this->employeeModifyAddressPickerLabel->AutoSize = true;
			   this->employeeModifyAddressPickerLabel->Location = System::Drawing::Point(56, 265);
			   this->employeeModifyAddressPickerLabel->Name = L"employeeModifyAddressPickerLabel";
			   this->employeeModifyAddressPickerLabel->Size = System::Drawing::Size(117, 17);
			   this->employeeModifyAddressPickerLabel->TabIndex = 29;
			   this->employeeModifyAddressPickerLabel->Text = L"Address Picker";
			   // 
			   // employeeModifyHireDateLabel
			   // 
			   this->employeeModifyHireDateLabel->AutoSize = true;
			   this->employeeModifyHireDateLabel->Location = System::Drawing::Point(70, 148);
			   this->employeeModifyHireDateLabel->Name = L"employeeModifyHireDateLabel";
			   this->employeeModifyHireDateLabel->Size = System::Drawing::Size(77, 17);
			   this->employeeModifyHireDateLabel->TabIndex = 29;
			   this->employeeModifyHireDateLabel->Text = L"Hire Date";
			   // 
			   // employeeModifyBirthdayTextBox
			   // 
			   this->employeeModifyBirthdayTextBox->Location = System::Drawing::Point(279, 170);
			   this->employeeModifyBirthdayTextBox->Name = L"employeeModifyBirthdayTextBox";
			   this->employeeModifyBirthdayTextBox->Size = System::Drawing::Size(196, 22);
			   this->employeeModifyBirthdayTextBox->TabIndex = 28;
			   // 
			   // employeeModifyAddressPickerComboBox
			   // 
			   this->employeeModifyAddressPickerComboBox->FormattingEnabled = true;
			   this->employeeModifyAddressPickerComboBox->Location = System::Drawing::Point(59, 286);
			   this->employeeModifyAddressPickerComboBox->Name = L"employeeModifyAddressPickerComboBox";
			   this->employeeModifyAddressPickerComboBox->Size = System::Drawing::Size(380, 24);
			   this->employeeModifyAddressPickerComboBox->TabIndex = 28;
			   // 
			   // employeeModifyAddAddressButton
			   // 
			   this->employeeModifyAddAddressButton->Location = System::Drawing::Point(445, 333);
			   this->employeeModifyAddAddressButton->Name = L"employeeModifyAddAddressButton";
			   this->employeeModifyAddAddressButton->Size = System::Drawing::Size(130, 23);
			   this->employeeModifyAddAddressButton->TabIndex = 27;
			   this->employeeModifyAddAddressButton->Text = L"Add address";
			   this->employeeModifyAddAddressButton->UseVisualStyleBackColor = true;
			   this->employeeModifyAddAddressButton->Click += gcnew System::EventHandler(this, &MyForm::employeeModifyAddAddressButton_Click);
			   // 
			   // employeeModifyErrorBoxLabel
			   // 
			   this->employeeModifyErrorBoxLabel->AutoSize = true;
			   this->employeeModifyErrorBoxLabel->Location = System::Drawing::Point(80, 435);
			   this->employeeModifyErrorBoxLabel->Name = L"employeeModifyErrorBoxLabel";
			   this->employeeModifyErrorBoxLabel->Size = System::Drawing::Size(71, 17);
			   this->employeeModifyErrorBoxLabel->TabIndex = 25;
			   this->employeeModifyErrorBoxLabel->Text = L"ErrorBox";
			   // 
			   // employeeModifyPostalCodeNumericUpDown
			   // 
			   this->employeeModifyPostalCodeNumericUpDown->Location = System::Drawing::Point(349, 333);
			   this->employeeModifyPostalCodeNumericUpDown->Name = L"employeeModifyPostalCodeNumericUpDown";
			   this->employeeModifyPostalCodeNumericUpDown->Size = System::Drawing::Size(90, 22);
			   this->employeeModifyPostalCodeNumericUpDown->TabIndex = 24;
			   // 
			   // employeeModifyApplyModifButton
			   // 
			   this->employeeModifyApplyModifButton->Enabled = false;
			   this->employeeModifyApplyModifButton->Location = System::Drawing::Point(473, 428);
			   this->employeeModifyApplyModifButton->Name = L"employeeModifyApplyModifButton";
			   this->employeeModifyApplyModifButton->Size = System::Drawing::Size(175, 24);
			   this->employeeModifyApplyModifButton->TabIndex = 23;
			   this->employeeModifyApplyModifButton->Text = L"Apply Modifications";
			   this->employeeModifyApplyModifButton->UseVisualStyleBackColor = true;
			   // 
			   // employeeModifyMoreInfoLabel
			   // 
			   this->employeeModifyMoreInfoLabel->AutoSize = true;
			   this->employeeModifyMoreInfoLabel->Location = System::Drawing::Point(56, 369);
			   this->employeeModifyMoreInfoLabel->Name = L"employeeModifyMoreInfoLabel";
			   this->employeeModifyMoreInfoLabel->Size = System::Drawing::Size(135, 17);
			   this->employeeModifyMoreInfoLabel->TabIndex = 22;
			   this->employeeModifyMoreInfoLabel->Text = L"More Information ";
			   // 
			   // employeeModifyPostalCodeLabel
			   // 
			   this->employeeModifyPostalCodeLabel->AutoSize = true;
			   this->employeeModifyPostalCodeLabel->Location = System::Drawing::Point(346, 314);
			   this->employeeModifyPostalCodeLabel->Name = L"employeeModifyPostalCodeLabel";
			   this->employeeModifyPostalCodeLabel->Size = System::Drawing::Size(95, 17);
			   this->employeeModifyPostalCodeLabel->TabIndex = 21;
			   this->employeeModifyPostalCodeLabel->Text = L"Postal Code";
			   // 
			   // employeeModifyCityLabel
			   // 
			   this->employeeModifyCityLabel->AutoSize = true;
			   this->employeeModifyCityLabel->Location = System::Drawing::Point(249, 314);
			   this->employeeModifyCityLabel->Name = L"employeeModifyCityLabel";
			   this->employeeModifyCityLabel->Size = System::Drawing::Size(35, 17);
			   this->employeeModifyCityLabel->TabIndex = 20;
			   this->employeeModifyCityLabel->Text = L"City";
			   // 
			   // employeeModifyAddressStreetLabel
			   // 
			   this->employeeModifyAddressStreetLabel->AutoSize = true;
			   this->employeeModifyAddressStreetLabel->Location = System::Drawing::Point(56, 314);
			   this->employeeModifyAddressStreetLabel->Name = L"employeeModifyAddressStreetLabel";
			   this->employeeModifyAddressStreetLabel->Size = System::Drawing::Size(67, 17);
			   this->employeeModifyAddressStreetLabel->TabIndex = 19;
			   this->employeeModifyAddressStreetLabel->Text = L"Address";
			   // 
			   // employeeModifyMoreInfoTextBox
			   // 
			   this->employeeModifyMoreInfoTextBox->Location = System::Drawing::Point(59, 389);
			   this->employeeModifyMoreInfoTextBox->Name = L"employeeModifyMoreInfoTextBox";
			   this->employeeModifyMoreInfoTextBox->Size = System::Drawing::Size(319, 22);
			   this->employeeModifyMoreInfoTextBox->TabIndex = 17;
			   // 
			   // employeeModifyCityTextBox
			   // 
			   this->employeeModifyCityTextBox->Location = System::Drawing::Point(252, 334);
			   this->employeeModifyCityTextBox->Name = L"employeeModifyCityTextBox";
			   this->employeeModifyCityTextBox->Size = System::Drawing::Size(90, 22);
			   this->employeeModifyCityTextBox->TabIndex = 14;
			   // 
			   // employeeModifyAddressStreetTextBox
			   // 
			   this->employeeModifyAddressStreetTextBox->Location = System::Drawing::Point(59, 334);
			   this->employeeModifyAddressStreetTextBox->Name = L"employeeModifyAddressStreetTextBox";
			   this->employeeModifyAddressStreetTextBox->Size = System::Drawing::Size(187, 22);
			   this->employeeModifyAddressStreetTextBox->TabIndex = 13;
			   // 
			   // employeeModifyAddressLabel
			   // 
			   this->employeeModifyAddressLabel->AutoSize = true;
			   this->employeeModifyAddressLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeModifyAddressLabel->Location = System::Drawing::Point(52, 216);
			   this->employeeModifyAddressLabel->Name = L"employeeModifyAddressLabel";
			   this->employeeModifyAddressLabel->Size = System::Drawing::Size(145, 38);
			   this->employeeModifyAddressLabel->TabIndex = 10;
			   this->employeeModifyAddressLabel->Text = L"Address";
			   // 
			   // employeeModifyBirthdayLabel
			   // 
			   this->employeeModifyBirthdayLabel->AutoSize = true;
			   this->employeeModifyBirthdayLabel->Location = System::Drawing::Point(279, 148);
			   this->employeeModifyBirthdayLabel->Name = L"employeeModifyBirthdayLabel";
			   this->employeeModifyBirthdayLabel->Size = System::Drawing::Size(68, 17);
			   this->employeeModifyBirthdayLabel->TabIndex = 9;
			   this->employeeModifyBirthdayLabel->Text = L"Birthday";
			   // 
			   // employeeModifyLastnameLabel
			   // 
			   this->employeeModifyLastnameLabel->AutoSize = true;
			   this->employeeModifyLastnameLabel->Location = System::Drawing::Point(442, 88);
			   this->employeeModifyLastnameLabel->Name = L"employeeModifyLastnameLabel";
			   this->employeeModifyLastnameLabel->Size = System::Drawing::Size(80, 17);
			   this->employeeModifyLastnameLabel->TabIndex = 8;
			   this->employeeModifyLastnameLabel->Text = L"LastName";
			   // 
			   // employeeModifyFirstnameLabel
			   // 
			   this->employeeModifyFirstnameLabel->AutoSize = true;
			   this->employeeModifyFirstnameLabel->Location = System::Drawing::Point(268, 88);
			   this->employeeModifyFirstnameLabel->Name = L"employeeModifyFirstnameLabel";
			   this->employeeModifyFirstnameLabel->Size = System::Drawing::Size(79, 17);
			   this->employeeModifyFirstnameLabel->TabIndex = 7;
			   this->employeeModifyFirstnameLabel->Text = L"Firstname";
			   // 
			   // employeeModifyUsernameLabel
			   // 
			   this->employeeModifyUsernameLabel->AutoSize = true;
			   this->employeeModifyUsernameLabel->Location = System::Drawing::Point(70, 89);
			   this->employeeModifyUsernameLabel->Name = L"employeeModifyUsernameLabel";
			   this->employeeModifyUsernameLabel->Size = System::Drawing::Size(81, 17);
			   this->employeeModifyUsernameLabel->TabIndex = 6;
			   this->employeeModifyUsernameLabel->Text = L"Username";
			   // 
			   // employeeModifyHireDateTextBox
			   // 
			   this->employeeModifyHireDateTextBox->Location = System::Drawing::Point(64, 170);
			   this->employeeModifyHireDateTextBox->Name = L"employeeModifyHireDateTextBox";
			   this->employeeModifyHireDateTextBox->Size = System::Drawing::Size(196, 22);
			   this->employeeModifyHireDateTextBox->TabIndex = 5;
			   // 
			   // employeeModifyLastnameTextBox
			   // 
			   this->employeeModifyLastnameTextBox->Location = System::Drawing::Point(435, 109);
			   this->employeeModifyLastnameTextBox->Name = L"employeeModifyLastnameTextBox";
			   this->employeeModifyLastnameTextBox->Size = System::Drawing::Size(171, 22);
			   this->employeeModifyLastnameTextBox->TabIndex = 3;
			   // 
			   // employeeModifyFirstnameTextBox
			   // 
			   this->employeeModifyFirstnameTextBox->Location = System::Drawing::Point(257, 109);
			   this->employeeModifyFirstnameTextBox->Name = L"employeeModifyFirstnameTextBox";
			   this->employeeModifyFirstnameTextBox->Size = System::Drawing::Size(158, 22);
			   this->employeeModifyFirstnameTextBox->TabIndex = 2;
			   // 
			   // employeeModifyUsernameTextBox
			   // 
			   this->employeeModifyUsernameTextBox->Enabled = false;
			   this->employeeModifyUsernameTextBox->Location = System::Drawing::Point(64, 109);
			   this->employeeModifyUsernameTextBox->Name = L"employeeModifyUsernameTextBox";
			   this->employeeModifyUsernameTextBox->Size = System::Drawing::Size(174, 22);
			   this->employeeModifyUsernameTextBox->TabIndex = 1;
			   // 
			   // employeeModifyInformationsLabel
			   // 
			   this->employeeModifyInformationsLabel->AutoSize = true;
			   this->employeeModifyInformationsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeModifyInformationsLabel->Location = System::Drawing::Point(52, 34);
			   this->employeeModifyInformationsLabel->Name = L"employeeModifyInformationsLabel";
			   this->employeeModifyInformationsLabel->Size = System::Drawing::Size(207, 38);
			   this->employeeModifyInformationsLabel->TabIndex = 0;
			   this->employeeModifyInformationsLabel->Text = L"Informations";
			   // 
			   // employeeListView
			   // 
			   this->employeeListView->HideSelection = false;
			   this->employeeListView->Location = System::Drawing::Point(389, 136);
			   this->employeeListView->Name = L"employeeListView";
			   this->employeeListView->Size = System::Drawing::Size(359, 333);
			   this->employeeListView->TabIndex = 29;
			   this->employeeListView->UseCompatibleStateImageBehavior = false;
			   this->employeeListView->View = System::Windows::Forms::View::List;
			   this->employeeListView->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::employeeListView_Click);
			   // 
			   // panel2
			   // 
			   this->panel2->Controls->Add(this->employeeAddEmployeeCancelButton);
			   this->panel2->Controls->Add(this->employeeAddEmployeeErrorBoxLabel);
			   this->panel2->Controls->Add(this->employeeAddEmployeePasswordLabel);
			   this->panel2->Controls->Add(this->employeeAddEmployeePasswordTextBox);
			   this->panel2->Controls->Add(this->employeeAddEmployeeAddButton);
			   this->panel2->Controls->Add(this->employeeAddEmployeeManagerCheckBox);
			   this->panel2->Controls->Add(this->employeeAddEmployeeLabel);
			   this->panel2->Controls->Add(this->employeeAddEmployeeHireDateDateTimePicker);
			   this->panel2->Controls->Add(this->employeeAddEmployeeBirthdayDateTimePicker);
			   this->panel2->Controls->Add(this->employeeAddEmployeeHireDateLabel);
			   this->panel2->Controls->Add(this->employeeAddEmployeeUsernameLabel);
			   this->panel2->Controls->Add(this->employeeAddEmployeeUsernameTextBox);
			   this->panel2->Controls->Add(this->employeeAddEmployeeBirthdayLabel);
			   this->panel2->Controls->Add(this->employeeAddEmployeeFirstnameTextBox);
			   this->panel2->Controls->Add(this->employeeAddEmployeeLastnameLabel);
			   this->panel2->Controls->Add(this->employeeAddEmployeeLastnameTextbox);
			   this->panel2->Controls->Add(this->employeeAddEmployeeFirstnameLabel);
			   this->panel2->Location = System::Drawing::Point(754, 28);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(696, 478);
			   this->panel2->TabIndex = 28;
			   this->panel2->Visible = false;
			   // 
			   // employeeAddEmployeeCancelButton
			   // 
			   this->employeeAddEmployeeCancelButton->Location = System::Drawing::Point(390, 434);
			   this->employeeAddEmployeeCancelButton->Name = L"employeeAddEmployeeCancelButton";
			   this->employeeAddEmployeeCancelButton->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->employeeAddEmployeeCancelButton->Size = System::Drawing::Size(85, 23);
			   this->employeeAddEmployeeCancelButton->TabIndex = 48;
			   this->employeeAddEmployeeCancelButton->Text = L"CANCEL";
			   this->employeeAddEmployeeCancelButton->UseVisualStyleBackColor = true;
			   this->employeeAddEmployeeCancelButton->Click += gcnew System::EventHandler(this, &MyForm::employeeAddEmployeeCancelButton_Click);
			   // 
			   // employeeAddEmployeeErrorBoxLabel
			   // 
			   this->employeeAddEmployeeErrorBoxLabel->AutoSize = true;
			   this->employeeAddEmployeeErrorBoxLabel->Location = System::Drawing::Point(234, 397);
			   this->employeeAddEmployeeErrorBoxLabel->Name = L"employeeAddEmployeeErrorBoxLabel";
			   this->employeeAddEmployeeErrorBoxLabel->Size = System::Drawing::Size(0, 17);
			   this->employeeAddEmployeeErrorBoxLabel->TabIndex = 47;
			   // 
			   // employeeAddEmployeePasswordLabel
			   // 
			   this->employeeAddEmployeePasswordLabel->AutoSize = true;
			   this->employeeAddEmployeePasswordLabel->Location = System::Drawing::Point(235, 224);
			   this->employeeAddEmployeePasswordLabel->Name = L"employeeAddEmployeePasswordLabel";
			   this->employeeAddEmployeePasswordLabel->Size = System::Drawing::Size(77, 17);
			   this->employeeAddEmployeePasswordLabel->TabIndex = 46;
			   this->employeeAddEmployeePasswordLabel->Text = L"Password";
			   // 
			   // employeeAddEmployeePasswordTextBox
			   // 
			   this->employeeAddEmployeePasswordTextBox->Location = System::Drawing::Point(229, 244);
			   this->employeeAddEmployeePasswordTextBox->Name = L"employeeAddEmployeePasswordTextBox";
			   this->employeeAddEmployeePasswordTextBox->Size = System::Drawing::Size(201, 22);
			   this->employeeAddEmployeePasswordTextBox->TabIndex = 45;
			   // 
			   // employeeAddEmployeeAddButton
			   // 
			   this->employeeAddEmployeeAddButton->Location = System::Drawing::Point(287, 433);
			   this->employeeAddEmployeeAddButton->Name = L"employeeAddEmployeeAddButton";
			   this->employeeAddEmployeeAddButton->Size = System::Drawing::Size(75, 23);
			   this->employeeAddEmployeeAddButton->TabIndex = 44;
			   this->employeeAddEmployeeAddButton->Text = L"ADD";
			   this->employeeAddEmployeeAddButton->UseVisualStyleBackColor = true;
			   this->employeeAddEmployeeAddButton->Click += gcnew System::EventHandler(this, &MyForm::employeeAddEmployeeAddButton_Click);
			   // 
			   // employeeAddEmployeeManagerCheckBox
			   // 
			   this->employeeAddEmployeeManagerCheckBox->AutoSize = true;
			   this->employeeAddEmployeeManagerCheckBox->Location = System::Drawing::Point(174, 434);
			   this->employeeAddEmployeeManagerCheckBox->Name = L"employeeAddEmployeeManagerCheckBox";
			   this->employeeAddEmployeeManagerCheckBox->Size = System::Drawing::Size(93, 21);
			   this->employeeAddEmployeeManagerCheckBox->TabIndex = 43;
			   this->employeeAddEmployeeManagerCheckBox->Text = L"Manager";
			   this->employeeAddEmployeeManagerCheckBox->UseVisualStyleBackColor = true;
			   // 
			   // employeeAddEmployeeLabel
			   // 
			   this->employeeAddEmployeeLabel->AutoSize = true;
			   this->employeeAddEmployeeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->employeeAddEmployeeLabel->Location = System::Drawing::Point(165, 18);
			   this->employeeAddEmployeeLabel->Name = L"employeeAddEmployeeLabel";
			   this->employeeAddEmployeeLabel->Size = System::Drawing::Size(329, 50);
			   this->employeeAddEmployeeLabel->TabIndex = 28;
			   this->employeeAddEmployeeLabel->Text = L"ADD EMPLOYEE";
			   // 
			   // employeeAddEmployeeHireDateDateTimePicker
			   // 
			   this->employeeAddEmployeeHireDateDateTimePicker->Location = System::Drawing::Point(229, 356);
			   this->employeeAddEmployeeHireDateDateTimePicker->Name = L"employeeAddEmployeeHireDateDateTimePicker";
			   this->employeeAddEmployeeHireDateDateTimePicker->Size = System::Drawing::Size(200, 22);
			   this->employeeAddEmployeeHireDateDateTimePicker->TabIndex = 42;
			   // 
			   // employeeAddEmployeeBirthdayDateTimePicker
			   // 
			   this->employeeAddEmployeeBirthdayDateTimePicker->Location = System::Drawing::Point(229, 299);
			   this->employeeAddEmployeeBirthdayDateTimePicker->Name = L"employeeAddEmployeeBirthdayDateTimePicker";
			   this->employeeAddEmployeeBirthdayDateTimePicker->Size = System::Drawing::Size(200, 22);
			   this->employeeAddEmployeeBirthdayDateTimePicker->TabIndex = 41;
			   // 
			   // employeeAddEmployeeHireDateLabel
			   // 
			   this->employeeAddEmployeeHireDateLabel->AutoSize = true;
			   this->employeeAddEmployeeHireDateLabel->Location = System::Drawing::Point(235, 334);
			   this->employeeAddEmployeeHireDateLabel->Name = L"employeeAddEmployeeHireDateLabel";
			   this->employeeAddEmployeeHireDateLabel->Size = System::Drawing::Size(77, 17);
			   this->employeeAddEmployeeHireDateLabel->TabIndex = 40;
			   this->employeeAddEmployeeHireDateLabel->Text = L"Hire Date";
			   // 
			   // employeeAddEmployeeUsernameLabel
			   // 
			   this->employeeAddEmployeeUsernameLabel->AutoSize = true;
			   this->employeeAddEmployeeUsernameLabel->Location = System::Drawing::Point(235, 68);
			   this->employeeAddEmployeeUsernameLabel->Name = L"employeeAddEmployeeUsernameLabel";
			   this->employeeAddEmployeeUsernameLabel->Size = System::Drawing::Size(81, 17);
			   this->employeeAddEmployeeUsernameLabel->TabIndex = 35;
			   this->employeeAddEmployeeUsernameLabel->Text = L"Username";
			   // 
			   // employeeAddEmployeeUsernameTextBox
			   // 
			   this->employeeAddEmployeeUsernameTextBox->Location = System::Drawing::Point(229, 88);
			   this->employeeAddEmployeeUsernameTextBox->Name = L"employeeAddEmployeeUsernameTextBox";
			   this->employeeAddEmployeeUsernameTextBox->Size = System::Drawing::Size(200, 22);
			   this->employeeAddEmployeeUsernameTextBox->TabIndex = 31;
			   // 
			   // employeeAddEmployeeBirthdayLabel
			   // 
			   this->employeeAddEmployeeBirthdayLabel->AutoSize = true;
			   this->employeeAddEmployeeBirthdayLabel->Location = System::Drawing::Point(235, 279);
			   this->employeeAddEmployeeBirthdayLabel->Name = L"employeeAddEmployeeBirthdayLabel";
			   this->employeeAddEmployeeBirthdayLabel->Size = System::Drawing::Size(68, 17);
			   this->employeeAddEmployeeBirthdayLabel->TabIndex = 38;
			   this->employeeAddEmployeeBirthdayLabel->Text = L"Birthday";
			   // 
			   // employeeAddEmployeeFirstnameTextBox
			   // 
			   this->employeeAddEmployeeFirstnameTextBox->Location = System::Drawing::Point(229, 138);
			   this->employeeAddEmployeeFirstnameTextBox->Name = L"employeeAddEmployeeFirstnameTextBox";
			   this->employeeAddEmployeeFirstnameTextBox->Size = System::Drawing::Size(200, 22);
			   this->employeeAddEmployeeFirstnameTextBox->TabIndex = 32;
			   // 
			   // employeeAddEmployeeLastnameLabel
			   // 
			   this->employeeAddEmployeeLastnameLabel->AutoSize = true;
			   this->employeeAddEmployeeLastnameLabel->Location = System::Drawing::Point(235, 171);
			   this->employeeAddEmployeeLastnameLabel->Name = L"employeeAddEmployeeLastnameLabel";
			   this->employeeAddEmployeeLastnameLabel->Size = System::Drawing::Size(80, 17);
			   this->employeeAddEmployeeLastnameLabel->TabIndex = 37;
			   this->employeeAddEmployeeLastnameLabel->Text = L"LastName";
			   // 
			   // employeeAddEmployeeLastnameTextbox
			   // 
			   this->employeeAddEmployeeLastnameTextbox->Location = System::Drawing::Point(229, 191);
			   this->employeeAddEmployeeLastnameTextbox->Name = L"employeeAddEmployeeLastnameTextbox";
			   this->employeeAddEmployeeLastnameTextbox->Size = System::Drawing::Size(201, 22);
			   this->employeeAddEmployeeLastnameTextbox->TabIndex = 33;
			   // 
			   // employeeAddEmployeeFirstnameLabel
			   // 
			   this->employeeAddEmployeeFirstnameLabel->AutoSize = true;
			   this->employeeAddEmployeeFirstnameLabel->Location = System::Drawing::Point(234, 117);
			   this->employeeAddEmployeeFirstnameLabel->Name = L"employeeAddEmployeeFirstnameLabel";
			   this->employeeAddEmployeeFirstnameLabel->Size = System::Drawing::Size(79, 17);
			   this->employeeAddEmployeeFirstnameLabel->TabIndex = 36;
			   this->employeeAddEmployeeFirstnameLabel->Text = L"Firstname";
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ButtonFace;
			   this->ClientSize = System::Drawing::Size(1540, 845);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->employeeListView);
			   this->Controls->Add(this->panel3);
			   this->Controls->Add(this->employeeAddNewEmployeeButton);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->clientListView);
			   this->Controls->Add(this->registerPanel);
			   this->Controls->Add(this->loginPanel);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ForeColor = System::Drawing::Color::Black;
			   this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->Name = L"MyForm";
			   this->Text = L"Opo2suM";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   this->loginPanel->ResumeLayout(false);
			   this->loginPanel->PerformLayout();
			   this->registerPanel->ResumeLayout(false);
			   this->registerPanel->PerformLayout();
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientModifyPostalCodeNumericUpDown))->EndInit();
			   this->panel3->ResumeLayout(false);
			   this->panel3->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeModifyPostalCodeNumericUpDown))->EndInit();
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		/*clientMPanel->Visible = true;*/
		registerPanel->Visible = false;
		loginPanel->Visible = true;
		/*orderMPanel->Visible = true;
		addOrderPanel->Visible = false;
		addStockPanel->Visible = false;
		stockMPanel->Visible = true;
		informationStockPanel->Visible = false;*/
	}
	private: System::Void loginRegisterButton_Click(System::Object^ sender, System::EventArgs^ e) {
		registerPanel->Visible = true;
		loginPanel->Visible = false;
	}
	private: System::Void registerLoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		loginPanel->Visible = true;
		registerPanel->Visible = false;
	}
		   /*private: System::Void addOrderExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
			   orderMPanel->Visible = true;
			   addOrderPanel->Visible = false;
		   }
		   private: System::Void orderMclientAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
			   orderMPanel->Visible = false;
			   addOrderPanel->Visible = true;
		   }
		   private: System::Void stockMclientAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
			   addStockPanel->Visible = true;
			   stockMPanel->Visible = false;
		   }
		   private: System::Void addStockExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
			   addStockPanel->Visible = false;
			   stockMPanel->Visible = true;
		   }*/
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
		else { //ADDED BUTTON
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
			//condition to check if user is employee or client manager
			clientRefreshList();
			employeeRefreshList();
		}
		DataTableReaderTest->Close();
	}

		   //CLIENT MANAGER PAGE -----------------------------------------------------------------------------
	private: void clientRefreshList() {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ listClients = Adata->getRows("SELECT * FROM account WHERE permission_lv_account = 0", "Temp");
		DataTable^ clients = listClients->Tables[0];

		clientListView->Items->Clear();
		for (int i = 0; i < clients->Rows->Count; i++) {
			DataRow^ rowData = clients->Rows[i];
			clientListView->Items->Add(rowData[0]->ToString() + " " + rowData[1]->ToString() + " " + rowData[3]->ToString() + " " + rowData[4]->ToString() + " " + rowData[5]->ToString());
		}
	}
	private: System::Void refreshAddressPicker() {
		AccessData^ Adata = gcnew AccessData;
		System::Data::DataSet^ listAddress = Adata->getRows("SELECT * FROM address WHERE id_account = " + connectedClient->get_id() + ";", "Temp");
		this->clientModifyAddressPickerComboBox->DataSource = listAddress->Tables[0];
		this->clientModifyAddressPickerComboBox->ValueMember = "id_address";
		this->clientModifyAddressPickerComboBox->DisplayMember = "street";
		this->clientModifyDeleteAddressButton->Enabled = (clientModifyAddressPickerComboBox->Items->Count > 0);

	}
	private: System::Void enableclientModifyApplyModifButton(System::Object^ sender, System::EventArgs^ e) {
		this->clientModifyApplyModifButton->Enabled = true;
	}
	private: System::Void clientListView_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedClient = clientListView->SelectedItems[0]->Text;

		this->clientModifyErrorBoxLabel->Text = selectedClient;
		connectedClient = gcnew Account(int::Parse(selectedClient->Substring(0, selectedClient->IndexOf(" "))));

		this->clientModifyUsernameTextBox->Text = connectedClient->get_account_name();
		this->clientModifyFirstnameTextBox->Text = connectedClient->get_firstname_account();
		this->clientModifyLastnameTextBox->Text = connectedClient->get_lastname_account();
		this->clientModifyBirthdayTextBox->Text = connectedClient->get_birthday_account()->Substring(0, 10);

		clientRefreshList();
		refreshAddressPicker();
	}
	private: System::Void clientModifyApplyModifButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;

		if (this->clientModifyFirstnameTextBox->Text == "" || this->clientModifyLastnameTextBox->Text == "") {
			this->clientModifyErrorBoxLabel->Text = "Firstname and Lastname cannot be empty.";
		}
		else if (this->clientModifyFirstnameTextBox->Text == "" || this->clientModifyLastnameTextBox->Text == "") {
			this->clientModifyErrorBoxLabel->Text = "Firstname and Lastname cannot be empty.";
		}
		else {
			connectedClient->set_firstname_account(clientModifyFirstnameTextBox->Text);
			connectedClient->set_lastname_account(clientModifyLastnameTextBox->Text);

			/*if (this->accountPasswordTextBox->Text->Length >= 8) {
				connectedAccount->set_password_account(accountPasswordTextBox->Text->GetHashCode().ToString());
			}*/

			AccountManager^ updateAccount = gcnew AccountManager();
			updateAccount->update(connectedClient);

			this->clientModifyErrorBoxLabel->Text = "Account updated.";
			this->clientModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Green;
			this->clientModifyApplyModifButton->Enabled = false;
		}
	}
	private: System::Void clientModifyDeleteAddressButton_Click(System::Object^ sender, System::EventArgs^ e) {
		addressManager->deleteElement(int::Parse(this->clientModifyAddressPickerComboBox->SelectedValue->ToString()));
		refreshAddressPicker();
	}
	private: System::Void clientModifyAddAddressButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->clientModifyAddressStreetTextBox->Text == "" || this->clientModifyPostalCodeNumericUpDown->Text == "" || this->clientModifyCityTextBox->Text == "") {
			this->clientModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Red;
			this->clientModifyErrorBoxLabel->Text = "First three fields are required.";
		}
		else {
			addressManager->insert(clientModifyAddressStreetTextBox->Text, clientModifyPostalCodeNumericUpDown->Text, clientModifyCityTextBox->Text, clientModifyMoreInfoTextBox->Text, connectedClient->get_id());
			clientModifyAddressStreetTextBox->Text = "";
			clientModifyPostalCodeNumericUpDown->Text = "";
			clientModifyCityTextBox->Text = "";
			clientModifyMoreInfoTextBox->Text = "";
			this->clientModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Green;
			this->clientModifyErrorBoxLabel->Text = "Address added.";

			refreshAddressPicker();
		}

	};

		   //EMPLOYEE MANAGER PAGE ----------------------------------------------------------------------------
	private: void employeeRefreshList() {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ listEmployees = Adata->getRows("SELECT * FROM account WHERE permission_lv_account = 1", "Temp");
		DataTable^ employees = listEmployees->Tables[0];

		employeeListView->Items->Clear();
		for (int i = 0; i < employees->Rows->Count; i++) {
			DataRow^ rowData = employees->Rows[i];
			employeeListView->Items->Add(rowData[0]->ToString() + " " + rowData[1]->ToString() + " " + rowData[3]->ToString() + " " + rowData[4]->ToString() + " " + rowData[5]->ToString());
		}
	}
	private: System::Void employeeRefreshAddressPicker() {
		AccessData^ Adata = gcnew AccessData;
		System::Data::DataSet^ listAddress = Adata->getRows("SELECT * FROM address WHERE id_account = " + connectedEmployee->get_id() + ";", "Temp");
		this->employeeModifyAddressPickerComboBox->DataSource = listAddress->Tables[0];
		this->employeeModifyAddressPickerComboBox->ValueMember = "id_address";
		this->employeeModifyAddressPickerComboBox->DisplayMember = "street";
		this->employeeModifyDeleteAddressButton->Enabled = (employeeModifyAddressPickerComboBox->Items->Count > 0);

	}
	private: System::Void enableEmployeeModifyButton(System::Object^ sender, System::EventArgs^ e) {
		this->employeeModifyApplyModifButton->Enabled = true;
	}
	private: System::Void employeeListView_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedEmployee = employeeListView->SelectedItems[0]->Text;
		connectedEmployee = gcnew Account(int::Parse(selectedEmployee->Substring(0, selectedEmployee->IndexOf(" "))));
		AccessData^ Adata = gcnew AccessData;
		System::Data::DataSet^ ID = Adata->getRows("SELECT id_personnel FROM personnel WHERE id_account = " + connectedEmployee->get_id() + ";", "Temp");
		System::Data::DataTableReader^ DataTableReader = ID->CreateDataReader();
		DataTableReader->Read();

		Personnel^ hireDate = gcnew Personnel(DataTableReader->GetInt32(0));

		DataTableReader->Close();

		this->employeeModifyErrorBoxLabel->Text = selectedEmployee;

		this->employeeModifyUsernameTextBox->Text = connectedEmployee->get_account_name();
		this->employeeModifyFirstnameTextBox->Text = connectedEmployee->get_firstname_account();
		this->employeeModifyLastnameTextBox->Text = connectedEmployee->get_lastname_account();
		this->employeeModifyBirthdayTextBox->Text = connectedEmployee->get_birthday_account()->Substring(0, 10);
		this->employeeModifyHireDateTextBox->Text = hireDate->get_hire_date()->Substring(0, 10);

		employeeRefreshList();
		employeeRefreshAddressPicker();
	}
	private: System::Void employeeModifyApplyModifButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;

		if (this->employeeModifyFirstnameTextBox->Text == "" || this->employeeModifyLastnameTextBox->Text == "") {
			this->employeeModifyErrorBoxLabel->Text = "Firstname and Lastname cannot be empty.";
		}
		else if (this->employeeModifyFirstnameTextBox->Text == "" || this->employeeModifyLastnameTextBox->Text == "") {
			this->employeeModifyErrorBoxLabel->Text = "Firstname and Lastname cannot be empty.";
		}
		else {
			connectedEmployee->set_firstname_account(employeeModifyFirstnameTextBox->Text);
			connectedEmployee->set_lastname_account(employeeModifyLastnameTextBox->Text);

			/*if (this->accountPasswordTextBox->Text->Length >= 8) {
				connectedAccount->set_password_account(accountPasswordTextBox->Text->GetHashCode().ToString());
			}*/

			AccountManager^ updateAccount = gcnew AccountManager();
			updateAccount->update(connectedEmployee);

			this->employeeModifyErrorBoxLabel->Text = "Account updated.";
			this->employeeModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Green;
			this->employeeModifyApplyModifButton->Enabled = false;
		}
	}
	private: System::Void employeeModifyDeleteAddressButton_Click(System::Object^ sender, System::EventArgs^ e) {
		addressManager->deleteElement(int::Parse(this->employeeModifyAddressPickerComboBox->SelectedValue->ToString()));
		employeeRefreshAddressPicker();
	}
	private: System::Void employeeModifyAddAddressButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->employeeModifyAddressStreetTextBox->Text == "" || this->employeeModifyPostalCodeNumericUpDown->Text == "" || this->employeeModifyCityTextBox->Text == "") {
			this->employeeModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Red;
			this->employeeModifyErrorBoxLabel->Text = "First three fields are required.";
		}
		else {
			addressManager->insert(employeeModifyAddressStreetTextBox->Text, employeeModifyPostalCodeNumericUpDown->Text, employeeModifyCityTextBox->Text, employeeModifyMoreInfoTextBox->Text, connectedEmployee->get_id());
			employeeModifyAddressStreetTextBox->Text = "";
			employeeModifyPostalCodeNumericUpDown->Text = "";
			employeeModifyCityTextBox->Text = "";
			employeeModifyMoreInfoTextBox->Text = "";
			this->employeeModifyErrorBoxLabel->ForeColor = System::Drawing::Color::Green;
			this->employeeModifyErrorBoxLabel->Text = "Address added.";

			employeeRefreshAddressPicker();
		}
	};

		   //ADD EMPLOYEE ---------------------------------------------------------------------------------------
	private: System::Void employeeAddNewEmployeeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		panel2->Visible = true;
	}
	private: System::Void employeeAddEmployeeAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->employeeAddEmployeeFirstnameTextBox->Text == "" || this->employeeAddEmployeeLastnameTextbox->Text == "" || this->employeeAddEmployeePasswordTextBox->Text == "" || this->employeeAddEmployeeUsernameTextBox->Text == "") {
			this->employeeAddEmployeeErrorBoxLabel->Text = "Please fill in all the Fields";
			this->employeeAddEmployeeErrorBoxLabel->ForeColor = System::Drawing::Color::Red;
		}
		else {
			accountManager->insert(employeeAddEmployeeUsernameTextBox->Text, employeeAddEmployeePasswordTextBox->Text, employeeAddEmployeeFirstnameTextBox->Text, employeeAddEmployeeLastnameTextbox->Text, employeeAddEmployeeBirthdayDateTimePicker->Value.ToString()->Substring(0, 10), employeeAddEmployeeManagerCheckBox->Checked ? 2 : 1);
			AccessData^ Adata = gcnew AccessData;
			System::Data::DataSet^ lastAccount = Adata->getRows("SELECT TOP (1) id_account FROM account ORDER BY id_account DESC", "Temp");
			System::Data::DataTableReader^ DataTableReaderTest = lastAccount->CreateDataReader();
			DataTableReaderTest->Read();
			int id_account = DataTableReaderTest->GetInt32(0);
			DataTableReaderTest->Close();

			personnelManager->insert(employeeAddEmployeeHireDateDateTimePicker->Value.ToString()->Substring(0, 10), employeeAddEmployeeManagerCheckBox->Checked ? 2 : 1, id_account);
			
			this->employeeAddEmployeeUsernameTextBox->Text = "";
			this->employeeAddEmployeeFirstnameTextBox->Text = "";
			this->employeeAddEmployeeLastnameTextbox->Text = "";
			this->employeeAddEmployeePasswordTextBox->Text = "";
			this->employeeAddEmployeeManagerCheckBox->Checked = false;
			this->employeeAddEmployeeErrorBoxLabel->Text = "";

			panel2->Visible = false;
		}
	}
	private: System::Void employeeAddEmployeeCancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->employeeAddEmployeeUsernameTextBox->Text = "";
		this->employeeAddEmployeeFirstnameTextBox->Text = "";
		this->employeeAddEmployeeLastnameTextbox->Text = "";
		this->employeeAddEmployeePasswordTextBox->Text = "";
		this->employeeAddEmployeeManagerCheckBox->Checked = false;
		this->employeeAddEmployeeErrorBoxLabel->Text = "";

		panel2->Visible = false;
	}
};
};

