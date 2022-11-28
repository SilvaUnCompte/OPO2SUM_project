#pragma once
#include "AccessData.h"
#include "DataManager.h"

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
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
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
	private: System::Windows::Forms::Panel^ statisticMPanel;

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


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ testButton;
private: System::Windows::Forms::Button^ orderMFilterButton;
private: System::Windows::Forms::Button^ stockMFilterButton;
private: System::Windows::Forms::Label^ stockMLabel;
private: System::Windows::Forms::Panel^ informationStockPanel;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ addStockStockLabel;

private: System::Windows::Forms::Label^ addStockTVALabel;
private: System::Windows::Forms::Label^ addStockPriceLabel;
private: System::Windows::Forms::Label^ addStockCostLabel;
private: System::Windows::Forms::TextBox^ addStockCostTextBox;

private: System::Windows::Forms::Label^ addStockRestockingLabel;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox5;








	private: System::ComponentModel::IContainer^ components;

	protected:


	private:
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
			this->components = (gcnew System::ComponentModel::Container());
			this->loginPanel = (gcnew System::Windows::Forms::Panel());
			this->loginValidateButton = (gcnew System::Windows::Forms::Button());
			this->loginRegisterButton = (gcnew System::Windows::Forms::Button());
			this->loginPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->loginPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginUsernameLabel = (gcnew System::Windows::Forms::Label());
			this->loginLoginLabel = (gcnew System::Windows::Forms::Label());
			this->registerPanel = (gcnew System::Windows::Forms::Panel());
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
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->managerTablePanel = (gcnew System::Windows::Forms::Panel());
			this->managerTabControl = (gcnew System::Windows::Forms::TabControl());
			this->clientMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->orderMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->orderMPanel = (gcnew System::Windows::Forms::Panel());
			this->orderMSearchButton = (gcnew System::Windows::Forms::Button());
			this->orderMFilterButton = (gcnew System::Windows::Forms::Button());
			this->orderMAddButton = (gcnew System::Windows::Forms::Button());
			this->orderMModifyButton = (gcnew System::Windows::Forms::Button());
			this->orderMDeleteButton = (gcnew System::Windows::Forms::Button());
			this->orderMDGV = (gcnew System::Windows::Forms::DataGridView());
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
			this->stockMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->statisticMTabPage = (gcnew System::Windows::Forms::TabPage());
			this->statisticMPanel = (gcnew System::Windows::Forms::Panel());
			this->addStockPanel = (gcnew System::Windows::Forms::Panel());
			this->addStockCostTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addStockRestockingLabel = (gcnew System::Windows::Forms::Label());
			this->addStockStockLabel = (gcnew System::Windows::Forms::Label());
			this->addStockTVALabel = (gcnew System::Windows::Forms::Label());
			this->addStockPriceLabel = (gcnew System::Windows::Forms::Label());
			this->addStockCostLabel = (gcnew System::Windows::Forms::Label());
			this->addStockValidateButton = (gcnew System::Windows::Forms::Button());
			this->addStockQuantityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addStockNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addStockQuantityLabel = (gcnew System::Windows::Forms::Label());
			this->addStockNameLabel = (gcnew System::Windows::Forms::Label());
			this->addStockTitleLabel = (gcnew System::Windows::Forms::Label());
			this->addStockExitButton = (gcnew System::Windows::Forms::Button());
			this->stockMPanel = (gcnew System::Windows::Forms::Panel());
			this->stockMLabel = (gcnew System::Windows::Forms::Label());
			this->stockMFilterButton = (gcnew System::Windows::Forms::Button());
			this->stockMAddButton = (gcnew System::Windows::Forms::Button());
			this->stockMDGV = (gcnew System::Windows::Forms::DataGridView());
			this->informationStockModifyButton = (gcnew System::Windows::Forms::Button());
			this->informationStockDeleteButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->testButton = (gcnew System::Windows::Forms::Button());
			this->informationStockPanel = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->loginPanel->SuspendLayout();
			this->registerPanel->SuspendLayout();
			this->clientMPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientMDGV))->BeginInit();
			this->managerTablePanel->SuspendLayout();
			this->managerTabControl->SuspendLayout();
			this->clientMTabPage->SuspendLayout();
			this->orderMTabPage->SuspendLayout();
			this->orderMPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderMDGV))->BeginInit();
			this->addOrderPanel->SuspendLayout();
			this->statisticMTabPage->SuspendLayout();
			this->addStockPanel->SuspendLayout();
			this->stockMPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stockMDGV))->BeginInit();
			this->informationStockPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// loginPanel
			// 
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
			this->registerPanel->Controls->Add(this->registerValidateButton);
			this->registerPanel->Controls->Add(this->registerLoginButton);
			this->registerPanel->Controls->Add(this->registerPasswordLabel);
			this->registerPanel->Controls->Add(this->registerPasswordTextBox);
			this->registerPanel->Controls->Add(this->registerUsernameTextBox);
			this->registerPanel->Controls->Add(this->registerUsernameLabel);
			this->registerPanel->Controls->Add(this->registerRegisterLabel);
			this->registerPanel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->registerPanel->Location = System::Drawing::Point(10, 13);
			this->registerPanel->Name = L"registerPanel";
			this->registerPanel->Size = System::Drawing::Size(419, 462);
			this->registerPanel->TabIndex = 12;
			// 
			// registerValidateButton
			// 
			this->registerValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->registerValidateButton->Location = System::Drawing::Point(164, 358);
			this->registerValidateButton->Name = L"registerValidateButton";
			this->registerValidateButton->Size = System::Drawing::Size(87, 34);
			this->registerValidateButton->TabIndex = 11;
			this->registerValidateButton->Text = L"Validate";
			this->registerValidateButton->UseVisualStyleBackColor = true;
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
			this->registerPasswordLabel->Location = System::Drawing::Point(6, 173);
			this->registerPasswordLabel->Name = L"registerPasswordLabel";
			this->registerPasswordLabel->Size = System::Drawing::Size(77, 17);
			this->registerPasswordLabel->TabIndex = 4;
			this->registerPasswordLabel->Text = L"Password";
			// 
			// registerPasswordTextBox
			// 
			this->registerPasswordTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerPasswordTextBox->Location = System::Drawing::Point(85, 170);
			this->registerPasswordTextBox->Name = L"registerPasswordTextBox";
			this->registerPasswordTextBox->Size = System::Drawing::Size(165, 22);
			this->registerPasswordTextBox->TabIndex = 3;
			// 
			// registerUsernameTextBox
			// 
			this->registerUsernameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerUsernameTextBox->Location = System::Drawing::Point(85, 132);
			this->registerUsernameTextBox->Name = L"registerUsernameTextBox";
			this->registerUsernameTextBox->Size = System::Drawing::Size(165, 22);
			this->registerUsernameTextBox->TabIndex = 2;
			// 
			// registerUsernameLabel
			// 
			this->registerUsernameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerUsernameLabel->AutoSize = true;
			this->registerUsernameLabel->Location = System::Drawing::Point(3, 135);
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
			this->clientMPanel->Location = System::Drawing::Point(6, 6);
			this->clientMPanel->Name = L"clientMPanel";
			this->clientMPanel->Size = System::Drawing::Size(453, 475);
			this->clientMPanel->TabIndex = 4;
			// 
			// clientMModifyButton
			// 
			this->clientMModifyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMModifyButton->Location = System::Drawing::Point(274, 437);
			this->clientMModifyButton->Name = L"clientMModifyButton";
			this->clientMModifyButton->Size = System::Drawing::Size(85, 34);
			this->clientMModifyButton->TabIndex = 10;
			this->clientMModifyButton->Text = L"Modify";
			this->clientMModifyButton->UseVisualStyleBackColor = true;
			// 
			// clientMDeleteButton
			// 
			this->clientMDeleteButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMDeleteButton->Location = System::Drawing::Point(365, 437);
			this->clientMDeleteButton->Name = L"clientMDeleteButton";
			this->clientMDeleteButton->Size = System::Drawing::Size(85, 34);
			this->clientMDeleteButton->TabIndex = 9;
			this->clientMDeleteButton->Text = L"Delete";
			this->clientMDeleteButton->UseVisualStyleBackColor = true;
			// 
			// clientMFNameTextBox
			// 
			this->clientMFNameTextBox->Location = System::Drawing::Point(103, 39);
			this->clientMFNameTextBox->Name = L"clientMFNameTextBox";
			this->clientMFNameTextBox->Size = System::Drawing::Size(115, 22);
			this->clientMFNameTextBox->TabIndex = 6;
			// 
			// clientMLNameTextBox
			// 
			this->clientMLNameTextBox->Location = System::Drawing::Point(103, 69);
			this->clientMLNameTextBox->Name = L"clientMLNameTextBox";
			this->clientMLNameTextBox->Size = System::Drawing::Size(115, 22);
			this->clientMLNameTextBox->TabIndex = 7;
			// 
			// clientMCityTextBox
			// 
			this->clientMCityTextBox->Location = System::Drawing::Point(103, 101);
			this->clientMCityTextBox->Name = L"clientMCityTextBox";
			this->clientMCityTextBox->Size = System::Drawing::Size(115, 22);
			this->clientMCityTextBox->TabIndex = 8;
			// 
			// clientMDGV
			// 
			this->clientMDGV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->clientMDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->clientMDGV->Location = System::Drawing::Point(3, 271);
			this->clientMDGV->Name = L"clientMDGV";
			this->clientMDGV->RowHeadersWidth = 51;
			this->clientMDGV->RowTemplate->Height = 24;
			this->clientMDGV->Size = System::Drawing::Size(447, 160);
			this->clientMDGV->TabIndex = 0;
			// 
			// clientMSearchButton
			// 
			this->clientMSearchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clientMSearchButton->Location = System::Drawing::Point(365, 231);
			this->clientMSearchButton->Name = L"clientMSearchButton";
			this->clientMSearchButton->Size = System::Drawing::Size(85, 34);
			this->clientMSearchButton->TabIndex = 1;
			this->clientMSearchButton->Text = L"Search";
			this->clientMSearchButton->UseVisualStyleBackColor = true;
			// 
			// clientMCityLabel
			// 
			this->clientMCityLabel->AutoSize = true;
			this->clientMCityLabel->Location = System::Drawing::Point(3, 104);
			this->clientMCityLabel->Name = L"clientMCityLabel";
			this->clientMCityLabel->Size = System::Drawing::Size(45, 17);
			this->clientMCityLabel->TabIndex = 5;
			this->clientMCityLabel->Text = L"City :";
			// 
			// clientMFNameLabel
			// 
			this->clientMFNameLabel->AutoSize = true;
			this->clientMFNameLabel->Location = System::Drawing::Point(3, 42);
			this->clientMFNameLabel->Name = L"clientMFNameLabel";
			this->clientMFNameLabel->Size = System::Drawing::Size(94, 17);
			this->clientMFNameLabel->TabIndex = 3;
			this->clientMFNameLabel->Text = L"First name :";
			// 
			// clientMLNameLabel
			// 
			this->clientMLNameLabel->AutoSize = true;
			this->clientMLNameLabel->Location = System::Drawing::Point(3, 72);
			this->clientMLNameLabel->Name = L"clientMLNameLabel";
			this->clientMLNameLabel->Size = System::Drawing::Size(93, 17);
			this->clientMLNameLabel->TabIndex = 4;
			this->clientMLNameLabel->Text = L"Last name :";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// managerTablePanel
			// 
			this->managerTablePanel->Controls->Add(this->managerTabControl);
			this->managerTablePanel->Location = System::Drawing::Point(434, 13);
			this->managerTablePanel->Name = L"managerTablePanel";
			this->managerTablePanel->Size = System::Drawing::Size(479, 522);
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
			this->managerTabControl->Location = System::Drawing::Point(3, 3);
			this->managerTabControl->Name = L"managerTabControl";
			this->managerTabControl->SelectedIndex = 0;
			this->managerTabControl->Size = System::Drawing::Size(473, 516);
			this->managerTabControl->TabIndex = 0;
			// 
			// clientMTabPage
			// 
			this->clientMTabPage->Controls->Add(this->clientMPanel);
			this->clientMTabPage->Location = System::Drawing::Point(4, 25);
			this->clientMTabPage->Name = L"clientMTabPage";
			this->clientMTabPage->Padding = System::Windows::Forms::Padding(3);
			this->clientMTabPage->Size = System::Drawing::Size(465, 487);
			this->clientMTabPage->TabIndex = 0;
			this->clientMTabPage->Text = L"Client";
			this->clientMTabPage->UseVisualStyleBackColor = true;
			// 
			// orderMTabPage
			// 
			this->orderMTabPage->Controls->Add(this->orderMPanel);
			this->orderMTabPage->Controls->Add(this->addOrderPanel);
			this->orderMTabPage->Location = System::Drawing::Point(4, 25);
			this->orderMTabPage->Name = L"orderMTabPage";
			this->orderMTabPage->Padding = System::Windows::Forms::Padding(3);
			this->orderMTabPage->Size = System::Drawing::Size(412, 427);
			this->orderMTabPage->TabIndex = 1;
			this->orderMTabPage->Text = L"Order";
			this->orderMTabPage->UseVisualStyleBackColor = true;
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
			this->orderMPanel->Location = System::Drawing::Point(6, 6);
			this->orderMPanel->Name = L"orderMPanel";
			this->orderMPanel->Size = System::Drawing::Size(400, 415);
			this->orderMPanel->TabIndex = 0;
			// 
			// orderMSearchButton
			// 
			this->orderMSearchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->orderMSearchButton->Location = System::Drawing::Point(321, 3);
			this->orderMSearchButton->Name = L"orderMSearchButton";
			this->orderMSearchButton->Size = System::Drawing::Size(76, 34);
			this->orderMSearchButton->TabIndex = 8;
			this->orderMSearchButton->Text = L"Search";
			this->orderMSearchButton->UseVisualStyleBackColor = true;
			// 
			// orderMFilterButton
			// 
			this->orderMFilterButton->Location = System::Drawing::Point(3, 3);
			this->orderMFilterButton->Name = L"orderMFilterButton";
			this->orderMFilterButton->Size = System::Drawing::Size(75, 34);
			this->orderMFilterButton->TabIndex = 9;
			this->orderMFilterButton->Text = L"Filter";
			this->orderMFilterButton->UseVisualStyleBackColor = true;
			// 
			// orderMAddButton
			// 
			this->orderMAddButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->orderMAddButton->Location = System::Drawing::Point(187, 378);
			this->orderMAddButton->Name = L"orderMAddButton";
			this->orderMAddButton->Size = System::Drawing::Size(66, 34);
			this->orderMAddButton->TabIndex = 7;
			this->orderMAddButton->Text = L"Add";
			this->orderMAddButton->UseVisualStyleBackColor = true;
			this->orderMAddButton->Click += gcnew System::EventHandler(this, &MyForm::orderMAddButton_Click);
			// 
			// orderMModifyButton
			// 
			this->orderMModifyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->orderMModifyButton->Location = System::Drawing::Point(259, 378);
			this->orderMModifyButton->Name = L"orderMModifyButton";
			this->orderMModifyButton->Size = System::Drawing::Size(66, 34);
			this->orderMModifyButton->TabIndex = 6;
			this->orderMModifyButton->Text = L"Modify";
			this->orderMModifyButton->UseVisualStyleBackColor = true;
			// 
			// orderMDeleteButton
			// 
			this->orderMDeleteButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->orderMDeleteButton->Location = System::Drawing::Point(331, 378);
			this->orderMDeleteButton->Name = L"orderMDeleteButton";
			this->orderMDeleteButton->Size = System::Drawing::Size(66, 34);
			this->orderMDeleteButton->TabIndex = 1;
			this->orderMDeleteButton->Text = L"Delete";
			this->orderMDeleteButton->UseVisualStyleBackColor = true;
			// 
			// orderMDGV
			// 
			this->orderMDGV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->orderMDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->orderMDGV->Location = System::Drawing::Point(3, 43);
			this->orderMDGV->Name = L"orderMDGV";
			this->orderMDGV->RowHeadersWidth = 51;
			this->orderMDGV->RowTemplate->Height = 24;
			this->orderMDGV->Size = System::Drawing::Size(394, 329);
			this->orderMDGV->TabIndex = 0;
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
			this->addOrderPanel->Location = System::Drawing::Point(6, 6);
			this->addOrderPanel->Name = L"addOrderPanel";
			this->addOrderPanel->Size = System::Drawing::Size(400, 415);
			this->addOrderPanel->TabIndex = 9;
			// 
			// addOrderValidateButton
			// 
			this->addOrderValidateButton->Location = System::Drawing::Point(231, 289);
			this->addOrderValidateButton->Name = L"addOrderValidateButton";
			this->addOrderValidateButton->Size = System::Drawing::Size(99, 37);
			this->addOrderValidateButton->TabIndex = 8;
			this->addOrderValidateButton->Text = L"Validate";
			this->addOrderValidateButton->UseVisualStyleBackColor = true;
			// 
			// addOrderDateTextBox
			// 
			this->addOrderDateTextBox->Location = System::Drawing::Point(6, 176);
			this->addOrderDateTextBox->Name = L"addOrderDateTextBox";
			this->addOrderDateTextBox->Size = System::Drawing::Size(117, 22);
			this->addOrderDateTextBox->TabIndex = 7;
			// 
			// addOrderLNameTextBox
			// 
			this->addOrderLNameTextBox->Location = System::Drawing::Point(6, 128);
			this->addOrderLNameTextBox->Name = L"addOrderLNameTextBox";
			this->addOrderLNameTextBox->Size = System::Drawing::Size(117, 22);
			this->addOrderLNameTextBox->TabIndex = 6;
			// 
			// addOrderFNameTextBox
			// 
			this->addOrderFNameTextBox->Location = System::Drawing::Point(6, 79);
			this->addOrderFNameTextBox->Name = L"addOrderFNameTextBox";
			this->addOrderFNameTextBox->Size = System::Drawing::Size(117, 22);
			this->addOrderFNameTextBox->TabIndex = 5;
			// 
			// addOrderDateLabe
			// 
			this->addOrderDateLabe->AutoSize = true;
			this->addOrderDateLabe->Location = System::Drawing::Point(3, 154);
			this->addOrderDateLabe->Name = L"addOrderDateLabe";
			this->addOrderDateLabe->Size = System::Drawing::Size(42, 17);
			this->addOrderDateLabe->TabIndex = 4;
			this->addOrderDateLabe->Text = L"Date";
			// 
			// addOrderLNameLabel
			// 
			this->addOrderLNameLabel->AutoSize = true;
			this->addOrderLNameLabel->Location = System::Drawing::Point(3, 105);
			this->addOrderLNameLabel->Name = L"addOrderLNameLabel";
			this->addOrderLNameLabel->Size = System::Drawing::Size(85, 17);
			this->addOrderLNameLabel->TabIndex = 3;
			this->addOrderLNameLabel->Text = L"Last Name";
			// 
			// addOrderFNameLabel
			// 
			this->addOrderFNameLabel->AutoSize = true;
			this->addOrderFNameLabel->Location = System::Drawing::Point(3, 57);
			this->addOrderFNameLabel->Name = L"addOrderFNameLabel";
			this->addOrderFNameLabel->Size = System::Drawing::Size(86, 17);
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
			this->addOrderTitleLabel->Location = System::Drawing::Point(104, 3);
			this->addOrderTitleLabel->Name = L"addOrderTitleLabel";
			this->addOrderTitleLabel->Size = System::Drawing::Size(177, 38);
			this->addOrderTitleLabel->TabIndex = 1;
			this->addOrderTitleLabel->Text = L"Add Order";
			// 
			// addOrderExitButton
			// 
			this->addOrderExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->addOrderExitButton->Location = System::Drawing::Point(376, 3);
			this->addOrderExitButton->Name = L"addOrderExitButton";
			this->addOrderExitButton->Size = System::Drawing::Size(22, 24);
			this->addOrderExitButton->TabIndex = 0;
			this->addOrderExitButton->Text = L"X";
			this->addOrderExitButton->UseVisualStyleBackColor = true;
			this->addOrderExitButton->Click += gcnew System::EventHandler(this, &MyForm::addOrderExitButton_Click);
			// 
			// stockMTabPage
			// 
			this->stockMTabPage->Location = System::Drawing::Point(4, 25);
			this->stockMTabPage->Name = L"stockMTabPage";
			this->stockMTabPage->Padding = System::Windows::Forms::Padding(3);
			this->stockMTabPage->Size = System::Drawing::Size(412, 427);
			this->stockMTabPage->TabIndex = 2;
			this->stockMTabPage->Text = L"Stock";
			this->stockMTabPage->UseVisualStyleBackColor = true;
			// 
			// statisticMTabPage
			// 
			this->statisticMTabPage->Controls->Add(this->statisticMPanel);
			this->statisticMTabPage->Location = System::Drawing::Point(4, 25);
			this->statisticMTabPage->Name = L"statisticMTabPage";
			this->statisticMTabPage->Padding = System::Windows::Forms::Padding(3);
			this->statisticMTabPage->Size = System::Drawing::Size(412, 427);
			this->statisticMTabPage->TabIndex = 3;
			this->statisticMTabPage->Text = L"Statistic";
			this->statisticMTabPage->UseVisualStyleBackColor = true;
			// 
			// statisticMPanel
			// 
			this->statisticMPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->statisticMPanel->Location = System::Drawing::Point(6, 6);
			this->statisticMPanel->Name = L"statisticMPanel";
			this->statisticMPanel->Size = System::Drawing::Size(402, 412);
			this->statisticMPanel->TabIndex = 3;
			// 
			// addStockPanel
			// 
			this->addStockPanel->Controls->Add(this->textBox5);
			this->addStockPanel->Controls->Add(this->textBox4);
			this->addStockPanel->Controls->Add(this->textBox3);
			this->addStockPanel->Controls->Add(this->textBox2);
			this->addStockPanel->Controls->Add(this->addStockCostTextBox);
			this->addStockPanel->Controls->Add(this->addStockRestockingLabel);
			this->addStockPanel->Controls->Add(this->addStockStockLabel);
			this->addStockPanel->Controls->Add(this->addStockTVALabel);
			this->addStockPanel->Controls->Add(this->addStockPriceLabel);
			this->addStockPanel->Controls->Add(this->addStockCostLabel);
			this->addStockPanel->Controls->Add(this->addStockValidateButton);
			this->addStockPanel->Controls->Add(this->addStockQuantityTextBox);
			this->addStockPanel->Controls->Add(this->addStockNameTextBox);
			this->addStockPanel->Controls->Add(this->addStockQuantityLabel);
			this->addStockPanel->Controls->Add(this->addStockNameLabel);
			this->addStockPanel->Controls->Add(this->addStockTitleLabel);
			this->addStockPanel->Controls->Add(this->addStockExitButton);
			this->addStockPanel->Location = System::Drawing::Point(1326, 552);
			this->addStockPanel->Name = L"addStockPanel";
			this->addStockPanel->Size = System::Drawing::Size(413, 472);
			this->addStockPanel->TabIndex = 9;
			this->addStockPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::addStockPanel_Paint);
			// 
			// addStockCostTextBox
			// 
			this->addStockCostTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockCostTextBox->Location = System::Drawing::Point(3, 188);
			this->addStockCostTextBox->Name = L"addStockCostTextBox";
			this->addStockCostTextBox->Size = System::Drawing::Size(407, 22);
			this->addStockCostTextBox->TabIndex = 14;
			// 
			// addStockRestockingLabel
			// 
			this->addStockRestockingLabel->AutoSize = true;
			this->addStockRestockingLabel->Location = System::Drawing::Point(3, 348);
			this->addStockRestockingLabel->Name = L"addStockRestockingLabel";
			this->addStockRestockingLabel->Size = System::Drawing::Size(161, 17);
			this->addStockRestockingLabel->TabIndex = 13;
			this->addStockRestockingLabel->Text = L"Restocking threshold";
			// 
			// addStockStockLabel
			// 
			this->addStockStockLabel->AutoSize = true;
			this->addStockStockLabel->Location = System::Drawing::Point(3, 303);
			this->addStockStockLabel->Name = L"addStockStockLabel";
			this->addStockStockLabel->Size = System::Drawing::Size(48, 17);
			this->addStockStockLabel->TabIndex = 12;
			this->addStockStockLabel->Text = L"Stock";
			// 
			// addStockTVALabel
			// 
			this->addStockTVALabel->AutoSize = true;
			this->addStockTVALabel->Location = System::Drawing::Point(3, 258);
			this->addStockTVALabel->Name = L"addStockTVALabel";
			this->addStockTVALabel->Size = System::Drawing::Size(38, 17);
			this->addStockTVALabel->TabIndex = 11;
			this->addStockTVALabel->Text = L"TVA";
			// 
			// addStockPriceLabel
			// 
			this->addStockPriceLabel->AutoSize = true;
			this->addStockPriceLabel->Location = System::Drawing::Point(3, 213);
			this->addStockPriceLabel->Name = L"addStockPriceLabel";
			this->addStockPriceLabel->Size = System::Drawing::Size(45, 17);
			this->addStockPriceLabel->TabIndex = 10;
			this->addStockPriceLabel->Text = L"Price";
			// 
			// addStockCostLabel
			// 
			this->addStockCostLabel->AutoSize = true;
			this->addStockCostLabel->Location = System::Drawing::Point(3, 168);
			this->addStockCostLabel->Name = L"addStockCostLabel";
			this->addStockCostLabel->Size = System::Drawing::Size(40, 17);
			this->addStockCostLabel->TabIndex = 9;
			this->addStockCostLabel->Text = L"Cost";
			// 
			// addStockValidateButton
			// 
			this->addStockValidateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->addStockValidateButton->Location = System::Drawing::Point(311, 429);
			this->addStockValidateButton->Name = L"addStockValidateButton";
			this->addStockValidateButton->Size = System::Drawing::Size(99, 37);
			this->addStockValidateButton->TabIndex = 8;
			this->addStockValidateButton->Text = L"Validate";
			this->addStockValidateButton->UseVisualStyleBackColor = true;
			// 
			// addStockQuantityTextBox
			// 
			this->addStockQuantityTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockQuantityTextBox->Location = System::Drawing::Point(3, 143);
			this->addStockQuantityTextBox->Name = L"addStockQuantityTextBox";
			this->addStockQuantityTextBox->Size = System::Drawing::Size(407, 22);
			this->addStockQuantityTextBox->TabIndex = 7;
			// 
			// addStockNameTextBox
			// 
			this->addStockNameTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addStockNameTextBox->Location = System::Drawing::Point(3, 98);
			this->addStockNameTextBox->Name = L"addStockNameTextBox";
			this->addStockNameTextBox->Size = System::Drawing::Size(407, 22);
			this->addStockNameTextBox->TabIndex = 5;
			this->addStockNameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::addStockNameTextBox_TextChanged);
			// 
			// addStockQuantityLabel
			// 
			this->addStockQuantityLabel->AutoSize = true;
			this->addStockQuantityLabel->Location = System::Drawing::Point(3, 123);
			this->addStockQuantityLabel->Name = L"addStockQuantityLabel";
			this->addStockQuantityLabel->Size = System::Drawing::Size(69, 17);
			this->addStockQuantityLabel->TabIndex = 4;
			this->addStockQuantityLabel->Text = L"Quantity";
			// 
			// addStockNameLabel
			// 
			this->addStockNameLabel->AutoSize = true;
			this->addStockNameLabel->Location = System::Drawing::Point(3, 78);
			this->addStockNameLabel->Name = L"addStockNameLabel";
			this->addStockNameLabel->Size = System::Drawing::Size(128, 17);
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
			this->addStockTitleLabel->Location = System::Drawing::Point(125, 21);
			this->addStockTitleLabel->Name = L"addStockTitleLabel";
			this->addStockTitleLabel->Size = System::Drawing::Size(167, 38);
			this->addStockTitleLabel->TabIndex = 1;
			this->addStockTitleLabel->Text = L"Add Stock";
			// 
			// addStockExitButton
			// 
			this->addStockExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->addStockExitButton->Location = System::Drawing::Point(389, 3);
			this->addStockExitButton->Name = L"addStockExitButton";
			this->addStockExitButton->Size = System::Drawing::Size(22, 24);
			this->addStockExitButton->TabIndex = 0;
			this->addStockExitButton->Text = L"X";
			this->addStockExitButton->UseVisualStyleBackColor = true;
			this->addStockExitButton->Click += gcnew System::EventHandler(this, &MyForm::addStockExitButton_Click);
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
			this->stockMPanel->Location = System::Drawing::Point(453, 594);
			this->stockMPanel->Name = L"stockMPanel";
			this->stockMPanel->Size = System::Drawing::Size(400, 415);
			this->stockMPanel->TabIndex = 9;
			// 
			// stockMLabel
			// 
			this->stockMLabel->AutoSize = true;
			this->stockMLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stockMLabel->Location = System::Drawing::Point(87, 3);
			this->stockMLabel->Name = L"stockMLabel";
			this->stockMLabel->Size = System::Drawing::Size(250, 38);
			this->stockMLabel->TabIndex = 15;
			this->stockMLabel->Text = L"Stock Manager";
			// 
			// stockMFilterButton
			// 
			this->stockMFilterButton->Location = System::Drawing::Point(3, 378);
			this->stockMFilterButton->Name = L"stockMFilterButton";
			this->stockMFilterButton->Size = System::Drawing::Size(76, 34);
			this->stockMFilterButton->TabIndex = 9;
			this->stockMFilterButton->Text = L"Filter";
			this->stockMFilterButton->UseVisualStyleBackColor = true;
			// 
			// stockMAddButton
			// 
			this->stockMAddButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->stockMAddButton->Location = System::Drawing::Point(321, 378);
			this->stockMAddButton->Name = L"stockMAddButton";
			this->stockMAddButton->Size = System::Drawing::Size(76, 34);
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
			this->stockMDGV->Location = System::Drawing::Point(3, 45);
			this->stockMDGV->Name = L"stockMDGV";
			this->stockMDGV->RowHeadersWidth = 51;
			this->stockMDGV->RowTemplate->Height = 24;
			this->stockMDGV->Size = System::Drawing::Size(394, 327);
			this->stockMDGV->TabIndex = 0;
			// 
			// informationStockModifyButton
			// 
			this->informationStockModifyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->informationStockModifyButton->Location = System::Drawing::Point(246, 375);
			this->informationStockModifyButton->Name = L"informationStockModifyButton";
			this->informationStockModifyButton->Size = System::Drawing::Size(76, 34);
			this->informationStockModifyButton->TabIndex = 6;
			this->informationStockModifyButton->Text = L"Modify";
			this->informationStockModifyButton->UseVisualStyleBackColor = true;
			// 
			// informationStockDeleteButton
			// 
			this->informationStockDeleteButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->informationStockDeleteButton->Location = System::Drawing::Point(328, 375);
			this->informationStockDeleteButton->Name = L"informationStockDeleteButton";
			this->informationStockDeleteButton->Size = System::Drawing::Size(76, 34);
			this->informationStockDeleteButton->TabIndex = 1;
			this->informationStockDeleteButton->Text = L"Delete";
			this->informationStockDeleteButton->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1109, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"label1";
			// 
			// testButton
			// 
			this->testButton->Location = System::Drawing::Point(1084, 88);
			this->testButton->Name = L"testButton";
			this->testButton->Size = System::Drawing::Size(139, 24);
			this->testButton->TabIndex = 13;
			this->testButton->Text = L"TestButton";
			this->testButton->UseVisualStyleBackColor = true;
			this->testButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// informationStockPanel
			// 
			this->informationStockPanel->Controls->Add(this->label2);
			this->informationStockPanel->Controls->Add(this->informationStockModifyButton);
			this->informationStockPanel->Controls->Add(this->informationStockDeleteButton);
			this->informationStockPanel->Location = System::Drawing::Point(885, 594);
			this->informationStockPanel->Name = L"informationStockPanel";
			this->informationStockPanel->Size = System::Drawing::Size(407, 412);
			this->informationStockPanel->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Name";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(3, 233);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(407, 22);
			this->textBox2->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(3, 278);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(407, 22);
			this->textBox3->TabIndex = 16;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(3, 323);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(407, 22);
			this->textBox4->TabIndex = 17;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->Location = System::Drawing::Point(3, 368);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(407, 22);
			this->textBox5->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1920, 1055);
			this->Controls->Add(this->addStockPanel);
			this->Controls->Add(this->stockMPanel);
			this->Controls->Add(this->informationStockPanel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->testButton);
			this->Controls->Add(this->registerPanel);
			this->Controls->Add(this->managerTablePanel);
			this->Controls->Add(this->loginPanel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->loginPanel->ResumeLayout(false);
			this->loginPanel->PerformLayout();
			this->registerPanel->ResumeLayout(false);
			this->registerPanel->PerformLayout();
			this->clientMPanel->ResumeLayout(false);
			this->clientMPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientMDGV))->EndInit();
			this->managerTablePanel->ResumeLayout(false);
			this->managerTabControl->ResumeLayout(false);
			this->clientMTabPage->ResumeLayout(false);
			this->orderMTabPage->ResumeLayout(false);
			this->orderMPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderMDGV))->EndInit();
			this->addOrderPanel->ResumeLayout(false);
			this->addOrderPanel->PerformLayout();
			this->statisticMTabPage->ResumeLayout(false);
			this->addStockPanel->ResumeLayout(false);
			this->addStockPanel->PerformLayout();
			this->stockMPanel->ResumeLayout(false);
			this->stockMPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stockMDGV))->EndInit();
			this->informationStockPanel->ResumeLayout(false);
			this->informationStockPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		clientMPanel->Visible = true;
		registerPanel->Visible = false;
		loginPanel->Visible = true;
		orderMPanel->Visible = true;
		addOrderPanel->Visible = false;
		addStockPanel->Visible = false;
		stockMPanel->Visible = true;
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


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		/*Personnel^ test = gcnew Personnel(1);
		String^ test2 = test->get_account()->get_account_name();


		AccountManager^ mn = gcnew AccountManager();
		mn->insert("Le BG du 99", "mdp", "Dider", "Raoul", "2019-10-02", 1);


		test->set_is_manager(1);
		Account^ test3 = gcnew Account(1);
		test3->set_firstname_account("C mwa");
		mn->update(test3);
		mn->AccountManager::deleteElement(test3);
		this->label1->Text = test2;*/
	}
private: System::Void addStockNameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void addStockPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}