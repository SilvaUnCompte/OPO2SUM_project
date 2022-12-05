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


	private: System::Windows::Forms::Label^ Information;

	private:
		Account^ connectedAccount;
		AddressManager^ addressManager = gcnew AddressManager();
		ContainManager^ containManager = gcnew ContainManager();
		ProductManager^ productManager = gcnew ProductManager();
		OrderManager^ orderManager = gcnew OrderManager();
		BillManager^ billManager = gcnew BillManager();
	private: System::Windows::Forms::ComboBox^ simulationDiscountComboBox;
	private: System::Windows::Forms::ComboBox^ simulationMarkdownComboBox;


	private: System::Windows::Forms::Label^ simulationResultLabel;






	private: System::Windows::Forms::ComboBox^ simulationTVAComboBox;
	private: System::Windows::Forms::ComboBox^ simulationMargeComboBox;


	private: System::Windows::Forms::TextBox^ simulationEntryPriceTextBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ afficherPage;




















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
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->simulationMarkdownComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->simulationResultLabel = (gcnew System::Windows::Forms::Label());
			   this->simulationTVAComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->simulationMargeComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->simulationEntryPriceTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->simulationDiscountComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->Information = (gcnew System::Windows::Forms::Label());
			   this->afficherPage = (gcnew System::Windows::Forms::Button());
			   this->loginPanel->SuspendLayout();
			   this->registerPanel->SuspendLayout();
			   this->panel1->SuspendLayout();
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
			   this->panel1->Controls->Add(this->label5);
			   this->panel1->Controls->Add(this->label4);
			   this->panel1->Controls->Add(this->label3);
			   this->panel1->Controls->Add(this->label2);
			   this->panel1->Controls->Add(this->label1);
			   this->panel1->Controls->Add(this->simulationMarkdownComboBox);
			   this->panel1->Controls->Add(this->simulationResultLabel);
			   this->panel1->Controls->Add(this->simulationTVAComboBox);
			   this->panel1->Controls->Add(this->simulationMargeComboBox);
			   this->panel1->Controls->Add(this->simulationEntryPriceTextBox);
			   this->panel1->Controls->Add(this->simulationDiscountComboBox);
			   this->panel1->Controls->Add(this->Information);
			   this->panel1->Location = System::Drawing::Point(450, 12);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(697, 463);
			   this->panel1->TabIndex = 24;
			   // 
			   // label5
			   // 
			   this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(499, 128);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(171, 17);
			   this->label5->TabIndex = 51;
			   this->label5->Text = L"Unknow Markdown (%)";
			   // 
			   // label4
			   // 
			   this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(392, 128);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(101, 17);
			   this->label4->TabIndex = 50;
			   this->label4->Text = L"Discount (%)";
			   // 
			   // label3
			   // 
			   this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(289, 128);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(83, 17);
			   this->label3->TabIndex = 49;
			   this->label3->Text = L"Marge (%)";
			   // 
			   // label2
			   // 
			   this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(202, 128);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(68, 17);
			   this->label2->TabIndex = 48;
			   this->label2->Text = L"TVA (%)";
			   // 
			   // label1
			   // 
			   this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(38, 128);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(94, 17);
			   this->label1->TabIndex = 47;
			   this->label1->Text = L"Stock Value";
			   // 
			   // simulationMarkdownComboBox
			   // 
			   this->simulationMarkdownComboBox->FormattingEnabled = true;
			   this->simulationMarkdownComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"0", L"2", L"3", L"5" });
			   this->simulationMarkdownComboBox->Location = System::Drawing::Point(522, 152);
			   this->simulationMarkdownComboBox->Name = L"simulationMarkdownComboBox";
			   this->simulationMarkdownComboBox->Size = System::Drawing::Size(80, 24);
			   this->simulationMarkdownComboBox->TabIndex = 46;
			   this->simulationMarkdownComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::simulationEntryPriceTextBox_TextChanged);
			   // 
			   // simulationResultLabel
			   // 
			   this->simulationResultLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->simulationResultLabel->AutoSize = true;
			   this->simulationResultLabel->Location = System::Drawing::Point(499, 220);
			   this->simulationResultLabel->Name = L"simulationResultLabel";
			   this->simulationResultLabel->Size = System::Drawing::Size(49, 17);
			   this->simulationResultLabel->TabIndex = 18;
			   this->simulationResultLabel->Text = L"result";
			   // 
			   // simulationTVAComboBox
			   // 
			   this->simulationTVAComboBox->FormattingEnabled = true;
			   this->simulationTVAComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"0", L"5,5", L"10", L"20" });
			   this->simulationTVAComboBox->Location = System::Drawing::Point(190, 150);
			   this->simulationTVAComboBox->Name = L"simulationTVAComboBox";
			   this->simulationTVAComboBox->Size = System::Drawing::Size(80, 24);
			   this->simulationTVAComboBox->TabIndex = 45;
			   this->simulationTVAComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::simulationEntryPriceTextBox_TextChanged);
			   // 
			   // simulationMargeComboBox
			   // 
			   this->simulationMargeComboBox->FormattingEnabled = true;
			   this->simulationMargeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"0", L"5", L"10", L"15" });
			   this->simulationMargeComboBox->Location = System::Drawing::Point(292, 152);
			   this->simulationMargeComboBox->Name = L"simulationMargeComboBox";
			   this->simulationMargeComboBox->Size = System::Drawing::Size(80, 24);
			   this->simulationMargeComboBox->TabIndex = 44;
			   this->simulationMargeComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::simulationEntryPriceTextBox_TextChanged);
			   // 
			   // simulationEntryPriceTextBox
			   // 
			   this->simulationEntryPriceTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->simulationEntryPriceTextBox->Location = System::Drawing::Point(26, 152);
			   this->simulationEntryPriceTextBox->Name = L"simulationEntryPriceTextBox";
			   this->simulationEntryPriceTextBox->Size = System::Drawing::Size(154, 22);
			   this->simulationEntryPriceTextBox->TabIndex = 18;
			   this->simulationEntryPriceTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::simulationEntryPriceTextBox_TextChanged);
			   // 
			   // simulationDiscountComboBox
			   // 
			   this->simulationDiscountComboBox->FormattingEnabled = true;
			   this->simulationDiscountComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0", L"5", L"6" });
			   this->simulationDiscountComboBox->Location = System::Drawing::Point(395, 152);
			   this->simulationDiscountComboBox->Name = L"simulationDiscountComboBox";
			   this->simulationDiscountComboBox->Size = System::Drawing::Size(80, 24);
			   this->simulationDiscountComboBox->TabIndex = 43;
			   this->simulationDiscountComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::simulationEntryPriceTextBox_TextChanged);
			   // 
			   // Information
			   // 
			   this->Information->AutoSize = true;
			   this->Information->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Information->Location = System::Drawing::Point(20, 22);
			   this->Information->Name = L"Information";
			   this->Information->Size = System::Drawing::Size(160, 32);
			   this->Information->TabIndex = 24;
			   this->Information->Text = L"Simulation";
			   // 
			   // afficherPage
			   // 
			   this->afficherPage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->afficherPage->Location = System::Drawing::Point(1221, 255);
			   this->afficherPage->Name = L"afficherPage";
			   this->afficherPage->Size = System::Drawing::Size(87, 34);
			   this->afficherPage->TabIndex = 25;
			   this->afficherPage->Text = L"Show";
			   this->afficherPage->UseVisualStyleBackColor = true;
			   this->afficherPage->Click += gcnew System::EventHandler(this, &MyForm::afficherPage_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ButtonFace;
			   this->ClientSize = System::Drawing::Size(1375, 526);
			   this->Controls->Add(this->afficherPage);
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

	private: System::Void simulationEntryPriceTextBox_Invalide() {
		this->simulationResultLabel->Text = "Invalide entry";
		this->simulationResultLabel->ForeColor = Color::Red;
	}
	private: System::Void simulationEntryPriceTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		float total_cost;
		float tva;
		float marge;
		float discount;
		float markdown;

		try { total_cost = float::Parse(this->simulationEntryPriceTextBox->Text); }
		catch (...) {
			try { total_cost = float::Parse(this->simulationEntryPriceTextBox->Text, System::Globalization::CultureInfo::CreateSpecificCulture("en-US")); }
			catch (...) { simulationEntryPriceTextBox_Invalide();	return; }
		}
		try { tva = float::Parse(this->simulationTVAComboBox->Text) / 100; }
		catch (...) {
			try { tva = (float::Parse(this->simulationTVAComboBox->Text, System::Globalization::CultureInfo::CreateSpecificCulture("en-US")) / 100); }
			catch (...) { simulationEntryPriceTextBox_Invalide();	return; }
		}
		try { marge = float::Parse(this->simulationMargeComboBox->Text) / 100; }
		catch (...) {
			try { marge = float::Parse(this->simulationMargeComboBox->Text, System::Globalization::CultureInfo::CreateSpecificCulture("en-US")) / 100; }
			catch (...) { simulationEntryPriceTextBox_Invalide();	return; }
		}
		try { discount = float::Parse(this->simulationDiscountComboBox->Text) / 100; }
		catch (...) {
			try { discount = float::Parse(this->simulationDiscountComboBox->Text, System::Globalization::CultureInfo::CreateSpecificCulture("en-US")) / 100; }
			catch (...) { simulationEntryPriceTextBox_Invalide();	return; }
		}
		try { markdown = float::Parse(this->simulationMarkdownComboBox->Text) / 100; }
		catch (...) {
			try { markdown = float::Parse(this->simulationMarkdownComboBox->Text, System::Globalization::CultureInfo::CreateSpecificCulture("en-US")) / 100; }
			catch (...) { simulationEntryPriceTextBox_Invalide();	return; }
		}

		MessageBox::Show(marge.ToString() + " | " + discount.ToString() + " | " + markdown.ToString() + " | " + tva.ToString());

		this->simulationResultLabel->ForeColor = Color::Black;
		this->simulationResultLabel->Text = ((((total_cost * (1 + marge)) * (1 - discount)) * (1 - markdown)) * (1 + tva)).ToString();
	}
	private: System::Void afficherPage_Click(System::Object^ sender, System::EventArgs^ e) {
		AccessData^ Adata = gcnew AccessData;
		DataSet^ total_cost_dataset = Adata->getRows("Select sum(cost_product*stock_product) as pp FROM product", "temp2");
		DataTable^ total_cost_datatable = total_cost_dataset->Tables[0];
		DataRow^ drow = total_cost_datatable->Rows[0];
		this->simulationEntryPriceTextBox->Text = drow[0]->ToString();
	}
	};
}