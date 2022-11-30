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
	private: System::Windows::Forms::TextBox^ accountUsernameTextBox;

	private: System::Windows::Forms::TextBox^ accountFirstnameTextBox;

	private: System::Windows::Forms::TextBox^ accountLastnameTextBox;

	private: System::Windows::Forms::TextBox^ accountPasswordTextBox;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ accountModifyButton;

	private: System::Windows::Forms::TextBox^ accountBirthdayTextBox;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ accountAddressMoreTextBox;
	private: System::Windows::Forms::TextBox^ accountAddressCityTextBox;


	private: System::Windows::Forms::TextBox^ accountAddressNbTextBox;
	private: System::Windows::Forms::Button^ accountAddressAddButton;
	private: System::Windows::Forms::Button^ accountAddressDeleteButton;
	private: System::Windows::Forms::ComboBox^ accountAddressListComboBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ Information;
	private: System::Windows::Forms::Label^ accountErrorLabel;
	private: System::Windows::Forms::Label^ accountErrorAddAddressLabel;


	private:
		Account^ connectedAccount;

	private: System::Windows::Forms::NumericUpDown^ accountAddressPostalNumericUpDown;


		   AddressManager^ addressManager = gcnew AddressManager();

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
			   this->accountUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountFirstnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountLastnameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->accountModifyButton = (gcnew System::Windows::Forms::Button());
			   this->accountBirthdayTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->accountAddressPostalNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			   this->accountErrorAddAddressLabel = (gcnew System::Windows::Forms::Label());
			   this->accountErrorLabel = (gcnew System::Windows::Forms::Label());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->accountAddressMoreTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountAddressCityTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountAddressNbTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->accountAddressAddButton = (gcnew System::Windows::Forms::Button());
			   this->accountAddressDeleteButton = (gcnew System::Windows::Forms::Button());
			   this->accountAddressListComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->Information = (gcnew System::Windows::Forms::Label());
			   this->loginPanel->SuspendLayout();
			   this->registerPanel->SuspendLayout();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accountAddressPostalNumericUpDown))->BeginInit();
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
			   this->registerDateTimePicker->Size = System::Drawing::Size(200, 22);
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
			   // accountUsernameTextBox
			   // 
			   this->accountUsernameTextBox->Enabled = false;
			   this->accountUsernameTextBox->Location = System::Drawing::Point(26, 93);
			   this->accountUsernameTextBox->Name = L"accountUsernameTextBox";
			   this->accountUsernameTextBox->Size = System::Drawing::Size(183, 22);
			   this->accountUsernameTextBox->TabIndex = 13;
			   this->accountUsernameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::enableAccountModifyButton);
			   // 
			   // accountFirstnameTextBox
			   // 
			   this->accountFirstnameTextBox->Location = System::Drawing::Point(243, 93);
			   this->accountFirstnameTextBox->Name = L"accountFirstnameTextBox";
			   this->accountFirstnameTextBox->Size = System::Drawing::Size(183, 22);
			   this->accountFirstnameTextBox->TabIndex = 14;
			   this->accountFirstnameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::enableAccountModifyButton);
			   // 
			   // accountLastnameTextBox
			   // 
			   this->accountLastnameTextBox->Location = System::Drawing::Point(448, 93);
			   this->accountLastnameTextBox->Name = L"accountLastnameTextBox";
			   this->accountLastnameTextBox->Size = System::Drawing::Size(183, 22);
			   this->accountLastnameTextBox->TabIndex = 15;
			   this->accountLastnameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::enableAccountModifyButton);
			   // 
			   // accountPasswordTextBox
			   // 
			   this->accountPasswordTextBox->Location = System::Drawing::Point(26, 168);
			   this->accountPasswordTextBox->Name = L"accountPasswordTextBox";
			   this->accountPasswordTextBox->PasswordChar = '*';
			   this->accountPasswordTextBox->Size = System::Drawing::Size(183, 22);
			   this->accountPasswordTextBox->TabIndex = 16;
			   this->accountPasswordTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::enableAccountModifyButton);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(33, 72);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(81, 17);
			   this->label1->TabIndex = 17;
			   this->label1->Text = L"Username";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(250, 73);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(73, 17);
			   this->label2->TabIndex = 18;
			   this->label2->Text = L"Fistname";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(457, 73);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(78, 17);
			   this->label3->TabIndex = 19;
			   this->label3->Text = L"Lastname";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(33, 148);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(137, 17);
			   this->label4->TabIndex = 20;
			   this->label4->Text = L"Change Password";
			   // 
			   // accountModifyButton
			   // 
			   this->accountModifyButton->Enabled = false;
			   this->accountModifyButton->Location = System::Drawing::Point(708, 176);
			   this->accountModifyButton->Name = L"accountModifyButton";
			   this->accountModifyButton->Size = System::Drawing::Size(150, 28);
			   this->accountModifyButton->TabIndex = 21;
			   this->accountModifyButton->Text = L"Modify account";
			   this->accountModifyButton->UseVisualStyleBackColor = true;
			   this->accountModifyButton->Click += gcnew System::EventHandler(this, &MyForm::accountModifyButton_Click);
			   // 
			   // accountBirthdayTextBox
			   // 
			   this->accountBirthdayTextBox->Enabled = false;
			   this->accountBirthdayTextBox->Location = System::Drawing::Point(243, 168);
			   this->accountBirthdayTextBox->Name = L"accountBirthdayTextBox";
			   this->accountBirthdayTextBox->Size = System::Drawing::Size(183, 22);
			   this->accountBirthdayTextBox->TabIndex = 22;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(252, 148);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(68, 17);
			   this->label5->TabIndex = 23;
			   this->label5->Text = L"Birthday";
			   // 
			   // panel1
			   // 
			   this->panel1->Controls->Add(this->accountAddressPostalNumericUpDown);
			   this->panel1->Controls->Add(this->accountErrorAddAddressLabel);
			   this->panel1->Controls->Add(this->accountErrorLabel);
			   this->panel1->Controls->Add(this->label10);
			   this->panel1->Controls->Add(this->label9);
			   this->panel1->Controls->Add(this->label8);
			   this->panel1->Controls->Add(this->label7);
			   this->panel1->Controls->Add(this->accountAddressMoreTextBox);
			   this->panel1->Controls->Add(this->accountAddressCityTextBox);
			   this->panel1->Controls->Add(this->accountAddressNbTextBox);
			   this->panel1->Controls->Add(this->accountAddressAddButton);
			   this->panel1->Controls->Add(this->accountAddressDeleteButton);
			   this->panel1->Controls->Add(this->accountAddressListComboBox);
			   this->panel1->Controls->Add(this->label6);
			   this->panel1->Controls->Add(this->Information);
			   this->panel1->Controls->Add(this->accountUsernameTextBox);
			   this->panel1->Controls->Add(this->label5);
			   this->panel1->Controls->Add(this->accountFirstnameTextBox);
			   this->panel1->Controls->Add(this->accountBirthdayTextBox);
			   this->panel1->Controls->Add(this->accountLastnameTextBox);
			   this->panel1->Controls->Add(this->accountModifyButton);
			   this->panel1->Controls->Add(this->accountPasswordTextBox);
			   this->panel1->Controls->Add(this->label4);
			   this->panel1->Controls->Add(this->label1);
			   this->panel1->Controls->Add(this->label3);
			   this->panel1->Controls->Add(this->label2);
			   this->panel1->Location = System::Drawing::Point(450, 12);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(934, 463);
			   this->panel1->TabIndex = 24;
			   // 
			   // accountAddressPostalNumericUpDown
			   // 
			   this->accountAddressPostalNumericUpDown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			   this->accountAddressPostalNumericUpDown->Location = System::Drawing::Point(294, 373);
			   this->accountAddressPostalNumericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			   this->accountAddressPostalNumericUpDown->Name = L"accountAddressPostalNumericUpDown";
			   this->accountAddressPostalNumericUpDown->Size = System::Drawing::Size(100, 22);
			   this->accountAddressPostalNumericUpDown->TabIndex = 39;
			   // 
			   // accountErrorAddAddressLabel
			   // 
			   this->accountErrorAddAddressLabel->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			   this->accountErrorAddAddressLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->accountErrorAddAddressLabel->AutoSize = true;
			   this->accountErrorAddAddressLabel->ForeColor = System::Drawing::Color::Red;
			   this->accountErrorAddAddressLabel->Location = System::Drawing::Point(519, 433);
			   this->accountErrorAddAddressLabel->Name = L"accountErrorAddAddressLabel";
			   this->accountErrorAddAddressLabel->Size = System::Drawing::Size(78, 17);
			   this->accountErrorAddAddressLabel->TabIndex = 37;
			   this->accountErrorAddAddressLabel->Text = L"Lastname";
			   this->accountErrorAddAddressLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // accountErrorLabel
			   // 
			   this->accountErrorLabel->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			   this->accountErrorLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->accountErrorLabel->AutoSize = true;
			   this->accountErrorLabel->ForeColor = System::Drawing::Color::Red;
			   this->accountErrorLabel->Location = System::Drawing::Point(721, 207);
			   this->accountErrorLabel->Name = L"accountErrorLabel";
			   this->accountErrorLabel->Size = System::Drawing::Size(78, 17);
			   this->accountErrorLabel->TabIndex = 18;
			   this->accountErrorLabel->Text = L"Lastname";
			   this->accountErrorLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Location = System::Drawing::Point(27, 408);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(206, 17);
			   this->label10->TabIndex = 36;
			   this->label10->Text = L"More information (ex: floor)";
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(300, 349);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(93, 17);
			   this->label9->TabIndex = 35;
			   this->label9->Text = L"Postal code";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(192, 349);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(35, 17);
			   this->label8->TabIndex = 34;
			   this->label8->Text = L"City";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(26, 349);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(143, 17);
			   this->label7->TabIndex = 33;
			   this->label7->Text = L"Number and street";
			   // 
			   // accountAddressMoreTextBox
			   // 
			   this->accountAddressMoreTextBox->Location = System::Drawing::Point(26, 428);
			   this->accountAddressMoreTextBox->Name = L"accountAddressMoreTextBox";
			   this->accountAddressMoreTextBox->Size = System::Drawing::Size(367, 22);
			   this->accountAddressMoreTextBox->TabIndex = 32;
			   // 
			   // accountAddressCityTextBox
			   // 
			   this->accountAddressCityTextBox->Location = System::Drawing::Point(188, 372);
			   this->accountAddressCityTextBox->Name = L"accountAddressCityTextBox";
			   this->accountAddressCityTextBox->Size = System::Drawing::Size(100, 22);
			   this->accountAddressCityTextBox->TabIndex = 31;
			   // 
			   // accountAddressNbTextBox
			   // 
			   this->accountAddressNbTextBox->Location = System::Drawing::Point(26, 372);
			   this->accountAddressNbTextBox->Name = L"accountAddressNbTextBox";
			   this->accountAddressNbTextBox->Size = System::Drawing::Size(156, 22);
			   this->accountAddressNbTextBox->TabIndex = 29;
			   // 
			   // accountAddressAddButton
			   // 
			   this->accountAddressAddButton->Location = System::Drawing::Point(410, 427);
			   this->accountAddressAddButton->Name = L"accountAddressAddButton";
			   this->accountAddressAddButton->Size = System::Drawing::Size(103, 25);
			   this->accountAddressAddButton->TabIndex = 28;
			   this->accountAddressAddButton->Text = L"Add";
			   this->accountAddressAddButton->UseVisualStyleBackColor = true;
			   this->accountAddressAddButton->Click += gcnew System::EventHandler(this, &MyForm::accountAddressAddButton_Click);
			   // 
			   // accountAddressDeleteButton
			   // 
			   this->accountAddressDeleteButton->Location = System::Drawing::Point(410, 298);
			   this->accountAddressDeleteButton->Name = L"accountAddressDeleteButton";
			   this->accountAddressDeleteButton->Size = System::Drawing::Size(103, 25);
			   this->accountAddressDeleteButton->TabIndex = 27;
			   this->accountAddressDeleteButton->Text = L"Delete";
			   this->accountAddressDeleteButton->UseVisualStyleBackColor = true;
			   this->accountAddressDeleteButton->Click += gcnew System::EventHandler(this, &MyForm::accountAddressDeleteButton_Click);
			   // 
			   // accountAddressListComboBox
			   // 
			   this->accountAddressListComboBox->FormattingEnabled = true;
			   this->accountAddressListComboBox->Location = System::Drawing::Point(26, 298);
			   this->accountAddressListComboBox->Name = L"accountAddressListComboBox";
			   this->accountAddressListComboBox->Size = System::Drawing::Size(367, 24);
			   this->accountAddressListComboBox->TabIndex = 26;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->Location = System::Drawing::Point(20, 245);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(126, 32);
			   this->label6->TabIndex = 25;
			   this->label6->Text = L"Address";
			   // 
			   // Information
			   // 
			   this->Information->AutoSize = true;
			   this->Information->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Information->Location = System::Drawing::Point(20, 22);
			   this->Information->Name = L"Information";
			   this->Information->Size = System::Drawing::Size(183, 32);
			   this->Information->TabIndex = 24;
			   this->Information->Text = L"Informations";
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ButtonFace;
			   this->ClientSize = System::Drawing::Size(1396, 596);
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
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accountAddressPostalNumericUpDown))->EndInit();
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

		}
		DataTableReaderTest->Close();
	}

	private: System::Void enableAccountModifyButton(System::Object^ sender, System::EventArgs^ e) {
		this->accountModifyButton->Enabled = true;
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
		addressManager->deleteElement(int::Parse(this->accountAddressListComboBox->SelectedValue->ToString()));
		refreshAddressList();
	}
	};
}