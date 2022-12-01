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
	protected:
	private: System::Windows::Forms::Label^ loginPasswordLabel;
	private: System::Windows::Forms::TextBox^ loginPasswordTextBox;
	private: System::Windows::Forms::TextBox^ loginUsernameTextBox;
	private: System::Windows::Forms::Label^ loginUsernameLabel;
	private: System::Windows::Forms::Label^ loginLoginLabel;
	private: System::Windows::Forms::Button^ loginRegisterButton;
	private: System::Windows::Forms::Button^ loginValidateButton;
	private: System::Windows::Forms::Label^ informationStockNameLabel;
	private: System::Windows::Forms::Label^ loginErrorLabel;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Label^ registerRegisterLabel;
	private: System::Windows::Forms::Label^ registerUsernameLabel;
	private: System::Windows::Forms::TextBox^ registerUsernameTextBox;
	private: System::Windows::Forms::TextBox^ registerPasswordTextBox;
	private: System::Windows::Forms::Label^ registerPasswordLabel;
	private: System::Windows::Forms::Button^ registerLoginButton;
	private: System::Windows::Forms::Button^ registerValidateButton;
	private: System::Windows::Forms::TextBox^ registerFirstnameTextBox;
	private: System::Windows::Forms::TextBox^ registerLastnameTextBox;
	private: System::Windows::Forms::Label^ registerFirstnameLabel;
	private: System::Windows::Forms::Label^ registerLastnameLabel;
	private: System::Windows::Forms::Label^ registerErrorLabel;
	private: System::Windows::Forms::DateTimePicker^ registerDateTimePicker;
	private: System::Windows::Forms::Label^ registerBirthdayLabel;
	private: System::Windows::Forms::Panel^ registerPanel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ catalogResearchTextBox;
	private: System::Windows::Forms::Label^ Information;

	private:
		Account^ connectedAccount;
		AddressManager^ addressManager = gcnew AddressManager();
		ContainManager^ containManager = gcnew ContainManager();
		OrderManager^ orderManager = gcnew OrderManager();

	private: System::Windows::Forms::Button^ catalogCheckoutButton;


	private: System::Windows::Forms::ListView^ catalogGlobalListView;



	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::ListView^ catalogSelectedListView;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ catalogCartButton;
	private: System::Windows::Forms::Button^ catalogBackButton;
	private: System::Windows::Forms::ComboBox^ catalogAddressBillingListComboBox;
	private: System::Windows::Forms::ComboBox^ catalogAddressShippingListComboBox;


		   AccountManager^ accountManager = gcnew AccountManager();

#pragma region Windows Form Designer generated code
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
			   this->registerRegisterLabel = (gcnew System::Windows::Forms::Label());
			   this->registerUsernameLabel = (gcnew System::Windows::Forms::Label());
			   this->registerUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->registerPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->registerPasswordLabel = (gcnew System::Windows::Forms::Label());
			   this->registerLoginButton = (gcnew System::Windows::Forms::Button());
			   this->registerValidateButton = (gcnew System::Windows::Forms::Button());
			   this->registerFirstnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->registerLastnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->registerFirstnameLabel = (gcnew System::Windows::Forms::Label());
			   this->registerLastnameLabel = (gcnew System::Windows::Forms::Label());
			   this->registerErrorLabel = (gcnew System::Windows::Forms::Label());
			   this->registerDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			   this->registerBirthdayLabel = (gcnew System::Windows::Forms::Label());
			   this->registerPanel = (gcnew System::Windows::Forms::Panel());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->catalogCartButton = (gcnew System::Windows::Forms::Button());
			   this->catalogGlobalListView = (gcnew System::Windows::Forms::ListView());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->catalogResearchTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->Information = (gcnew System::Windows::Forms::Label());
			   this->catalogCheckoutButton = (gcnew System::Windows::Forms::Button());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->catalogAddressBillingListComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->catalogAddressShippingListComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->catalogBackButton = (gcnew System::Windows::Forms::Button());
			   this->catalogSelectedListView = (gcnew System::Windows::Forms::ListView());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->loginPanel->SuspendLayout();
			   this->registerPanel->SuspendLayout();
			   this->panel1->SuspendLayout();
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
			   // registerUsernameTextBox
			   // 
			   this->registerUsernameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerUsernameTextBox->Location = System::Drawing::Point(10, 132);
			   this->registerUsernameTextBox->Name = L"registerUsernameTextBox";
			   this->registerUsernameTextBox->Size = System::Drawing::Size(165, 22);
			   this->registerUsernameTextBox->TabIndex = 2;
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
			   // registerFirstnameTextBox
			   // 
			   this->registerFirstnameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerFirstnameTextBox->Location = System::Drawing::Point(10, 196);
			   this->registerFirstnameTextBox->Name = L"registerFirstnameTextBox";
			   this->registerFirstnameTextBox->Size = System::Drawing::Size(165, 22);
			   this->registerFirstnameTextBox->TabIndex = 12;
			   // 
			   // registerLastnameTextBox
			   // 
			   this->registerLastnameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->registerLastnameTextBox->Location = System::Drawing::Point(196, 196);
			   this->registerLastnameTextBox->Name = L"registerLastnameTextBox";
			   this->registerLastnameTextBox->Size = System::Drawing::Size(165, 22);
			   this->registerLastnameTextBox->TabIndex = 13;
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
			   // registerDateTimePicker
			   // 
			   this->registerDateTimePicker->Location = System::Drawing::Point(86, 269);
			   this->registerDateTimePicker->Name = L"registerDateTimePicker";
			   this->registerDateTimePicker->Size = System::Drawing::Size(250, 22);
			   this->registerDateTimePicker->TabIndex = 9;
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
			   // panel1
			   // 
			   this->panel1->Controls->Add(this->catalogCartButton);
			   this->panel1->Controls->Add(this->catalogGlobalListView);
			   this->panel1->Controls->Add(this->label10);
			   this->panel1->Controls->Add(this->catalogResearchTextBox);
			   this->panel1->Controls->Add(this->Information);
			   this->panel1->Location = System::Drawing::Point(450, 12);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(448, 463);
			   this->panel1->TabIndex = 24;
			   // 
			   // catalogCartButton
			   // 
			   this->catalogCartButton->Location = System::Drawing::Point(315, 394);
			   this->catalogCartButton->Name = L"catalogCartButton";
			   this->catalogCartButton->Size = System::Drawing::Size(111, 33);
			   this->catalogCartButton->TabIndex = 40;
			   this->catalogCartButton->Text = L"Cart";
			   this->catalogCartButton->UseVisualStyleBackColor = true;
			   this->catalogCartButton->Click += gcnew System::EventHandler(this, &MyForm::catalogCartButton_Click);
			   // 
			   // catalogGlobalListView
			   // 
			   this->catalogGlobalListView->HideSelection = false;
			   this->catalogGlobalListView->Location = System::Drawing::Point(38, 130);
			   this->catalogGlobalListView->Name = L"catalogGlobalListView";
			   this->catalogGlobalListView->Size = System::Drawing::Size(393, 254);
			   this->catalogGlobalListView->TabIndex = 38;
			   this->catalogGlobalListView->UseCompatibleStateImageBehavior = false;
			   this->catalogGlobalListView->View = System::Windows::Forms::View::List;
			   this->catalogGlobalListView->DoubleClick += gcnew System::EventHandler(this, &MyForm::catalogGlobalListView_DoubleClick);
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Location = System::Drawing::Point(39, 69);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(77, 17);
			   this->label10->TabIndex = 36;
			   this->label10->Text = L"Research";
			   // 
			   // catalogResearchTextBox
			   // 
			   this->catalogResearchTextBox->Location = System::Drawing::Point(38, 89);
			   this->catalogResearchTextBox->Name = L"catalogResearchTextBox";
			   this->catalogResearchTextBox->Size = System::Drawing::Size(268, 22);
			   this->catalogResearchTextBox->TabIndex = 32;
			   this->catalogResearchTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::catalogResearchTextBox_TextChanged);
			   // 
			   // Information
			   // 
			   this->Information->AutoSize = true;
			   this->Information->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Information->Location = System::Drawing::Point(20, 22);
			   this->Information->Name = L"Information";
			   this->Information->Size = System::Drawing::Size(92, 32);
			   this->Information->TabIndex = 24;
			   this->Information->Text = L"Order";
			   // 
			   // catalogCheckoutButton
			   // 
			   this->catalogCheckoutButton->Location = System::Drawing::Point(284, 394);
			   this->catalogCheckoutButton->Name = L"catalogCheckoutButton";
			   this->catalogCheckoutButton->Size = System::Drawing::Size(112, 33);
			   this->catalogCheckoutButton->TabIndex = 39;
			   this->catalogCheckoutButton->Text = L"checkout";
			   this->catalogCheckoutButton->UseVisualStyleBackColor = true;
			   this->catalogCheckoutButton->Click += gcnew System::EventHandler(this, &MyForm::catalogCheckoutButton_Click);
			   // 
			   // panel2
			   // 
			   this->panel2->Controls->Add(this->catalogAddressBillingListComboBox);
			   this->panel2->Controls->Add(this->catalogAddressShippingListComboBox);
			   this->panel2->Controls->Add(this->catalogBackButton);
			   this->panel2->Controls->Add(this->catalogSelectedListView);
			   this->panel2->Controls->Add(this->label3);
			   this->panel2->Controls->Add(this->catalogCheckoutButton);
			   this->panel2->Location = System::Drawing::Point(915, 12);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(431, 463);
			   this->panel2->TabIndex = 41;
			   // 
			   // catalogAddressBillingListComboBox
			   // 
			   this->catalogAddressBillingListComboBox->FormattingEnabled = true;
			   this->catalogAddressBillingListComboBox->Location = System::Drawing::Point(26, 311);
			   this->catalogAddressBillingListComboBox->Name = L"catalogAddressBillingListComboBox";
			   this->catalogAddressBillingListComboBox->Size = System::Drawing::Size(121, 24);
			   this->catalogAddressBillingListComboBox->TabIndex = 44;
			   // 
			   // catalogAddressShippingListComboBox
			   // 
			   this->catalogAddressShippingListComboBox->FormattingEnabled = true;
			   this->catalogAddressShippingListComboBox->Location = System::Drawing::Point(26, 341);
			   this->catalogAddressShippingListComboBox->Name = L"catalogAddressShippingListComboBox";
			   this->catalogAddressShippingListComboBox->Size = System::Drawing::Size(121, 24);
			   this->catalogAddressShippingListComboBox->TabIndex = 43;
			   // 
			   // catalogBackButton
			   // 
			   this->catalogBackButton->Location = System::Drawing::Point(301, 22);
			   this->catalogBackButton->Name = L"catalogBackButton";
			   this->catalogBackButton->Size = System::Drawing::Size(108, 33);
			   this->catalogBackButton->TabIndex = 42;
			   this->catalogBackButton->Text = L"Back";
			   this->catalogBackButton->UseVisualStyleBackColor = true;
			   this->catalogBackButton->Click += gcnew System::EventHandler(this, &MyForm::catalogBackButton_Click);
			   // 
			   // catalogSelectedListView
			   // 
			   this->catalogSelectedListView->HideSelection = false;
			   this->catalogSelectedListView->Location = System::Drawing::Point(26, 129);
			   this->catalogSelectedListView->Name = L"catalogSelectedListView";
			   this->catalogSelectedListView->Size = System::Drawing::Size(383, 122);
			   this->catalogSelectedListView->TabIndex = 41;
			   this->catalogSelectedListView->UseCompatibleStateImageBehavior = false;
			   this->catalogSelectedListView->View = System::Windows::Forms::View::List;
			   this->catalogSelectedListView->DoubleClick += gcnew System::EventHandler(this, &MyForm::catalogSelectedListView_DoubleClick);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(20, 22);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(72, 32);
			   this->label3->TabIndex = 24;
			   this->label3->Text = L"Cart";
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ButtonFace;
			   this->ClientSize = System::Drawing::Size(1375, 526);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->panel1);
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
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		registerPanel->Visible = false;
		loginPanel->Visible = true;
	}
	private: System::Void loginRegisterButton_Click(System::Object^ sender, System::EventArgs^ e) {
		registerPanel->Visible = true;
		loginPanel->Visible = false;
	}
	private: System::Void registerLoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		loginPanel->Visible = true;
		registerPanel->Visible = false;
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
			catalogResearchTextBox_TextChanged(sender, e);
		}
		DataTableReaderTest->Close();
	}
	private: System::Void catalogCartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// afficher la bonne page
		AccessData^ Adata = gcnew AccessData;
		System::Data::DataSet^ listAddress = Adata->getRows("SELECT * FROM address WHERE id_account = " + connectedAccount->get_id() + ";", "Temp");
		this->catalogAddressBillingListComboBox->DataSource = listAddress->Tables[0];
		this->catalogAddressBillingListComboBox->ValueMember = "id_address";
		this->catalogAddressBillingListComboBox->DisplayMember = "street";
		this->catalogAddressShippingListComboBox->DataSource = listAddress->Tables[0];
		this->catalogAddressShippingListComboBox->ValueMember = "id_address";
		this->catalogAddressShippingListComboBox->DisplayMember = "street";
	}
	private: System::Void catalogBackButton_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void catalogCheckoutButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->catalogAddressBillingListComboBox->SelectedIndex == -1 || this->catalogAddressShippingListComboBox->SelectedIndex == -1) {
			MessageBox::Show("No address selected.");
			return;
		}

		String^ summaryOrder;
		std::vector<int> idList(catalogSelectedListView->Items->Count);
		std::vector<int> nbList(catalogSelectedListView->Items->Count);

		for (int i = 0; i < catalogSelectedListView->Items->Count; i++)
		{
			String^ tempProduct = catalogSelectedListView->Items[i]->Text;

			int tempNb = int::Parse(tempProduct->Substring(0, tempProduct->IndexOf(" ") - 1));
			int tempId = int::Parse(tempProduct->Substring(tempProduct->IndexOf("#") + 1)->Substring(0, tempProduct->IndexOf("#") - tempProduct->IndexOf(" ") - 1));
			Product^ currentProduct = gcnew Product(tempId);
			if (currentProduct->get_stock_product() - tempNb < 0) {
				if (MessageBox::Show("Due to some stock problems, you can only have " + currentProduct->get_stock_product() + "x \"" + currentProduct->get_name_product() + "\"", "Warning", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
					tempNb = currentProduct->get_stock_product();
				}
				else { return; }
			}
			nbList[i] = tempNb;
			idList[i] = tempId;
			summaryOrder += "\n" + nbList[i] + "x   " + currentProduct->get_name_product();
		}

		if (MessageBox::Show("Summary :\n" + summaryOrder, "Confirm", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {

			orderManager->insert(DateTime::Now.ToString(), DateTime::Now.ToString(), connectedAccount->get_id(), 
				int::Parse(this->catalogAddressBillingListComboBox->SelectedValue->ToString()),
				int::Parse(this->catalogAddressShippingListComboBox->SelectedValue->ToString()));

			AccessData^ Adata = gcnew AccessData;
			System::Data::DataSet^ lastOrder = Adata->getRows("SELECT TOP (1) id_order FROM orderTab","Temp");
			System::Data::DataTableReader^ DataTableReaderTest = lastOrder->CreateDataReader();
			DataTableReaderTest->Read();
			int id_selectedOrder = DataTableReaderTest->GetInt32(0);
			DataTableReaderTest->Close();

			for (int i = 0; i < catalogSelectedListView->Items->Count; i++)
			{
				containManager->insert(id_selectedOrder, idList[i], nbList[i]);
			}
			
		}

		//catalogGlobalListView->Items->Clear();
	}
	private: System::Void catalogGlobalListView_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ selectedProduct = catalogGlobalListView->SelectedItems[0]->Text;

			bool noDouble = true;
			for (int i = 0; i < catalogSelectedListView->Items->Count; i++) {
				noDouble = selectedProduct->Substring(selectedProduct->IndexOf("\"") + 1) + "\"" ==
					catalogSelectedListView->Items[i]->Text->Substring(catalogSelectedListView->Items[i]->Text->IndexOf("\"") + 1) ? false : noDouble;
			}

			if (!noDouble) { MessageBox::Show("This article is already in your cart."); return; }

			String^ countProduct = Microsoft::VisualBasic::Interaction::InputBox("How many \"" + selectedProduct->Substring(selectedProduct->IndexOf(" ") + 1) + "\" do you want?", selectedProduct->Substring(selectedProduct->LastIndexOf(" ") + 1), "1", 500, 500);
			if (!(countProduct == "" || countProduct == "0")) {
				try {
					if (int::Parse(countProduct) < 1) {
						MessageBox::Show("Invalide Value");
						return;
					}
					catalogSelectedListView->Items->Add(countProduct + "x \"" + selectedProduct + "\"");
				}
				catch (...) {
					MessageBox::Show("Invalide Value");
				}
			}
		}
		catch (...) {}
	}
	private: System::Void catalogSelectedListView_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (MessageBox::Show("Do you want remove this article?", "Remove article", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
				catalogSelectedListView->Items->RemoveAt(catalogSelectedListView->SelectedIndices[0]);
			}
		}
		catch (...) {}
	}
	private: System::Void catalogResearchTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ listProduct = Adata->getRows("SELECT * FROM product WHERE stock_product > 0 AND (name_product LIKE '%" + catalogResearchTextBox->Text + "%' OR id_product LIKE '%" + catalogResearchTextBox->Text + "%');", "Temp");
		DataTable^ products = listProduct->Tables[0];

		catalogGlobalListView->Items->Clear();
		for (int i = 0; i < products->Rows->Count; i++)
		{
			DataRow^ drow = products->Rows[i];
			catalogGlobalListView->Items->Add("#" + drow[0]->ToString() + " " + drow[1]->ToString());
		}
	}
	};
}